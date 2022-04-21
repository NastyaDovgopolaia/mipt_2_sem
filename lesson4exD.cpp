#include<iostream>
# include <vector>

using namespace std;


int Foo1(int num[], int a, int b)
{
  int maX;
  int All = 0;

  while (a * 2 <= b && (!All))
  {
    if (a * 2 == b) {
      maX = a * 2;
    }
    else if (num[a * 2] > num[a * 2 + 1]) {
      maX = a * 2;
    }
    else {
      maX = a * 2 + 1;
    }

    if (num[a] < num[maX]) {
      int t = num[a];
      num[a] = num[maX];
      num[maX] = t;
      a = maX;
    }
    else {
      All = 1;
    }
  }
}

int Foo2(int num[], int num_size)
{

  for (int i = num_size / 2; i >= 0; i--)
    Foo1(num, i, num_size - 1);

  for (int i = num_size - 1; i >= 1; i--)
  {
    int t = num[0];
    num[0] = num[i];
    num[i] = t;
    Foo1(num, 0, i - 1);
  }
}
int main()
{
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

    Foo2(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
