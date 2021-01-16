#include<iostream>
#include<string>
using namespace std;
int main(){
	int n, count=0;
	string stone;
	cin>>n;
	cin>>stone;
	for(int i=0; i<stone.length()-1; i++){
		if(stone.at(i)==stone.at(i+1)){
			count++;
		}
	}
	cout<<count;
	return 0;
}