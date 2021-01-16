#include<iostream>
using namespace std;
int main(){
	int I,J,count=0, mat[5][5];
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			cin>>mat[i][j];
			if(mat[i][j]==1){
				I=i;
				J=j;
			}
		}
	}
	
	if(I<2){
		for(int i=I; i<2; i++){
			count++;
		}
	} else if(I>2){
		for(int i=I; i>2; i--){
			count++;
		}
	}

	if(J<2){
		for(int j=J; j<2; j++){
			count++;
		}
	} else if(J>2){
		for(int j=J; j>2; j--){
			count++;
		}
	}

	cout<<count;
	
	return 0;
}