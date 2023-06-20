


// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Using set and hash    TC = O(2*nlog(n)) , SC = O(2n) 
// //                      
// //                      
// // //  2nd Method  ====>  Using  Queue   TC = O(n) , SC = O(n) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////




// class Solution {
// public:
//     string predictPartyVictory(string senate) {
        
//     }
// };





/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>    Using set and hash    
// // //  1st Method    ======>    Using set and hash    
// // //  1st Method    ======>    Using set and hash    
// //                             
// // //   Time Complexity   = O(2*nlog(n))   
// //                              
// // //   Space Complexity  = O(2n)   
// //                               



// class Solution {
// public:
//     string predictPartyVictory(string senate) 
//     {
//         int n = senate.size() ;
//         vector<int> hsh(n+1, 0 ) ;
//         set<int> rad ;
//         set<int> dir ;
//         for(int i=0; i<n; i++)
//         {
//             if(senate[i]=='R') rad.insert(i) ;  
//             else dir.insert(i) ;  
//         }
//         for(int i=0; rad.size() && dir.size() ; i++)
//         {
//             if(!hsh[i])
//             {
//                 if(senate[i]=='R') 
//                 {
//                     auto it = dir.upper_bound(i) ;
//                     if(it == dir.end()) it = dir.begin() ;
//                     hsh[*it] = 1 ; 
//                     dir.erase(it) ;
//                 } 
//                 else
//                 {
//                     auto it = rad.upper_bound(i)  ;
//                     if(it == rad.end()) it = rad.begin() ;
//                     hsh[*it] = 1 ; 
//                     rad.erase(it) ;
//                 } 
//             }
//             if(i==n-1) i = -1 ;
//         }
//         if(rad.size()) return "Radiant" ;
//         return "Dire" ; 
//     }
// };







// //                           
// //                           
// // //  2nd Method    ======>    Using  Queue
// // //  2nd Method    ======>    Using  Queue
// // //  2nd Method    ======>    Using  Queue
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               





class Solution {
public:
    string predictPartyVictory(string senate) 
    {
        int n = senate.size() ;
        queue<int> rad , dir ;
        for(int i=0; i<n ; i++)
        {
            if(senate[i]=='R') rad.push(i) ;
            else  dir.push(i) ;
        }
        vector<int> hsh(n+1 ,0) ;
        // for(int i=0; i<n ; i++)
        while(rad.size() && dir.size())
        {
            int r = rad.front() ,  d = dir.front() ;  
            rad.pop()  , dir.pop() ;  
            if(r < d )  rad.push(r+n) ;
            else  dir.push(d+n) ;
        }
        if(rad.size())   return "Radiant" ;
        return "Dire" ; 
    }
};








