#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> numbers(n);
    for(int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int q;
    cin >> q;
    for(int i = 0; i < q; i++) {
        int y;
        cin >> y;


        int left = 0, right = n - 1;
        int result = -1;
        while(left <= right) {
            int mid = (left + right) / 2;
            if(numbers[mid] == y) {
                result = mid;
                right = mid - 1;
            } else if(numbers[mid] < y) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        if(result != -1) {
            cout << "Yes " << result + 1 << endl;
        } else {

            int upper_bound_index = left;
            cout << "No " << upper_bound_index + 1 << endl;
        }
    }

    return 0;
}
