#include <stdio.h>

int count_teams(int n) {
    int teams = 0;
    
    while (n > 0) {
        if (n % 2 != 0) {  // Check if n is odd
            n += 1;        // Add one to make it even
        }
        teams += 1;        // Increment the number of teams
        n -= 2;            // Assume each team consumes 2 units
    }
    
    return teams;
}

int main() {
    int n = 5;  // Starting number of units
    int result = count_teams(n);
    printf("Number of teams: %d\n", result);
    return 0;
}
