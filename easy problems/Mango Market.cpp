#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
	cin >> n >> m;
	long long sum = 0;
	for (int i = 1; i <= n; i++) {
	    long long x;
	    cin >> x;
	    sum += x;
	}
	long long edges = (long long)m, unused = ((long long)n * (n - 1)) / 2LL - edges;
	for (int i = 0; i < m; i++) {
	    int u, v;
	    cin >> u >> v;
	}
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
	    char x;
	    cin >> x;
	    if (x == '+') {
	        edges++;
	        unused--;
	        int u, v;
	        cin >> u >> v;
	    }
	    else if (x == '-') {
	        edges--;
	        unused++;
	        int u, v;
	        cin >> u >> v;
	    }
	    else if (x == '?') {
	        cout << sum + edges - unused << '\n';
	    }
	}
	return 0;
}