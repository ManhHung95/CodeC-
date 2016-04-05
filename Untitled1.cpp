#include<stdio.h>
int gt(int n){
	if (n==0) return 1;
	else return n*gt(n-1);
}
int main(){
	int n;
	cout<<"Nhap vao n: "; 
	cin>>n;
	cout<<n<<"! = "<<gt(n);
	return 0;
}
