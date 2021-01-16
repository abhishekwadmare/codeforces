#include<iostream>
using namespace std;
int main(){
	int problems, solvable = 0, a, b, c;	
	cin>>problems;
	for(int i=0; i<problems;i++){
		cin>>a>>b>>c;
		if((a+b+c)>=2)
			solvable++;
	}
	cout<<solvable;
	return 0;
}
