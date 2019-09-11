### 题目描述

背景无关紧要，就是最短路径问题。

### 输入

输入包括多个测试用例。每组数据第一行是两个整数n，m(n <= 100, m <= 10000)，n表示路口的个数。标号为1的路口是商店所在地，标号为n的路口是赛场所在地。m表示道路的数目。n和m都输入0表示输入结束。接下来的m行，每行包括3正整数a, b, c(1 <= a, b <= n,  1 <= c <= 1000)，表示在路口a和b之间有一条路，走完这条路需要c分钟。输入保证至少1条商店到赛场的路线。

### 输出

对于每组输入，输出一行，表示工作人员从商店走到赛场的最短时间

### 样例输入

```
2 1
1 2 3
3 3
1 2 5
2 3 5
3 1 2
0 0
```

### 样例输出

```
3
2
```