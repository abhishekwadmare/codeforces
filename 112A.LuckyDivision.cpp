#include<iostream>
using namespace std;
int main(){
	int a[]={4,7},flag=0,n;
	cin>>n;
	if(n%4==0 || n%7==0){
		flag=1;
	}

	int i=0,x;
	while(i<2){
		int j=0;
		while(j<2){
			x=a[i]*10+a[j];
			if(n%(x)==0){
				flag=1;
			}
			// cout<<"x:"<<x<<"\n";
			j++;
		}
		i++;
	}

	int h=0;
	while(h<2){
		int i=0;
		while(i<2){
			int j=0;
			while(j<2){
				x=a[h]*100+a[i]*10+a[j];
				if(n%(x)==0){
					flag=1;
				}
				// cout<<"x:"<<x<<"\n";
				j++;
			}
			i++;
		}
		h++;
	}

	if(flag==1){
		cout<<"YES";
	} else {
		cout<<"NO";
	}

	return 0;
}