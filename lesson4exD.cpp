#include<iostream>
# include <vector>

using namespace std;

int Foo(int a, int b, int *pa, int *pb) {
    (*pa) = b;

    (*pb) = a;
}
int Fooo(int arr[], int arr_size) {

    int size_arr1, size_arr2;

    vector<int> Left, Right, General;

    for (int i = 1; i < arr_size; i++) {
        if (arr[i] < arr[0]) {
            Left.push_back(arr[i]);
        } else {
            Right.push_back(arr[i]);
        }
    }

    size_arr1 = Left.size();
    size_arr2 = Right.size();

    int arr1[size_arr1], arr2[size_arr2];

    for (int i = 0; i < Left.size(); i++) {
        arr1[i] = Left[i];
    }

    for (int i = 0; i < Right.size(); i++) {
        arr2[i] = Right[i];
    }

    if (Left.size() >= 2) {
       Fooo(arr1, size_arr1);
    }
    if (Right.size() >= 2) {
        Fooo(arr2, size_arr2);
    }


    for (int i = 0; i < Left.size(); i++) {
        General.push_back(arr1[i]);
    }
    General.push_back(arr[0]);
    for (int i = 0; i < Right.size(); i++) {
        General.push_back(arr2[i]);
    }

    for (int i = 0; i < General.size(); i++) {
        arr[i] = General[i];
    }

}

int main() {

    int n;
    cin >> n;
    vector<int> A;

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

    Fooo(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;


}
