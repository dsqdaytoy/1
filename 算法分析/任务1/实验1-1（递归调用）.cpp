#include<string.h>
#include<stdio.h>
int k;
int binarysearch(int a[],int x,int low,int high)  //binarysearch:��������/�۰�����
{
    if(low>high) //low>high:�㷨�����ı�־ 
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
    printf("��������Ҫ���ҵ������֣�\n");
    int x;
    scanf("%d",&x);
    int r=binarysearch(a,x,0,9);
    if(r==-1)
    {
        printf("û�в鵽\n");
    }
    else
    {
        printf("�鵽��,�����еĵ�%d��λ����\n",k+1);
    }
    return 0;
}
