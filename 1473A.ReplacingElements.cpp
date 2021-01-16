#include<iostream>
using namespace std;
int main(){
	int t, n, d, a[100];
	cin>>t;
	for(int i=0; i<t; i++){ 	
		int s1=101, s1j, s2=102, flag=1;
		cin>>n>>d;
		for(int j=0; j<n; j++){
			cin>>a[j];
		}

		for(int j=0; j<n; j++){
			if(a[j]>d){
				flag=0;
			}
		}

		if(flag==1){
			cout<<"YES\n";
		} else {

			for(int j=0; j<n; j++){
				if(a[j]<=s1){
					s1 = a[j];
					s1j=j;
				}
			}

			for(int j=0; j<n; j++){
				if(j!=s1j && a[j]<s2){
					s2 = a[j];
				}
			}
			
			if((s1+s2)<=d){
				cout<<"YES\n";
			} else {
				cout<<"NO\n";
			}

		}

		
	}
	return 0;
}