#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main() {
        
        int queries;
        cin >> queries;
        list<int> l ;
        list<int> :: iterator it ;
        l.push_front(4) ;
        for (it = l.begin() ; it != l.end() ; it++) {
                cout << *it << endl ;
        }
        
        // while (queries--) {
        //         int q;
        //         cin >> q;

        //         list<int> l;

        //         if (q == 1) {
        //                 int num;
        //                 cin >> num;
        //                 l.push_front(num);
        //         }
        //         else if (q == 2) {
        //                 int num;
        //                 cin >> num;
        //                 l.push_back(num);
        //         } 
        //         else if (q == 3) {
        //                 cout << "type 3";
        //                 cout << l.front() << endl;
        //         } 
        //         else if (q == 4) {
        //                 cout << "type 4";
        //                 cout << l.back() << endl;
        //         } 
        //         else if (q == 5) {
        //                  l.pop_front();
        //         } 
        //         else if (q == 6) {
        //                 l.pop_back();
        //         } 
        //         else if (q == 7) {
        //                 auto itr = l.begin();
        //                 advance(itr, l.size() / 2);
        //                 l.erase(itr);
        //         } 
        //         else {
        //                 auto itr = l.begin();
        //                 advance(itr, l.size() / 2);
        //                 cout << *itr << endl;
        //         }
        // }
	return 0;
}