#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			cout<<" ";
		}
		for(int j=0;j<2*i+1;j++){
			cout<<char(65+j);
		}
		cout<<"\n";
	}
	for(int i=n-1;i>0;i--){
		for(int j=n-i;j>0;j--){
			cout<<" ";
		}
		for(int j=0;j<2*i-1;j++){
			cout<<char(65+j);
		}
		cout<<"\n";
	}
	return 0;
}
