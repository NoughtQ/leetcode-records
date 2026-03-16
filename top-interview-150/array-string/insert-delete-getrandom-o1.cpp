// link: https://leetcode.cn/problems/insert-delete-getrandom-o1

// Official Solution
// Time Complexity: O(1)
// Space Complexity: O(n)
class RandomizedSet {
private:
    vector<int> nums;
    unordered_map<int, int> ht;

public:
    RandomizedSet() {
        srand(time(nullptr));
        nums.clear();
        ht.clear();
    }
    
    bool insert(int val) {
        if (ht.contains(val)) return false;
        nums.emplace_back(val);
        ht[val] = nums.size() - 1;
        return true;
    }
    
    bool remove(int val) {
        if (!ht.contains(val)) return false;
        int last = nums.back(), idx = ht[val];
        ht[last] = idx;
        nums[idx] = last;
        nums.pop_back();
        ht.erase(val);
        return true;
    }
    
    int getRandom() {
        return nums[rand() % nums.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */