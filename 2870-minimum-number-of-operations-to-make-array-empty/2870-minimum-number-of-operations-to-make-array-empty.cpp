









// //    LeetCode  Daily Challenge Problem


// //    Today's   Date   -    4th   January   2024   -   Thursday  .    





// //  LeetCode  Weekly  or  Biweekly Contest    114


// //   2nd  Question  ===>


// //  Today's   Date   -    30th   September   2023    -   Saturday  .    











// class Solution {
// public:
//     int minOperations(vector<int>& nums) 
//     {
//          
//     }
// };













// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method ( Two Ways )  ====>  Simple Using map   TC = O(n) , SC = O(n) 
// //                      
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method ( Two Ways )   ======>     Simple Using map  
// // //  1st Method ( Two Ways )   ======>     Simple Using map  
// // //  1st Method ( Two Ways )   ======>     Simple Using map  
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               





// // //   1st  Method   ====>      1st way   =====>       
// // //   1st  Method   ====>      1st way   =====>       
// // //   1st  Method   ====>      1st way   =====>       


// class Solution {
// public:
//     int minOperations(vector<int>& nums) 
//     {
//         int n = nums.size() ;  
//         map<int , int> mp; 
//         for(int i=0; i<n; i++)
//         {
//             mp[nums[i]] ++ ; 
//         }
//         int ans = 0  ;  
//         for(auto it : mp)
//         {
//             if( it.second == 1 ) return -1 ; 
//             else if( it.second % 3 == 0  ) ans += it.second / 3 ; 
//             else if( it.second % 2 == 0  )
//             {
//                 int times = it.second / 3 ;  
//                 int ct = it.second % 3   ;    
//                 if( ct == 1 )  ans += times + 1 ;  //  ans += times - 1 + 2   ;  
//                 else ans += times + 1 ; 
//             }
//             else
//             {
//                 int times = it.second / 3 ;  
//                 int ct = it.second % 3   ;    
//                 if( ct == 1 )  ans += times + 1 ;
//                 else ans += times + 1 ; 
//             }
//         }
//         return ans ; 
//     }
// };







// // //   1st  Method   ====>     2nd  way   =====>       
// // //   1st  Method   ====>     2nd  way   =====>       
// // //   1st  Method   ====>     2nd  way   =====>       


class Solution {
public:
    int minOperations(vector<int>& nums) 
    {
        int n = nums.size() ;  
        unordered_map<int , int> mp; 
        for(int i=0; i<n; i++)
        {
            mp[nums[i]] ++ ; 
        }
        int ans = 0  ;  
        for(auto it : mp)
        {
            if( it.second == 1 ) return -1 ; 
            int times = it.second / 3 ;  
            int rem = it.second % 3   ;  
            ans += times ;   
            if( rem > 0 )  ans ++ ;
        }
        return ans ; 
    }
};


































































