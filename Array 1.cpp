#include<iostream>
using namespace std;

int main(){
	int a[5]={1,2,3,4,5};
	int b[]={1,2,3,4,5,6,7,8,9,10};
	//here we know that the size didnt given would not have any affect on the array size 
	
	for(int i=0;i<5;i++){
		cout<<a[i];
	}
	cout<<endl;
	
	cout<<a[2]<<endl;
	
	//alternate method for accessing a element
	cout<<2[a]<<endl;
	
	//alternate method using the pointer to access element 
	cout<<*(a+0)<<endl;
	
	
	//allocate a array in a heap
	
	int arr[9];
	int *p;
	p = new int[9];
	
	for(int i=0;i<5;i++){
		cout<<"enter elements"<<endl;
		cin>>arr[i];
	}
	
	for(int i=0;i<5;i++){
		cout<<arr[i];
	}
	
	arr[0]=5;
	p[1]=5;
	
	cout<<arr[5]<<endl;
	cout<<p[1]<<endl;   //check this??
	
	
}
