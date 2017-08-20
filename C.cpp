#include<bits/stdc++.h>
#define F(i, n, m) for (int i = n; i <= m; i++)
#define Fa(i, n, m) for (int i = n; i>= m; i--)
#define ll long long
using namespace std;

int arr[10] = {1000, 500, 200, 100, 50, 20, 10, 5,
				2, 1};

void check(int k) {
	F(j, 1, k) {
		int n;
		cin >> n;
		int i = 0;
		int dem = 0;
		while(n > 0) {
			if (n - arr[i] >= 0 ) {
				dem++;
				n = n - arr[i];
			}
			else i++;
		}
		cout << dem << endl;
	}
}

main () {
	int k;
	cin >> k;
	check(k);
}

