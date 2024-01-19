//2 sô a, b --> tìm ucln
//
//- nêu b == 0 -> ucln la a 
//- neu a%b == 0 -> ucln la b 

#include<iostream>

using namespace std;

int ucln(int a, int b){
	if(b==0) return a;
	if(a%b==0) return b;
	return ucln(b, a%b);
	// thuc hiên dê quy lien tuc den khi tim ra 
//	a	b
//	-------
//	3	7
//	7	3
//	3	1
//	1	0 
	
	
}
int main(){
	int a, b;
	cout<<"- Nhap lan luot 2 so can tim uoc chung: ";
	cin>>a>>b;
	
	cout<<"\n -> UCLN: "<< ucln(a,b);
	
}
