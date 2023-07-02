

// Bitmasking(not done) 
// Bitmasking(not done) 
// Bitmasking(not done) 
// Bitmasking(not done) 
// Bitmasking(not done) 
// Bitmasking(not done) 




// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //
// //          //  N is the number of buildings, and M is the number of requests.
// // //  1st Method  ====>  Simple Recursion  and  Backtracking    TC = O(n * 2^m) , SC = O(n+m) 
// //                      
// //                      
// // //  2nd Method  ====>  Bitmasking(not done)   TC = O(n * 2^m)   , SC = O(n) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////


// class Solution {
// public:
//     int maximumRequests(int n, vector<vector<int>>& requests) {
        
//     }
// };


/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>  Simple Recursion  and  Backtracking 
// // //  1st Method    ======>  Simple Recursion  and  Backtracking 
// // //  1st Method    ======>  Simple Recursion  and  Backtracking 
// //                             
// // //   Time Complexity   = O(n * 2^m)   
// //                              
// // //   Space Complexity  = O(n+m)  
// //                               



class Solution {
public:
    int ans = INT_MIN ; 
    void request(int i, int count , vector<int>& building , vector<vector<int>>& requests)
    {
        if(i==requests.size())
        {
            for(auto it : building ) if(it !=0) return ;
            ans = max(ans , count) ; 
            return ;
        }
        request( i+1 , count ,  building ,  requests) ;  
        building[requests[i][0]]-- ; 
        building[requests[i][1]]++ ; 
        request( i+1 , count+1 , building ,  requests) ;  
        building[requests[i][0]]++ ; 
        building[requests[i][1]]-- ; 
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int maximumRequests(int n, vector<vector<int>>& requests) 
    {
        vector<int> building(n+1);
        request( 0, 0 , building ,  requests) ;  
        return ans ;
    }
};








// //                           
// //                           
// // //  2nd Method    ======>   Bitmasking
// // //  2nd Method    ======>   Bitmasking
// // //  2nd Method    ======>   Bitmasking
// //                             
// // //   Time Complexity   = O(n * 2^m)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               




// class Solution {
// public:
//     int maximumRequests(int n, vector<vector<int>>& requests) 
//     {
//         vector<int> building(n+1);
//         return ans ;
//     }
// };





































