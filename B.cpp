#include<bits/stdc++.h>
#define F(i, n, m) for (int i = n; i <= m; i++)
#define Fa(i, n, m) for (int i = n; i>= m; i--)
#define ll long long
using namespace std;

#define MN 100001

int a[MN];

void Check(int k, int a[]) {
	F(z, 1, k) {
		int n, t;
		cin >> n >> t;
		F(i, 1, n) {
			cin >> a[i];
		} 
		F(i, t + 1, n)
			cout << a[i] << " ";
		F(i, 1, t) cout << a[i] << " ";	
		cout << endl;
	}//fors
}

main () {
	int k;
	cin >> k;
	Check(k, a);
}

