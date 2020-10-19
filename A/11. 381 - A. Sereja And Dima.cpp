// http://codeforces.com/problemset/problem/381/A

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define endl '\n'

void solve()
{
        int n ;
        cin >> n ;
        vector < int > nums(n) ;
        for( auto &x : nums ) cin >> x ;
        int sPoints = 0 , dPoints = 0 , counter = 0 , i = 0 , j = n - 1;
        while(n--){
                counter++ ;
                //cout << counter << endl ;
                if ( counter % 2 == 1 ) {
                        if ( nums[i] > nums[j] ) {
                                //std::cout << "Sereja " << " " << nums[i] << endl ;
                                sPoints += nums[i] ;
                                i++ ;
                        }
                        else if ( nums[i] < nums[j] ) {
                                //std::cout << "Sereja " << " " << nums[j] << endl ;
                                sPoints += nums[j] ;
                                j-- ;
                        }
                        else if( nums[i] == nums[j]) {
                                sPoints += nums[j] ;
                        }
                }
                if (counter % 2 == 0 )
                {
                        if ( nums[i] > nums[j] ) {
                                //std::cout << "Dima " << " " << nums[i] << endl ;
                                dPoints += nums[i] ;
                                i++ ;
                        }
                        else if ( nums[i] < nums[j] ) {
                                //std::cout << "Dima " << " " << nums[j] << endl ;
                                dPoints += nums[j] ;
                                j-- ;
                        }
                        else if ( nums[i] == nums[j] ) {
                                dPoints += nums[j] ;
                        }
                }
        }
        std::cout << sPoints << " " << dPoints << endl ;
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