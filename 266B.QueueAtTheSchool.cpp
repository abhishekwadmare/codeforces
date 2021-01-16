#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,t;
	string que, set="BG";
	cin>>n>>t>>que;
	for(int i=0; i<t; i++){
		for(int j=0; j<que.length()-1; j++){
			if(que.at(j)==set.at(0) && que.at(j+1)==set.at(1)){
				que.at(j)   = set.at(1);
				que.at(j+1) = set.at(0);
				j++;
			}
		}
	}
	cout<<que;
	return 0;
}