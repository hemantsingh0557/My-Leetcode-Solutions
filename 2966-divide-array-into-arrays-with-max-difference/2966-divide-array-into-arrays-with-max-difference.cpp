








// class Solution {
// public:
//     vector<vector<int>> divideArray(vector<int>& nums, int k) 
//     {
        
//     }
// };












class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) 
    {
        int n = nums.size() ;
        map<int,int> mp ;
        for(int i=0; i<n; i++) mp[nums[i]] ++  ; 
        vector<vector<int>> ans ;
        vector<int> temp ; 
        for( auto it : mp )
        {
            while( it.second-- )
            {
                temp.push_back(it.first) ;
                if((int)temp.size() == 3 ) 
                {
                    ans.push_back(temp)  ;
                    if( abs( temp[0]-temp[1]) > k || abs( temp[1]-temp[2]) > k || abs( temp[0]-temp[2]) > k  ) 
                    return {} ; 
                    temp.clear() ;
                }
            }
        }
        return ans ;
    }
};





















