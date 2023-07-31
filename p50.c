#include <iostream>
using namespace std;

class MyClass {
    public:
        int publicVar;
    private:
        int privateVar;
        
    public:
        void setPrivateVar(int val) {
            privateVar = val;
        }
        
        int getPrivateVar() {
            return privateVar;
        }
};

int main() {
    MyClass obj;
    
    obj.publicVar = 10;
    cout << "Public Variable: " << obj.publicVar << endl;
    
    obj.setPrivateVar(20);
    cout << "Private Variable: " << obj.getPrivateVar() << endl;
    
    return 0;
}
