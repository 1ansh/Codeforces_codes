#include<bits/stdc++.h>
using namespace std;



int main()
{
    int q,i,count=0;
    cin>>q;
    for(i=0;i<q;i++)
    {
    	int ar[3],sum=0,j;
    	for(j=0;j<3;j++)
    	{
    		cin>>ar[j];
    		sum=sum+ar[j];
		}
		if(sum>=2)
		{
			count++;
		}
	}
	cout<<count;
}
