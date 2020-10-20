//https://codeforces.com/contest/1/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);

        long long l, b, a;
        cin >> l >> b >> a;

        cout << fixed << (long long)(ceil((double)l / a) * ceil((double)b / a));
        return 0;
}
/*  CODED BY:-
         ___________________________________
        |                       ___         |
        |  /\   /\  \ /  |  |  |___   |__|  |
        | /~~\ /~~\  |   |__|   ___|  |  |  |
        |___________________________________|
*/