class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxWater = 0;
        
        int l = 0;
        int r = heights.size() - 1;

        while (l < r)
        {

            int area = (r - l) * min(heights[l], heights[r]);
            maxWater = max(maxWater, area);


            if (heights[l] < heights[r])
            {
                l++;
            }
            else if (heights[l] > heights[r])
            {
                r--;
            }
            else
            {
               l++;
            }

        }
        return maxWater;
    }
};
