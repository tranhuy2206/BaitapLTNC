#include <iostream>
#include <vector>
#include <queue>

using namespace std;


bool isValidMove(const vector<vector<char>>& matrix, int row, int col) {
    int numRows = matrix.size();
    int numCols = matrix[0].size();

    if (row < 0 || row >= numRows || col < 0 || col >= numCols) {
        return false;
    }

    if (matrix[row][col] == 'R') {
        return false;
    }

    return true;
}


pair<int, int> findStartPosition(const vector<vector<char>>& matrix) {
    for (int i = 0; i < matrix[0].size(); ++i) {
        if (matrix[0][i] == 'Y') {
            return {0, i};
        }
    }
    return {-1, -1};
}


bool canAvoidRocks(const vector<vector<char>>& matrix) {
    int numRows = matrix.size();
    int numCols = matrix[0].size();

    auto start = findStartPosition(matrix);
    if (start.first == -1 && start.second == -1) {
        return false;
    }

    queue<pair<int, int>> positions;
    positions.push(start);

    while (!positions.empty()) {
        auto currentPosition = positions.front();
        positions.pop();

        int row = currentPosition.first;
        int col = currentPosition.second;


        if (row == numRows - 1) {
            return true;
        }


        if (isValidMove(matrix, row + 1, col)) {
            positions.push({row + 1, col});
        }
        if (isValidMove(matrix, row + 1, col - 1)) {
            positions.push({row + 1, col - 1});
        }
        if (isValidMove(matrix, row + 1, col + 1)) {
            positions.push({row + 1, col + 1});
        }
    }

    return false;
}

int main() {
    int numRows, numCols;
    cin >> numRows >> numCols;


    vector<vector<char>> matrix(numRows, vector<char>(numCols));

    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            cin >> matrix[i][j];
        }
    }

    if (canAvoidRocks(matrix)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
