












// class Solution {
// public:
//     int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) 
//     {
//         
//     }
// };
// 











// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple using sort()    TC = O(nlog(n)) , SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple using sort() 
// // //  1st Method    ======>   Simple using sort() 
// // //  1st Method    ======>   Simple using sort() 
// //                             
// // //   Time Complexity   = O(nlog(n))
// //                              
// // //   Space Complexity  = O(1) constant  
// //                              



class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) 
    {
        int n = processorTime.size() ; 
        int m = tasks.size() ;  
        sort(processorTime.begin()  , processorTime.end()) ;
        sort(tasks.rbegin() , tasks.rend()) ;
        int ans = 0 ;
        for(int i=0; i<n; i++)
        {
            int time = processorTime[i] ;
            int j = i*4 ; 
            int mx = max({time+tasks[j], time+tasks[j+1], time+tasks[j+2], time+tasks[j+3]}) ;  
            ans = max( ans , mx ) ;
        }
        return ans ; 
    }
};




















































