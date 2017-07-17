#include<bits/stdc++.h>
using namespace std;



int main()
{
    string s1,s2;
    cin>>s1;
	for(int i=0;i<s1.length();i++)
	{
		char c =s1[i];
		if (c >= 'A' && c <= 'Z')
        {
            c += 'a' - 'A';
        }
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y')
        {
            s2.append(1, '.');
            s2.append(1, c);
        }
	}
	cout<<s2;
}
