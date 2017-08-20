#include<bits/stdc++.h>
#define F(i, n, m) for (int i = n; i <= m; i++)
#define Fa(i, n, m) for (int i = n; i>= m; i--)
#define ll long long
using namespace std;

#define MN 100009

int arr[MN], b[MN];

void Check(int k, int a[]) {
	F(j, 1, k) {
		int n;
		cin >> n;
		memset(a, 0, MN);
		memset(b, 0, MN);
		for (int i = 1; i <= n; i++) {
			cin >> arr[i];
		}
		for (int i = 1; i <= n; i++) {
			b[arr[i] % n] += n; 
		}
//		for (int i = 1; i <= n; i++) 
//			cout << b[arr[i] % n] / n << " ";
//		cout << endl;
		int Max = b[arr[1] % n] / n;
		int pos = 1;
		for (int i = 2; i <= n; i++) {
		 	if (b[arr[i] % n] / n > Max) {
		 		Max = b[arr[i] % n] / n;
		 		pos = i;
			 }
		}

	//	cout << "max " << Max / n << " " << n << endl;
		if (Max > n / 2)
			cout << arr[pos] << endl;
		else cout << "NO" << endl;
	}
}

main () {
	int k;
	cin >> k;
	Check(k, arr);
}

