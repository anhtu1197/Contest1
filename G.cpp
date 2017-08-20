#include<bits/stdc++.h>
#define F(i, n, m) for (int i = n; i <= m; i++)
#define Fa(i, n, m) for (int i = n; i>= m; i--)
#define ll long long
using namespace std;

bool dx(string s) {
	int i = 0, j = s.size() - 1;
	int dem = 0;
	while (i < j) {
		if (s[i] != s[j]) {
			dem++;
		}
		i++;
		j--;
	}
//	cout << dem << endl;
	if (dem == 1) return true;
	else if (dem == 0 && s.size() % 2 != 0) return true;
	return false;
}

int check(int k) {
	F(i, 1, k) {
		string s;
		cin >> s;
		if (dx(s)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}

main () {
	int k;
	cin >> k;
	check(k);
}

