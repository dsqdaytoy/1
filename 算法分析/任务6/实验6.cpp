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
    cout<<"������Ʒ�����ͱ���������"<<endl; 
    cin>>n>>c;
    cout<<"��������ÿ����Ʒ�ļ�ֵ��������"<<endl;
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
            cout<<"�أ�"<<items[j].weight<<"����ֵ��"<<items[j].value<<"����Ʒ�������˱���"
			<<endl<<"���������"<<items[j].rate<<endl;
        }
        else break; 
   } 
	if(j<n)
   	{
        items[j].rate=c/items[j].weight; 
    	sum+=items[j].rate*items[j].weight; 
        cout<<"�أ�"<<items[j].weight<<"����ֵ��"<<items[j].value<<"�������˱���"
		<<endl<<"���������"<<items[j].rate<<endl; 
	}
   	return 0; 
    
     
 }
