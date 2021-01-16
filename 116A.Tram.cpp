#include<iostream>
using namespace std;
int main(){
	int n, a, b, passangers=0, cap=0;
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>a>>b;
		passangers-=a;
		passangers+=b;
		if(cap<passangers){
			cap=passangers;
		}
	}
	cout<<cap;
	return 0;
}