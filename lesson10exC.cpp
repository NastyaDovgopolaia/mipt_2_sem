#include<iostream>
# include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;
    vector <int> A;
    vector < vector <int> > B;
    B.resize(n);

    int x = 0;

    while (cin >> x) {

        A.push_back(x);

        if ((A.size()) == n){
            break;
        }
    }



    for (int i = 0; i < n; i++) {
        B.at(i).push_back(A[i]);
        int k = 0;
        for ( int j = i; j < n; j++) {
            if (A[j] > B[i][k]) {
                B[i].push_back(A[j]);
                k++;
            }
        }
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = B.at(i).size();
    }

    int maxi = arr[0];

    for (int i = 1; i < n; i++)
        if (arr[i] > maxi)
            maxi = arr[i];

    cout << maxi << endl;
}
