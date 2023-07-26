





// class Solution {
// public:
//     int minSpeedOnTime(vector<int>& dist, double hour) {
        
//     }
// };




















// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                 // // n is size of dist and k is size of search space    
// //
// // //  1st Method  ====> Binary Search    TC = O(nlog(k)) , SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>     Binary Search      
// // //  1st Method    ======>     Binary Search      
// // //  1st Method    ======>     Binary Search      
// //                             
// // //   Time Complexity   = O(nlog(k))    // // n is size of dist and k is size of search space   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               




class Solution {
public:
    double takesTime(int speed , vector<int>& dist )
    {
        int n = dist.size() ; 
        double time = 0 ;
        for(int i=0; i<n; i++)
        {
            double t  =  (double)dist[i]/speed ;
            if(i != n-1 ) time += ceil (t) ;
            else time += t ; 
        }
        return time ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int minSpeedOnTime(vector<int>& dist, double hour) 
    {
        int lo =1  , hi = 1e7 ;
        while(hi-lo>1)
        {
            int mid = (hi+lo)/2  ;  
            if( takesTime(mid , dist) > hour ) lo = mid + 1 ;
            else hi = mid ; 
        }
        if( takesTime(lo , dist) <= hour ) return lo ;
        else if( takesTime(hi , dist) <= hour ) return hi ;
        return -1 ;
    }
};


































