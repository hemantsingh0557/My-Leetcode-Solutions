









// //  LeetCode  Weekly Contest  392 


// //  2nd  Question  ===> Able to solve in contest


// //  Today's  Date -  7th April 2024  -  Sunday    .    












// class Solution {
// public:
//     string getSmallestString(string s, int k) 
//     {
//     }
// };













// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple See below  TC = O(n*26) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> Try any other    TC = O() , SC = O() 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Simple See below
// // //  1st Method    ======>  Simple See below
// // //  1st Method    ======>  Simple See below
// //                              
// // //   Time Complexity   = O(n*26)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               

class Solution {
public:
    string getSmallestString(string s, int k) 
    {
        if( k == 0 ) return s ; 
        int n = s.size() ;
        // cout<<n<<" okokokokok"<<endl;
        string t = s ;  
        int sum = 0 ;
        for(int i=0; i<n; i++)
        {
            int prev = 0  ;
            char prevChar ;
            for(char ch = 'a'; ch<= 'z' ; ch++)
            {
                int ct = min( abs( ch - t[i] ) , 26 - ( t[i] - 'a' ) ) ;
                // cout<<ct<<" "<<ch<<endl;
                prev = ct ; 
                prevChar = ch ; 
                if( sum + ct <= k ) break ; 
            }
            sum += prev ; 
            t[i] = prevChar ;
            // cout<<sum<<" "<<prev<<endl;
            if( sum == k ) return t;  
        }
        return t ; 
    }
};


















// //                           
// //                           
// // //  2nd Method    ======>  Try any other
// // //  2nd Method    ======>  Try any other
// // //  2nd Method    ======>  Try any other
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               

























































































