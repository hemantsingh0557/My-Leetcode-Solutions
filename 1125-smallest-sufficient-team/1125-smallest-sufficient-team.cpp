






// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Recursion and BitMasking(TLE TLE TLE)   TC = O( (2^n)*(2^m) ) , SC = O(2^n) 
// //                      
// //                      
// // //  2nd Method  ====>  DP Memoization and BitMasking   TC =  O(2^n * m)   , SC = O(2^n) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     vector<int> smallestSufficientTeam(vector<string>& req_skills, vector<vector<string>>& people) 
//     {
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>    Recursion and BitMasking(TLE TLE TLE) 
// // //  1st Method    ======>    Recursion and BitMasking(TLE TLE TLE) 
// // //  1st Method    ======>    Recursion and BitMasking(TLE TLE TLE) 
// //                             
// // //   Time Complexity   = O( (2^n)*(2^m) )  
// //                              
// // //   Space Complexity  = O(2^n)   
// //                               


// class Solution {
// public:
//     int n , m ;
//     int target_mask = 0;
//     vector<int> ans ;
//     void solve(int index , int mask , vector<int> &peopleskills , vector<int>&temp )
//     {
//         if(index == peopleskills.size())
//         {
//             if(mask==target_mask)
//             {
//                 if(ans.size()==0 || ans.size()>temp.size()) ans = temp ;
//             }
//             return ;
//         }
//         if(ans.size() !=0 && ans.size()<=temp.size()) return ;
//         //
//         solve( index+1 , mask , peopleskills , temp ) ; 
//         //
//         if((mask | peopleskills[index]) != mask)
//         {
//             temp.push_back(index) ;
//             solve( index+1 , (mask | peopleskills[index]) , peopleskills , temp ) ; 
//             temp.pop_back() ;
//         }
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     vector<int> smallestSufficientTeam(vector<string>& req_skills, vector<vector<string>>& people) 
//     {
//         n = req_skills.size() ;
//         m = people.size() ;
//         unordered_map<string,int> skills ;
//         for(int i=0; i<n; i++) skills[req_skills[i]] = i ;
//         vector<int> peopleskills ;
//         for(int i=0; i<m; i++)
//         {
//             int skill_bit = 0 ;
//             for(int j=0; j<people[i].size(); j++)
//             {
//                 string skill = people[i][j] ;
//                 skill_bit |= (1<<skills[skill]);
//             }
//             peopleskills.push_back(skill_bit) ;
//         }
//         target_mask = (1<<n) -1 ;
//         vector<int> temp ;
//         solve( 0 , 0  , peopleskills , temp ) ;
//         return ans ;
//     }
// };
















// //                           
// //                           
// // //  2nd Method    ======>     DP Memoization and BitMasking
// // //  2nd Method    ======>     DP Memoization and BitMasking
// // //  2nd Method    ======>     DP Memoization and BitMasking
// //                             
// // //   Time Complexity   = O(2^n  * m)   
// //                              
// // //   Space Complexity  = O(2^n)   
// //                               





class Solution {
public:
    int n , m ;
    int target_mask = 0;
    vector<int> ans ;
    unordered_map<string ,int> dp ;
    void solve(int index , int mask , vector<int> &peopleskills , vector<int>&temp )
    {
        if(index == peopleskills.size())
        {
            if(mask==target_mask)
            {
                if(ans.size()==0 || ans.size()>temp.size()) ans = temp ;
            }
            return ;
        }
        //
        string key = to_string(index) + " "  + to_string(mask) ;
        if(dp.count(key)) if(dp[key] <= temp.size()) return ;
        //
        //
        if(ans.size() !=0 && ans.size()<=temp.size()) return ;
        //
        solve( index+1 , mask , peopleskills , temp ) ; 
        //
        if((mask | peopleskills[index]) != mask)
        {
            temp.push_back(index) ;
            solve( index+1 , (mask | peopleskills[index]) , peopleskills , temp ) ; 
            temp.pop_back() ;
            //
            dp[key] = temp.size()!=0 ? temp.size() : -1 ; 
        }
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    vector<int> smallestSufficientTeam(vector<string>& req_skills, vector<vector<string>>& people) 
    {
        n = req_skills.size() ;
        m = people.size() ;
        unordered_map<string,int> skills ;
        for(int i=0; i<n; i++) skills[req_skills[i]] = i ;
        vector<int> peopleskills ;
        for(int i=0; i<m; i++)
        {
            int skill_bit = 0 ;
            for(int j=0; j<people[i].size(); j++)
            {
                string skill = people[i][j] ;
                skill_bit |= (1<<skills[skill]);
            }
            peopleskills.push_back(skill_bit) ;
        }
        target_mask = (1<<n) -1 ;
        vector<int> temp ;
        solve( 0 , 0  , peopleskills , temp ) ;
        return ans ;
    }
};































































