#include <bits/stdc++.h>
using namespace std ;
#define int long long
int primeFactor(int n) { 
	int maxx = -1; 
	while (n % 2 == 0) { 
		maxx = 2; 
		n >>= 1; 
	} 
	for (int i = 3; i <= sqrt(n); i += 2) { 
		while (n % i == 0) { 
			maxx = i; 
			n = n / i; 
		} 
	} 
	if (n > 2) maxx = n; 
	return maxx; 
}

bool check(int x) {
        int temp = x ;
        x = x * x + 1 ;
        int y = primeFactor(x) ;
        //cout << y << endl ;
        return (y >= 2 * temp);
}
bool SetBits(int n) 
{  
        int counter = 0; 
        while (n) { 
                counter += n & 1; 
                n >>= 1; 
        } 
        if (counter >= 2) return true ;
        else return false ; 
} 
int32_t main() {
        int n ;
        cin >> n ;
        vector<int> v(n) , s , ss ;
        for (auto &x : v) {
                cin >> x ;
                if (SetBits(x)) {
                        s.push_back(x);
                }
        }
        sort(v.begin() , v.end(), greater<int>()) ;
        // int sz = ss.size() ;
        // for (int i = 0 ; i < sz ; i++) {
        //         if (check(ss[i])) {
        //                 cout << ss[i] << endl ;
        //                 return 0 ;
        //         }
        // }
        // cout << -1 << endl ;
        cout << v[0] << endl ;
        return 0 ;
}