#include <iostream>
#include <unordered_map>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
 
        unordered_map<int, int> freq;
        freq[a]++;
        freq[b]++;
        freq[c]++;
 
        int oddOne = 0;
        for (auto& p : freq) {
            if (p.second == 1) {
                oddOne = p.first;
                break;
            }
        }
 
        cout << oddOne << endl;
    }
 
    return 0;
}
