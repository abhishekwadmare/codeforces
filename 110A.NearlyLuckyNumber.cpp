#include<iostream>
#include<string>
using namespace std;
int main(){
	long long n;
	int flag=1,num,count=0;
	cin>>n;
	while(n){
		num=n%10;
		n/=10;
		if(num==7 || num==4){
			count++;
		}
	}
	if(count!=4 && count!=7){
		flag=0;
	}
	if(flag==0){
		cout<<"NO";
	} else {
		cout<<"YES";
	}
	return 0;
}