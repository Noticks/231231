#include <iostream>
#include <limits>

using namespace std;


template <typename T>
T max(T arr[], int size) {
    T maxVal = numeric_limits<T>::min();
    for (int i = 0; i < size; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}


template <typename T>
T max(T arr[][10], int rows, int cols) {
    T maxVal = numeric_limits<T>::min();
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (arr[i][j] > maxVal) {
                maxVal = arr[i][j];
            }
        }
    }
    return maxVal;
}


template <typename T>
T max(T arr[][10][10], int rows, int cols, int depth) {
    T maxVal =
        numeric_limits<T>::min();
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            for (int k = 0; k < depth; ++k) {
                if (arr[i][j][k] > maxVal) {
                    maxVal = arr[i][j][k];
                }
            }
        }
    }
    return maxVal;
}


int max(int a, int b) {
    return (a > b) ? a : b;
}


int max(int a, int b, int c) {
    return max(max(a, b), c);
}

int main() {
    int arr1D[10] = { 1, 5, 3, 8, 2, 9, 4, 7, 6, 0 };
    int arr2D[3][10] = { {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
                        {11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
                        {21, 22, 23, 24, 25, 26, 27, 28, 29, 30} };
    int arr3D[2][10][10];

    
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 10; ++j) {
            for (int k = 0; k < 10; ++k) {
                arr3D[i][j][k] = i * 100 + j * 10 + k;
            }
        }
    }

    cout << "Максимальное значение в одномерноммассиве: " << max(arr1D, 10) << endl;
    cout << "Максимальное значение в двумерном массиве: " << max(arr2D, 3, 10) << endl;
    cout << "Максимальное значение в трехмерном массиве: " << max(arr3D, 2, 10, 10) << endl;
    cout << "Максимальное значение из двух чисел: " << max(15, 25) << endl;
    cout << "Максимальное значение из трех чисел: " << max(10, 20, 30) << endl;

    return 0;
}
