#include<iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    
public:
    Time(int h, int m) {
        hours = h;
        minutes = m;
    }
    
    Time addTime(Time t) {
        int h = hours + t.hours;
        int m = minutes + t.minutes;
        
        if (m >= 60) {
            h += m / 60;
            m = m % 60;
        }
        
        return Time(h , m);
    }
    
    void display() {
        cout << "Time: " << hours << " hours, " << minutes << " minutes" << endl;
    }
};

int main() {
    Time t1(2, 30);
    Time t2(1, 45);
    
    Time t3 = t1.addTime(t2);
    
    t1.display();
    t2.display();
    t3.display();
    
    return 0;
}
