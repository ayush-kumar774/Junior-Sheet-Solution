/*
   author: canis_majoris123
   time : 05:04
   Date : 20 - 10 - 2020
*/

// In the name of Aadi Shakti
// We are nothing and you are everything
// Jai Mata Di

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'
#define sz(v)	( (int) ( (v).size() ) )
#define all(v)	( (v).begin() ) , ( (v).end() )
#define allr(v)	( (v).rbegin() ) , ((v).rend())

struct Participant {
        int bPoints = 0 , aPoints = 0 ;
        bool rated = false ;
};

void solve()
{
        int n ;
        cin >> n ;
        bool impossible = false , impossible2 = false ;
        Participant v[n] ;
        for (int i = 0; i < n ; i++) {
                cin >> v[i].bPoints >> v[i].aPoints ;
                if (v[i].bPoints != v[i].aPoints) {
                        v[i].rated = true ;
                }
        }
        set<int> s , s2;
        for (int i = 0 ; i < n ; i++) {
                s.insert(v[i].aPoints);
                s2.insert(v[i].bPoints);
        }
        if (sz(s) != n) impossible = true ;
        if (sz(s2) != n) impossible2 = true ;
        bool rate = false ;
        for (int i = 0 ; i < n ; i++) {
                if (v[i].rated) {
                        rate = true ;
                        break ;
                }
        }
        if (rate) cout << "rated" << endl ;
        else if (!rate) cout << "unrated" << endl ;
        else if (impossible or impossible2) {
                cout << "maybe" << endl ;
        }
        
}

int32_t main()
{
        // #ifndef ONLINE_JUDGE
	//         freopen("input.txt", "r", stdin);
	//         freopen("output.txt", "w", stdout);
        // #endif
        fast ;
        int testcases = 1 ;
        // cin >> testcases ;
        while(testcases--)
        {
                solve() ;
        }
        return 0;
}
/*  CODED BY:-
         ___________________________________
        |                       ___         |
        |  /\   /\  \ /  |  |  |___   |__|  |
        | /~~\ /~~\  |   |__|   ___|  |  |  |
        |___________________________________|
*/