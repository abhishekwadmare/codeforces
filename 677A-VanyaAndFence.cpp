#include<iostream>
using namespace std;
int main(){
	int n, h, a,width=0;
	cin>>n>>h;
	for(int i=0; i<n; i++){
		cin>>a;
		if(a<=h){
			width++;
		} else {
			width+=2;
		}
	}
	cout<<width;
	return 0;
}