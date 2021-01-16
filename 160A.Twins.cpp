#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n, x, sum=0, coin=0, mid_sum=0;
	vector<int> a;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
		sum+=x;
	}
	
	sort(a.begin(),a.end(),greater<int>());

	for(int i=0;i<n;i++){
		mid_sum += a[i];
		coin++;
		if(mid_sum>(sum/2)){
			break;
		}
	}
	cout<<coin;
	return 0;
}