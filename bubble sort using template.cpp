#include <iostream>
#include <string>
using namespace std;

template <typename T>
void bubble(T array[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                T temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    cout << "Sorted array:\n";
    for (i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    int intArray[n];
    double doubleArray[n];
    float floatArray[n];

    cout << "Enter array values in int type:\n";
    for (int i = 0; i < n; i++) {
        cin >> intArray[i];
    }
    bubble(intArray, n);

    cout << "Enter array values in double type:\n";
    for (int i = 0; i < n; i++) {
        cin >> doubleArray[i];
    }
    bubble(doubleArray, n);

    cout << "Enter array values in float type:\n";
    for (int i = 0; i < n; i++) {
        cin >> floatArray[i];
    }
    bubble(floatArray, n);

    return 0;
}
