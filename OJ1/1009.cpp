// 1009. 数组测试试题：班级对抗(a) (Standard IO)
#include <cstdio>
int main()
{
    // A班参与n个项目，B班参与m个项目
    // a与b累加两个班的总得分
    int n, m, t, a = 0, b = 0;
    // 输入A班参与的项目数
    scanf("%d", &n);
    // 重复输入并累加到a中
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &t);
        a += t;
    }
    // 输入B班参与的项目数
    scanf("%d", &m);
    // 重复输入并累加到b中
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &t);
        b += t;
    }
    // 比较a与b并输出
    if (a > b)
        printf("A\n");
    else
        printf("B\n");
    // 输出两个班级的得分
    printf("%d %d\n", a, b);
    return 0;
}