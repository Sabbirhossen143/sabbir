#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        // Read coordinates of the four corners
        int x[4], y[4];
        for (int i = 0; i < 4; ++i) {
            cin >> x[i] >> y[i];
        }

        // Find the minimum and maximum coordinates
        int min_x = *min_element(x, x + 4);
        int max_x = *max_element(x, x + 4);
        int min_y = *min_element(y, y + 4);
        int max_y = *max_element(y, y + 4);

        // Calculate the side length and area of the square
        int side_length = max(max_x - min_x, max_y - min_y);
        int area = side_length * side_length;

        // Print the area for the current test case
        cout << area << endl;
    }

    return 0;
}

