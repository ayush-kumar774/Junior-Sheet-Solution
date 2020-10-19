#include<bits/stdc++.h>
using namespace std;
#define aakriti string
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        aakriti s;
        cin >> s;
        sort (s.begin(), s.end());
        s.erase(unique(s.begin(), s.end()), s.end());
        if( (s.size() % 2 ) == 0)
                cout << "CHAT WITH HER!";
        else
                cout << "IGNORE HIM!";
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/