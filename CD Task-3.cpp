#include<bits/stdc++.h>
using namespace std;

int checkABC(string x){
	string s="abc";
	if((s.compare(x) )== 0){
		cout<<"Expression matches with : abc"<<endl;
		return 1;
	}
	return 0;
}
int checkABCastr(string x){
	string s="ab";
	string c="c";
	for(int i=0; i<50; i++){
		if((s.compare(x) )== 0){
			cout<<"Expression matches with : abc*"<<endl;
			return 1;
		}
		else s+=c;
	}
	return 0;
}
int checkABCplus(string x){
	string s="abc";
	string c="c";
	for(int i=0; i<50; i++){
		if((s.compare(x) )== 0){
			cout<<"Expression matches with : abc+"<<endl;
			return 1;
		}
		else s+=c;
	}
	return 0;
}

int checkAbcPlus(string x){
	string s="abc";
	string c="bc";
	for(int i=0; i<50; i++){
		if((s.compare(x) )== 0){
			cout<<"Expression matches with : a(bc)+"<<endl;
			return 1;
		}
		else s+=c;
	}
	return 0;
}

int main(){

		cout<<"Enter a string :";
		string ss;
		cin>>ss;
		int sum=checkABC(ss) +checkABCastr(ss) + checkABCplus(ss) + checkAbcPlus(ss);
		if(sum==0){
			cout<<"Method is not implemented";
		}
	
	return 0;
}
