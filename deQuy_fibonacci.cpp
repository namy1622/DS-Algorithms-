// fibonacci la day so: 1 1 2 3 5 8 13....
	// la day  so do = 2 so truoc no cong lai
	
#include<iostream>

using namespace std;

long long fibonacci(int n){
	if (n == 1 || n == 2) return 1;
	return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
	int n;
	cin >> n;
	cout << fibonacci(n);
	return 0;
}
