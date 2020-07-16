// Day 14, Angle Between Hands of a Clock
#include<iostream>

class SolutionDay14 {
public:
    double angleClock(int hour, int minutes) {
        // Degree of hour hand, and degree of minute hand
        double const h_deg = 0.5, m_deg = 6;
        double angle;
        // Mod 12 for the hour, at 12:00 it is 0 degrees apart
        hour %= 12;
        angle = hour * 60 * h_deg + minutes * h_deg - minutes * m_deg;
        angle = angle < 0 ? -angle : angle;
        return std::min(angle, 360 - angle);
    }
};

int main() {
    SolutionDay14 sol;
    int hour, minutes;
    double angle;
    std::cout << "Please enter the hour: ";
    std::cin  >> hour;
    std::cout << "Please enter the minutes: ";
    std::cin  >> minutes;
    angle = sol.angleClock(hour, minutes);
    std::cout << "The angle is: " << angle << " degrees" << std::endl;
    // Compile successful
    return 0;
}
