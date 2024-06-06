#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s, f;
        cin >> s >> f;

        vector<int> diff(n);
        int cat_in_hand = 0;
        for (int i = 0; i < n; ++i) {
            diff[i] = f[i] - s[i];
            if( diff[ i ] == -1 ){
                cat_in_hand++;
            }
        }
        int days = 0;
        for (int i = 0; i < n; ++i) {
            if (diff[i] == 1) {
                // Need a cat
                if (cat_in_hand > 0) {
                    cat_in_hand--;
                }
                else {
                    days++;
                }
            }
            else if (diff[i] == -1) {
                // remove a cat
                days++;
            }
        }
        cout << days << endl;
    }
    return 0;
}

