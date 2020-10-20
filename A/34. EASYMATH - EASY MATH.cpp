#include <bits/stdc++.h>
using namespace std ;
#define int long long

int gcd (int x , int y) {
        if (y == 0) return x;
        else return gcd ( y , x % y ) ;
}

int lcm(int a , int b){
        return ( a * b / ( gcd ( a , b ) ) );
}

void solve() {
        int n , m , a , d ;
        cin >> n >> m >> a >> d ;
        int arr[5] = { a , (a + d) , (a + 2 * d) , (a + 3 * d) , (a + 4 * d) } ;
        int k = 5 , total , nb ;
        total = (1 << k) ;
        int d1 = (--n) ;
        int d2 = m ;
        int val ;
        for (int i = 1 ; i < total ; i++) {
                val = 1 , nb = 0 ;
                for (int j = 0 ; j < k ; j++) {
                        if (i & (1 << j)) {
                                nb++ ;
                                val = lcm(val , arr[j]) ;
                        }
                }
                if (nb & 1) 
                {
                        n -= d1 / val ;
                        m -= d2 / val ;
                }
                else
                {
                        n += d1 / val ;
                        m += d2 / val ;        
                }
        }
        cout << m - n << endl ;
}

int32_t main()
{
        #ifndef ONLINE_JUDGE
	        freopen("input.txt", "r", stdin);
	        freopen("output.txt", "w", stdout);
        #endif
        int testcases = 1 ;
        cin >> testcases ;
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
