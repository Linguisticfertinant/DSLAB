#include <iostream>
using namespace std;

int main() {
    int n, item;
    int pos = -1;

    cout << "Enter number of elements: ";
    cin >> n;

    int A[n];
    cout << "Enter elements in sorted order:\n";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << "Enter element to search: ";
    cin >> item;

    int beg = 0;        // lower bound
    int end = n - 1;    // upper bound

    while (beg <= end) {
        int mid = (beg + end) / 2;

        if (A[mid] == item) {
            pos = mid;
            break;
        }
        else if (A[mid] > item) {
            end = mid - 1;
        }
        else {
            beg = mid + 1;
        }
    }

    if (pos == -1) {
        cout << "Value is not present in the array";
    } else {
        cout << "Value found at position " << pos;
    }

    return 0;
}