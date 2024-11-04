#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int findMinSequence(int arr[], int start, int end, int& minSum, int& minPos) {
    if (start + 9 > end) {
        return -1; 
    }

    int currentSum = 0;
    for (int i = start; i < start + 10; ++i) {
        currentSum += arr[i];
    }

    if (currentSum < minSum) {
        minSum = currentSum;
        minPos = start;
    }

    return findMinSequence(arr, start + 1, end, minSum, minPos);
}

int main() {
    srand(time(0));

    int arr[100];
    for (int i = 0; i < 100; ++i) {
        arr[i] = rand() % 100; 
    }

    int minSum = INT_MAX;
    int minPos = -1;

    findMinSequence(arr, 0, 99, minSum, minPos);

    cout << "Позиция начала последовательности с минимальной суммой: " << minPos << endl;

    return 0;
}
