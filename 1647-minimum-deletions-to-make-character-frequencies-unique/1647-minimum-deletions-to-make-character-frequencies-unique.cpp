




// class Solution {
// public:
//     int minDeletions(string s) {
        
//     }
// };




















// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // 1st Method ( Two Ways )  ==>  Using hashing , sort() and set   TC = O(n) , SC = O(n) 
// //                      
// //                      
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method  ( Two Ways )   ======>   Using hashing , sort() and set
// // //  1st Method  ( Two Ways )   ======>   Using hashing , sort() and set
// // //  1st Method  ( Two Ways )   ======>   Using hashing , sort() and set
// //                             
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               






// // //   1st  Method   ====>      1st way   =====>     Using hashing , sort() and set    
// // //   1st  Method   ====>      1st way   =====>     Using hashing , sort() and set    
// // //   1st  Method   ====>      1st way   =====>     Using hashing , sort() and set    



// class Solution {
// public:
//     int minDeletions(string s) 
//     {
//         int n = s.size() ; 
//         vector<int> hsh(30, 0) ;
//         for(int i=0; i<n; i++)   hsh[s[i] -'a'] ++ ; 
//         sort(hsh.begin() , hsh.end() ) ;  
//         // // //   here it is compulsory because below we compare the consecutive element 
//         //
//         unordered_set<int> st ; 
//         int ans = 0 ; 
//         for(int i=0; i<29; i++)
//         {
//             if( !hsh[i] ) continue ; 
//             if( hsh[i] == hsh[i+1] )
//             {
//                 hsh[i]-- , ans++ ;
//                 while( st.count(hsh[i]) ) hsh[i]-- , ans++ ;
//             }
//             if( hsh[i] ) st.insert(hsh[i]) ;
//         }
//         return ans ; 
//     }
// };













// // //   1st  Method   ====>   2nd way   =====>     Using hashing  and set    
// // //   1st  Method   ====>   2nd way   =====>     Using hashing  and set    
// // //   1st  Method   ====>   2nd way   =====>     Using hashing  and set    



class Solution {
public:
    int minDeletions(string s) 
    {
        int n = s.size() ; 
        vector<int> hsh(30, 0) ;
        for(int i=0; i<n; i++)    hsh[s[i] -'a'] ++ ; 
        // sort(hsh.begin() , hsh.end() ) ;      // // //  not compulsory 
        unordered_set<int> st ; 
        int ans = 0 ; 
        for(int i=0; i<30; i++)
        {
            while( hsh[i]>0 && st.count(hsh[i]) ) hsh[i]-- , ans ++ ;
            if( hsh[i] )  st.insert(hsh[i]) ; 
        }
        return ans ; 
    }
};





























