#include<bits/stdc++.h>
using namespace std;
// drive code
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    string s="";
    int count=0;


    vector<string>comment;
    
    while(1){
    	string t;
		getline(cin, t);

		if(t[0]=='/'){
			comment.push_back(t);
    	}
    	else if(t[t.size()-1]=='/'){
			comment.push_back(t);
		}
    	else{
			s+=t;
			s+="\n";
		}
		if(t.find('{')<t.size()){
			count++;
		}
    	if(t.find('}')<t.size()){
    		count--;
		}
		if(t.find('}')<t.size() and count==0){
			break;
		}
	}
    

    for(auto u:comment){
    cout<< u << endl;
    }

    cerr<< s << endl;
return 0;
}
