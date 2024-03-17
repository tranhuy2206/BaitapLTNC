#include <bits/stdc++.h>
using namespace std;

string balancedSums(vector<int> arr, vector<int> aimer) {
    int n = arr.size();
    long long totalSum = aimer[n - 1];
    long long leftSum = 0;

    for (int i = 0; i < n; i++) {
        totalSum -= arr[i];
        if (leftSum == totalSum) {
            return "YES";
        }
        leftSum += arr[i];
    }

    return "NO";
}

vector<int> tinh(vector<int> arr) {
    int a = arr.size();
    vector<int> prefixsum(a, 0);
    prefixsum[0] = arr[0];
    for (int i = 1; i < a; i++) {
        prefixsum[i] = prefixsum[i - 1] + arr[i];
    }
    return prefixsum;
}

int main() {
    int t;
    cin >> t;

    for (int j = 1; j <= t; j++) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        vector<int> aimer = tinh(arr);
        cout << balancedSums(arr, aimer) << endl;
    }

    return 0;
}
