#include <iostream>
using namespace std;
#define int long long
int32_t main() {
    
        int n , m , c ;
        while(cin >> n >> m >> c ) {
                if ( n == 0 && m == 0 && c == 0 ) return 0 ;
                if(c == 0){
                cout << (n - 7) * (m - 7) / 2 << endl ;
                }
                else cout << ( (n-7) * (m-7) + 1 ) / 2 << endl ;
        }
        return 0;
}