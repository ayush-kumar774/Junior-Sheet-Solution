// https://codeforces.com/problemset/problem/431/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
        int a1, a2, a3, a4 ;
        cin >> a1 >> a2 >> a3 >> a4 ;
        string s ;
        cin >> s ;
        int burnCalories = 0 ;
        for (int i = 0 ; i < s.size() ; i++) {
                if(s[i] == '1') burnCalories += a1 ;
                if(s[i] == '2') burnCalories += a2 ;
                if(s[i] == '3') burnCalories += a3 ;
                if(s[i] == '4') burnCalories += a4 ;
        }
        cout << burnCalories << endl ;
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