#include <iostream>
#include <vector>
using namespace std;

int main() {
  int aa[5] = {1, 2, 3, 4, 5};
  // vector<vector<int>> vv{{1, 2, 3}, {4, 5, 6}};
  vector<int> v{9, 10, 11, 12, 13, 14, 15};
  cout << v[0] << "\t" << v[1] << "\t" << v[2] << "\t" << v[3] << endl;
  v.assign(&aa[0], &aa[3]);
  cout << v[0] << "\t" << v[1] << "\t" << v[2] << "\t" << v[3] << endl;
  return 0;
}
