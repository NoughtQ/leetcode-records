# LeetCode 刷题记录

题集链接：

- LeetCode 热题 100：<https://leetcode.cn/studyplan/top-100-liked/>
- 面试经典 150 题：<https://leetcode.cn/studyplan/top-interview-150/>

## 动机

其实在 25 年上半年，我用 Python 写过一点 Hot 100 的简单和中等题。但当时也只是囫囵吞枣般地过了一遍，再加上 Python 本身过于友好的语法，因此实际上我并没有从这次刷题中学到点什么。不出所料地，到了下半年再看这些题目的时候，我完全没了印象。眼看 26 年暑期实习近在咫尺，所以这一次我至少必须把每一道题认真过一遍，让脑子转起来，正所谓“流水不腐，户枢不蠹”，以应对不久后的算法面试题。

这次我特地开了个仓库，一来是为了督促自己，有一个进度表列在这里；二来是为确保彻底搞懂每道题，把做题思路记录下来（不仅是代码，还附上一些必要的注释和参考资料），也便于将来复习。

【已完成】预计在 2026 年 3 月初能够所有题大致刷一遍（使用 C++）。

题目难度徽章：![](https://img.shields.io/badge/简单-brightgreen) ![](https://img.shields.io/badge/中等-yellow) ![](https://img.shields.io/badge/困难-red)

每天的做题速度（三选一）：

- 4 道简单题（已结束）
- 3 道中等题
- 1 道中等题 + 1 道困难题

---
【3.1 更新】100 题成功刷了一遍了，先庆祝一下🥳。但毫不意外的是，之前遇到的一些难题怎么解已经忘得又差不多了hh。在开启正式的二轮刷题前，我想**先简单回顾这些题，看看自己是否能够立马想到正确的解法**。

- 如果能很快想到，就看看题解是否和自己的想法一致，无需动手敲出来
- 如果遇到实在想不出来的题目，我会在这份 README 中标记出来，简单写一下解题思路，实在无法理解的话也得背出来💪

目前的设想是每天看 10 道题，预计 3.11 结束（这之后应该准备面大厂了）。

---
【3.13 更新】100 题复习过一遍了，但成功在某次一面中没能完全做出一道算法题（尽管这道题不难），说明我脑子转得还是不够快，菜就多练。于是我打算开「面试经典 150 题」这个新坑，先把没见过的题给做一遍，然后再刷一遍在热题 100 出现过的那些题。


## LeetCode-Top-100

<details>

<summary>点击展开/折叠内容</summary>

### 第一轮刷题进度（100/100）

<details>

<summary>点击展开/折叠内容</summary>

#### 哈希

- [x] ![](https://img.shields.io/badge/简单-brightgreen) [两数之和](leetcode-top-100/hash/two-sum.cpp)（25.12.23）
- [x] ![](https://img.shields.io/badge/中等-yellow) [字母异位词分组](leetcode-top-100/hash/group-anagrams.cpp)（26.01.23）
- [x] ![](https://img.shields.io/badge/中等-yellow) [最长连续序列](leetcode-top-100/hash/longest-consecutive-sequence.cpp)（26.01.23）（看题解后才做出来的）

#### 双指针

- [x] ![](https://img.shields.io/badge/简单-brightgreen) [移动零](leetcode-top-100/double-pointers/move-zeroes.cpp)（26.01.02）
- [x] ![](https://img.shields.io/badge/中等-yellow) [盛最多的水](leetcode-top-100/double-pointers/container-with-most-water.cpp)（26.01.23）
- [x] ![](https://img.shields.io/badge/中等-yellow) [三数之和](leetcode-top-100/double-pointers/3sum.cpp)（26.01.24）（看题解后才做出来的）
- [x] ![](https://img.shields.io/badge/困难-red) [接雨水](leetcode-top-100/double-pointers/trapping-rain-water.cpp)（26.01.24）（看题解后才做出来的）

#### 滑动窗口

- [x] ![](https://img.shields.io/badge/中等-yellow) [无重复的最长子串](leetcode-top-100/sliding-window/longest-substring-without-repeating-characters.cpp)（26.01.25）（看题解后才做出来的）
- [x] ![](https://img.shields.io/badge/中等-yellow) [找到字符串中所有字母异位词](leetcode-top-100/sliding-window/find-all-anagrams-in-a-string.cpp)（26.01.25）

#### 子串

- [x] ![](https://img.shields.io/badge/中等-yellow) [和为 K 的子数组](leetcode-top-100/substring/subarray-sum-equals-k.cpp)（26.01.25）（看题解后才做出来的）
- [x] ![](https://img.shields.io/badge/困难-red) [滑动窗口最大值](leetcode-top-100/substring/sliding-window-maximum.cpp)（26.01.27）
- [x] ![](https://img.shields.io/badge/困难-red) [最小覆盖子串](leetcode-top-100/substring/sliding-window-maximum.cpp)（26.01.28）

#### 普通数组

- [x] ![](https://img.shields.io/badge/中等-yellow) [最大子数组和](leetcode-top-100/plain-array/maximum-subarray.cpp)（26.01.27）
- [x] ![](https://img.shields.io/badge/中等-yellow) [合并区间](leetcode-top-100/plain-array/merge-intervals.cpp)（26.01.28）
- [x] ![](https://img.shields.io/badge/中等-yellow) [轮转数组](leetcode-top-100/plain-array/rotate-array.cpp)（26.01.29）
- [x] ![](https://img.shields.io/badge/中等-yellow) [除自身以外数组的乘积](leetcode-top-100/plain-array/product-of-array-except-self.cpp)（26.01.29）
- [x] ![](https://img.shields.io/badge/困难-red) [缺失的第一个正数](leetcode-top-100/plain-array/first-missing-positive.cpp)（26.01.30）（看题解后才做出来的）

#### 矩阵

- [x] ![](https://img.shields.io/badge/中等-yellow) [矩阵置零](leetcode-top-100/matrix/set-matrix-zeroes.cpp)（26.01.29）
- [x] ![](https://img.shields.io/badge/中等-yellow) [螺旋矩阵](leetcode-top-100/matrix/spiral-matrix.cpp)（26.01.30）
- [x] ![](https://img.shields.io/badge/中等-yellow) [旋转图像](leetcode-top-100/matrix/rotate-image.cpp)（26.01.31）
- [x] ![](https://img.shields.io/badge/中等-yellow) [搜索二维矩阵 II](leetcode-top-100/matrix/search-a-2d-matrix-ii.cpp)（26.01.31）

#### 链表

- [x] ![](https://img.shields.io/badge/简单-brightgreen) [相交链表](leetcode-top-100/linked-list/intersection-of-two-linked-lists.cpp)（26.01.03）
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [反转链表](leetcode-top-100/linked-list/reverse-linked-list.cpp)（26.01.17）
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [回文链表](leetcode-top-100/linked-list/palindrome-linked-list.cpp)（26.01.17）
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [环形链表](leetcode-top-100/linked-list/linked-list-cycle.cpp)（26.01.17）
- [x] ![](https://img.shields.io/badge/中等-yellow) [环形链表 II](leetcode-top-100/linked-list/linked-list-cycle-ii.cpp)（26.01.31）
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [合并两个有序链表](leetcode-top-100/linked-list/merge-two-sorted-lists.cpp)（26.01.17）
- [x] ![](https://img.shields.io/badge/中等-yellow) [两数相加](leetcode-top-100/linked-list/add-two-numbers.cpp)（26.02.01）
- [x] ![](https://img.shields.io/badge/中等-yellow) [删除链表的倒数第 N 个节点](leetcode-top-100/linked-list/remove-nth-node-from-end-of-list.cpp)（26.02.01）
- [x] ![](https://img.shields.io/badge/中等-yellow) [两两交换链表中的节点](leetcode-top-100/linked-list/swap-nodes-in-pairs.cpp)（26.02.01）
- [x] ![](https://img.shields.io/badge/困难-red) [K 个一组翻转链表](leetcode-top-100/linked-list/reverse-nodes-in-k-group.cpp)（26.02.02）
- [x] ![](https://img.shields.io/badge/中等-yellow) [随机链表的复制](leetcode-top-100/linked-list/copy-list-with-random-pointer.cpp)（26.02.02）
- [x] ![](https://img.shields.io/badge/中等-yellow) [排序链表](leetcode-top-100/linked-list/sort-list.cpp)（26.02.03）（看题解后才做出来的）
- [x] ![](https://img.shields.io/badge/困难-red) [合成 K 个升序列表](leetcode-top-100/linked-list/merge-k-sorted-lists.cpp)（26.02.03）
- [x] ![](https://img.shields.io/badge/中等-yellow) [LRU 缓存](leetcode-top-100/linked-list/lru-cache.cpp)（26.02.07）（看题解后才做出来的）

#### 二叉树

- [x] ![](https://img.shields.io/badge/简单-brightgreen) [二叉树的中序遍历](leetcode-top-100/binary-tree/binary-tree-inorder-traversal.cpp)（26.01.19）
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [二叉树的最大深度](leetcode-top-100/binary-tree/maximum-depth-of-binary-tree.cpp)（26.01.20）
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [翻转二叉树](leetcode-top-100/binary-tree/invert-binary-tree.cpp)（26.01.20）
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [对称二叉树](leetcode-top-100/binary-tree/symmetric-tree.cpp)（26.01.20）（但没能完全独立做出来）
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [二叉树的直径](leetcode-top-100/binary-tree/diameter-of-binary-tree.cpp)（26.01.20）
- [x] ![](https://img.shields.io/badge/中等-yellow) [二叉树的层序遍历](leetcode-top-100/binary-tree/binary-tree-level-order-traversal.cpp)（26.02.07）
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [将有序数组转换为二叉搜索树](leetcode-top-100/binary-tree/convert-sorted-array-to-binary-search-tree.cpp)（26.01.21）
- [x] ![](https://img.shields.io/badge/中等-yellow) [验证二叉搜索树](leetcode-top-100/binary-tree/validate-binary-search-tree.cpp)（26.02.07）
- [x] ![](https://img.shields.io/badge/中等-yellow) [二叉搜索树中第 K 小的元素](leetcode-top-100/binary-tree/kth-smallest-element-in-a-bst.cpp)（26.02.08）
- [x] ![](https://img.shields.io/badge/中等-yellow) [二叉树的右视图](leetcode-top-100/binary-tree/binary-tree-right-side-view.cpp)（26.02.08）
- [x] ![](https://img.shields.io/badge/中等-yellow) [二叉树展开为链表](leetcode-top-100/binary-tree/flatten-binary-tree-to-linked-list.cpp)（26.02.08）
- [x] ![](https://img.shields.io/badge/中等-yellow) [从前序与中序遍历序列构造二叉树](leetcode-top-100/binary-tree/construct-binary-tree-from-preorder-and-inorder-traversal.cpp)（26.02.09）
- [x] ![](https://img.shields.io/badge/中等-yellow) [路径总和 III](leetcode-top-100/binary-tree/path-sum-iii.cpp)（26.02.09）
- [x] ![](https://img.shields.io/badge/中等-yellow) [二叉树的最近公共祖先](leetcode-top-100/binary-tree/lowest-common-ancestor-of-a-binary-tree.cpp)（26.02.09）
- [x] ![](https://img.shields.io/badge/困难-red) [二叉树中的最大路径和](leetcode-top-100/binary-tree/binary-tree-maximum-path-sum.cpp)（26.02.10）（看题解后做出来的）

#### 图论

- [x] ![](https://img.shields.io/badge/中等-yellow) [岛屿数量](leetcode-top-100/graph/number-of-islands.cpp)（26.02.10）
- [x] ![](https://img.shields.io/badge/中等-yellow) [腐烂的橘子](leetcode-top-100/graph/rotting-oranges.cpp)（26.02.11）（看题解后做出来的）
- [x] ![](https://img.shields.io/badge/中等-yellow) [课程表](leetcode-top-100/graph/course-schedule.cpp)（26.02.11）（看题解后做出来的）
- [x] ![](https://img.shields.io/badge/中等-yellow) [实现 Trie（前缀树）](leetcode-top-100/graph/implement-trie-prefix-tree.cpp)（26.02.11）

#### 回溯

- [x] ![](https://img.shields.io/badge/中等-yellow) [全排列](leetcode-top-100/backtracking/permutations.cpp)（26.02.12）
- [x] ![](https://img.shields.io/badge/中等-yellow) [子集](leetcode-top-100/backtracking/subsets.cpp)（26.02.12）
- [x] ![](https://img.shields.io/badge/中等-yellow) [电话号码的字母组合](leetcode-top-100/backtracking/letter-combinations-of-a-phone-number.cpp)（26.02.12）
- [x] ![](https://img.shields.io/badge/中等-yellow) [组合总和](leetcode-top-100/backtracking/combination-sum.cpp)（26.02.14）
- [x] ![](https://img.shields.io/badge/中等-yellow) [括号生成](leetcode-top-100/backtracking/generate-parentheses.cpp)（26.02.14）
- [x] ![](https://img.shields.io/badge/中等-yellow) [单词搜索](leetcode-top-100/backtracking/word-search.cpp)（26.02.14）
- [x] ![](https://img.shields.io/badge/中等-yellow) [分割回文串](leetcode-top-100/backtracking/palindrome-partitioning.cpp)（26.02.15）
- [x] ![](https://img.shields.io/badge/困难-red) [N 皇后](leetcode-top-100/backtracking/n-queens.cpp)（26.02.15）

#### 二分查找

- [x] ![](https://img.shields.io/badge/简单-brightgreen) [搜索插入位置](leetcode-top-100/binary-search/search-insert-position.cpp)（26.01.21）
- [x] ![](https://img.shields.io/badge/中等-yellow) [搜索二维矩阵](leetcode-top-100/binary-search/search-a-2d-matrix.cpp)（26.02.17）
- [x] ![](https://img.shields.io/badge/中等-yellow) [在排序数组中查找元素的第一个和最后一个位置](leetcode-top-100/binary-search/find-first-and-last-position-of-element-in-sorted-array.cpp)（26.02.17）
- [x] ![](https://img.shields.io/badge/中等-yellow) [搜索旋转排序数组](leetcode-top-100/binary-search/search-in-rotated-sorted-array.cpp)（26.02.17）（看题解后做出来的）
- [x] ![](https://img.shields.io/badge/中等-yellow) [寻找旋转排序数组中的最小值](leetcode-top-100/binary-search/find-minimum-in-rotated-sorted-array.cpp)（26.02.18）（看题解后做出来的）
- [x] ![](https://img.shields.io/badge/困难-red) [寻找两个正序数组的中位数](leetcode-top-100/binary-search/median-of-two-sorted-arrays.cpp)（26.02.18）

#### 栈

- [x] ![](https://img.shields.io/badge/简单-brightgreen) [有效的括号](leetcode-top-100/stack/valid-parentheses.cpp)（26.01.21）
- [x] ![](https://img.shields.io/badge/中等-yellow) [最小栈](leetcode-top-100/stack/min-stack.cpp)（26.02.20）
- [x] ![](https://img.shields.io/badge/中等-yellow) [字符串解码](leetcode-top-100/stack/decode-string.cpp)（26.02.20）
- [x] ![](https://img.shields.io/badge/中等-yellow) [每日温度](leetcode-top-100/stack/daily-temperatures.cpp)（26.02.20）
- [x] ![](https://img.shields.io/badge/困难-red) [柱状图中最大的矩形](leetcode-top-100/stack/largest-rectangle-in-histogram.cpp)（26.02.21）（看题解后做出来的）

#### 堆

- [x] ![](https://img.shields.io/badge/中等-yellow) [数组中的第 K 个最大元素](leetcode-top-100/heap/kth-largest-element-in-an-array.cpp)（26.02.21）（看题解后做出来的）
- [x] ![](https://img.shields.io/badge/中等-yellow) [前 K 个高频元素](leetcode-top-100/heap/top-k-frequent-elements.cpp)（26.02.22）
- [x] ![](https://img.shields.io/badge/困难-red) [数据流的中位数](leetcode-top-100/heap/find-median-from-data-stream.cpp)（26.02.22）（看题解后做出来的）

#### 贪心算法

- [x] ![](https://img.shields.io/badge/简单-brightgreen) [买卖股票的最佳时机](leetcode-top-100/greedy-algorithm/best-time-to-buy-and-sell-stock.cpp)（26.01.21）
- [x] ![](https://img.shields.io/badge/中等-yellow) [跳跃游戏](leetcode-top-100/greedy-algorithm/jump-game.cpp)（26.02.23）（看题解后做出来的）
- [x] ![](https://img.shields.io/badge/中等-yellow) [跳跃游戏 II](leetcode-top-100/greedy-algorithm/jump-game-ii.cpp)（26.02.23）（看题解后做出来的）
- [x] ![](https://img.shields.io/badge/中等-yellow) [划分字母区间](leetcode-top-100/greedy-algorithm/partition-labels.cpp)（26.02.23）（看提示后做出来的）

#### 动态规划

- [x] ![](https://img.shields.io/badge/简单-brightgreen) [爬楼梯](leetcode-top-100/dynamic-programming/climbing-stairs.cpp)（26.01.22）
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [杨辉三角](leetcode-top-100/dynamic-programming/pascals-triangle.cpp)（26.01.22）
- [x] ![](https://img.shields.io/badge/中等-yellow) [打家劫舍](leetcode-top-100/dynamic-programming/house-robber.cpp)（26.02.24）
- [x] ![](https://img.shields.io/badge/中等-yellow) [完全平方数](leetcode-top-100/dynamic-programming/perfect-squares.cpp)（26.02.24）
- [x] ![](https://img.shields.io/badge/中等-yellow) [零钱兑换](leetcode-top-100/dynamic-programming/coin-change.cpp)（26.02.24）
- [x] ![](https://img.shields.io/badge/中等-yellow) [单词拆分](leetcode-top-100/dynamic-programming/word-break.cpp)（26.02.25）
- [x] ![](https://img.shields.io/badge/中等-yellow) [最长递增子序列](leetcode-top-100/dynamic-programming/longest-increasing-subsequence.cpp)（26.02.25）（看题解后做出来的）
- [x] ![](https://img.shields.io/badge/中等-yellow) [乘积最大子数组](leetcode-top-100/dynamic-programming/maximum-product-subarray.cpp)（26.02.25）（看题解后做出来的）
- [x] ![](https://img.shields.io/badge/中等-yellow) [分割等和子集](leetcode-top-100/dynamic-programming/partition-equal-subset-sum.cpp)（26.02.26）（看题解后做出来的）
- [x] ![](https://img.shields.io/badge/困难-red) [最长有效括号](leetcode-top-100/dynamic-programming/longest-valid-parentheses.cpp)（26.02.26）

#### 多维动态规划

- [x] ![](https://img.shields.io/badge/中等-yellow) [不同路径](leetcode-top-100/multidimensional-dynamic-programming/unique-paths.cpp)（26.02.27）
- [x] ![](https://img.shields.io/badge/中等-yellow) [最小路径和](leetcode-top-100/multidimensional-dynamic-programming/minimum-path-sum.cpp)（26.02.27）
- [x] ![](https://img.shields.io/badge/中等-yellow) [最长回文子串](leetcode-top-100/multidimensional-dynamic-programming/longest-palindromic-substring.cpp)（26.02.28）（看题解后做出来的）
- [x] ![](https://img.shields.io/badge/中等-yellow) [最长公共子序列](leetcode-top-100/multidimensional-dynamic-programming/longest-common-subsequence.cpp)（26.02.28）（看提示后做出来的）
- [x] ![](https://img.shields.io/badge/中等-yellow) [编辑距离](leetcode-top-100/multidimensional-dynamic-programming/edit-distance.cpp)（26.02.28）（看题解后做出来的）

#### 技巧

- [x] ![](https://img.shields.io/badge/简单-brightgreen) [只出现一次的数字](leetcode-top-100/trick/single-number.cpp)（26.01.22）（看提示才做出来的）
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [多数元素](leetcode-top-100/trick/majority-element.cpp)（26.01.22）（看题解才知道空间复杂度 O(1) 的做法）
- [x] ![](https://img.shields.io/badge/中等-yellow) [颜色分类](leetcode-top-100/trick/sort-colors.cpp)（26.03.01）（看提示才做出来的）
- [x] ![](https://img.shields.io/badge/中等-yellow) [下一个排列](leetcode-top-100/trick/next-permutation.cpp)（26.03.01）（看题解才做出来的）
- [x] ![](https://img.shields.io/badge/中等-yellow) [寻找重复数](leetcode-top-100/trick/find-the-duplicate-number.cpp)（26.03.01）（看题解才做出来的）

</details>


### 回顾进度（100/100）

<details>

<summary>点击展开/折叠内容</summary>

#### 哈希

- [x] ![](https://img.shields.io/badge/简单-brightgreen) [两数之和](leetcode-top-100/hash/two-sum.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [字母异位词分组](leetcode-top-100/hash/group-anagrams.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [最长连续序列](leetcode-top-100/hash/longest-consecutive-sequence.cpp)

#### 双指针

- [x] ![](https://img.shields.io/badge/简单-brightgreen) [移动零](leetcode-top-100/double-pointers/move-zeroes.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [盛最多的水](leetcode-top-100/double-pointers/container-with-most-water.cpp)（有遗忘）
- [x] ![](https://img.shields.io/badge/中等-yellow) [三数之和](leetcode-top-100/double-pointers/3sum.cpp)（有遗忘）
- [x] ![](https://img.shields.io/badge/困难-red) [接雨水](leetcode-top-100/double-pointers/trapping-rain-water.cpp)（有遗忘）（修改方法一（DP））

#### 滑动窗口

- [x] ![](https://img.shields.io/badge/中等-yellow) [无重复的最长子串](leetcode-top-100/sliding-window/longest-substring-without-repeating-characters.cpp)（有遗忘）
- [x] ![](https://img.shields.io/badge/中等-yellow) [找到字符串中所有字母异位词](leetcode-top-100/sliding-window/find-all-anagrams-in-a-string.cpp)

#### 子串

- [x] ![](https://img.shields.io/badge/中等-yellow) [和为 K 的子数组](leetcode-top-100/substring/subarray-sum-equals-k.cpp)（有遗忘）
- [x] ![](https://img.shields.io/badge/困难-red) [滑动窗口最大值](leetcode-top-100/substring/sliding-window-maximum.cpp)
- [x] ![](https://img.shields.io/badge/困难-red) [最小覆盖子串](leetcode-top-100/substring/sliding-window-maximum.cpp)（有遗忘）

#### 普通数组

- [x] ![](https://img.shields.io/badge/中等-yellow) [最大子数组和](leetcode-top-100/plain-array/maximum-subarray.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [合并区间](leetcode-top-100/plain-array/merge-intervals.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [轮转数组](leetcode-top-100/plain-array/rotate-array.cpp)（有遗忘）
- [x] ![](https://img.shields.io/badge/中等-yellow) [除自身以外数组的乘积](leetcode-top-100/plain-array/product-of-array-except-self.cpp)（有遗忘）
- [x] ![](https://img.shields.io/badge/困难-red) [缺失的第一个正数](leetcode-top-100/plain-array/first-missing-positive.cpp)（有遗忘）

#### 矩阵

- [x] ![](https://img.shields.io/badge/中等-yellow) [矩阵置零](leetcode-top-100/matrix/set-matrix-zeroes.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [螺旋矩阵](leetcode-top-100/matrix/spiral-matrix.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [旋转图像](leetcode-top-100/matrix/rotate-image.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [搜索二维矩阵 II](leetcode-top-100/matrix/search-a-2d-matrix-ii.cpp)

#### 链表

方法：

- 记住反转链表的做法
- 双指针（快慢指针等）

- [x] ![](https://img.shields.io/badge/简单-brightgreen) [相交链表](leetcode-top-100/linked-list/intersection-of-two-linked-lists.cpp)（有遗忘）
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [反转链表](leetcode-top-100/linked-list/reverse-linked-list.cpp)
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [回文链表](leetcode-top-100/linked-list/palindrome-linked-list.cpp)
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [环形链表](leetcode-top-100/linked-list/linked-list-cycle.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [环形链表 II](leetcode-top-100/linked-list/linked-list-cycle-ii.cpp)
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [合并两个有序链表](leetcode-top-100/linked-list/merge-two-sorted-lists.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [两数相加](leetcode-top-100/linked-list/add-two-numbers.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [删除链表的倒数第 N 个节点](leetcode-top-100/linked-list/remove-nth-node-from-end-of-list.cpp)（有遗忘）
- [x] ![](https://img.shields.io/badge/中等-yellow) [两两交换链表中的节点](leetcode-top-100/linked-list/swap-nodes-in-pairs.cpp)
- [x] ![](https://img.shields.io/badge/困难-red) [K 个一组翻转链表](leetcode-top-100/linked-list/reverse-nodes-in-k-group.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [随机链表的复制](leetcode-top-100/linked-list/copy-list-with-random-pointer.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [排序链表](leetcode-top-100/linked-list/sort-list.cpp)（空间复杂度 $O(1)$ 方法有遗忘）
- [x] ![](https://img.shields.io/badge/困难-red) [合成 K 个升序列表](leetcode-top-100/linked-list/merge-k-sorted-lists.cpp)（有遗忘）
- [x] ![](https://img.shields.io/badge/中等-yellow) [LRU 缓存](leetcode-top-100/linked-list/lru-cache.cpp)

#### 二叉树

- [x] ![](https://img.shields.io/badge/简单-brightgreen) [二叉树的中序遍历](leetcode-top-100/binary-tree/binary-tree-inorder-traversal.cpp)
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [二叉树的最大深度](leetcode-top-100/binary-tree/maximum-depth-of-binary-tree.cpp)
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [翻转二叉树](leetcode-top-100/binary-tree/invert-binary-tree.cpp)
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [对称二叉树](leetcode-top-100/binary-tree/symmetric-tree.cpp)
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [二叉树的直径](leetcode-top-100/binary-tree/diameter-of-binary-tree.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [二叉树的层序遍历](leetcode-top-100/binary-tree/binary-tree-level-order-traversal.cpp)
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [将有序数组转换为二叉搜索树](leetcode-top-100/binary-tree/convert-sorted-array-to-binary-search-tree.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [验证二叉搜索树](leetcode-top-100/binary-tree/validate-binary-search-tree.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [二叉搜索树中第 K 小的元素](leetcode-top-100/binary-tree/kth-smallest-element-in-a-bst.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [二叉树的右视图](leetcode-top-100/binary-tree/binary-tree-right-side-view.cpp)（有遗忘）
- [x] ![](https://img.shields.io/badge/中等-yellow) [二叉树展开为链表](leetcode-top-100/binary-tree/flatten-binary-tree-to-linked-list.cpp)（「寻找前驱节点」方法有遗忘）
- [x] ![](https://img.shields.io/badge/中等-yellow) [从前序与中序遍历序列构造二叉树](leetcode-top-100/binary-tree/construct-binary-tree-from-preorder-and-inorder-traversal.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [路径总和 III](leetcode-top-100/binary-tree/path-sum-iii.cpp)（前缀和方法有遗忘）
- [x] ![](https://img.shields.io/badge/中等-yellow) [二叉树的最近公共祖先](leetcode-top-100/binary-tree/lowest-common-ancestor-of-a-binary-tree.cpp)
- [x] ![](https://img.shields.io/badge/困难-red) [二叉树中的最大路径和](leetcode-top-100/binary-tree/binary-tree-maximum-path-sum.cpp)（有遗忘）

#### 图论

- [x] ![](https://img.shields.io/badge/中等-yellow) [岛屿数量](leetcode-top-100/graph/number-of-islands.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [腐烂的橘子](leetcode-top-100/graph/rotting-oranges.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [课程表](leetcode-top-100/graph/course-schedule.cpp)（有遗忘）
- [x] ![](https://img.shields.io/badge/中等-yellow) [实现 Trie（前缀树）](leetcode-top-100/graph/implement-trie-prefix-tree.cpp)（有遗忘）

#### 回溯

- [x] ![](https://img.shields.io/badge/中等-yellow) [全排列](leetcode-top-100/backtracking/permutations.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [子集](leetcode-top-100/backtracking/subsets.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [电话号码的字母组合](leetcode-top-100/backtracking/letter-combinations-of-a-phone-number.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [组合总和](leetcode-top-100/backtracking/combination-sum.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [括号生成](leetcode-top-100/backtracking/generate-parentheses.cpp)（有遗忘）
- [x] ![](https://img.shields.io/badge/中等-yellow) [单词搜索](leetcode-top-100/backtracking/word-search.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [分割回文串](leetcode-top-100/backtracking/palindrome-partitioning.cpp)（有遗忘）
- [x] ![](https://img.shields.io/badge/困难-red) [N 皇后](leetcode-top-100/backtracking/n-queens.cpp)

#### 二分查找

- [x] ![](https://img.shields.io/badge/简单-brightgreen) [搜索插入位置](leetcode-top-100/binary-search/search-insert-position.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [搜索二维矩阵](leetcode-top-100/binary-search/search-a-2d-matrix.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [在排序数组中查找元素的第一个和最后一个位置](leetcode-top-100/binary-search/find-first-and-last-position-of-element-in-sorted-array.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [搜索旋转排序数组](leetcode-top-100/binary-search/search-in-rotated-sorted-array.cpp)（有遗忘）
- [x] ![](https://img.shields.io/badge/中等-yellow) [寻找旋转排序数组中的最小值](leetcode-top-100/binary-search/find-minimum-in-rotated-sorted-array.cpp)（有遗忘）
- [x] ![](https://img.shields.io/badge/困难-red) [寻找两个正序数组的中位数](leetcode-top-100/binary-search/median-of-two-sorted-arrays.cpp)（有遗忘）

#### 栈

- [x] ![](https://img.shields.io/badge/简单-brightgreen) [有效的括号](leetcode-top-100/stack/valid-parentheses.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [最小栈](leetcode-top-100/stack/min-stack.cpp)（有遗忘）
- [x] ![](https://img.shields.io/badge/中等-yellow) [字符串解码](leetcode-top-100/stack/decode-string.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [每日温度](leetcode-top-100/stack/daily-temperatures.cpp)
- [x] ![](https://img.shields.io/badge/困难-red) [柱状图中最大的矩形](leetcode-top-100/stack/largest-rectangle-in-histogram.cpp)（有遗忘）

#### 堆

- [x] ![](https://img.shields.io/badge/中等-yellow) [数组中的第 K 个最大元素](leetcode-top-100/heap/kth-largest-element-in-an-array.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [前 K 个高频元素](leetcode-top-100/heap/top-k-frequent-elements.cpp)（$O(n)$ 有遗忘）
- [x] ![](https://img.shields.io/badge/困难-red) [数据流的中位数](leetcode-top-100/heap/find-median-from-data-stream.cpp)（有遗忘）

#### 贪心算法

- [x] ![](https://img.shields.io/badge/简单-brightgreen) [买卖股票的最佳时机](leetcode-top-100/greedy-algorithm/best-time-to-buy-and-sell-stock.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [跳跃游戏](leetcode-top-100/greedy-algorithm/jump-game.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [跳跃游戏 II](leetcode-top-100/greedy-algorithm/jump-game-ii.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [划分字母区间](leetcode-top-100/greedy-algorithm/partition-labels.cpp)

#### 动态规划

- [x] ![](https://img.shields.io/badge/简单-brightgreen) [爬楼梯](leetcode-top-100/dynamic-programming/climbing-stairs.cpp)
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [杨辉三角](leetcode-top-100/dynamic-programming/pascals-triangle.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [打家劫舍](leetcode-top-100/dynamic-programming/house-robber.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [完全平方数](leetcode-top-100/dynamic-programming/perfect-squares.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [零钱兑换](leetcode-top-100/dynamic-programming/coin-change.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [单词拆分](leetcode-top-100/dynamic-programming/word-break.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [最长递增子序列](leetcode-top-100/dynamic-programming/longest-increasing-subsequence.cpp)（有遗忘）
- [x] ![](https://img.shields.io/badge/中等-yellow) [乘积最大子数组](leetcode-top-100/dynamic-programming/maximum-product-subarray.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [分割等和子集](leetcode-top-100/dynamic-programming/partition-equal-subset-sum.cpp)（有遗忘）
- [x] ![](https://img.shields.io/badge/困难-red) [最长有效括号](leetcode-top-100/dynamic-programming/longest-valid-parentheses.cpp)（有遗忘）

#### 多维动态规划

- [x] ![](https://img.shields.io/badge/中等-yellow) [不同路径](leetcode-top-100/multidimensional-dynamic-programming/unique-paths.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [最小路径和](leetcode-top-100/multidimensional-dynamic-programming/minimum-path-sum.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [最长回文子串](leetcode-top-100/multidimensional-dynamic-programming/longest-palindromic-substring.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [最长公共子序列](leetcode-top-100/multidimensional-dynamic-programming/longest-common-subsequence.cpp)（有遗忘）
- [x] ![](https://img.shields.io/badge/中等-yellow) [编辑距离](leetcode-top-100/multidimensional-dynamic-programming/edit-distance.cpp)

#### 技巧

- [x] ![](https://img.shields.io/badge/简单-brightgreen) [只出现一次的数字](leetcode-top-100/trick/single-number.cpp)
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [多数元素](leetcode-top-100/trick/majority-element.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [颜色分类](leetcode-top-100/trick/sort-colors.cpp)（有遗忘）
- [x] ![](https://img.shields.io/badge/中等-yellow) [下一个排列](leetcode-top-100/trick/next-permutation.cpp)
- [x] ![](https://img.shields.io/badge/中等-yellow) [寻找重复数](leetcode-top-100/trick/find-the-duplicate-number.cpp)

</details>

</details>

## Top-Interview-150（35/150）

### 数组/字符串

- [x] ![](https://img.shields.io/badge/简单-brightgreen) [合并两个有序数组](top-interview-150/array-string/merge-sorted-array.cpp)（26.03.13）
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [移除元素](top-interview-150/array-string/remove-element.cpp)（26.03.13）
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [删除有序数组中的重复项](top-interview-150/array-string/remove-duplicates-from-sorted-array.cpp)（26.03.14）
- [x] ![](https://img.shields.io/badge/中等-yellow) [删除有序数组中的重复项 II](top-interview-150/array-string/remove-duplicates-from-sorted-array-ii.cpp)（26.03.14）
- [x] ![](https://img.shields.io/badge/中等-yellow) [买卖股票的最佳时机 II](top-interview-150/array-string/best-time-to-buy-and-sell-stock-ii.cpp)（26.03.15）
- [x] ![](https://img.shields.io/badge/中等-yellow) [H 指数](top-interview-150/array-string/h-index.cpp)（26.03.15）
- [x] ![](https://img.shields.io/badge/中等-yellow) [O(1) 时间插入、删除和获取随机元素](top-interview-150/array-string/insert-delete-getrandom-o1.cpp)（26.03.16）
- [x] ![](https://img.shields.io/badge/中等-yellow) [加油站](top-interview-150/array-string/gas-station.cpp)（26.03.16）
- [x] ![](https://img.shields.io/badge/困难-red) [分发糖果](top-interview-150/array-string/candy.cpp)（26.03.17）
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [加油站](top-interview-150/array-string/roman-to-integer.cpp)（26.03.17）
- [x] ![](https://img.shields.io/badge/中等-yellow) [整数转罗马数字](top-interview-150/array-string/integer-to-roman.cpp)（26.03.18）
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [最后一个单词的长度](top-interview-150/array-string/length-of-last-word.cpp)（26.03.18）
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [最长公共前缀](top-interview-150/array-string/longest-common-prefix.cpp)（26.03.19）
- [x] ![](https://img.shields.io/badge/中等-yellow) [反转字符串中的单词](top-interview-150/array-string/reverse-words-in-a-string.cpp)（26.03.19）
- [x] ![](https://img.shields.io/badge/中等-yellow) [Z 字形变换](top-interview-150/array-string/zigzag-conversion.cpp)（26.03.20）
- [x] ![](https://img.shields.io/badge/简单-lightgreen) [找出字符串中第一个匹配项的下标](top-interview-150/array-string/find-the-index-of-the-first-occurrence-in-a-string.cpp)（26.03.20）
- [x] ![](https://img.shields.io/badge/困难-red) [文本左右对齐](top-interview-150/array-string/text-justification.cpp)（26.03.21）


### 双指针

- [x] ![](https://img.shields.io/badge/简单-brightgreen) [验证回文串](top-interview-150/double-pointers/valid-palindrome.cpp)（26.03.21）
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [判断子序列](top-interview-150/double-pointers/is-subsequence.cpp)（26.03.22）
- [x] ![](https://img.shields.io/badge/中等-yellow) [两数之和 II - 输入有序数组](top-interview-150/double-pointers/two-sum-ii-input-array-is-sorted.cpp)（26.03.22）


### 滑动窗口

- [x] ![](https://img.shields.io/badge/中等-yellow) [长度最小的子数组](top-interview-150/sliding-window/minimum-size-subarray-sum.cpp)（26.03.23）
- [x] ![](https://img.shields.io/badge/困难-red) [串联所有单词的子串](top-interview-150/sliding-window/substring-with-concatenation-of-all-words.cpp)（26.03.24）


### 矩阵

- [x] ![](https://img.shields.io/badge/中等-yellow) [有效的数独](top-interview-150/matrix/valid-sudoku.cpp)（26.03.23）
- [x] ![](https://img.shields.io/badge/中等-yellow) [生命游戏](top-interview-150/matrix/game-of-life.cpp)（26.03.24）


### 哈希表

- [x] ![](https://img.shields.io/badge/简单-brightgreen) [赎金信](top-interview-150/hash-table/ransom-note.cpp)（26.03.25）
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [同构字符串](top-interview-150/hash-table/isomorphic-strings.cpp)（26.03.25）
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [单词规律](top-interview-150/hash-table/word-pattern.cpp)（26.03.26）
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [有效的字母异位词](top-interview-150/hash-table/valid-anagram.cpp)（26.03.26）
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [快乐数](top-interview-150/hash-table/happy-number.cpp)（26.03.26）
- [x] ![](https://img.shields.io/badge/简单-brightgreen) [存在重复元素 II](top-interview-150/hash-table/contains-duplicate-ii.cpp)（26.03.27）


### 区间

- [x] ![](https://img.shields.io/badge/简单-brightgreen) [汇总区间](top-interview-150/interval/summary-ranges.cpp)（26.03.27）
- [x] ![](https://img.shields.io/badge/中等-yellow) [插入区间](top-interview-150/interval/insert-interval.cpp)（26.03.28）
- [x] ![](https://img.shields.io/badge/中等-yellow) [用最少数量的箭引爆气球](top-interview-150/interval/minimum-number-of-arrows-to-burst-balloons.cpp)（26.03.28）


### 栈

- [x] ![](https://img.shields.io/badge/中等-yellow) [逆波兰表达式求值](top-interview-150/stack/evaluate-reverse-polish-notation.cpp)（26.03.29）
- [x] ![](https://img.shields.io/badge/困难-red) [基本计算器](top-interview-150/stack/basic-calculator.cpp)（26.03.29）



### 链表

### 二叉树

### 二叉树层次遍历

### 二叉搜索树

### 图

### 图的广度优先搜索

### 字典树

### 回溯

### 分治

### Kadane 算法

### 二分查找

### 堆

### 位运算

### 数学

### 一维动态规划

### 多维动态规划


## 参考资料

- [cppreference](https://cppreference.com/)（最权威的参考资料！）
- [分享｜如何科学刷题？](https://leetcode.cn/discuss/post/3141566/ru-he-ke-xue-shua-ti-by-endlesscheng-q3yd/)（赞美灵神！）