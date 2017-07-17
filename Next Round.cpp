#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n,k,i,count=0;
    cin>>n>>k;
    vector<int> ar(n+1);
    for(i=1;i<=n;i++)
    {
    	cin>>ar[i];
	}
	for(i=1;i<=n;i++)
    {
    	if(ar[i] >= ar[k] && ar[i]>0)
    	{
    		count++;
		}
	}
	cout<<count;
}
