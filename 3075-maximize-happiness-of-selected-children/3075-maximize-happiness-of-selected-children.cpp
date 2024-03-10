









// //  LeetCode  Weekly Contest  388 


// //  2nd  Question  ===> Able to solve in contest


// //  Today's  Date   -    10th March 2024  -  Sunday    .    












// class Solution {
// public:
//     long long maximumHappinessSum(vector<int>& happiness, int k) 
//     {
//         
//     }
// };










// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using Sort()    TC = O(k + n*log(n) ) , SC = O(log(n)) 
// //                      
// //                      
// // //  2nd Method  ====> Try other     TC = O() , SC = O() 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Using Sort()
// // //  1st Method    ======>   Using Sort()
// // //  1st Method    ======>   Using Sort()
// //                             
// // //   Time Complexity   = O(k + n*log(n) )   
// //                              
// // //   Space Complexity  = O(log(n))   
// //                               



class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) 
    {
        int n = happiness.size() ; 
        sort(happiness.rbegin(), happiness.rend());
        long long ans = 0 ; 
        for(int i=0; i<k; i++)
        {
            ans += max( 0 ,  happiness[i] - i ) ; 
        }
        return ans  ; 
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














































