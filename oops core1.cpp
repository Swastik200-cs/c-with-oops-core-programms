#include <iostream>
using namespace std;

class OnlineExam {
    string studentName;
    int marks;

public:
    void setData(string name, int m) {
        studentName = name;
        marks = m;
    }

    void result() {
        cout << studentName << " scored " << marks << " marks\n";
    }
};

int main() {
    OnlineExam e1;
    e1.setData("Aman", 87);
    e1.result();
    return 0;
}
