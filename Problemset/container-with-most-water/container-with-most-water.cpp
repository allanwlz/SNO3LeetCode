
// @Title: 盛最多水的容器 (Container With Most Water)
// @Author: user3919vu
// @Date: 2020-06-03 20:59:51
// @Runtime: 16 ms
// @Memory: 7.7 MB

class Solution {
public:
    int maxArea(vector<int>& height) {
        int a = 0, b = height.size() - 1, c, max_area = 0;
        while(a < b){
            if (height[a] > height[b]) {
                max_area = max(max_area, (b - a) * height[b]);
                c = b - 1;
                while(c > a && height[c] <= height[b]) c--;
                b = c;
            } else if (height[a] < height[b]){
                max_area = max(max_area, (b - a) * height[a]);
                c = a + 1;
                while(c < b && height[c] <= height[a]) c++;
                a = c;
            } else {
                max_area = max(max_area, (b - a) * height[a]);
                c = b - 1;
                while(c > a && height[c] <= height[b]) c--;
                b = c;
                c = a + 1;
                while(c < b && height[c] <= height[a]) c++;
                a = c;
            }
        }
        return max_area;
    }
};
