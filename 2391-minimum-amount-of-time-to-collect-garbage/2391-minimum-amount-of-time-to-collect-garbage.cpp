




















// class Solution {
// public:
//     int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        
//     }
// };







// //
// // // // // // //  Solve Using  Only One   Method  ===>     
// // // // // // //  Solve Using  Only One   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple Iteration   TC = O(10^6) or O(n*log(n)) , SC = O(5) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple Iteration  
// // //  1st Method    ======>   Simple Iteration  
// // //  1st Method    ======>   Simple Iteration  
// //                             
// // //   Time Complexity   = O(10^6) or O(n*log(n))   
// //                              
// // //   Space Complexity  =  SC = O(5) constant
// //                               




class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) 
    {
        int n = garbage.size() ; 
        int ans = 0 ;   
        int truck1 =  0 , truck2 = 0 , truck3 = 0 ; 
        for(int i=0; i<n; i++)
        {
            int sz = garbage[i].size() ; 
            int m =0, p =0  , g =0 ;  
            for(int j=0; j<sz; j++)
            {
                if( garbage[i][j] == 'M' ) m = 1 , truck1 ++ ;  
                else if( garbage[i][j] == 'P' ) p = 1 , truck2 ++ ;  
                else if( garbage[i][j] == 'G' ) g = 1 , truck3 ++ ;  
            }
            if( i>0 ) truck1 += travel[i-1] , truck2 += travel[i-1] , truck3 += travel[i-1] ;
            if(m) ans += truck1 ,   truck1 = 0 ;
            if(p) ans += truck2 ,   truck2 = 0 ;
            if(g) ans += truck3 ,   truck3 = 0 ;
        }
        return ans ;   
    }
};



































