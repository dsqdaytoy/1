#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int limitM;
int option[100];
int n;
struct Bag
{
    int weight;
    int value;
} num[100];
int find(int n, int M)
{
    if (n==0 || M==0)
    {
        return 0;
    }
    else
    {
        
        for (int i=n-1; i>=0; i--)
        {
            if (num[i].weight>M)
            {
                option[i]=0;
                return find(n-1,M);
            }
            else
            {
                int temp1 = find(n-1,M);
                int temp2 = num[i].value + find(n-1,M-num[i].weight);
                if (temp1 > temp2)
                {
                    option[i]=0;
                    return temp1;
                }
                else
                {
                    option[i]=1;
                    return temp2;
                }
            }
        }
    }
}
int main()
{
    int k;
    char c;
    cout<<"物品种数：";
    cin>>n;
    for(k=0; k<n; k++)
    {
        cout<<"第"<<k+1<<"种物品(重量，价值):";
        cin>>num[k].weight>>c>>num[k].value;
    }
    cout<<"背包所能承受的总重量：";
    cin>>limitM;
    cout<<"最佳装填方案是："<<endl;
	for (int i=0;i<n;i++)
	{
    	if (option[i]=1)
        {
        	cout << "第"<<i+1<<"种物品"<<endl;
        }
    }
    cout<<"总价值="<<find(n,limitM)<<endl;
    return 0;
}

