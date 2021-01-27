#include<iostream>

using namespace std;

main() {

    int n, sum;

    cout << "Type a number of elements in array: ";
    cin >> n;

    int ar[n];

    for(int i=0; i<n; i++) {
        do {
            cout << "Enter " << i+1 << ". element of array: ";
            cin >> ar[i];
        } while(ar[i] < 1 || ar[i] > 100);

    }

    sum = ar[0];
    for(int i=1; i<n; i++) {
        sum = sum + ar[i];
    }

    cout << "The sum of array of elements is: " << sum << endl;

return 0;
}
