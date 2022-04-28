# include <iostream>
# include <vector>

using namespace std;

int Foo(int a, int b, int *pa, int *pb) {
    (*pa) = b;

    (*pb) = a;
}

struct Line0 {
    int x1;
    int x2;
};

int main() {
    int n;
    cin >> n;
    Line0 arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i].x1 >> arr[i].x2;
        int a = arr[i].x1;
        int b = arr[i].x2;
        if (arr[i].x1 > arr[i].x2) {
            arr[i].x1 = b;
            arr[i].x2 = a;
        }
    }
    // for (int i = 0; i < n; i++) {
        //cout << arr[i].x1 << "\t" << arr[i].x2 << endl;
    //}

    cout << endl;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j].x1 > arr[j+1].x1) {
                Line0 temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    //for (int i = 0; i < n; i++) {
        //cout << arr[i].x1 << "\t" << arr[i].x2 << endl;
    //}

    int k = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i].x2 >= arr[i+1].x1) {
            k++;
        }
    }

    if (k != 0 && n != 1) {
        cout << "Yes" << endl;
    } else if (n == 1 && arr[0].x1 == arr[0].x2) {
        cout << "Yes" << endl;
    }
    else if (k == 0){
        cout << "No" << endl;
    }
}
