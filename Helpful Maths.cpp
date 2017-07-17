#include<bits/stdc++.h>
using namespace std;



int main()
{
    string s,a;
    cin>>s;
    int i,c1=0,c2=0,c3=0;
    for(i=0;i<s.length();i++)
    {
    	if(s[i]=='1')
    	{
    		c1++;
		}
		else if(s[i]=='2')
    	{
    		c2++;
		}
		else if(s[i]=='3')
    	{
    		c3++;
		}
	}
	for(i=0;i<c1;i++)
	{
		a=a+'1'+'+';
	}
	for(i=0;i<c2;i++)
	{
		a=a+'2'+'+';
	}
	for(i=0;i<c3;i++)
	{
		a=a+'3'+'+';
	}
    a.erase(a.length()-1);
    cout<<a;
}
