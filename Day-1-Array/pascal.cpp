#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<vector<int>> generate(int &numRows) {
    vector<vector<int>> ret;
    ret.push_back({1});
    if (numRows > 1) {
      ret.push_back({1, 1});
    }
    for (int i = 2; i < numRows; i++) {
      vector<int> temp = {1};
      for (int j = 1; j < i; j++)
        temp.push_back(ret[i - 1][j - 1] + ret[i - 1][j]);
      temp.push_back(1);
      ret.push_back(temp);
    }
    return ret;
  }
};

int main() {
  Solution s;
  int numRows = 5;
  vector<vector<int>> result = s.generate(numRows);
  for (auto i : result) {
    for (auto j : i) {
      cout << j << " ";
    }
    cout << endl;
  }
  return 0;
}
