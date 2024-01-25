#include <iostream>
using namespace std;

void matrix_input(int array[][100], int m, int n) {
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> array[i][j];
        }
    }
}

void Display_matrix(const int array[][100], int m, int n) {
    cout << "Matrix elements:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

int sum_of_matrix(const int array[][100], int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            sum += array[i][j];
        }
    }
    return sum;
}

void sum_of_rows(const int array[][100], int m, int n) {
    for (int i = 0; i < m; ++i) {
        int row_sum = 0;
        for (int j = 0; j < n; ++j) {
            row_sum += array[i][j];
        }
        cout << "Row " << i + 1 << ": " << row_sum << endl;
    }
}

void sum_of_columns(const int array[][100], int m, int n) {
    cout << "Column-wise sum:" << endl;
    for (int j = 0; j < n; ++j) {
        int col_sum = 0;
        for (int i = 0; i < m; ++i) {
            col_sum += array[i][j];
        }
        cout << "Column " << j + 1 << ": " << col_sum << endl;
    }
}

void transpose_of_matrix(const int array[][100], int m, int n) {
    int transposed_matrix[100][100];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            transposed_matrix[i][j] = array[j][i];
        }
    }

    cout << "Transposed Matrix:" << endl;
    Display_matrix(transposed_matrix, n, m);
}

int main() {
    int m, n;

    cout << "Enter number of rows: \n";
    cin >> m;
    cout << "Enter number of columns:\n ";
    cin >> n;

    int matrix[100][100];

    int choice;

    while (true) {
        cout << "1. Input elements into matrix\n";
        cout << "2. Display elements of matrix\n";
        cout << "3. Sum of all elements of matrix\n";
        cout << "4. Display row-wise sum of matrix\n";
        cout << "5. Display column-wise sum of matrix\n";
        cout << "6. Create transpose of matrix\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            matrix_input(matrix, m, n);
            break;
        case 2:
            Display_matrix(matrix, m, n);
            break;
        case 3:
            cout << "Sum of all elements: " << sum_of_matrix(matrix, m, n) << endl;
            break;
        case 4:
            sum_of_rows(matrix, m, n);
            break;
        case 5:
            sum_of_columns(matrix, m, n);
            break;
        case 6:
            transpose_of_matrix(matrix, m, n);
            break;
        case 7:
            cout << "Exiting the program.\n";
            return 0; // Exit the program
        default:
            cout << "Invalid choice. Please enter a valid option.\n";
        }
    }

    return 0;
}
