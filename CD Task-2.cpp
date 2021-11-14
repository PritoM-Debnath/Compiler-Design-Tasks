#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int a[5]={0};
	int count=0, x=0;
	
	
	while(1){
		string t;
		getline(cin, t);

		if(t[t.find('+')]=='+'){
			a[0]=1;
		}
		else if(t[t.find('-')]=='-'){
			a[1]=1;
		}
		else if(t[t.find('*')]=='*'){
			a[2]=1;
		}
		else if(t[t.find('/')]=='/'){
			a[3]=1;
		}
		else if(t[t.find('=')]=='='){
			a[4]=1;
		}
		//breaking point
		if(t.size()<=1 && t[t.find('}')]!='}' && x<5){
			x++;
			break;
		}
	}
	
	
	int i=0;
	int sum=0;
	for(i=0; i<5; i++){
		if(a[i]==1){
			sum++;
			if(i==0 ){
				cout<<"Operator-"<<sum<<": addition"<<endl;
			}
			else if(i==1){
				cout<<"Operator-"<<sum<<": substraction"<<endl;
			}
			else if(i==2){
				cout<<"Operator-"<<sum<<": multiplication"<<endl;
			}
			else if(i==3){
				cout<<"Operator-"<<sum<<": divition"<<endl;
			}
			else if(i==4 ){
				cout<<"Operator-"<<sum<<": assignment"<<endl;
			}
		}
	}

	cout<<"Total number of the operators: "<<sum<<endl;

	return 0;
}
