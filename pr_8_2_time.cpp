//	Create a class Time that displays time in hour and minute form. Create a method total Time() which takes two Time objects as an argument and returns a new object of Time displaying total of both Time objects.
#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    void setTime(int h, int m) {
        hours = h;
        minutes = m;
    }

    void displayTime() {
        cout << hours << " hours and " << minutes << " minutes." << endl;
    }

    Time totalTime(Time t) {
        Time total;
        total.minutes = minutes + t.minutes;
        total.hours = hours + t.hours + total.minutes / 60;
        total.minutes %= 60;
        return total;
    }
};

int main() {
    Time t1, t2, t3;
    t1.setTime(2, 30);
    t2.setTime(1, 45);
    t3 = t1.totalTime(t2);
    cout << "Total time is: ";
    t3.displayTime();
    return 0;
}

