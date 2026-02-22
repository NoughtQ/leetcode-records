// link: https://leetcode.cn/problems/find-median-from-data-stream

class MedianFinder {
public:
    // Method 1: Priority Queue
    // Time Complexity:
    //  addNum: O(log n)
    //  findMedian: O(1)
    // Space Complexity: O(n)
    priority_queue<int> min_heap;
    priority_queue<int, vector<int>, greater<int>> max_heap;

    MedianFinder() {}
    
    void addNum(int num) {
        if (min_heap.empty() || num <= min_heap.top()) {
            min_heap.push(num);
            if (max_heap.size() + 1 < min_heap.size()) {
                max_heap.push(min_heap.top());
                min_heap.pop();
            }
        } else {
            max_heap.push(num);
            if (max_heap.size() > min_heap.size()) {
                min_heap.push(max_heap.top());
                max_heap.pop();
            }
        }
    }
    
    double findMedian() {
        if ((min_heap.size() + max_heap.size()) % 2 == 1) {
            return min_heap.top();
        } else {
            return (min_heap.top() + max_heap.top()) / 2.0;
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */