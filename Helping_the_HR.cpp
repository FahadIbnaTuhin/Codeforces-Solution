#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int calculateMinutes(int h1, int m1, int s1, int h2, int m2, int s2) {
    // Calculate the total minutes between entry and exit times
    int totalStartMinutes = h1 * 60 + m1;
    int totalEndMinutes = h2 * 60 + m2;
    return totalEndMinutes - totalStartMinutes;
}

int main() {
    int N;
    while (cin >> N && N != 0) {
        int lateOrInsufficientHours = 0; // To count late or insufficient hours days
        int violations = 0; // To count violations for deductions
        
        for (int i = 0; i < N; i++) {
            char shift;
            int h1, m1, s1, h2, m2, s2;
            string line;
            
            cin >> shift >> h1;
            cin.ignore(1); // Ignore ':'
            cin >> m1;
            cin.ignore(1); // Ignore ':'
            cin >> s1;
            cin.ignore(1); // Ignore ':'
            cin >> h2;
            cin.ignore(1); // Ignore ':'
            cin >> m2;
            cin.ignore(1); // Ignore ':'
            cin >> s2;

            bool late = false, insufficientHours = false;
            int totalMinutes = calculateMinutes(h1, m1, s1, h2, m2, s2);
            int effectiveStartTime = h1 * 60 + m1; // Time in minutes

            if (shift == 'D') {
                // Day shift condition: must arrive by 9:30 AM and stay for at least 8 hours (480 minutes)
                if (effectiveStartTime > 9 * 60 + 30) late = true; // Late if arriving after 9:30 AM
                // If the faculty arrives before 8:30 AM, hours before that won't count
                if (effectiveStartTime < 8 * 60 + 30) totalMinutes -= (8 * 60 + 30) - effectiveStartTime;
                if (totalMinutes < 8 * 60) insufficientHours = true; // Less than 8 hours stay
            } else if (shift == 'E') {
                // Evening shift condition: must arrive by 12:30 PM and stay for at least 9 hours (540 minutes)
                if (effectiveStartTime > 12 * 60 + 30) late = true; // Late if arriving after 12:30 PM
                // If the faculty arrives before 8:30 AM, hours before that won't count
                if (effectiveStartTime < 8 * 60 + 30) totalMinutes -= (8 * 60 + 30) - effectiveStartTime;
                if (totalMinutes < 9 * 60) insufficientHours = true; // Less than 9 hours stay
            }

            if (late || insufficientHours) {
                violations++; // Only one point deduction for the day, even if both rules are violated
                lateOrInsufficientHours++; // Count as a violation
            }
        }

        if (lateOrInsufficientHours > 3) {
            cout << "Issue Show Cause Letter" << endl;
        } else {
            cout << violations << " Point(s) Deducted" << endl;
        }
    }
    return 0;
}
3
D:8:30:00:17:30:20
D:9:30:01:17:30:20
E:11:30:01:20:31:00
3
D:8:30:00:16:30:00
D:9:30:00:17:30:20
E:11:30:01:20:31:00
3
D:8:30:00:17:30:20
D:9:30:01:17:30:20
E:11:30:01:20:00:00
4
D:8:00:00:16:15:20 
D:9:30:01:17:30:00 
E:11:30:01:20:00:00 
E:11:30:01:20:00:00 
0