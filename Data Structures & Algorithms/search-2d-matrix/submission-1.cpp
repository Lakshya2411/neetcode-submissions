
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int left1 = 0;
        int right1 = matrix.size() - 1;

        while (left1 <= right1) {

            int middle1 = left1 + (right1 - left1) / 2;

            int first = matrix[middle1][0];
            int last = matrix[middle1][matrix[middle1].size() - 1];

            if (target < first) {
                right1 = middle1 - 1;
            }
            else if (target > last) {
                left1 = middle1 + 1;
            }
            else {

                int left2 = 0;
                int right2 = matrix[middle1].size() - 1;

                while (left2 <= right2) {

                    int middle2 = left2 + (right2 - left2) / 2;

                    if (matrix[middle1][middle2] == target) {
                        return true;
                    }
                    else if (matrix[middle1][middle2] < target) {
                        left2 = middle2 + 1;
                    }
                    else {
                        right2 = middle2 - 1;
                    }
                }

                return false;
            }
        }

        return false;
    }
};
