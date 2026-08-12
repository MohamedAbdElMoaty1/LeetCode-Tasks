class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
      vector<int> result(m + n);

        for (int i = 0; i < m; i++)
        {
            result[i] = nums1[i];
        }

        for (int i = 0; i < n; i++)
        {
            result[m + i] = nums2[i];
        }

        sort(result.begin(), result.end());

        for (int i = 0; i < m + n; i++)
        {
            nums1[i] = result[i];
        }
    }
};