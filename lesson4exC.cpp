#include <iostream>
using namespace std;

void F0()
{
    static int counter = 0;
    counter++;
    cout << counter << endl;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        F0();
    }
    return 0;
}
