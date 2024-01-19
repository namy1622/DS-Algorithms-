#include<iostream>

using namespace std;

long long giaiThua(int n){
	if(n == 0){
		return 1;
	}
	return n * giaiThua(n-1);
}

int main(){
	int n;
	cout<<"- Nhap so can tinh giai thua: ";
	cin>> n;
	cout<<"\n--> Ket qua: "<< giaiThua(n);
	return 0;
}
