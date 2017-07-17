#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n,i,x=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
    	string s;
    	cin>>s;
    	for(int j=0;j<s.length();j++)
    	{
    		if(s[j]=='+')
    		{
    			x++;
    			break;
			}
			else if(s[j]=='-')
			{
				x--;
				break;
			}
		}
	}
	cout<<x;
}
