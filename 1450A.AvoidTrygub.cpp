#include<iostream>
#include<algorithm>
#include<string>
#include<regex>
using namespace std;
int main(){
	int t,n;
	string str[100];
	string sub="trygub";
	cin>>t;
	for(int i=0; i<t; i++){
		int n, pos[6];
		cin>>n>>str[i];
		while(true){
			int p=0,q=0;
			while(q<6 && p<n){
				if(str[i].at(p) == sub.at(q)){
					pos[q]=p;
					p++;
					q++;

				} else {
					p++;
				}
			}
			if(q==6){
				for(int l=0; l<6; l++)
				{
					str[i].at(pos[l])=sub.at(5-l);
				}
			} else {
				break;
			}
		}
	}
	for(int i=0;i<t;i++){
		cout<<str[i]<<"\n";
	}

	return 0;
}