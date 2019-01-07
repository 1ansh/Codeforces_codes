#include<bits/stdc++.h>

using namespace std;

int main(){
	int w,h,u1,d1,u2,d2;
	cin>>w;
	cin>>h;
	cin>>u1;
	cin>>d1;
	cin>>u2;
	cin>>d2;
	w = w+h;
	while(h>0){
		if(h==d1){
			w=w-u1;	
		}
		else if(h==d2){
			w=w-u2;
		}
		if(w<0){
			w=0;
		}
		h--;
		w+=h;	
	}
	cout<<w;
}
