#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	string s,s1, v1="AEIOUY", v2="aeiouy";
	cin>>s;
	for(int i=0; i<s.length(); i++){
		for(int j=0; j<v1.length(); j++){
			if(s.at(i)==v1.at(j) || s.at(i)==v2.at(j)){
				s.at(i)=' ';
			}
		}
	}
	transform(s.begin(),s.end(),s.begin(),::tolower);
	for(int i=0; i<s.length(); i++){
		if(s.at(i)!=' '){
			cout<<"."<<s.at(i);
		}
	}
	return 0;
}