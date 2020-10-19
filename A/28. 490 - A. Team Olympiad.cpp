// http://codeforces.com/problemset/problem/490/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
        int n ;
        cin >> n ;
        vector <int > v(n) ;
        int _1 = 0 , _2 = 0, _3 = 0;
        for(auto &x : v )  {
                cin >> x ;
                if( x == 1 ) _1 ++ ;
                if( x == 2 ) _2 ++ ;
                if( x == 3 ) _3 ++ ;
        } 
        // cout << _1 << " " << _2 << " " << _3 << endl ;
        cout << min( { _1 , _2 , _3 } ) << endl ;
        if ( (min( { _1 , _2 , _3 } ) ) != 0 ) {
                int a = min( { _1 , _2 , _3 } )  ;
                vector<int> one , two , three ;
                for(int i = 0 ; i < n ; i++) {
                if (v[i] == 1) {
                        one.push_back(i + 1) ; 
                }
                if (v[i] == 2) {
                        two.push_back(i + 1) ; 
                }
                if (v[i] == 3) {
                        three.push_back(i + 1) ; 
                }
                }
                for (int i = 0 ; i < a ; i++) {
                cout << one[i] << " " << two[i] << " " << three[i] << endl ;
                }
        }
    
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