//https://codeforces.com/problemset/problem/136/A
#include <bits/stdc++.h>
#define aakriti long long int
using namespace std;
int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        
        aakriti size;
        cin >> size;
        
        aakriti arr[size];
        
        for (aakriti i = 0; i < size; ++i) {
                int n;
                cin >> n;
                arr[n] = i + 1;
        }
        
        for (aakriti i = 1; i <= size; ++i) {
                cout << arr[i] << " ";
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