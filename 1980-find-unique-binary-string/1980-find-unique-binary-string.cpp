

















// class Solution {
// public:
//     string findDifferentBinaryString(vector<string>& nums) {
        
//     }
// };















// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Recursion generate all string   TC = O(n^2) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> Iterate Over Number   TC = O(n^2) , SC = O(n) 
// //                     
// //                     
// // //  3rd Method  ====> Iterate Over Number   TC = O(n^2) , SC = O(n) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Recursion generate all string  
// // //  1st Method    ======>    Recursion generate all string  
// // //  1st Method    ======>    Recursion generate all string  
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


// class Solution {
// public:
//     unordered_map<string, int> mp ;  // // normal map give TLE in the last test case 
//     string temp  ;
//     string ans = "" ;
//     void findstring( int n)
//     {
//         if( n == 0 )
//         {
//             // if( mp[temp] == 0 ) ans = temp ; // // ans update many times 
//             // // both above and below are correct but in bewlow it takes sligthly  less time
//             // // because here if fisrt time we find the string which  is not in map in that will be
//             // // out answer and then we don't need to update it . 
//             if( mp[temp] == 0 && ans.size() == 0 ) ans = temp ;   // ans update only one time
//             return  ;
//         }
//         temp.push_back('1') ;
//         findstring(n-1) ; 
//         temp.pop_back() ;
//         temp.push_back('0') ;
//         findstring(n-1) ; 
//         temp.pop_back() ;
//     }   
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     string findDifferentBinaryString(vector<string>& nums) 
//     {
//         int n = nums.size() ;  
//         for(int i=0; i<n; i++) mp[nums[i]] ++ ;  
//         findstring(n) ;  
//         return ans ;   
//     }
// };


















// //                           
// //                           
// // //  2nd Method    ======>    Iterate Over Number 
// // //  2nd Method    ======>    Iterate Over Number 
// // //  2nd Method    ======>    Iterate Over Number 
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


// class Solution {
// public:
//     string findDifferentBinaryString(vector<string>& nums) 
//     {
//         int n = nums.size() ;  
//         map<int , int> mp ;
//         for(int i=0; i<n; i++) 
//         {
//             mp[stoi(nums[i] , 0 , 2)]++ ; 
//         }
//         //
//         //
//         // the below loop will run 0 to n means (n+1) and in nums only n string
//         // so it means at leat one of them from 0 to n (means (n+1) )  will not appear in nums
//         // and that will be our answer
//         string ans  ;
//         for(int i=0; i<=n; i++)
//         {
//             if( mp[i] == 0  )
//             {
//                 for(int j = n-1; j>=0 ; j--)
//                 {
//                     char c = ((i>>j)&1) + '0' ;
//                     ans.push_back(c) ;  
//                 }
//                 break ;
//             }
//         }
//         return ans ;   
//     }
// };

    










// //                           
// //                           
// // //  3rd Method    ======>    Iterate Over Number 
// // //  3rd Method    ======>    Iterate Over Number 
// // //  3rd Method    ======>    Iterate Over Number 
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) 
    {
        int n = nums.size() ;  
        map<int , int> mp ;
        for(int i=0; i<n; i++) 
        {
            mp[stoi(nums[i] , 0 , 2)]++ ; 
        }
        //
        // the below loop will run 0 to n means (n+1) and in nums only n string
        // so it means at leat one of them from 0 to n (means (n+1) )  will not appear in nums
        // and that will be our answer
        string ans  ;
        for(int i=0; i<=n; i++)
        {
            if( mp[i] == 0  )
            {
                string temp = bitset<16>(i).to_string() ;
                // //  temp =>  0000000000000010
                // //   ans =>  10
                // // substr from the position 16-n 
                ans = temp.substr(16 - n ) ; 
                break ;
            }
        }
        return ans ;   
    }
};

    




































