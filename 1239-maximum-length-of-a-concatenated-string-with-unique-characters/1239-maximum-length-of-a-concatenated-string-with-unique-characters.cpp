























// class Solution {
// public:
//     int maxLength(vector<string>& arr) {
        
//     }
// };













// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Recursion and Hashing    TC = O( 2^n * m ) , SC = O( 2^n * m ) 
// //                      
// //                      
// // //  2nd Method  ====>  Try Some other method( like bit , dp etc. )   TC = O() , SC = O() 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////




// //                           
// //                           
// // //  1st Method    ======>   Simple Recursion and Hashing  
// // //  1st Method    ======>   Simple Recursion and Hashing  
// // //  1st Method    ======>   Simple Recursion and Hashing  
// //                             
// // //   Time Complexity   = O( 2^n * m )   // // Probably it may be wrong
// //                              
// // //   Space Complexity  = O( 2^n * m )   // //  not 100% confirm  
// //                               



class Solution {
public:
    int n ; 
    bool  checkAllUnique( string t , unordered_map<char,int> & mp ) 
    {
        int m = t.size()  ; 
        for(int i=0; i<m; i++)
        {
            if( mp[t[i]] != 0 ) return false ;
            else mp[t[i]] ++ ; 
        }
        return true ; 
    }
    int findLenght( int i , unordered_map<char,int> mp , vector<string>& arr )
    {
        if( i == n ) return  0 ; 
        string t = arr[i]  ;
        int m = t.size() ; 
        int len = findLenght( i+1 , mp , arr ) ; 
        if( checkAllUnique( t , mp )  ) len = max( len , m + findLenght( i+1 , mp , arr ) ) ;  
        return len  ;  
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int maxLength(vector<string>& arr) 
    {
        n = arr.size() ;  
        unordered_map<char,int> mp;
        int ans = findLenght( 0 , mp , arr ) ; 
        return ans ; 
    }
};










// //                           
// //                           
// // //  2nd Method    ======>     Try Some other method( like bit , dp etc. )
// // //  2nd Method    ======>     Try Some other method( like bit , dp etc. )
// // //  2nd Method    ======>     Try Some other method( like bit , dp etc. )
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               























