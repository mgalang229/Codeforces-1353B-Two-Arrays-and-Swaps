#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t; 
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		vector<int> a(n);
		for(auto &in : a) cin >> in;
		vector<int> b(n);
		for(auto &in : b) cin >> in;
		sort(a.begin(), a.end());
		sort(b.rbegin(), b.rend());
		int sum = 0;
		for(int i = 0; i < n; i++){
			if(i < k) sum += max(a[i], b[i]);
			else sum += a[i];
		} 
		cout << sum << "\n";
	}
	return 0;
}
