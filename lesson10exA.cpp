# include <iostream>

using namespace std;

int Foo(int *arr, int x) {
    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 2;
    for (int i = 2; i < x; ++i) {
        arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
    }

    return arr[x-1];
}

int main () {

    int x;

    cin >> x;

    int *arr = new int[x+1];

    cout << Foo(arr, x + 1) << endl;

    delete [] arr;
}
