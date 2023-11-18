#include <iostream>
#include <algorithm>
using namespace std;

class Student {
public:
    int id;
    char name[101];
    char section;
    int totalMarks;
};

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) {
        Student students[3];

        for (int i = 0; i < 3; ++i) {
            cin >> students[i].id >> students[i].name >> students[i].section >> students[i].totalMarks;
        }

        for (int i = 0; i < 2; ++i) {
            for (int j = i + 1; j < 3; ++j) {
                if (students[i].totalMarks < students[j].totalMarks) {
                    swap(students[i], students[j]);
                } else if (students[i].totalMarks == students[j].totalMarks && students[i].id > students[j].id) {
                    swap(students[i], students[j]);
                }
            }
        }

        cout << students[0].id << " " << students[0].name << " " << students[0].section << " " << students[0].totalMarks <<endl;
    }
return 0;
}
