#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    ifstream in("matrix.txt");

    size_t rows, cols;
    in >> rows >> cols;

    vector<vector<int>> a(rows, vector<int>(cols));
    for (size_t i = 0; i < rows; ++i)
        for (size_t j = 0; j < cols; ++j)
            in >> a[i][j];

    ofstream out("transposed.txt");
    for (size_t j = 0; j < cols; ++j) {
        for (size_t i = 0; i < rows; ++i) {
            out << a[i][j] << (i + 1 < rows ? ' ' : '\n');
        }
    }

    cout << "Транспонированная матрица записана в transposed.txt" << endl;
    return 0;
}
