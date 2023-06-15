







class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        vector<int> v = nums ;
        int n = v.size() ;
        for(int i=0; i<n; i++)
        {
            nums[(i+k)%n] = v[i] ;
        }
    }
};
















