#include <iostream>
using namespace std;

class Notification {
public:
    virtual void notify() {
        cout << "General notification\n";
    }
};

class Email : public Notification {
public:
    void notify() {
        cout << "Email notification sent\n";
    }
};

class SMS : public Notification {
public:
    void notify() {
        cout << "SMS notification sent\n";
    }
};

int main() {
    Notification* n;
    Email e;
    SMS s;

    n = &e;
    n->notify();

    n = &s;
    n->notify();
}
