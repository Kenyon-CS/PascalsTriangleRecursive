#include <iostream>
#include <vector>
#include <map>
#include <utility>

using namespace std;

map<pair<int,int>,int> mem;

// Recursive function to calculate binomial coefficients
int binomialCoefficient(int n, int k) {
    // Base cases
    if (k == 0 || k == n) {
        return 1;
    }
    // Recursive relation: C(n, k) = C(n-1, k-1) + C(n-1, k)
    pair<int,int> p = pair<int,int>(n,k);
    if (mem.find(p) != mem.end()) {
        return mem[p];
    }

    int s = binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
    mem[p] = s;
    return s;
}

// Function to generate Pascal's Triangle using recursion
void generatePascalsTriangle(int numRows) {
    for (int row = 0; row < numRows; row++) {
        for (int col = 0; col <= row; col++) {
            cout << binomialCoefficient(row, col) << " ";
        }
        cout << endl;
    }
}

int main() {
    int numRows;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> numRows;

    // Print Pascal's Triangle
    generatePascalsTriangle(numRows);

    return 0;
}
