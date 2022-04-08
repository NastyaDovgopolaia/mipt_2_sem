#include<iostream>
# include <vector>

using namespace std;

int Foo(int a, int b, int *pa, int *pb) {
    (*pa) = b;

    (*pb) = a;
}

int main() {

    std::vector<int> A;

    int n;
    cin >> n;

    int x = 0;

    while (cin >> x) {

        A.push_back(x);

        if ((A.size()) == n){
            break;
        }

    }

    int arr[n];

    for (int i = 0; i < n; i++) {
        arr[i] = A[i];
    }

     for (int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;


    if (n % 2 == 0) {

        for (int i = 0; i < n/2; i++) {
            Foo(A[i], A[n - 1 - i], arr + i, arr + n - 1 - i);
        }

        for (int i = 0; i < n; i++) {
            cout << arr[i] << "\t";
        }

    }

    if (n % 2 == 1) {

        for (int i = 0; i < (n/2 - 0.5); i++) {
            Foo(A[i], A[n - 1 - i], arr + i, arr + n - 1 - i);
        }

        for (int i = 0; i < n; i++) {
            cout << arr[i] << "\t";
        }

    }
    cout << endl;

}
