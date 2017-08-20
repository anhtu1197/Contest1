#include<bits/stdc++.h>
#define F(i, n, m) for (int i = n; i <= m; i++)
#define Fa(i, n, m) for (int i = n; i>= m; i--)
#define ll long long
using namespace std;
#define MN 100001
struct cv {
	int bd;
	int kt;
};

cv arr[MN];


void Sort(cv arr[], int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			if (arr[j].kt < arr[i].kt ) {
				swap(arr[j].kt, arr[i].kt);
				swap(arr[j].bd, arr[i].bd);
			}
		}
	}
}


void Print(cv arr[], int n) {
	for (int i = 1; i <= n; i++) {
		cout << arr[i].bd << " " << arr[i].kt << endl;
	}
	cout << endl;
}


void check(int k) {
	F(i, 1, k) {
		int n;
		cin >> n;
		F(j, 1, n) {
			cin >> arr[j].bd;
			cin >> arr[j].kt;
		}
		Sort(arr, n);
		int count = 1;
		int s = 1;
		for (int v = 2; v <= n; v++) {
			if (arr[v].bd - arr[s].kt >= 0) {
				s = v;
				count++;
			}
		}
		cout << count << endl;
	}
}


main () {
	int k;
	cin >> k;
	check(k);
}


