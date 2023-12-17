#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<pair<int, int>> teams(n); // pairs of home and guest uniform colors
 
    // Input the colors of home and guest uniforms for each team
    for (int i = 0; i < n; ++i) {
        cin >> teams[i].first >> teams[i].second;
    }
 
    int count = 0; // Initialize the count of games where host team wears guest uniform
 
    // Iterate through all pairs of teams
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j) { // Avoid counting games where a team plays against itself
                // Check if the conditions for wearing the guest uniform are met
                if (teams[i].first == teams[j].second) {
                    count++;
                }
            }
        }
    }
 
    cout << count << endl; // Print the total count
 
    return 0;
}
