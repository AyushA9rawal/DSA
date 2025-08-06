class Solution {
public:
    double angleClock(int hour, int minutes) {
        return min(fabs(30*hour - 5.5* minutes),360-fabs(30*hour - 5.5* minutes));
    }
};