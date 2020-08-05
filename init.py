import os
import subprocess
import time

def excuteCommand(com):
    ex = subprocess.Popen(com, stdout=subprocess.PIPE, shell=True)
    out, err  = ex.communicate()
    status = ex.wait()
    print("cmd in:", com)
    print("cmd out: ", out.decode('utf-8'))
    return out.decode('utf-8')

path = "."
for root,dirs, files in os.walk(path):
    for name in files:
        if ".git" in root:
            continue
        if "CMakeLists" in name:
            buildDir = os.path.join(root,"build")
            if not os.path.exists(buildDir):
                # mask is oct
                os.mkdir(buildDir,0o755)
