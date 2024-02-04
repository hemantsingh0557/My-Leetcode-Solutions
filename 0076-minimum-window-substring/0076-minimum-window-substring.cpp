












// // class Solution {
// // public:
// //     string minWindow(string s, string t) {
        
// //     }
// // };






// // //   practice more question on sliding window specially hard problems
// // //   practice more question on sliding window specially hard problems
// // //   practice more question on sliding window specially hard problems
// // //   practice more question on sliding window specially hard problems



// // //  Only able to solve 50% of the Question then see the previous submitted solution
// // //  Only able to solve 50% of the Question then see the previous submitted solution
// // //  Only able to solve 50% of the Question then see the previous submitted solution
// // //  Only able to solve 50% of the Question then see the previous submitted solution
// // //  Only able to solve 50% of the Question then see the previous submitted solution
// // //  Only able to solve 50% of the Question then see the previous submitted solution
// // //  Only able to solve 50% of the Question then see the previous submitted solution











// //
// // // // // // //  Solve Using  Only One   Method  ===>     
// // // // // // //  Solve Using  Only One   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using Sliding Window    TC = O(m+n)( Probably ) , SC = O(n) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Using Sliding Window  
// // //  1st Method    ======>   Using Sliding Window  
// // //  1st Method    ======>   Using Sliding Window  
// //                             
// // //   Time Complexity   = O(m+n)   ( Probably )
// //                              
// // //   Space Complexity  = O(n)   
// //                               


class Solution {
public:
    string minWindow(string s, string t) 
    {
        int m = s.size() ,  n = t.size() ;
        if( m < n ) return "" ; 
        unordered_map<char,int> mp ; 
        for(int i=0; i<n; i++) mp[t[i]] ++  ;
        string ans ;
        int i=0 , j=0, ct = mp.size() ;
        while(j<m)
        {
            if(mp.count(s[j]))
            {
                mp[s[j]] -- ;
                if(mp[s[j]]==0) ct--;
            }
            if( ct == 0 )
            {
                while( ct == 0 )
                {
                    if( mp.count(s[i]) ) 
                    {
                        mp[s[i]] ++  ;
                        if( mp[s[i]] == 1 ) ct++ ;
                    }
                    i++ ; 
                }
                if( ans.size() == 0 ) ans = s.substr(i-1 , j-i+2) ; 
                else if( ans.size() > j-i+2 ) ans = s.substr(i-1 , j-i+2) ;

            }
            j++ ;         
        }
        return ans ; 
    }
};
























































