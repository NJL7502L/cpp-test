#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<vector<int>> vv{{1, 2, 3}, {4, 5, 6}};
  cout << "Hello! World!" << endl;
  cout << vv[1][2] << "\t" << vv[0][1] << endl;
  return 0;
}
