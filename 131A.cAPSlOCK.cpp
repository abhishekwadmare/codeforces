#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main(){
	string s;
	int flag=1;
	cin>>s;

	if(islower(s.at(0))){
		for(int i=1; i<s.length(); i++){
			if(islower(s.at(i))){
				flag=0;
			}
		}
	} else if(isupper(s.at(0))){
		for(int i=1; i<s.length(); i++){
			if(islower(s.at(i))){
				flag=0;
			}
		}
	} 

	if(flag==1){
		if(islower(s.at(0))){
			s.at(0)=toupper(s.at(0));
			for(int i=1;i<s.length();i++){
				s.at(i)=tolower(s.at(i));
			}
		} else {
			for(int i=0;i<s.length();i++){
				s.at(i)=tolower(s.at(i));
			}
		}
	}
	cout<<s;
	return 0;
}