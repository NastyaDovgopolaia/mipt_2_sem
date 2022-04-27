# include <iostream>

using namespace std;

struct Time {
    int hours;
    int mins;
    int seconds;
};

int cout_time (int hours, int mins, int seconds) {
    cout << hours << ":" << mins << ":" << seconds << endl;
}

int main() {

    int n = 2;

    Time arr[n];

    for (int i = 0; i < n; i++) {

        int h, m, s;
        cin >> h >> m >> s;
        arr[i].hours = h;
        arr[i].mins = m;
        arr[i].seconds = s;

    }

    int sum1 = 3600*arr[0].hours + 60*arr[0].mins + arr[0].seconds;
    int sum2 = 3600*arr[1].hours + 60*arr[1].mins + arr[1].seconds;

    int sum = sum1 + sum2;
    int a = sum / 3600;
    int b = (sum - a*3600) / 60;
    int c = sum - a*3600 - b*60;
    if (a > 23) {
        a = a - 24;
    }

    cout_time(a, b, c);
}
