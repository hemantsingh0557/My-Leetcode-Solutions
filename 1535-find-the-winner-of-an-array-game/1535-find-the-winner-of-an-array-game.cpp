









// class Solution {
// public:
//     int getWinner(vector<int>& arr, int k) {
        
//     }
// };




















// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // // //  here we get the TLE due to k (not due to map ) because k = 1e9     
// //  1st Method (Two ways) ==> Simpe usig map and deque or queue(TLE TLE TLE)  TC = O(k), SC = O(1e6) 
// //                      
// //                      
// // //  2nd Method  ====> Using  only deque or queue    TC = O(n) , SC = O(n) 
// //                     
// //                     
// // //  3rd Method  ====>   Simple Just for loop only   TC = O(n) , SC = O(1) constant 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method ( Two ways )   ======>   Simpe usig map and deque or queue(TLE TLE TLE)
// // //  1st Method ( Two ways )   ======>   Simpe usig map and deque or queue(TLE TLE TLE)
// // //  1st Method ( Two ways )   ======>   Simpe usig map and deque or queue(TLE TLE TLE)
// //                             
// // // here we get the TLE due to k (not due to map ) because k = 1e9    
// // 
// // //   Time Complexity   = O(k)   
// //                              
// // //   Space Complexity  = O(1e6)   
// //                               




// // // 1st  Method   ====>      1st way   =====>       
// // // 1st  Method   ====>      1st way   =====>       
// // // 1st  Method   ====>      1st way   =====>       

// class Solution {
// public:
//     int getWinner(vector<int>& arr, int k)
//     {
//         int n = arr.size() ; 
//         deque<int> dq ;
//         for(int i=0 ; i<n; i++) dq.push_back(arr[i]) ;  
//         map<int,int> mp ;   
//         while( true )
//         {
//             int num1 = dq.front() ;
//             dq.pop_front() ;
//             int num2 = dq.front() ;
//             dq.pop_front() ;
//             if( num1 > num2 ) 
//             {
//                 dq.push_front(num1) , dq.push_back(num2)  ;
//                 mp[num1]++ ;
//                 if( mp[num1] == k ) return num1 ;
//             }
//             else  
//             {
//                 dq.push_front(num2) , dq.push_back(num1)  ;
//                 mp[num2]++ ;
//                 if( mp[num2] == k ) return num2 ;
//             }
//             cout<<num1<<num2<<endl;
//         }
//         return -1 ;  
//     }
// };




// // // 1st  Method   ====>     2nd  way   =====>   Better Code Quality    
// // // 1st  Method   ====>     2nd  way   =====>   Better Code Quality    
// // // 1st  Method   ====>     2nd  way   =====>   Better Code Quality    

// class Solution {
// public:
//     int getWinner(vector<int>& arr, int k)
//     {
//         int n = arr.size() ; 
//         deque<int> dq ;
//         for(int i=0 ; i<n; i++) dq.push_back(arr[i]) ;  
//         map<int,int> mp ;   
//         while( true )
//         {
//             int num1 = dq.front() ;
//             dq.pop_front() ;
//             int num2 = dq.front() ;
//             dq.pop_front() ;
//             int mx = max( num1 , num2 ) ;
//             int mn = min( num1 , num2 ) ;  
//             dq.push_front(mx) , dq.push_back(mn)  ;
//             mp[mx]++ ;
//             if( mp[mx] == k ) return mx ;
//             cout<<num1<<num2<<endl;
//         }
//         return -1 ;  
//     }
// };















// //                           
// //                           
// // //  2nd Method    ======>    Using  only deque or queue   
// // //  2nd Method    ======>    Using  only deque or queue   
// // //  2nd Method    ======>    Using  only deque or queue   
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               




// // //   2nd Method   ====>    1st way   =====>    Using deque     
// // //   2nd Method   ====>    1st way   =====>    Using deque     
// // //   2nd Method   ====>    1st way   =====>    Using deque     

// class Solution {
// public:
//     int getWinner(vector<int>& arr, int k)
//     {
//         int n = arr.size() ; 
//         int mxNum = -1  ;
//         deque<int> dq ;
//         for(int i=0 ; i<n; i++) dq.push_back(arr[i]) , mxNum = max( mxNum , arr[i] ) ;    
//         map<int,int> mp ;   
//         while( true )
//         {
//             int num1 = dq.front() ;
//             dq.pop_front() ;
//             int num2 = dq.front() ;
//             dq.pop_front() ;
//             int mx = max( num1 , num2 ) ;
//             int mn = min( num1 , num2 ) ;  
//             dq.push_front(mx) , dq.push_back(mn)  ;
//             mp[mx]++ ;
//             if( mp[mx] == k || mxNum == mx ) return mx ;
//             cout<<num1<<num2<<endl;
//         }
//         return -1 ;  
//     }
// };



// // //   2nd Method   ====>   2nd way   =====>    Using  Queue     
// // //   2nd Method   ====>   2nd way   =====>    Using  Queue     
// // //   2nd Method   ====>   2nd way   =====>    Using  Queue     

// class Solution {
// public:
//     int getWinner(vector<int>& arr, int k)
//     {
//         int n = arr.size() ; 
//         int curr = arr[0] ;
//         int mxNum = arr[0] ; 
//         queue<int> q ;
//         for(int i=1 ; i<n; i++) q.push(arr[i]) , mxNum = max( mxNum , arr[i] ) ; 
//         int ct = 0 ;     
//         while( q.size() )   // while( true ) //we can also do this because there is anyone winner guranteed
//         {
//             int num1 = q.front() ;
//             q.pop() ;
//             if( curr > num1 ) ct++ , q.push( num1 ) ; 
//             else ct = 1 , q.push( curr ) , curr = num1 ; 
//             if( ct == k || curr == mxNum ) return curr ;
//         }
//         return -1 ;  
//     }
// };














// //                           
// //                           
// // //  3rd Method    ======>   Simple Just for loop only
// // //  3rd Method    ======>   Simple Just for loop only
// // //  3rd Method    ======>   Simple Just for loop only
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



class Solution {
public:
    int getWinner(vector<int>& arr, int k)
    {
        int n = arr.size() ; 
        int curr = arr[0] ;
        int mxNum = arr[0] ; 
        for(int i=1 ; i<n; i++) mxNum = max( mxNum , arr[i] ) ; 
        int ct = 0 ;     
        for(int i=1 ; i<n; i++) 
        {
            int num1 = arr[i] ;
            if( curr > num1 ) ct++  ; 
            else  curr = num1 , ct = 1  ; 
            if( ct == k || curr == mxNum ) return curr ;
        }
        return -1 ;  
    }
};














































