// link: https://leetcode.cn/problems/course-schedule

class Solution {
public:
    // Method: Topological Sorting (BFS)
    // Time Complexity: O(V + E)
    // Space Complexity: O(V + E)
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> inDegree(numCourses, 0);
        vector<unordered_set<int>> map(numCourses);
        queue<int> q;
        int cnt = 0, x;

        for (auto p : prerequisites) {
            ++inDegree[p[1]];
            map[p[0]].insert(p[1]);
        }

        for (int i = 0; i < numCourses; ++i) {
            if (!inDegree[i]) q.push(i);
        }

        while (!q.empty()) {
            x = q.front();
            q.pop();
            ++cnt;
            for (auto next : map[x]) {
                --inDegree[next];
                if (!inDegree[next]) q.push(next);
            }
        }

        return cnt == numCourses;
    }
};