#include<iostream>
#include<string>
using namespace std;
int main(){
	int dist=0;
	string name;
	cin>>name;
	for(int i=0;i<name.length();i++){
		int flag=0;
		for(int j=i-1; j>=0; j--){
			if(name.at(i)==name.at(j)){
				flag++;
			}
		}
		if(flag==0){
			dist++;
		}
	}
	if((dist)%2==0){
		cout<<"CHAT WITH HER!";
	} else {
		cout<<"IGNORE HIM!";
	}
	return 0;
}