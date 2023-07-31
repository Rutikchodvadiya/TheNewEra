#include<iostream>
using namespace std;

class Room {
    private:
        int roomNumber;
        float area;
        
    public:
        void inputRoomDetails() {
            cout<<"Enter Room Number: ";
            cin>>roomNumber;
            cout<<"Enter Room Area: ";
            cin>>area;
        }
        
        void printRoomDetails() {
            cout<<"Room Number: "<<roomNumber<<endl;
            cout<<"Room Area: "<<area<<endl;
        }
};

class House {
    private:
        int houseNumber;
        string streetName;
        float totalArea;
        Room rooms[5]; 
        
    public:
        void inputHouseDetails() {
            cout<<"Enter House Number: ";
            cin>>houseNumber;
            cout<<"Enter Street Name: ";
            cin.ignore();
            getline(cin, streetName);
            cout<<"Enter Total Area: ";
            cin>>totalArea;
            
            for(int i=0; i<5; i++) {
                cout<<"Enter details for Room "<<i+1<<endl;
                rooms[i].inputRoomDetails();
            }
