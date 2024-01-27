#include <iostream>
#include <vector>
#include <queue>

using namespace std;


int main() {
    int T;
    cin >> T;

    for (int i = 0; i <T; ++i) {
        int s, e;
        cin >> s >> e;
        if (s == e)
            printf("#%d %d", i + 1, 0);
        if (s < e) {
            // 김밥 길 순행
            int value = 1;
            for (int i = 0; i < )
        }
        else {
            // 김밥 길 역행
        }
    }
//
//    // Declare and initialize a 2D vector
//    vector<vector<int>> matrix(rows, vector<int>(cols, 0));
//
//    // Assign values to the matrix
//    int value = 1;
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j <= i; ++j) {
//            matrix[i][j] = value++;
//        }
//    }
//
//    // Print the matrix
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            std::cout << matrix[i][j] << " ";
//        }
//        std::cout << std::endl;
//    }

    return 0;
}