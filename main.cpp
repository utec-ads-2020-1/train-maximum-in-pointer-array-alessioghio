/*

    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]); // sizeof() states memory size
    // Above function does not work with pointers

*/
#include <iostream>
using namespace std;

int max(int *iptr[], int n){
    // This function returns the maximum integer pointed by the pointers in the array iptr
    // Think/look for a better solution
    int max = 0;
    for (int i = 0; i < n; i++){
        int a = *iptr[i];
        if (max < *iptr[i]){
            max = *iptr[i];
        }
        
    }
    return max;
}

int main() {
    int n, i;
    int array[100];
    int *iptr[100];
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> array[(i + 3) % n];
        iptr[i] = &(array[(i + 3) % n]);
    }
    cout << "Max number: " << max(iptr,n) << endl;

    return 0;
}