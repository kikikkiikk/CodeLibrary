// 1004. 数组测试试题2：派送蛋糕(send) (Standard IO)
// 这题虽然是个数组题，但是理解一下就能发现，并不需要数组
#include <cstdio>
#include <cmath>
int main()
{
    // 定义变量，n代表共有n个班级（输入）
    int n, t, ans = 0, i;
    // 输入n（班级数）
    scanf("%d", &n);
    // 重复输入每个班级的人数并除以10（蛋糕可以分给10人)后向上取整
    // 并把得出的答案累加到ans变量中
    for (i = 0; i < n; i++)
    {
        scanf("%d", &t);
        ans += ceil(1.0 * t / 10);
    }
    // 输出ans
    printf("%d", ans);
    return 0;
}