#include<bits/stdc++.h>
#define F(i, n, m) for (long long i = n; i <= m; i++)
#define Fa(i, n, m) for (long long i = n; i>= m; i--)
#define ll long long
using namespace std;
#define MN 1000003
long long a[MN], b[MN];

void Check(long long k) {

	F(j, 1, k) {
		long long n;
		cin >> n;
		memset(a, 0, MN);
		memset(b, 0, MN);
		F(i, 1, n) {
			cin >> a[i];
			b[a[i]]++;
		}
		long long s = INT_MIN, pos = 1;
		F(i, 1, n) {
			if (b[i] > s) {
				s = b[i];
				pos = i;
			}
		}
//		cout << "S = " << s << endl;
		if (s > n / 2) cout << pos << endl;
		else cout << "NO" << endl;
	}
}


main () {
	long long k;
	cin >> k;
	Check(k);
}

