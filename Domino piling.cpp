#include<bits/stdc++.h>
using namespace std;



int main()
{
    int m,n,i,j;
    cin>>m>>n;
    int prod=m*n;
    if(prod%2==0)
    {
    	cout<<prod/2;
	}
	else
	{
		cout<<(prod-1)/2;
	}
}
