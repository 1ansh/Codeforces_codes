#include<bits/stdc++.h>
using namespace std;



int main()
{
    string s1,s2;
    int i;
    cin>>s1>>s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
	for(i =0;i<s1.length();i++)
	{
		if(s1[i]>s2[i])
		{
			cout<<"1";
			break;
		}
		else if(s2[i]>s1[i])
		{
			cout<<"-1";
			break;
		}
	}
	if(i==s1.length())
	{
		cout<<"0";
	}
}
