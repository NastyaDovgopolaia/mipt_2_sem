# include <iostream>

using namespace std;

struct person {
    char name[20];
    int mark;
};

int main() {

    int middle;
    char arr_student[5][20];
    int arr_mark[5];
    for (int i = 0; i < 5; i++) {
        person student;
        cin >> student.name >> student.mark;
        for (int j = 0; j < 20; j++) {
            arr_student[i][j] = student.name[j];
        }
        arr_mark[i] = student.mark;
    }

    cin >> middle;


    for (int i = 0; i < 5; i++) {
        if (arr_mark[i] < middle) {
            arr_mark[i] = 0;
        }

        if (arr_mark[i] != 0) {
            cout << arr_student[i] << "\t";
        }
    }

    cout << endl;

}
