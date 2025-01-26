#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  // Using std::vector<char> for boolean storage
  std::vector<char> vec(5);
  vec[0] = 1; // Represents true

  // Using std::find with std::vector<char> requires a custom comparison
  auto it = std::find(vec.begin(), vec.end(), 1);
  
  if (it != vec.end()) {
    std::cout << "Found true at index: " << std::distance(vec.begin(), it) << std::endl;
  }

  return 0;
}

