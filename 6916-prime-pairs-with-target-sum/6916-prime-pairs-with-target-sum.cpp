


// //
// // // // // // //  Solve Using  Only One Method  ===>     
// // // // // // //  Solve Using  Only One Method  ===>                        
// //                     
// //                     
// // 1st Method ==>  Sieve Algorithm(Pre Compute Prime Number)   TC =  O(nlog(log(n))) , SC = O(n) 
// //                      
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////


// class Solution {
// public:
//     vector<vector<int>> findPrimePairs(int n) {
//     }
// };


/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Sieve Algorithm(Pre Compute Prime Number)
// // //  1st Method    ======>    Sieve Algorithm(Pre Compute Prime Number)
// // //  1st Method    ======>    Sieve Algorithm(Pre Compute Prime Number)
// //                             
// // //   Time Complexity   = O(nlog(log(n)))   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) 
    {
        int N = n+10 ;
        vector<bool> isPrime(n+10,1) ;
        isPrime[0] = isPrime[1] = false ;
        for(int i =2; i*i<N; i++) 
        {
            if(isPrime[i]==true)
            {
                for(int j =i*i; j<N; j+=i ) 
                {
                    isPrime[j] = false ;
                }
            }
        }
        vector<int>v;
        for(int i=0 ;i<=n ;i++)   if(isPrime[i])   v.push_back(i);
        int x=0, y=v.size()-1 ;
        vector<vector<int>> ans ;
        while(x<=y)
        {
            if(v[x]+v[y]==n)  ans.push_back({v[x++] , v[y--]})  ; 
            else if( v[x]+v[y] > n )  y--  ;   
            else x++ ;
        }
        return ans ;
    }
};








































