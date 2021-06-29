/* this program contains logic  to revrse the array in c+*/

#include<iostream>
#define size 7
int* reverse_array(int array[]);

using namespace std;
int main(){
	int arr[size];

	for(int i=0;i<size;i++){
		cout<<"Enter the "<<i<<"th element of array: ";
		cin>>arr[i];
	}
	cout<<"Old Array Element:  \n";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<endl;
	}
	cout<<"New Array: \n";
	int *p ;
	p=reverse_array(arr);
	for(int i=0;i<size;i++){
	cout<<p[i]<<endl;
	}


	return 0;
}

int*  reverse_array(int array[size]){
	for(int i=0;i<(int)(size/2);i++){
			int temp=0;
			temp=array[i];
			array[i]=array[size-(i+1)];
			array[size-(i+1)]=temp;
	}
	return array;



}
		
