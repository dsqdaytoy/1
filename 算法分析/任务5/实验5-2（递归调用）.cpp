#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 100
#define max(a,b) (a>b)?a:b

int LCS(char stra[],int lena,char strb[],int lenb)   //最长公共子序列LCS(longest common subsequence)
{													//两个参数分别表示数组a的下标和数组b的下标

        if (lena<=0 || lenb<=0)
		 return 0;
        int tmp=0,ret=0,issame=0;
        if(stra[lena-1] == strb[lenb-1]) issame = 1;
        tmp = max(LCS(stra,lena-1,strb,lenb),LCS(stra,lena,strb,lenb-1));
        return ret = max(tmp , (LCS(stra,lena-1,strb,lenb-1) + issame));
}

int main()
{
        char stra[] = "gccct";
        char strb[] = "gcgc";
        int lena = strlen(stra)/sizeof(char);
        int lenb = strlen(strb)/sizeof(char);
        int ret = LCS(stra,lena,strb,lenb);
        printf("result is:%d\n",ret);
        return 0;
}
