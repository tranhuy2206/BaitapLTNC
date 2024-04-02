#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getTotalX(const vector<int>& a, const vector<int>& b) {
    int middleNumbersCount = 0;

    int maxElement = *max_element(b.begin(), b.end());

    for (int i = 1; i <= maxElement; ++i) {
        bool divisibleByA = true;
        bool divisorOfB = true;

        for (int num : a) {
            if (i % num != 0) {
                divisibleByA = false;
                break;
            }
        }

        for (int num : b) {
            if (num % i != 0) {
                divisorOfB = false;
                break;
            }
        }
        if (divisibleByA && divisorOfB) {
            middleNumbersCount++;
        }
    }

    return middleNumbersCount;
}

int main() {
    int sizeA, sizeB;

    cin >> sizeA >> sizeB;

    vector<int> setA(sizeA);

    for (int i = 0; i < sizeA; ++i) {
        cin >> setA[i];
    }

    vector<int> setB(sizeB);
    for (int i = 0; i < sizeB; ++i) {
        cin >> setB[i];
    }

    cout <<  getTotalX(setA, setB) << endl;

    return 0;
}
