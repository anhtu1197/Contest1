#include<bits/stdc++.h>
#define F(i, n, m) for (int i = n; i <= m; i++)
#define Fa(i, n, m) for (int i = n; i>= m; i--)
#define ll long long
using namespace std;

//aaabccddd
void cut (string s) {
	int c = 0;
	while(c < static_cast <int> (s.size() - 1)) {
		if ( c > -1 && s[c] == s[c + 1]) {
			s.erase(c, 2);
			c--;
		}
		else c++;
	}
	if (s.empty()) cout << "Empty String" << endl;
	else cout << s << endl;
}


main () {
	string s;
	cin >> s;
	cut(s);
}


