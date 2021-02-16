// DP
#include <iostream>
using namespace std;

int combin(int n, int k);

int main() {
	int t,n,m;
	cin >> t;
	for(int i=0; i<t; i++){
		cin >> n >> m;
		if(n==m){
			cout << 1 << endl;
		}
		else{
			cout << combin(m,n) << endl;
		}
	}
	return 0;
}

int combin(int n, int k){
	int arr[30][30];
	
	for(int i=0; i<=n; i++){
		for(int j=0; j<=k; j++){
			if(j==0 || i==j)
				arr[i][j] = 1;
			else{
				arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
			}
		}
	}
	return arr[n][k];
}

// 재귀
#include <iostream>
using namespace std;

unsigned long long int factorial(int n, int k);

int main() {
	int t,n,m;
	cin >> t;
	for(int i=0; i<t; i++){
		cin >> n >> m;
		if(n==m){
			cout << 1 << endl;
		}
		else if(m-n <= n){
			cout << factorial(m,m-n) / factorial(m-n,m-n) << endl;
		}
		else{
			cout << factorial(m,n) / factorial(n,n) << endl;
		}
	}
	return 0;
}

unsigned long long int factorial(int n, int k){
	if(k==1)
		return n;
	else
		return n * factorial(n-1,k-1);
}