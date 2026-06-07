#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    set<int> s;

    for (int i = 0; i < n1; i++)
        s.insert(arr1[i]);

    for (int i = 0; i < n2; i++)
        s.insert(arr2[i]);

    cout << "Union of arrays: ";
    for (int x : s)
        cout << x << " ";

    return 0;
}