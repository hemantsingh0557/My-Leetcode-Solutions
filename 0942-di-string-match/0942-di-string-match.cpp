



// //
// // // // // // //  Solve Using  Only One Method  ===>     
// // // // // // //  Solve Using  Only One Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple Iteration (Two Pointer)    TC = O(n) , SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////


// class Solution {
// public:
//     vector<int> diStringMatch(string s) {
        
//     }
// };


/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>    Simple Iteration (Two Pointer) 
// // //  1st Method    ======>    Simple Iteration (Two Pointer) 
// // //  1st Method    ======>    Simple Iteration (Two Pointer) 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               




class Solution {
public:
    vector<int> diStringMatch(string s) 
    {
        int sz = s.size() ;
        vector<int> perm;
        int high = sz ;
        int low = 0 ;
        for(int i=0; i<sz; i++)
        {
            if(s[i]=='I') perm.push_back(low) , low ++ ;
            else perm.push_back(high) , high -- ;
        }
        if(s[sz-1]=='I') perm.push_back(low) , low ++ ;
        else perm.push_back(high) , high -- ;
        return perm ;
    }
};





































