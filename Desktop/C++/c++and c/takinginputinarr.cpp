#include<iostream>
using namespace std;
int main(){
	int arr[5];
	cout<<"Enter the element values: ";
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	for(int i=0;i<5;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}