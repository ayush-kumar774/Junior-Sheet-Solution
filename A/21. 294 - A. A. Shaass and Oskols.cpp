// https://codeforces.com/problemset/problem/294/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
        int n;
        cin >> n;
        vector<int> v(n);
        
        for (int i = 0; i < n; i++) {
                cin >> v[i];
        }
        
        int t;
        cin >> t;
        while (t--) {
                int wire, pos;
                cin >> wire >> pos;
                if (wire == 1) {
                v[1] += v[0] - pos;
                v[0] = 0;
                }
                else if (wire == n) {
                v[n - 2] += pos - 1;
                v[n - 1] = 0;
                }
                else {
                v[wire - 2] += pos - 1;
                v[wire] += v[wire - 1] - pos;
                v[wire - 1] = 0;
                }
        }
                for (auto x : v) cout << x << endl;
}
int32_t main()
{
        int testcases = 1 ;
        //cin >> testcases ;
        while(testcases--)
        {
                solve() ;
        }
        return 0 ;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/