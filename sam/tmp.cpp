spoj 1812 LCS2 - Longest Common Substring II
题意：
给出最多n个字符串A[1], ..., A[n], 求这n个字符串的最长公共子串。
限制：
1 <= n <= 10
|A[i]| <= 1e5
思路：
和spoj 1811 LCS差不多的做法

把其中一个A建后缀自动机
考虑一个状态s, 如果A之外的其他串对它的匹配长度分别是a[1], a[2], ..., a[n - 1], 那么min(a[1], a[2], ..., a[n - 1], Max(s))就可以更新答案。

注意:
我们求的是对于任意一个Right集合中的r，最大的匹配长度。那么对于一个状态s，它的结果自然也可以作为它Parent的结果，我们可以从底到上更新一遍。
这个可以通过一次拓扑排序搞定。
