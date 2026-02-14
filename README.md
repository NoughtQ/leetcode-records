# LeetCode 热题 100 刷题记录

题集链接：<https://leetcode.cn/studyplan/top-100-liked/>

## 动机

其实在 25 年上半年，我用 Python 写过一点 Hot 100 的简单和中等题。但当时也只是囫囵吞枣般地过了一遍，再加上 Python 本身过于友好的语法，因此实际上我并没有从这次刷题中学到点什么。不出所料地，到了下半年再看这些题目的时候，我完全没了印象。眼看 26 年暑期实习近在咫尺，所以这一次我至少必须把每一道题认真过一遍，让脑子转起来，正所谓“流水不腐，户枢不蠹”，以应对不久后的算法面试题。

这次我特地开了个仓库，一来是为了督促自己，有一个进度表列在这里；二来是为确保彻底搞懂每道题，把做题思路记录下来（不仅是代码，还附上一些必要的注释和参考资料），也便于将来复习。

预计在 2026 年 3 月初将所有题大致刷一遍（使用 C++）。

题目难度徽章：![](https://img.shields.io/badge/简单-brightgreen) ![](https://img.shields.io/badge/中等-yellow) ![](https://img.shields.io/badge/困难-red)

每天的做题速度（三选一）：

- 4 道简单题（已结束）
- 3 道中等题
- 1 道中等题 + 1 道困难题


## 进度（65/100）

### 哈希

- [x] ![](https://img.shields.io/badge/简单-brightgreen) [两数之和](hash/two-sum.cpp)（25.12.23）
- [x] ![](https://img.shields.io/badge/中等-yellow) [字母异位词分组](hash/group-anagrams.cpp)（26.01.23）
- [x] ![](https://img.shields.io/badge/中等-yellow) [最长连续序列](hash/longest-consecutive-sequence.cpp)（26.01.23）（看题解后才做出来的）

### 双指针

- [x] ![](https://img.shields.io/badge/简单-brightgreen) [移动零](double-pointers/move-zeroes.cpp)（26.01.02）
- [x] ![](https://img.shields.io/badge/中等-yellow) [盛最多的水](double-pointers/container-with-most-water.cpp)（26.01.23）
- [x] ![](https://img.shields.io/badge/中等-yellow) [三数之和](double-pointers/3sum.cpp)（26.01.24）（看题解后才做出来的）
- [x] ![](https://img.shields.io/badge/困难-red) [接雨水](double-pointers/trapping-rain-water.cpp)（26.01.24）（看题解后才做出来的）

### 滑动窗口

- [x] ![](https://img.shields.io/badge/中等-yellow) [无重复的最长子串](sliding-window/longest-substring-without-repeating-characters.cpp)（26.01.25）（看题解后才做出来的）
- [x] ![](https://img.shields.io/badge/中等-yellow) [找到字符串中所有字母异位词](sliding-window/find-all-anagrams-in-a-string.cpp)（26.01.25）

### 子串

- [x] ![](https://img.shields.io/badge/中等-yellow) [和为 K 的子数组](substring/subarray-sum-equals-k.cpp)（26.01.25）（看题解后才做出来的）
- [x] ![](https://img.shields.io/badge/困难-red) [滑动窗口最大值](substring/sliding-window-maximum.cpp)（26.01.27）
- [x] ![](https://img.shields.io/badge/困难-red) [最小覆盖子串](substring/sliding-window-maximum.cpp)（26.01.28）

### 普通数组

- [x] ![](https://img.shields.io/badge/中等-yellow) [最大子数组和](plain-array/maximum-subarray.cpp)（26.01.27）
- [x] ![](https://img.shields.io/badge/中等-yellow) [合并区间](plain-array/merge-intervals.cpp)（26.01.28）
- [x] ![](https://img.shields.io/badge/中等-yellow) [轮转数组](plain-array/rotate-array.cpp)（26.01.29）
- [x] ![](https://img.shields.io/badge/中等-yellow) [除自身以外数组的乘积](plain-array/product-of-array-except-self.cpp)（26.01.29）
- [x] ![](https://img.shields.io/badge/困难-red) [缺失的第一个正数](plain-array/first-missing-positive.cpp)（26.01.30）（看题解后才做出来的）

### 矩阵

- [x] ![](https://img.shields.io/badge/中等-yellow) [矩阵置零](matrix/set-matrix-zeroes.cpp)（26.01.29）
- [x] ![](https://img.shields.io/badge/中等-yellow) [螺旋矩阵](matrix/spiral-matrix.cpp)（26.01.30）
- [x] ![](https://img.shields.io/badge/中等-yellow) [旋转图像](matrix/rotate-image.cpp)（26.01.31）
- [x] ![](https://img.shields.io/badge/中等-yellow) [搜索二维矩阵 II](matrix/search-a-2d-matrix-ii.cpp)（26.01.31）

### 链表

- [x] ![](https://img.shields.io/badge/简单-brightgreen) [相交链表](linked-list/intersection-of-two-linked-lists.cpp)（26.01.03）
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [反转链表](linked-list/reverse-linked-list.cpp)（26.01.17）
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [回文链表](linked-list/palindrome-linked-list.cpp)（26.01.17）
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [环形链表](linked-list/linked-list-cycle.cpp)（26.01.17）
- [x] ![](https://img.shields.io/badge/中等-yellow) [环形链表 II](linked-list/linked-list-cycle-ii.cpp)（26.01.31）
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [合并两个有序链表](linked-list/merge-two-sorted-lists.cpp)（26.01.17）
- [x] ![](https://img.shields.io/badge/中等-yellow) [两数相加](linked-list/add-two-numbers.cpp)（26.02.01）
- [x] ![](https://img.shields.io/badge/中等-yellow) [删除链表的倒数第 N 个节点](linked-list/remove-nth-node-from-end-of-list.cpp)（26.02.01）
- [x] ![](https://img.shields.io/badge/中等-yellow) [两两交换链表中的节点](linked-list/swap-nodes-in-pairs.cpp)（26.02.01）
- [x] ![](https://img.shields.io/badge/困难-red) [K 个一组翻转链表](linked-list/reverse-nodes-in-k-group.cpp)（26.02.02）
- [x] ![](https://img.shields.io/badge/中等-yellow) [随机链表的复制](linked-list/copy-list-with-random-pointer.cpp)（26.02.02）
- [x] ![](https://img.shields.io/badge/中等-yellow) [排序链表](linked-list/sort-list.cpp)（26.02.03）（看题解后才做出来的）
- [x] ![](https://img.shields.io/badge/困难-red) [合成 K 个升序列表](linked-list/merge-k-sorted-lists.cpp)（26.02.03）
- [x] ![](https://img.shields.io/badge/中等-yellow) [LRU 缓存](linked-list/lru-cache.cpp)（26.02.07）（看题解后才做出来的）

### 二叉树

- [x] ![](https://img.shields.io/badge/简单-brightgreen) [二叉树的中序遍历](binary-tree/binary-tree-inorder-traversal.cpp)（26.01.19）
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [二叉树的最大深度](binary-tree/maximum-depth-of-binary-tree.cpp)（26.01.20）
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [翻转二叉树](binary-tree/invert-binary-tree.cpp)（26.01.20）
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [对称二叉树](binary-tree/symmetric-tree.cpp)（26.01.20）（但没能完全独立做出来）
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [二叉树的直径](binary-tree/diameter-of-binary-tree.cpp)（26.01.20）
- [x] ![](https://img.shields.io/badge/中等-yellow) [二叉树的层序遍历](binary-tree/binary-tree-level-order-traversal.cpp)（26.02.07）
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [将有序数组转换为二叉搜索树](binary-tree/convert-sorted-array-to-binary-search-tree.cpp)（26.01.21）
- [x] ![](https://img.shields.io/badge/中等-yellow) [验证二叉搜索树](binary-tree/validate-binary-search-tree.cpp)（26.02.07）
- [x] ![](https://img.shields.io/badge/中等-yellow) [二叉搜索树中第 K 小的元素](binary-tree/kth-smallest-element-in-a-bst.cpp)（26.02.08）
- [x] ![](https://img.shields.io/badge/中等-yellow) [二叉树的右视图](binary-tree/binary-tree-right-side-view.cpp)（26.02.08）
- [x] ![](https://img.shields.io/badge/中等-yellow) [二叉树展开为链表](binary-tree/flatten-binary-tree-to-linked-list.cpp)（26.02.08）
- [x] ![](https://img.shields.io/badge/中等-yellow) [从前序与中序遍历序列构造二叉树](binary-tree/construct-binary-tree-from-preorder-and-inorder-traversal.cpp)（26.02.09）
- [x] ![](https://img.shields.io/badge/中等-yellow) [路径总和 III](binary-tree/path-sum-iii.cpp)（26.02.09）
- [x] ![](https://img.shields.io/badge/中等-yellow) [二叉树的最近公共祖先](binary-tree/lowest-common-ancestor-of-a-binary-tree.cpp)（26.02.09）
- [x] ![](https://img.shields.io/badge/困难-red) [二叉树中的最大路径和](binary-tree/binary-tree-maximum-path-sum.cpp)（26.02.10）（看题解后做出来的）

### 图论

- [x] ![](https://img.shields.io/badge/中等-yellow) [岛屿数量](graph/number-of-islands.cpp)（26.02.10）
- [x] ![](https://img.shields.io/badge/中等-yellow) [腐烂的橘子](graph/rotting-oranges.cpp)（26.02.11）（看题解后做出来的）
- [x] ![](https://img.shields.io/badge/中等-yellow) [课程表](graph/course-schedule.cpp)（26.02.11）（看题解后做出来的）
- [x] ![](https://img.shields.io/badge/中等-yellow) [实现 Trie（前缀树）](graph/implement-trie-prefix-tree.cpp)（26.02.11）

### 回溯

- [x] ![](https://img.shields.io/badge/中等-yellow) [全排列](backtracking/permutations.cpp)（26.02.12）
- [x] ![](https://img.shields.io/badge/中等-yellow) [子集](backtracking/subsets.cpp)（26.02.12）
- [x] ![](https://img.shields.io/badge/中等-yellow) [电话号码的字母组合](backtracking/letter-combinations-of-a-phone-number.cpp)（26.02.12）
- [x] ![](https://img.shields.io/badge/中等-yellow) [组合总和](backtracking/combination-sum.cpp)（26.02.14）
- [ ] ![](https://img.shields.io/badge/中等-yellow) [括号生成]()
- [ ] ![](https://img.shields.io/badge/中等-yellow) [单词搜索]()
- [ ] ![](https://img.shields.io/badge/中等-yellow) [分割回文串]()
- [ ] ![](https://img.shields.io/badge/中等-yellow) [N 皇后]()

### 二分查找

- [x] ![](https://img.shields.io/badge/简单-brightgreen) [搜索插入位置](binary-search/search-insert-position.cpp)（26.01.21）
- [ ] ![](https://img.shields.io/badge/中等-yellow) [搜索二维矩阵]()
- [ ] ![](https://img.shields.io/badge/中等-yellow) [在排序数组中查找元素的第一个和最后一个位置]()
- [ ] ![](https://img.shields.io/badge/中等-yellow) [搜索旋转排序数组]()
- [ ] ![](https://img.shields.io/badge/中等-yellow) [寻找旋转排序数组中的最小值]()
- [ ] ![](https://img.shields.io/badge/困难-red) [寻找两个正序数组的中位数]()

### 栈

- [x] ![](https://img.shields.io/badge/简单-brightgreen) [有效的括号](stack/valid-parentheses.cpp)（26.01.21）
- [ ] ![](https://img.shields.io/badge/中等-yellow) [最小栈]()
- [ ] ![](https://img.shields.io/badge/中等-yellow) [字符串解码]()
- [ ] ![](https://img.shields.io/badge/中等-yellow) [每日温度]()
- [ ] ![](https://img.shields.io/badge/困难-red) [柱状图中最大的矩形]()

### 堆

- [ ] ![](https://img.shields.io/badge/中等-yellow) [数组中的第 K 个最大元素]()
- [ ] ![](https://img.shields.io/badge/中等-yellow) [前 K 个高频元素]()
- [ ] ![](https://img.shields.io/badge/困难-red) [数据流的中位数]()

### 贪心算法

- [x] ![](https://img.shields.io/badge/简单-brightgreen) [买卖股票的最佳时机](greedy-algorithm/best-time-to-buy-and-sell-stock.cpp)（26.01.21）
- [ ] ![](https://img.shields.io/badge/中等-yellow) [跳跃游戏]()
- [ ] ![](https://img.shields.io/badge/中等-yellow) [跳跃游戏 II]()
- [ ] ![](https://img.shields.io/badge/中等-yellow) [划分字母区间]()

### 动态规划

- [x] ![](https://img.shields.io/badge/简单-brightgreen) [爬楼梯](dynamic-programming/climbing-stairs.cpp)（26.01.22）
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [杨辉三角](dynamic-programming/pascals-triangle.cpp)（26.01.22）
- [ ] ![](https://img.shields.io/badge/中等-yellow) [打家劫舍]()
- [ ] ![](https://img.shields.io/badge/中等-yellow) [完全平方数]()
- [ ] ![](https://img.shields.io/badge/中等-yellow) [零钱兑换]()
- [ ] ![](https://img.shields.io/badge/中等-yellow) [单词拆分]()
- [ ] ![](https://img.shields.io/badge/中等-yellow) [最长递增子序列]()
- [ ] ![](https://img.shields.io/badge/中等-yellow) [乘积最大子数组]()
- [ ] ![](https://img.shields.io/badge/中等-yellow) [分割等和子集]()
- [ ] ![](https://img.shields.io/badge/困难-red) [最长有效括号]()

### 多维动态规划

- [ ] ![](https://img.shields.io/badge/中等-yellow) [不同路径]()
- [ ] ![](https://img.shields.io/badge/中等-yellow) [最小路径和]()
- [ ] ![](https://img.shields.io/badge/中等-yellow) [最长回文子串]()
- [ ] ![](https://img.shields.io/badge/中等-yellow) [最长公共子序列]()
- [ ] ![](https://img.shields.io/badge/中等-yellow) [编辑距离]()

### 技巧

- [x] ![](https://img.shields.io/badge/简单-brightgreen) [只出现一次的数字](trick/single-number.cpp)（26.01.22）（看提示才做出来的）
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [多数元素](trick/majority-element.cpp)（26.01.22）（看题解才知道空间复杂度 O(1) 的做法）
- [ ] ![](https://img.shields.io/badge/中等-yellow) [颜色分类]()
- [ ] ![](https://img.shields.io/badge/中等-yellow) [下一个排列]()
- [ ] ![](https://img.shields.io/badge/中等-yellow) [寻找重复数]()

## 参考资料

- [cppreference](https://cppreference.com/)：最权威的参考资料！