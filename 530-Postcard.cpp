#include<bits/stdc++.h>

using namespace std;

int main(){
	string s1,s;
	cin>>s1;
	int k,li,lf;
	cin>>k;
	li = s1.length();
	s = s1;
	s.erase(std::remove(s.begin(), s.end(), '?'), s.end());
	s.erase(std::remove(s.begin(), s.end(), '*'), s.end());
	lf = s.length();
	if(lf-k > li-lf){
		cout<<"Impossible"<<endl;
		return 0;
	}
	vector<char> data(s1.begin(),s1.end());
	vector<char>::iterator itr;
	char foo;
	foo = data.front();
	if(k==lf){
		cout<<s<<endl;
	}
	else if(k<lf){
		for(itr=data.begin(); itr != data.end(); ++itr){
			if(*(itr + 1 )!= '?' && *(itr +1) != '*' && *(itr)!= '?' && *(itr) != '*'){
				cout<<*itr;
			}
			else{
				if(lf > k){
					if((*(itr)!= '?' && *(itr) != '*')){
						lf--;
					}
				}
				else if(*(itr)!= '?' && *(itr) != '*'){
					cout<<*itr;
				}
			}
		}		
	}
	else{
		if(s1.find('*') == -1){
			cout<<"Impossible"<<endl;
			return 0;
		}
		for(itr=data.begin(); itr != data.end(); ++itr){
			if(*(itr + 1 ) == '*' && lf<k){
				while(lf<=k){
					cout<<*itr;
					lf++;
				}
			}
			else{
				if(*itr != '?' && *itr != '*'){
					cout<<*itr;
				}
			}
		}
	}
}
