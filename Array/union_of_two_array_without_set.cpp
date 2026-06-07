#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {2, 3, 4};

    int n1 = 3, n2 = 3;

    cout << "Union: ";

    for (int i = 0; i < n1; i++)
        cout << arr1[i] << " ";

    for (int i = 0; i < n2; i++) {
        bool found = false;

        for (int j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j]) {
                found = true;
                break;
            }
        }

        if (!found)
            cout << arr2[i] << " ";
    }

    return 0;
}