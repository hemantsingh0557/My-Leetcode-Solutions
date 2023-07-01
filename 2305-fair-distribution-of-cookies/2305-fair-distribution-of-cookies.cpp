





// // //  can't optimized till now 
// // //  can't optimized till now 
// // //  can't optimized till now 
// // //  can't optimized till now 







// //
// // // // // // //  Solve Using  Only One Method  ===>     
// // // // // // //  Solve Using  Only One Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple Recursion and Backtracking    TC = O(k^n) , SC = O(k) 
// //                      
// //                      
// // //  2nd Method  ====>     TC = O() , SC = O() 
// //
// //
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////


// class Solution {
// public:
//     int distributeCookies(vector<int>& cookies, int k) {
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>     Simple Recursion and Backtracking 
// // //  1st Method    ======>     Simple Recursion and Backtracking 
// // //  1st Method    ======>     Simple Recursion and Backtracking 
// //                             
// // //   Time Complexity   = O(k^n)   
// //                              
// // //   Space Complexity  = O(k)   
// //                              



class Solution {
public:
    int n ;
    int ans = INT_MAX ;
    void minimumCookies(int i , int k , vector<int>& child , vector<int>& cookies)
    {
        if(i>=n)
        {
            ans = min( ans , *max_element(child.begin(), child.end()) ) ;   
            return ;
        }
        for(int j=0; j<k; j++)
        {
            child[j] += cookies[i] ; 
            minimumCookies(i+1, k ,child , cookies ) ;   
            child[j] -= cookies[i] ;
        }
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int distributeCookies(vector<int>& cookies, int k) 
    {
        n = cookies.size() ;
        vector<int> child(k,0) ;
        minimumCookies(0,k ,child , cookies ) ;
        return ans ;
    }
};







// //                           
// //                           
// // //  2nd  Method    ======>                 
// // //  2nd  Method    ======>                 
// // //  2nd  Method    ======>                 
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                              





// class Solution {
// public:
//     int distributeCookies(vector<int>& cookies, int k) 
//     {



//     }
// };

































