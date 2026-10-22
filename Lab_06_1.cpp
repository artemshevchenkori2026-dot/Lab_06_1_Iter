#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to generate an array with random values in range [Low, High]
void Create(int* a, const int size, const int Low, const int High) {
    for (int i = 0; i < size; i++) {
        a[i] = Low + rand() % (High - Low + 1);
    }
}

// Function to print the array with formatted output
void Print(const int* a, const int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << a[i];
    }
    cout << endl;
}

// Condition check: positive value AND index is NOT divisible by 5
bool Criterion(int element, int index) {
    return (element > 0) && (index % 5 != 0);
}

// Function to calculate the count of elements matching the criterion
int Count(const int* a, const int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (Criterion(a[i], i)) {
            count++;
        }
    }
    return count;
}

// Function to calculate the sum of elements matching the criterion
int Sum(const int* a, const int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (Criterion(a[i], i)) {
            sum += a[i];
        }
    }
    return sum;
}

// Function to replace matching elements with 0
void Replace(int* a, const int size) {
    for (int i = 0; i < size; i++) {
        if (Criterion(a[i], i)) {
            a[i] = 0;
        }
    }
}

int main() {
    srand((unsigned)time(0));

    const int SIZE = 20;
    const int LOW = -20;
    const int HIGH = 50;

    int a[SIZE];

    Create(a, SIZE, LOW, HIGH);

    cout << "Initial array:" << endl;
    Print(a, SIZE);

    int count = Count(a, SIZE);
    int sum = Sum(a, SIZE);

    cout << endl;
    cout << "Count of elements matching the criterion: " << count << endl;
    cout << "Sum of elements matching the criterion:   " << sum << endl;

    Replace(a, SIZE);

    cout << endl;
    cout << "Modified array:" << endl;
    Print(a, SIZE);

    return 0;
}