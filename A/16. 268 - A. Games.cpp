//https://codeforces.com/problemset/problem/268/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
        int number, count = 0;
        cin >> number;
        vector<int> A(number), B(number);
        for(int i = 0; i< number; i++)
                cin >> A[i] >> B[i];
        for(auto X: A)
                for(auto Y: B)
                {
                        if( X == Y )
                                count++;
                }
        cout << count << endl ;
}
/*  CODED BY:-
 ___________________________________
|                       ___         |
|  /\   /\  \ /  |  |  |___   |__|  |        
| /~~\ /~~\  |   |__|   ___|  |  |  |
|___________________________________|
 
*/