#include<bits/stdc++.h>
using namespace std;

#define vi                  vector<int>
#define vvi                 vector<vector<int> >


void solve() {

	int n;
	cin >> n;

	if (n == 1) {
		cout << 1 <<endl;
		return;
	}

	if (n == 2) {
		cout << -1 <<endl;
		return;
	}

	vvi mat(n, vi (n, 0));

	int val = 1;

	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			if ((i & 1) && (j & 1))
				mat[i][j] = val++;
			else if ((i % 2 == 0) && (j % 2 == 0))
				mat[i][j] = val++;
		}
	}

	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			if ((i % 2 == 0) && (j & 1))
				mat[i][j] = val++;
			else if ((i & 1) && (j % 2 == 0))
				mat[i][j] = val++;
		}
	}

	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cout << mat[i][j] << ' ';
		}
		cout <<endl;
	}
}


int main()
{
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
		// cout <<endl;
	}
	return 0;
}

