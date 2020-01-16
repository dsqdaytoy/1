#include <iostream>
#include <algorithm>
using namespace std;
struct item
{
    int weight; 
    int value;
    float bi;
    float rate; 
}items[100];
bool cmp(const item &a,const item &b)
{
	return a.bi>b.bi;
}
int main(){
	int n;
    float c;
    cout<<"输入物品件数和背包容量："<<endl; 
    cin>>n>>c;
    cout<<"依次输入每件物品的价值和重量："<<endl;
    float v[n],w[n];
    for(int i=0;i<n;i++)
	{
        cin>>items[i].value>>items[i].weight;
        items[i].bi=items[i].value/items[i].weight;
        items[i].rate=0;
    }
    sort(items,items+n,cmp);
    int sum=0,j=0;
    for(j=0;j<n;j++)
	{
    	if(items[j].weight<=c)
		{ 
        	items[j].rate=1;
            sum+=items[j].weight;
        	c-=items[j].weight;
            cout<<"重："<<items[j].weight<<"、价值："<<items[j].value<<"的物品被放入了背包"
			<<endl<<"放入比例："<<items[j].rate<<endl;
        }
        else break; 
   } 
	if(j<n)
   	{
        items[j].rate=c/items[j].weight; 
    	sum+=items[j].rate*items[j].weight; 
        cout<<"重："<<items[j].weight<<"、价值："<<items[j].value<<"被放入了背包"
		<<endl<<"放入比例："<<items[j].rate<<endl; 
	}
   	return 0; 
    
     
 }
