#include<iostream>
using namespace std;
int main(){
	string s="hello",s1;
	int j=0;
	cin>>s1;
	for(int i=0; i<s1.length(); i++){
		if(s1.at(i)==s.at(j)){
			j++;
		}
		if(j==5){
			break;
		}
	}
	if(j==5){
		cout<<"YES";
	} else {
		cout<<"NO";
	}
	return 0;
}