









// /**
//  * // This is the MountainArray's API interface.
//  * // You should not implement it, or speculate about its implementation
//  * class MountainArray {
//  *   public:
//  *     int get(int index);
//  *     int length();
//  * };
//  */

// class Solution {
// public:
//     int findInMountainArray(int target, MountainArray &mountainArr) {
        
//     }
// };















// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// //   // //  n is length of the mountain array                  
// //                     
// // 1st Method ==> Linear Search(more than 100 calls not accepted)  TC = O(n), SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====> Using Binary Search    TC = O( 3*log(n) ) , SC = O(1) constant
// //                     
// //                     
// // 3rd Method ==> Better Code Quality of 2nd Method    TC = O( 3*log(n) ), SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>     Linear Search ( more than 100 calls not accepted )
// // //  1st Method    ======>     Linear Search ( more than 100 calls not accepted )
// // //  1st Method    ======>     Linear Search ( more than 100 calls not accepted )
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                              

// /**
//  * // This is the MountainArray's API interface.
//  * // You should not implement it, or speculate about its implementation
//  * class MountainArray {
//  *   public:
//  *     int get(int index);
//  *     int length();
//  * };
// */

// class Solution {
// public:
//     int findInMountainArray(int target, MountainArray &mountainArr) 
//     {
//         int n = mountainArr.length() ;
//         // cout<<n<<endl;
//         for(int i=0; i<n; i++)
//         {
//             if( target == mountainArr.get(i) ) return i ; 
//         }
//         return -1 ;
//     }
// };














// //                           
// //                           
// // //  2nd Method    ======>    Using Binary Search 
// // //  2nd Method    ======>    Using Binary Search 
// // //  2nd Method    ======>    Using Binary Search 
// //                             
// // //   Time Complexity   =  O( 3*log(n) )   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               




// /**
//  * // This is the MountainArray's API interface.
//  * // You should not implement it, or speculate about its implementation
//  * class MountainArray {
//  *   public:
//  *     int get(int index);
//  *     int length();
//  * };
// */

// class Solution {
// public:
//     int findInMountainArray(int target, MountainArray &mountainArr) 
//     {
//         int n = mountainArr.length() ;
//         // cout<<n<<endl;
//         int lo = 0 , hi = n-1 ;  
//         while( hi - lo > 1 )
//         {
//             int mid = (hi+lo)/2 ;
//             if( mountainArr.get(mid) < mountainArr.get(mid+1)  ) lo = mid+1 ;
//             else hi = mid ; 
//         }
//         int peakIndex = 0 ;
//         if( mountainArr.get(lo) < mountainArr.get(hi)  ) peakIndex = hi ;
//         else peakIndex = lo ;
//         lo = 0 , hi = peakIndex ;  
//         while( hi - lo > 1 )
//         {
//             int mid = (hi+lo)/2 ;
//             if( target > mountainArr.get(mid) ) lo = mid+1 ;
//             else hi = mid ; 
//         }
//         if( target == mountainArr.get(lo) ) return lo ;
//         else if( target == mountainArr.get(hi) ) return hi ;
//         lo = peakIndex+1 , hi = n-1 ;  
//         while( hi - lo > 1 )
//         {
//             int mid = (hi+lo)/2 ;
//             if( target < mountainArr.get(mid) ) lo = mid+1 ;
//             else hi = mid ; 
//         }
//         if( target == mountainArr.get(lo) ) return lo ;
//         else if( target == mountainArr.get(hi) ) return hi ;
//         return -1 ;
//     }
// };













// //                           
// //                           
// // //  3rd Method    ======>    Better Code Quality of 2nd Method 
// // //  3rd Method    ======>    Better Code Quality of 2nd Method 
// // //  3rd Method    ======>    Better Code Quality of 2nd Method 
// //                             
// // //   Time Complexity   =  O( 3*log(n) )   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               





/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
*/

class Solution {
public:
    int PeakOfMountainArray( int lo , int hi , MountainArray &mountainArr )
    {
        while( hi - lo > 1 )
        {
            int mid = (hi+lo)/2 ;
            if( mountainArr.get(mid) < mountainArr.get(mid+1)  ) lo = mid+1 ;
            else hi = mid ; 
        }
        if( mountainArr.get(lo) > mountainArr.get(hi)  ) return lo ;
        return hi ;
    }
    //
    //
    int searchTarget( int lo, int hi, int target, MountainArray &mountainArr , int inc )
    {
        while( hi - lo > 1 )
        {
            int mid = (hi+lo)/2 ;
            //
            // // when we will be searching in increasig mountain means before peak
            if( inc && target > mountainArr.get(mid) ) lo = mid+1 ;
            //
            // // when we will be searching in decreasing mountain means after peak
            else if( ! inc && target < mountainArr.get(mid) ) lo = mid+1 ;
            // 
            // // the below statement is same is both the above cases
            else hi = mid ; 
        }
        if( target == mountainArr.get(lo) ) return lo ;
        else if( target == mountainArr.get(hi) ) return hi ;
        return -1 ;
    }
    //
    //
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int findInMountainArray(int target, MountainArray &mountainArr) 
    {
        int n = mountainArr.length() ;
        // cout<<n<<endl;
        int peakIndex =  PeakOfMountainArray( 0 , n-1 , mountainArr ) ; 
        //
        //
        // // when we will be searching in increasig mountain means before peak
        int leftIndex = searchTarget( 0 , peakIndex , target , mountainArr , true ) ; 
        if( leftIndex != -1  ) return leftIndex ;
        //
        //
        // // when we will be searching in decreasing mountain means after peak
        int rightIndex = searchTarget( peakIndex+1 , n-1 , target , mountainArr , false ) ;  
        if( rightIndex != -1  ) return rightIndex ;
        return -1 ;
    }
};















































