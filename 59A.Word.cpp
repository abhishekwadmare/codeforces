#include<cctype>
#include<cstring>
#include<iostream>
using namespace std;
int main(){
	char word[100];
	int lower=0, upper=0;
	cin>>word;
	for(int i=0; i<strlen(word); i++){
		if(islower(word[i])){
			lower++;
		} else {
			upper++;
		}
	}
	if(lower>=upper){
		for(int i=0; i<strlen(word); i++){
			word[i]=tolower(word[i]);
		}
	} else {
		for(int i=0; i<strlen(word); i++){
			word[i]=toupper(word[i]);
		}
	}
	cout<<word;
	return 0;
}