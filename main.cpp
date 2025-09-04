#include <bits/stdc++.h>
using namespace std;

#define el '\n'

int main() {
	// Array Functions - 2D Arrays - Nested Loops
    //-------------------------------------------

    // int arr[5] = {10, 5, 7, 2, 8};

    // Reverse
    // reverse(arr.begin(), arr.end());
    // for(auto &i : arr) cout << i << ' ';
    // cout << el;

    // Sort
    // sort(s.begin(), s.end());
    // for(auto &i : arr) cout << i << ' ';
    // cout << el;

    // ##############################################################################

    // Nested Loops
    /*
    
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            for(int k = 0; k < 10; k++){
                .
                .
                .
            }
        }
    }

    */

    // Example 
    /*
    
    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++){
            cout << j << ' ';
        }
        cout << el;
    }
    
    */
    // Time Complexity: O(...)

    // I want to print n lines.
    // Each line conains a number from 1 until the numbef of this line.
    /*
        n = 5
        1
        1 2
        1 2 3
        1 2 3 4
        1 2 3 4 5
    */
    // Code Here:


    // ##############################################################################

    // 2D Arrays (Matrix)
    /*
        {
            {1, 2, 3, 4, 5, 6, 7},
            {1, 2, 3, 4, 5, 6, 7},
            {1, 2, 3, 4, 5, 6, 7},
            {1, 2, 3, 4, 5, 6, 7}
        };
    */
    
    // Application
    /*
        {
            {., ., .},
            {., ., .},
            {., ., .}
        };
    */

    // Syntax
    // int mat[rows][columns];

    /* int mat[4][7] = {
            {1, 2, 3, 4, 5, 6, 7},
            {1, 2, 3, 4, 5, 6, 7},
            {1, 2, 3, 4, 5, 6, 7},
            {1, 2, 3, 4, 5, 6, 7}
        };
    */ 

    // Accessing Values (Indexing)
    // cout << mat[i][j];
    // The value at row i and col j.

    // int n, m;
    // cin >> n >> m;
    // int mat[n][m];
    /*
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mat[i][j];
        }
    }

    */

    // ##############################################################################

    // 2D Vectors
    // vector<vector<int>> vec;
    /*
        {
            {1, 3, 4, 5},
            {2, 3},
            {4, 5, 6, 7, 8 , 9},
            {1}
        }
    */

    // Access
    // cout << v[0][2];
    /*
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < v[i].size(); j++){
            cin >> mat[i][j];
        }
    }

    */
}
