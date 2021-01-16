#include<iostream>
using namespace std;
int main(){
	long long n,m,a,na,ma,num;
	cin>>n>>m>>a;
	
	if(n%a==0){
		na=n/a;
	} else {
		na=(n/a)+1;
	}

	if(m%a==0){
		ma=m/a;
	} else {
		ma=(m/a)+1;
	}

	num=na*ma;

	cout<<num;

	return 0;
}