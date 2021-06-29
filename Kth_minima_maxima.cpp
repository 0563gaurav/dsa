#include<iostream>
#define size 10
int *sort(int array[]);
int Kth_minima(int array[], int k);
int Kth_Maxima(int array[],int k);
using namespace std;
int main(){
	int k;
	int arr[size];
	for(int i=0;i<size;i++){
	cout<<"Enter "<<i<<"th element of array: ";
	cin>>arr[i];
	}
	cout<<"Enetr the vlue of K: ";
	cin>>k;
	cout<<"K"<<k<<"th Maxima of Array: "<<Kth_Maxima(arr,k)<<endl;
	cout<<"K"<<k<<"th Minima of Array: "<<Kth_minima(arr,k)<<endl;
	return 0;
}

int *sort(int array[]){
	int temp=0;
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(array[j]>array[i]){
				temp=array[j];
				array[j]=array[i];
				array[i]=temp;
			}
		}
	}
	return array;
}

int Kth_minima(int array[],int k){
	
	sort(array);
	return  array[k-1] ;
}

int Kth_Maxima(int array[], int k){
	sort(array);
	return array[size-k];
}
