#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	int count=1,flag=0;
	for(int i=1;i<s.length();i++){
		if(s.at(i)==s.at(i-1)){
			count++;
			if(count>=7){
				flag=1;
			}
		} else {
			count=1;
		}
	}
	if(flag==1){
		cout<<"YES";
	} else {
		cout<<"NO";
	}
	return 0;
}