











// //    LeetCode  Daily Challenge Problem


// //    Today's   Date   -    9th   April   2024   -   Tuesday    .    














// class Solution {
// public:
//     int timeRequiredToBuy(vector<int>& tickets, int k) {
        
//     }
// };













// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// // // m is maximum no of tickte at each index                    
// //                     
// // //  1st Method  ====>  Simulate   TC = O(n*m) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====>  Try any other   TC = O() , SC = O() 
// //                     
// //                     
// // //  3rd Method  ====>  Try any other    TC = O() , SC = O()  
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======  Simulate
// // //  1st Method    ======  Simulate
// // //  1st Method    ======  Simulate
// //
// // // // // m is maximum no of tickte at each index 
// //                             
// // //   Time Complexity   = O(n*m)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               


class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) 
    {
        int n = tickets.size() ; 
        int ans = 0 ; 
        while( tickets[k] > 0 )
        {
            for(int i=0; i<n; i++)
            {
                if( tickets[i] > 0 ) tickets[i]-- , ans++  ;    
                if( tickets[k] == 0 )  return ans  ; 
            }
            cout<<ans<<endl;
        }
        return ans ;   
    }
};











// //                           
// //                           
// // //  2nd Method    ======>   Try any other 
// // //  2nd Method    ======>   Try any other 
// // //  2nd Method    ======>   Try any other 
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               


// //                           
// //                           
// // //  3rd Method    ======>   Try any other 
// // //  3rd Method    ======>   Try any other 
// // //  3rd Method    ======>   Try any other 
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               








































