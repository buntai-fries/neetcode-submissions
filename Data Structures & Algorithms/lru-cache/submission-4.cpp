class LRUCache {
   public:
    LRUCache(int capacity) : cap(capacity) {}

    int get(int key) {
        auto i = cache.find(key);
        if (i == cache.end()) {
            return -1;
        }
        dll.splice(dll.begin(), dll, i->second);
        return i->second->second;
    }

    void put(int key, int value) {
        auto i = cache.find(key);
        if (i != cache.end()) {
            i->second->second = value;
            dll.splice(dll.begin(), dll, i->second);
            return;
        }
        if (cap == cache.size()) {
            int lruKey = dll.back().first;
            dll.pop_back();
            cache.erase(lruKey);
        }
        dll.emplace_front(key, value);
        cache[key] = dll.begin();
    }

   private:
    int cap = 0;
    std::unordered_map<int, std::list<std::pair<int, int>>::iterator> cache;
    std::list<std::pair<int, int>> dll;
};
