#include<string.h>
#include<stdio.h>
int k;
int binarysearch(int a[],int x,int low,int high)  //binarysearch:二分搜索/折半搜索
{
    if(low>high) //low>high:算法结束的标志 
    {
        return -1;
    }
    int mid=(low+high)/2;
    if(x==a[mid])
    {
        k=mid;
        return x;
    }
    else if(x>a[mid]) 
    {
        binarysearch(a,x,mid+1,high);
    }
    else
    {
        binarysearch(a,x,low,mid-1);
    }
}
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    printf("请输入需要查找的正数字：\n");
    int x;
    scanf("%d",&x);
    int r=binarysearch(a,x,0,9);
    if(r==-1)
    {
        printf("没有查到\n");
    }
    else
    {
        printf("查到了,在数列的第%d个位置上\n",k+1);
    }
    return 0;
}
