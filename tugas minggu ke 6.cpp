#include <iostream>
using namespace std;


int larger(int a, int b) {
    return (a > b) ? a : b;
}

int main() {

    int arr[0];
    int n = 0;
    int maxNumber;

    cout << "Enter 10 numbers: " << endl;


    cin >> arr[0];
    maxNumber = arr[0];

    for (int i = 1; i < n; i++) {
        cin >> arr[i];
    }


    cout << "Array sebelum diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    int i = 0;
    while (i < n - 1) {
        int j = 0;
        while (j < n - i - 1) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            j++;
        }
        i++;
    }

    cout << "Array setelah diurutkan dari besar ke kecil: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Angka terbesar  adalah: " << arr[0] << endl;

    return 0;
}

