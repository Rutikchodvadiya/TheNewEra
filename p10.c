#include <iostream>

using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    Distance() {
        feet = 0;
        inches = 0;
    }

    void readDistance() {
        cout << "Enter distance in feet: ";
        cin >> feet;
        cout << "Enter distance in inches: ";
        cin >> inches;
    }

    void addDistance(Distance d1, Distance d2) {
        inches = d1.inches + d2.inches;
        feet = d1.feet + d2.feet + inches / 12;
        inches %= 12;
    }

    void displayDistance() {
        cout << "Distance: " << feet << " feet " << inches << " inch" <<;
    }
};

int main() {
    Distance d1, d2, d3;

    cout << "Enter first distance:" <<;
    d1.readDistance();

    cout << "Enter second distance:" <<;
    d2.readDistance();

    d3.addDistance(d1, d2);
    d3.displayDistance();

    return 0;
}
