#include <iostream>
#include "Trie.cpp"

using namespace std;

int main() {
    Trie trie = Trie();
    trie.insert("apple");
    assert(trie.search("apple"));   // 返回 true
    assert(trie.search("app") == false);     // 返回 false
    assert(trie.startsWith("app")); // 返回 true
    trie.insert("app");   
    assert(trie.search("app"));     // 返回 true
    cout << "All trie tests passed." << endl;
    return 0;
}