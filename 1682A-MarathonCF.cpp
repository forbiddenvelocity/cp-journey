#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
 
        // Create an array to store the distances of all participants
        int distances[] = {b, c, d};
 
        // Sort the array in descending order to find participants in front of Timur
        sort(distances, distances + 3, greater<int>());
 
        int participants_in_front = 0;
 
        // Check how many participants have run a greater distance than Timur
        for (int i = 0; i < 3; ++i) {
            if (a < distances[i]) {
                participants_in_front++;
            }
        }
 
        cout << participants_in_front << endl;
    }
 
    return 0;
}
