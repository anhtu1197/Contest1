#include<bits/stdc++.h>
#define F(i, n, m) for (int i = n; i <= m; i++)
#define Fa(i, n, m) for (int i = n; i>= m; i--)
#define ll long long
using namespace std;


int nt (int n) {
	int s = 2;
	int sum = 0;
	while (n > 1) {
		if (n % s == 0) {
			n = n / s;
		//	cout << s << " ";
			sum += s;
		}
		else s++;
		//cout << n << endl;
	}
	return sum;
	
} // nhan tu

int tcs(int n) {
	
}

main () {
	int n;
	cin >> n;
	cout << nt(n);
	
}

