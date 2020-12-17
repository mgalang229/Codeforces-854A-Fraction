#include <bits/stdc++.h>
using namespace std;

#define ll long long

int gcd(int a, int b) {
	if(b==0)
		return a;
	return gcd(b, a%b);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	int a=0, b=0;
	for(int i=1; i<=n; ++i)
		for(int j=1; j<=n; ++j)
			if(i+j==n&&i<j&&gcd(i, j)==1) {
				a=i;
				b=j;
			}
	cout << a << " " << b << "\n";
}
