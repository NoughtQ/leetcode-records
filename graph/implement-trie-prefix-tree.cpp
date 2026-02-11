// link: https://leetcode.cn/problems/implement-trie-prefix-tree

class Trie {
// Method 1: Hash Table (~~irrelavant to graph~~)
public:
    unordered_set<string> ht;

    Trie() {
        ht.clear();
    }
    
    void insert(string word) {
        ht.insert(word);
    }
    
    bool search(string word) {
        return ht.contains(word);
    }
    
    bool startsWith(string prefix) {
        for (auto it = ht.begin(); it != ht.end(); ++it)
            if (it->starts_with(prefix)) return true;
        return false;
    }

// Method 2: The True Tries
// Solution Link: https://leetcode.cn/problems/implement-trie-prefix-tree/solutions/98390/trie-tree-de-shi-xian-gua-he-chu-xue-zhe-by-huwt/?envType=study-plan-v2&envId=top-100-liked
private:
    bool is_end;
    Trie* next[26];
public:
    Trie() {
        is_end = false;
        memset(next, 0, sizeof(next));
    }
    
    void insert(string word) {
        Trie *node = this;
        for (char c : word) {
            if (!node->next[c - 'a']) {
                node->next[c - 'a'] = new Trie();
            }
            node = node->next[c - 'a'];
        }
        node->is_end = true;
    }
    
    bool search(string word) {
        Trie *node = this;
        for (char c : word) {
            if (!node->next[c - 'a']) {
                return false;
            }
            node = node->next[c - 'a'];
        }
        return node->is_end;        
    }
    
    bool startsWith(string prefix) {
        Trie *node = this;
        for (char c : prefix) {
            if (!node->next[c - 'a']) {
                return false;
            }
            node = node->next[c - 'a'];
        }
        return true; 
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */