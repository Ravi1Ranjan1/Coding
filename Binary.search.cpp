#include<iostream>
using namespace std;

int main() {
    int n, key;
    int arr[100];
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array elements: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    cout << "\nEnter the key to search in the array: ";
    cin >> key;

    int start = 0;
    int end = n - 1;
    int mid;

    while(start <= end) {
        mid = (start + end) / 2;
        
        if(arr[mid] == key) {
            cout << "Key found at index: " << mid << endl;
            return 0;
        }
        else if(key > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    
    cout << "Key not found in the array." << endl;
    return 0;
}
