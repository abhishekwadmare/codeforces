#include<iostream>
using namespace std;
int main(){
	int force[100][3], n, x=0, y=0, z=0;
	cin>>n;
	for(int i=0; i<n; i++){
		for(int j=0; j<3;j++){
			cin>>force[i][j];
		}
	}
	for(int i=0; i<n; i++){
			x+=force[i][0];
			y+=force[i][1];
			z+=force[i][2];
	}
	if(x==0 && y==0 && z==0){
		cout<<"YES";
	} else {
		cout<<"NO";
	}

	return 0;
}