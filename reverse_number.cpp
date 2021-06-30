#include<iostream>
using namespace std;
int main(){
	int num,reverse=0;
	cout<<"Enter a Number ";
	cin>>num;
	while(num>0){
		int lastdigit=num%10;
		reverse=reverse*10 +lastdigit;
		num=num/10;
	}
	cout<<"Reverse number is : "<<reverse<<endl;
	return 0;
}


