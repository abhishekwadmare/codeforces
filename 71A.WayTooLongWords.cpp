#include<iostream>
#include<string>
using namespace std;

int main(){
	int n;
	string word;
	string out[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>out[i];
	}

	for(int i=0;i<n;i++){
		if(out[i].length()>10){
			cout<<out[i].at(0)<<out[i].length()-2<<out[i].at(out[i].length()-1)<<"\n";
		} else{
			cout<<out[i]<<"\n";
		}
	}



	return 0;
}

