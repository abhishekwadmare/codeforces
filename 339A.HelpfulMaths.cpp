#include<iostream>
using namespace std;
#include<string>
int main(){
	string num;
	string one, two, three;
	cin>>num;
	int length=num.length();
	for(int i=0; i<length; i++)
	{	
		if(num.at(i)=='1'){
			one.push_back(num.at(i));
		} else if(num.at(i)=='2'){
			two.push_back(num.at(i));
		}else if(num.at(i)=='3'){
			three.push_back(num.at(i));
		}
	}

	if(one.length()!=0){
		for(int i=0; i<one.length(); i++){
			cout<<one.at(i);
			if(i!=one.length()-1){
				cout<<"+";
			}else if(two.length()!=0||three.length()!=0){
				cout<<"+";
			}
			
		}
	}

	if(two.length()!=0){
		for(int i=0; i<two.length(); i++){
			cout<<two.at(i);
			if(i!=two.length()-1){
				cout<<"+";
			}else if(three.length()!=0){
				cout<<"+";
			}
		}
	}
	if(three.length()!=0){
		for(int i=0; i<three.length(); i++){
			cout<<three.at(i);
			if(i!=three.length()-1){
				cout<<"+";
			}
		}
	}

return 0;
	
	
}