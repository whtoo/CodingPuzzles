#include "LRU/LRU.cpp"
#include "LFU/LFU.cpp"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    LRUCache lru =  LRUCache(2);
    LFUCache lfu =  LFUCache(2);

    lfu.set(1, 1);
    lfu.set(2, 2);
    assert(lfu.get(1) == 1);       // 返回 1
    lfu.set(3, 3);    // 去除 key 2
    assert(lfu.get(2) == -1);       // 返回 -1 (未找到key 2)
    assert(lfu.get(3) == 3);       // 返回 3
    lfu.set(4, 4);    // 去除 key 1
    assert(lfu.get(1) == -1);       // 返回 -1 (未找到 key 1)
    assert(lfu.get(3) == 3);       // 返回 3
    assert(lfu.get(4) == 4);       // 返回 4]
    cout << "LRU pass all tests." << endl;

    lru.set(1, 1);
    lru.set(2, 2);
    assert(lru.get(1) == 1);       // 返回 1
    lru.set(3, 3);    // 去除 key 2
    assert(lru.get(2) == -1);       // 返回 -1 (未找到key 2)
    assert(lru.get(3) == 3);       // 返回 3
    lru.set(4, 4);    // 去除 key 1
    assert(lru.get(1) == -1);       // 返回 -1 (未找到 key 1)
    assert(lru.get(3) == 3);       // 返回 3
    assert(lru.get(4) == 4);       // 返回 4]
    
    cout << "LFU pass all tests." << endl;
    return 0;
}