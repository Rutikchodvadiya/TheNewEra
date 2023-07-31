#include<iostream>

class TimeConverter {
    private:
        int seconds;

    public:
        void getTimeFromUser() {
            std::cout << "Enter time in seconds: ";
            std::cin >> seconds;
        }

        void convertTime() {
            int hours, minutes, remainingSeconds;
            hours = seconds / 3600;
            minutes = (seconds % 3600) / 60;
            remainingSeconds = (seconds % 3600) % 60;

            std::cout << "Time in HH:MM:SS format: ";
            std::cout << hours << ":" << minutes << ":" << remainingSeconds;
        }
};

int main() {
    TimeConverter tc;
    tc.getTimeFromUser();
    tc.convertTime();

    return 0;
