









// //  LeetCode  Weekly Contest  388 


// //  1st  Question  ===> Able to solve in contest


// //  Today's  Date   -    10th March 2024  -    Sunday    .    














// class Solution {
// public:
//     int minimumBoxes(vector<int>& apple, vector<int>& capacity) 
//     {
//         
//     }
// };














// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Using sort()   TC = O(n + m*log(m)) , SC = O(log(m)) 
// //                      
// //                      
// // //  2nd Method  ====>  Try other   TC = O() , SC = O() 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Using sort()  
// // //  1st Method    ======>   Using sort()  
// // //  1st Method    ======>   Using sort()  
// //                             
// // //   Time Complexity   = O(n + m*log(m))  
// //                              
// // //   Space Complexity  = O(log(m))   
// //                               


class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) 
    {
        int n = apple.size()  , m = capacity.size() ; 
        int total = accumulate(apple.begin(), apple.end(), 0);
        sort(capacity.rbegin() , capacity.rend() ) ; 
        for(int i=0; i<m; i++)
        {
            total -= capacity[i] ;
            // cout<<total<<endl;
            if( total <= 0 ) return i+1 ; 
        }
        return m ; 
    }
};








// //                           
// //                           
// // //  2nd Method    ======>   Try other
// // //  2nd Method    ======>   Try other
// // //  2nd Method    ======>   Try other
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               






























































