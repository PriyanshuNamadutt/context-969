#include<iostream>
#include<vector>
using namespace std;

int main () {
    int t; cin >> t;
    while ( t-- ) {
        int n , m;
        cin >> n >> m;
        vector<int> a(n);
        int mx = 0;
        for ( int i = 0; i < n; i++ ) {
            cin >> a[i];
            if ( a[i] > mx ) mx = a[i];
        }

        for ( int i = 0; i < m; i++ ) {
            char ch ; cin >> ch;
            int l , r;
            cin >> l >> r;

            if ( l <= mx && r >= mx ) {

                if ( ch == '+' ) mx++;
                else mx--;
            }

            cout << mx << " ";
        }
        cout << endl;
    }
    return 0;
}
