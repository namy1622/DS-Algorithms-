#include<iostream>
#include<math.h>
using namespace std;

int searchMin(int a[], int n){
	int k = 0;
	for(int i=1; i<n; i++){
		if(a[k] > a[i]){
			k = i;
		}
	}
	return k;
} 

int searchMax(int a[], int n){
	int k = 0; 
	for(int i=1; i<n; i++){
		if(a[k] <= a[i]){
			k = i;
		}
	}	
	return k;
}

void printArray(int a[], int n){
	for(int i = 0; i < n; i++){
		cout<< a[i]<< " ";
	}
}

int main(){
	int n, x;
	int a[100001];
	cout<<"- Nhap so luong phan tu mang: ";
	cin>> n;
	for(int i=0; i<n; i++){
		cout<< "+ a["<<i+1<<"] = ";
		cin>> a[i];
	}
	printArray(a,n);
	cout<<"\n\n";
	int csMin = searchMin(a, n);
	int csMax = searchMax(a,n);
	swap(a[csMin],a[csMax]);
	printArray(a,n);
}
