// 1005. 数组测试试题2：数字卡片(card) (Standard IO)
// 这题我用了一个很奇妙的写法（字符串枚举）
#include <cstdio>
#include <cstring>
char a[10]; // 字符串a用于存放卡片上的数字
int s[10];  // 数组s用于存放答案
int main()
{
    int n;
    // 输入n（n张卡片）
    scanf("%d", &n);
    // 重复输入字符串a，并检测其中的每一个数字，累加到s数组
    for (int i = 0; i < n; i++)
    {
        scanf("%s", a);
        for (int i = 0; i < strlen(a); i++)
            if (a[i] >= '0' && a[i] <= '9')
                s[a[i] - '0']++;
    }
    // 输出s数组所有不为0的位
    for (int i = 0; i < 10; i++)
    {
        if (s[i] != 0)
            printf("%d %d\n", i, s[i]);
    }
    return 0;
}