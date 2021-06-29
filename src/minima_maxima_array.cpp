#include<iostream>
#define size 10
int maxima(int array[]);
int minima(int array[]);
using namespace std;
int main(){
	int arr[size];
	for(int i=0;i<size;i++){
	cout<<"Enter "<<i<<"th element of Array: ";
	cin>>arr[i];
	}
	cout<<"MAXIMA OF ARRAY: "<<maxima(arr)<<endl;
	cout<<"MINIMA OF ARRAY: "<<minima(arr)<<endl;




	return 0;
}

int maxima(int array[]){
	int max=array[0];
	for(int i=0;i<size;i++){
		if(max<array[i]){
			max=array[i];
		}
	}
	return max;
}


int minima(int array[]){
	int min=array[0];
	for(int i=0;i<size;i++){
	       if(min>array[i]){
	       min=array[i];
		}
	}
	return min;
}	
