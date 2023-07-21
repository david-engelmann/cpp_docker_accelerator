#include <iostream>
using namespace std;

int main() {
    // an array with 2 rows and 2 columns
    int my_first_array[2][2] = {{0,1}, {2,3}};

    // a second array with 2 rows and 2 columns
    int my_second_array[2][2] = {{3,2}, {1,0}};

    // a result array
    int my_result_array[2][2] = {{0,0}, {0,0}};

    for (int row_i = 0; row_i < 2; row_i++) {
        for (int col_j = 0; col_j < 2; col_j++) {
            for (int results_k = 0; results_k < 2; results_k++)
                my_result_array[row_i][col_j] += my_first_array[row_i][results_k] * my_second_array[results_k][col_j];
            cout << "target: " << row_i
                 << ", " << col_j << ": ";
            cout << my_result_array[row_i][col_j]<<endl;
        }
    }
    return 0;
}