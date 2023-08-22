// 1015. 【循环测试试题3】条件（cond） (Standard IO)
#include<cstdio>
#include<cmath>
int main()
{
	int n=0;
    long long s=0;
    // 输入n
	scanf("%d",&n);
    // 求n的所有因数
	for(int i=1; i<=sqrt(n); i++)
	{
		if(n%i==0)
		{
			s+=i;
            // 如果i不等于n/i就把n/i也加上
			if(i!=n/i) 
				s+=n/i;
		} 
	}
    // 输出s（因数的和）
	printf("%lld",s);
	return 0;
}