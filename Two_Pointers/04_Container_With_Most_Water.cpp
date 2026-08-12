class Solution {
public:
    int maxArea(vector<int>& height) {

        int L = 0;
        int R = height.size() - 1;

        int maxWater = 0;

        while (L < R) {

            int width = R - L;

            int h = min(height[L], height[R]);

            int area = width * h;

            maxWater = max(maxWater, area);

            if (height[L] < height[R]) {
                L++;
            }
            else {
                R--;
            }
        }

        return maxWater;
    }
};