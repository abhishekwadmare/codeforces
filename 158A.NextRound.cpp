#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n, k, a[100], qualifier = 0;	
	cin>>n>>k;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int j = sizeof(a)/sizeof(a[0]);
	sort(a, a+n, greater<int>());
	for(int i=0; i<n; i++){
		if(i<k){
			if(a[i]>0)
				qualifier++;
		} else if(i>=k){
			if(a[i]==a[i-1]){
				if(a[i]>0)
					qualifier++;
			}
			else
				break;
		}
	}
	cout<<qualifier;
	return 0;

}