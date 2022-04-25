# include <iostream>
# include <vector>
using namespace std;


struct person {
    char name[20];
    int mark;
};

person Fooo(person arr[], int arr_size) {

    int size_arr1, size_arr2;

    vector<person> Left, Right, General;

    for (int i = 1; i < arr_size; i++) {
        if (arr[i].mark < arr[0].mark) {
            Left.push_back(arr[i]);
        } else {
            Right.push_back(arr[i]);
        }
    }

    size_arr1 = Left.size();
    size_arr2 = Right.size();

    person arr1[size_arr1], arr2[size_arr2];

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
    int num;
    cin >> num;

    int middle;
    char arr_student[num][20];
    int arr_mark[num];
    person students[num];

    for (int i = 0; i < num; i++) {
        person student;
        students[i] = student;
        cin >> students[i].name >> students[i].mark;
    }

    cin >> middle;

    int k = 0;

    for (int i = 0; i < num; i++) {
        if (students[i].mark >= middle) {
            k++;
        }
    }
    cout << k << endl;

    person good_students[k];

    int k1 = 0;

    for (int i = 0; i < num; i++) {
        if (students[i].mark >= middle) {
            good_students[k1] = students[i];
            k1++;
        }
    }

    for (int i = 0; i < k ; i++) {
        cout << good_students[i].name << "\t";
    }
    cout << endl;

    int good_students_marks[k];

    for (int i = 0; i < k; i++) {
        good_students_marks[i] = good_students[i].mark;
    }

    for (int i = 0; i < k ; i++) {
        cout << good_students_marks[i] << "\t";
    }
    cout << endl;

    Fooo(good_students, num);

    for (int i = 0; i < k ; i++) {
        cout << good_students[i].name << "\t";
    }
    cout << endl;

    for (int i = 0; i < k ; i++) {
        cout << good_students[i].mark << "\t";
    }
    cout << endl;

}
