#include<iostream>
#include<string>
#include<regex>
using namespace std;
int main(){
	string name;
	cin>>name;
	if(islower(name.at(0)))
		name.at(0)=name.at(0)-32;
	cout<<name;
	return 0;
}