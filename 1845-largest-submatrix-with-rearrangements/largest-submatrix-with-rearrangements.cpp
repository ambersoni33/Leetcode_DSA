class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int maxArea = 0;

        // Step 1: Update the matrix to store the height of consecutive 1s
        for (int i = 1; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 1) {
                    matrix[i][j] += matrix[i - 1][j];
                }
            }
        }

        // Step 2: For each row, sort heights to find the best submatrix
        for (int i = 0; i < m; i++) {
            vector<int> currentRow = matrix[i];
            sort(currentRow.begin(), currentRow.end(), greater<int>());

            // Step 3: Calculate the largest area possible ending at this row
            for (int j = 0; j < n; j++) {
                int height = currentRow[j];
                int width = j + 1;
                maxArea = max(maxArea, height * width);
            }
        }

        return maxArea;
    }
};