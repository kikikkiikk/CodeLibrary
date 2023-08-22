// 1007. 【例】求梯形面积 (Output Only)
// 题目写的Output Only，但是描述是有输入的，以描述为准
// 这题OJ提交不了，但一本通能提交
#include <cstdio>
int main()
{
    int n;
    // 输入n（阴影三角的面积）
    scanf("%d", &n);
    // 输出梯形的面积（保留两位小数）
    printf("%.2lf", n * 2.0 / 15 * (15 + 25) / 2);
    return 0;
}