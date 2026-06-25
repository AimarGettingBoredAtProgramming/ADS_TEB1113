//Hard Level - Find Specific Pair in Matrix

#include<iostream>
#include<bits/stdc++.h> //This is a header file that includes all the standard libraries in C++. It is not recommended to use this in production code as it can slow down compilation time and may include unnecessary libraries. However, it is often used in competitive programming for convenience.

using namespace std;

#define N 5 //This directive defines a constant of N with a value of 5. Used to defined the size of a matrix in this program.

int findMaxVal(int mat[][N]) { //This function takes a 2D array (matrix) and two integers (x and y) as input. It finds the maximum value in the matrix that is less than or equal to x and y.
    int maxValue = INT_MIN;

    for (int a = 0; a < N - 1; a++)
    for (int b = 0; b < N - 1; b++)
        for (int d = a + 1; d < N; d++)
        for (int e = b + 1; e < N; e++)
            if (maxValue < (mat[d][e] - mat[a][b]))
                maxValue = mat[d][e] - mat[a][b];

    return maxValue; //Return the maximum value found.
}

int main() {
    int mat[N][N] = { { 30, 2, 3, 4, 5 },
                      { 6, 7, 8, 9, 10 },
                      { 11, 12, 13, 14, 15 },
                      { 16, 17, 18, 19, 20 },
                      { 21, 22, 23, 24, 25 } };

    cout << "Maximum Value is " << findMaxVal(mat);

    return 0;
}


