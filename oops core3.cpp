#include <iostream>
using namespace std;

class Content {
public:
    void publish() {
        cout << "Content published\n";
    }
};

class Video : public Content {
public:
    void play() {
        cout << "Playing video\n";
    }
};

int main() {
    Video v;
    v.publish();  // inherited
    v.play();     // own
}
