








// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Using sort() function        TC = O(nlog(n))  ,  SC = O(1n) 
// //                      
// //                      
// // //  2nd Method  ====>  Using  Priority Queue        TC = O(nlog(k))  ,  SC = O(k) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     long long putMarbles(vector<int>& weights, int k) {
        
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>  Using sort() function
// // //  1st Method    ======>  Using sort() function
// // //  1st Method    ======>  Using sort() function
// //                             
// // //   Time Complexity   = O(nlog(n))   
// //                              
// // //   Space Complexity  = O(n)   
// //                               




// class Solution {
// public:
//     long long putMarbles(vector<int>& weights, int k) 
//     {
//         int n = weights.size() ;
//         vector<int> pairSum ;
//         for(int i=0; i<n-1; i++) pairSum.push_back(weights[i]+weights[i+1]) ;
//         sort(pairSum.begin() , pairSum.end()) ;
//         long long  mxSum = 0 , mnSum = 0 ;
//         int sz = pairSum.size() ;
//         for(int i=0; i<k-1 ; i++)
//         {
//             mnSum += pairSum[i] ;
//             mxSum += pairSum[sz-1-i] ;
//         }
//         return mxSum - mnSum ;
//     }
// };













// //                           
// //                           
// // //  2nd Method    ======>   Using  Priority Queue
// // //  2nd Method    ======>   Using  Priority Queue
// // //  2nd Method    ======>   Using  Priority Queue
// //                             
// // //   Time Complexity   = O(nlog(k))   
// //                              
// // //   Space Complexity  = O(k)   
// //                               






class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) 
    {
        int n = weights.size() ;
        priority_queue<int> mxheap ; 
        priority_queue<int , vector<int> , greater<int>> mnheap ; 
        for(int i=0; i<n-1; i++)
        {
            mxheap.push(weights[i]+weights[i+1]) ;  
            mnheap.push(weights[i]+weights[i+1]) ;  
            if(mxheap.size()>k-1) mxheap.pop() , mnheap.pop() ; 
        }
        long long  mxSum = 0 , mnSum = 0 ;
        int ct = k-1 ;
        while(ct--)
        {
            mxSum += mnheap.top() ;
            mnSum += mxheap.top() ;
            mxheap.pop() , mnheap.pop() ; 
        }
        return mxSum - mnSum ;
    }
};



































