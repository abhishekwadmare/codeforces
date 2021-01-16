#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,X=0;
	string c;
	cin>>n;
	for(int i=0; i<n;i++){
			cin>>c;
		if((c[0]=='X' && c[1]=='+' && c[2]=='+') || (c[0]=='+' && c[1]=='+' && c[2]=='X')){
			X++;
		} else if((c[0]=='X' && c[1]=='-' && c[2]=='-') || (c[0]=='-' && c[1]=='-' && c[2]=='X')){
			X--;
		}
	}
	cout<<X;
	return 0;
}