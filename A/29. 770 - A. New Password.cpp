// http://codeforces.com/problemset/problem/770/A
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
    
void solve()
{
        int n , m ;
        cin >> n >> m ;
        string password = "abcdefghijklmnopqrstuvwxyz" ;
        int a = n / m ;
        int rem = n % m ;
        while(a--) {
                for (int i = 0 ; i < m ; i++) cout << password[i] ;
        }
        for(int i = 0 ; i < rem ; i++) cout << password[i] ;
        cout << endl ;   
}
    
int32_t main()
{
        fast;
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