#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<limits.h>
using namespace std;
int dp[1000];
int judge(int Start, int End, char*s,char c,int*Position)
{
	for (int i = Start; i <= End; i++)
	{
		if (c == s[i])
		{
			*Position = i;
			return 1;
		}
	}
	return 0;
}
int main()
{
	int k,T,a[100];
	char s1[100],s2[100];
	while(scanf("%d",&T)!=EOF)
	{
		while (T--)
		{
			scanf("%s%s", s1, s2);
			memset(dp, 0, sizeof(dp));
			int c = 0;
			int len1= strlen(s1);
			int len2 = strlen(s2);
			while (c<len2&&s1[0] != s2[c++]);
			if (c == len2)
			{
				a[0] = len2 - 1;
				dp[0] = 0;
			}else
			{
                a[0]=c-1;
                dp[0]=1;
			}
			for (int i = 1; i < len1; i++)
			{
				int Position, Max = -1;
				for (int k = 0; k < i; k++)
				{
					int num = dp[k] + judge(a[k], len2, s2,s1[i], &Position);
					if (num>Max)
					{
						Max = num;
					}
				}
				dp[i] = Max;
				a[i] = Position;
			}
			printf("%d\n", dp[len1 - 1]);
		}
	}
	return 0;
}
