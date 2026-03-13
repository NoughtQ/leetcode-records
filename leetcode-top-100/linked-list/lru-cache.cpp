// link: https://leetcode.cn/problems/lru-cache

// Method 1: Use STL library (usually not allowed in interviews)
// Because the time complexity of get() is O(n), this method failed to pass all tests
class LRUCache {
public:    
    unordered_map<int, int> table;
    list<int> clock;
    int capacity;

    LRUCache(int capacity): table(capacity), clock(capacity), capacity(capacity) {
        clock.clear();
    }
    
    int get(int key) {
        if (table.contains(key)) {
            clock.remove(key);
            clock.push_front(key);
            return table[key];   
        } else {
            return -1;
        }
    }
    
    void put(int key, int value) {
        if (table.contains(key)) {
            clock.remove(key);
        } else if (table.size() == capacity) {
            table.erase(clock.back());
            clock.pop_back();
        }
        table[key] = value;
        clock.push_front(key);
    }

    void log() {
        cout << "table: \n";
        for (auto it = table.begin(); it != table.end(); ++it)
            cout << it->first << endl;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

// Method 2: construct double-linked list by self
// Still use unordered_map as hash table, but values of unordered_map are nodes of the linked list
struct DlinkList {
    int key, value;
    DlinkList *prev, *next;
    DlinkList(): key(0), value(0), prev(nullptr), next(nullptr) {}
    DlinkList(int k, int v): key(k), value(v), prev(nullptr), next(nullptr) {}
};

class LRUCache {
public:
    unordered_map<int, DlinkList*> table;
    DlinkList *head, *tail;
    int capacity;

    LRUCache(int capacity): table(capacity), capacity(capacity) {
        head = new DlinkList();
        tail = new DlinkList();
        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) {
        if (table.contains(key)) {
            moveToHead(table[key]);
            return table[key]->value;
        } else {
            return -1;
        }
    }
    
    void put(int key, int value) {
        if (table.contains(key)) {
            removeNode(table[key]);
        } else if (table.size() == capacity) {
            DlinkList *node = removeTail();
            table.erase(node->key);
        }
        table[key] = new DlinkList(key, value);
        addToHead(table[key]);
    }

    void addToHead(DlinkList *node) {
        node->next = head->next;
        node->prev = head;
        head->next->prev = node;
        head->next = node;
    }

    void removeNode(DlinkList *node) {
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }

    void moveToHead(DlinkList *node) {
        removeNode(node);
        addToHead(node);
    }

    DlinkList* removeTail() {
        DlinkList *node = tail->prev;
        removeNode(node);
        return node;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */