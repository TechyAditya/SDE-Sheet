#include <bits/stdc++.h>
using namespace std;

class Solution {
public: 
    void setZeroes(vector<vector<int>>& matrix) {       
        int m = matrix.size();
        int n = matrix[0].size();
        bool row = false, col = false;
        for(int i = 0; i < m; i++) {
            if(matrix[i][0] == 0) {
                col = true;
                break;
            }
        }
        for(int i = 0; i < n; i++) {
            if(matrix[0][i] == 0) {
                row = true;
                break;
            }
        }
        for(int i = 1; i < m; i++) {
            for(int j = 1; j < n; j++) { 
                if(matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0; 
                }
            }
        }
        for(int i = 1; i < m; i++) {
            if(matrix[i][0] == 0) {
                for(int j = 1; j < n; j++) {
                    matrix[i][j] = 0;
                }
            }
        }
        for(int i = 1; i < n; i++) {
            if(matrix[0][i] == 0) {
                for(int j = 1; j < m; j++) {
                    matrix[j][i] = 0;
                }
            }
        }
        if(row) {
            for(int i = 0; i < n; i++) {
                matrix[0][i] = 0;
            }
        }
        if(col) {
            for(int i = 0; i < m; i++) {
                matrix[i][0] = 0;
            }
        } 
    }
};

int main() {
    Solution s;
    vector<vector<int>> matrix = {{1,1,1}, {1,0,1}, {1,1,1}};
    s.setZeroes(matrix);
    for(auto i : matrix) 
    {
        for(auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
cout << endl;
    return 0;
}
