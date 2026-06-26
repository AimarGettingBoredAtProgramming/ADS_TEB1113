//Medium Level - Peak in a 2D Array/Matrix

#include<iostream>
#include<vector>

using namespace std;

vector<int> findPeakGrid(vector<vector<int>>& mat) {
    int rows = mat.size();
    int cols = mat[0].size();
    
    int low = 0, high = rows - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        int maxRow = 0;
        for (int j = 0; j < cols; j++) {
            if (mat[mid][j] > mat[mid][maxRow]) {
                maxRow = j;
            }
        }

        int left = (mid > 0) ? //"?" is to check if the mid is greater than 0, if it is, then we check the left neighbor, otherwise we set it to INT_MIN (a very small value) to ensure that it doesn't affect the comparison.
    mat[mid - 1][maxRow] : INT_MIN;
        int right = (mid < rows - 1) ?
    mat[mid + 1][maxRow] : INT_MIN;

        if (mat[mid][maxRow] >= left && mat[mid][maxRow] >= right) { //how this works is by checking if the current element is greater than or equal to its neighbors (left and right). If it is, then it is a peak element and we return its coordinates. If not, we move the search space to the half that contains a larger neighbor, ensuring that we eventually find a peak.
            return {mid, maxRow};
        } else if (left > mat[mid][maxRow]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
}


int main(){
    vector<vector<int>> mat = {
        {10, 20, 15},
        {21, 3, 14},
        {7, 16, 32}
    };

    vector<int> peak = findPeakGrid(mat);
    cout << "Peak found at: (" << peak[0] << ", " << peak[1] << ")" << endl;
    return 0;
}