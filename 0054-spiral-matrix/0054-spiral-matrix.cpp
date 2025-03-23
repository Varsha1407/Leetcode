class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int clm = matrix[0].size();
        vector<int> arr;
        vector<vector<bool>> visited(row, vector<bool>(clm, false)); // To track visited elements

        int i = 0, j = 0; // Start position
        int totalElements = row * clm; 
        int count = 0;

        while (count < totalElements) {
            // Traverse top row (left to right)
            while (j < clm && !visited[i][j]) {
                arr.push_back(matrix[i][j]);
                visited[i][j] = true;
                j++;
                count++;
            }
            j--; i++; // Adjust for overshoot

            // Traverse last column (top to bottom)
            while (i < row && !visited[i][j]) {
                arr.push_back(matrix[i][j]);
                visited[i][j] = true;
                i++;
                count++;
            }
            i--; j--; // Adjust for overshoot

            // Traverse bottom row (right to left)
            while (j >= 0 && !visited[i][j]) {
                arr.push_back(matrix[i][j]);
                visited[i][j] = true;
                j--;
                count++;
            }
            j++; i--; // Adjust for overshoot

            // Traverse first column (bottom to top)
            while (i >= 0 && !visited[i][j]) {
                arr.push_back(matrix[i][j]);
                visited[i][j] = true;
                i--;
                count++;
            }
            i++; j++; // Adjust for overshoot

            // Move inward (continue until all elements are covered)
            while (j < clm && i < row && !visited[i][j]) { // Move right
                arr.push_back(matrix[i][j]);
                visited[i][j] = true;
                j++;
                count++;
            }
            j--; i++;

            while (i < row && j < clm && !visited[i][j]) { // Move down
                arr.push_back(matrix[i][j]);
                visited[i][j] = true;
                i++;
                count++;
            }
            i--; j--;

            while (j >= 0 && i >= 0 && !visited[i][j]) { // Move left
                arr.push_back(matrix[i][j]);
                visited[i][j] = true;
                j--;
                count++;
            }
            j++; i--;

            while (i >= 0 && j >= 0 && !visited[i][j]) { // Move up
                arr.push_back(matrix[i][j]);
                visited[i][j] = true;
                i--;
                count++;
            }
            i++; j++;
        }

        return arr;
    }
};
