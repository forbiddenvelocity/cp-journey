#include <iostream>
#include <unordered_map>
 
int main() {
  int testcases;
  std::cin >> testcases;
 
  for (int tc = 1; tc <= testcases; ++tc) {
    int n;
    std::cin >> n;
    std::string sequence;
    std::cin >> sequence;
 
    std::unordered_map<char, int> solved;
    int balloons = 0;
 
    for (char c : sequence) {
      if (!solved[c]) {
        balloons += 2; // First team to solve a problem gets 2 balloons
        solved[c] = 1;
      } else {
        balloons += 1; // Subsequent solves get 1 balloon
      }
    }
 
    std::cout << balloons << std::endl;
  }
 
  return 0;
}
