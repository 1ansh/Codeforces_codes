#include<bits/stdc++.h>
using namespace std;



int main()
{
    string s;
    cin>>s;
    int i,count=1;
    for(i=1;i<s.length();i++)
    {
    	if(s[i]==s[i-1])
    	{
    		count++;
		}
		else
		{
			count=1;
		}
		if(count==7)
		{
			break;
		}
	}
	if(count==7)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
}
