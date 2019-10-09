#include <iostream>
#include <vector>

int main(){
  int n;
  std::cin >> n;
  std::vector <int> a;
  for (int i = 0; i < n; i++) {
    int temp;
    std::cin >> temp;
    if (i % 2 == 0) {
      a.push_back(temp);
    } 
  }
  for (int i = 0; i <= a.size() - 1; i ++) {
    std::cout << a[i] << " ";
  }
return 0;
}