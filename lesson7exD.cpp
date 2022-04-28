# include <iostream>

using namespace std;

struct Line {
    float x1;
    float x2;
    float y1;
    float y2;
    float A, B;
};

int main() {

    Line line1, line2;
    float c1, c2, c3, c4, c5, c6, c7, c8;
    cin >> c1 >> c2 >> c3 >> c4 >> c5 >> c6 >> c7 >> c8;
    line1.x1 = c1;
    line1.y1 = c2;
    line1.x2 = c3;
    line1.y2 = c4;
    line2.x1 = c5;
    line2.y1 = c6;
    line2.x2 = c7;
    line2.y2 = c8;

    int C1, C2;

    if (line1.x1*line1.y2 - line1.y1*line1.x2 != 0) {
        C1 = 1;
        if (c1 == c3 && c2 == c4) {
            line1.B = 0;
            line1.A = 0;
        } else if (c1 == c3 && c2 != c4) {
            line1.A = (line1.y1 - line1.y2) / (line1.x1*line1.y2 - line1.y1*line1.x2);
            line1.B = 0;
        } else if (c1 != c3 && c2 == c4) {
            line1.B = (line1.x2 - line1.x1) / (line1.x1*line1.y2 - line1.y1*line1.x2);
            line1.A = 0;
        } else {
            line1.A = (line1.y1 - line1.y2) / (line1.x1*line1.y2 - line1.y1*line1.x2);
            line1.B = (line1.x2 - line1.x1) / (line1.x1*line1.y2 - line1.y1*line1.x2);
        }
    }
    else {
        C1 = 0;
        if (c1 == c3 && c2 == c4) {
            line1.B = 0;
            line1.A = 0;
        } else if (c1 == c3 && c2 != c4) {
            line1.A = 1;
            line1.B = 0;
        } else if (c1 != c3 && c2 == c4) {
            line1.A = 0;
            line1.B = 1;
        } else if (line1.x1 == 0 && line1.y1 == 0) {
            line1.A = 1;
            line1.B = - line1.x2/line1.y2;
        } else {
            line1.A = 1;
            line1.B = - line1.x1/line1.y1;
        }
    }

    // cout << line1.A << "\t" <<  line1.B << "\t" << C1 << endl;

    if (line2.x1*line2.y2 - line2.y1*line2.x2 != 0) {
        C2 = 1;
        if (c5 == c7 && c6 == c8) {
            line2.B = 0;
            line2.A = 0;
        } else if (c5 == c7 && c6 != c8) {
            line2.B = 0;
            line2.A = (line2.x2 - line2.x1) / (line2.x1*line2.y2 - line2.y1*line2.x2);
        } else if (c5 != c7 && c6 == c8) {
            line2.A = 0;
            line2.B = (line2.x2 - line2.x1) / (line2.x1*line2.y2 - line2.y1*line2.x2);
        } else {
            line2.A = (line2.y1 - line2.y2) / (line2.x1*line2.y2 - line2.y1*line2.x2);
            line2.B = (line2.x2 - line2.x1) / (line2.x1*line2.y2 - line2.y1*line2.x2);
        }
    }
    else {
        C2 = 0;
        if (c5 == c7 && c6 == c8) {
            line2.B = 0;
            line2.A = 0;
        } else if (c5 == c7 && c6 != c8) {
            line2.A = 1;
            line2.B = 0;
        } else if (c5 != c7 && c6 == c8) {
            line2.A = 0;
            line2.B = 1;
        } else if (line2.x1 == 0 && line2.y1 == 0) {
            line2.A = 1;
            line2.B = - line1.x2/line1.y2;
        } else {
            line2.A = 1;
            line2.B = - line2.x1/line2.y1;
        }
    }

    // cout << line2.A << "\t" <<  line2.B << "\t" << C2 << endl;


    if (line1.A == line2.A && line1.B == line2.B && C1 != C2) {
        cout << "Yes" << endl;
    } else if (C1 != 0 || C2 != 0){
        double y0 = (C1*line2.A - C2*line1.A) / (line1.A*line2.B - line2.A*line1.B);
        // cout << y0 << endl;
        double x0 = (C2*line1.B - C1*line2.B) / (line1.A*line2.B - line2.A*line1.B);
        // cout << x0 << endl;
        if (((c1 <= x0 && x0 <= c3) || (c3 <= x0 && x0 <= c1)) && ((c5 <= x0 && x0 <= c7) || (c7 <= x0 && x0 <= c5)) && ((c2 <= y0 && y0 <= c4) || (c4 <= y0 && y0 <= c2)) && ((c6 <= y0 && y0 <= c8) || (c6 <= y0 && y0 <= c8))) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    } else {
        double x0 = 0;
        double y0 = 0;
        if (((c1 <= x0 && x0 <= c3) || (c3 <= x0 && x0 <= c1)) && ((c5 <= x0 && x0 <= c7) || (c7 <= x0 && x0 <= c5)) && ((c2 <= y0 && y0 <= c4) || (c4 <= y0 && y0 <= c2)) && ((c6 <= y0 && y0 <= c8) || (c6 <= y0 && y0 <= c8))) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }

}
