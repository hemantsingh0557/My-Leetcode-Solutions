





// class Solution {
// public:
//     string customSortString(string order, string s) {
        
//     }
// };















// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // //  1st Method ( Two Ways )  ====> Custom Comparator    TC = O(n*log(n)) , SC = O(log(n)) 
// //                      
// //                      
// // //  2nd Method  ====> Using Hashing    TC = O(n) , SC = O(n) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method  ( Two Ways )   ======>   Custom Comparator
// // //  1st Method  ( Two Ways )   ======>   Custom Comparator
// // //  1st Method  ( Two Ways )   ======>   Custom Comparator
// //                             
// // //   Time Complexity   = O(n*log(n))   
// //                              
// // //   Space Complexity  = O(log(n))   
// //                               







// // //   1st  Method   ====>      1st way   =====>       
// // //   1st  Method   ====>      1st way   =====>       
// // //   1st  Method   ====>      1st way   =====>       

// class Solution {
// public:
//     static bool cmp( char c1 , char c2 , string order  )
//     {
//         return order.find(c1) < order.find(c2) ; 
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     string customSortString(string order, string s) 
//     {
//         sort(s.begin() , s.end() , [&](char c1 , char c2){ return cmp(c1, c2, order); } ) ;
//         return s ; 
//     }
// };






// // //  1st  Method   ====>  2nd way   =====>       
// // //  1st  Method   ====>  2nd way   =====>       
// // //  1st  Method   ====>  2nd way   =====>       

// class Solution {
// public:
//     string customSortString(string order, string s) 
//     {
//         sort(s.begin() , s.end() , [order](char c1 , char c2) { 
//             return order.find(c1) < order.find(c2) ; 
//         }) ;
//         return s ; 
//     }
// };

















// //                           
// //                           
// // //  2nd Method    ======>   Using Hashing
// // //  2nd Method    ======>   Using Hashing
// // //  2nd Method    ======>   Using Hashing
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               


class Solution {
public:
    string customSortString(string order, string s) 
    {
        int m = order.size() , n = s.size() ; 
        string ans = "" ; 
        unordered_map<char,int> freqOfS , check ; 
        for(int i=0; i<n; i++ ) freqOfS[s[i]]++ ; 
        for(int i=0; i<m; i++ ) 
        {
            if( freqOfS[order[i]] )
            {
                while( freqOfS[order[i]] -- ) ans.push_back(order[i]) ; 
                check[order[i]] ++ ;
            }
        } 
        for(int i=0; i<n; i++)
        {
            if( ! check.count(s[i]) ) ans.push_back(s[i]) ; 
        }
        return ans ;  
    }
};





































