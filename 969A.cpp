#include<iostream>
using namespace std;

int main () {
    int t; cin >> t;
    while ( t-- ) {
        int l , r;
        cin >> l >> r;
        int diff = 0;
        if ( l % 2 == 0 && r % 2 == 0 ) diff = r - l - 2;
        else if ( l % 2 != 0 && r % 2 != 0 ) diff = r - l;
        else diff = r - l - 1;

        cout << (diff+2)/4 << endl;
    }
    return 0;
}
