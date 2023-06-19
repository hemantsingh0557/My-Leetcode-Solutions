


// //
// // // // // // //  Solve Using  One  Method  ===>     
// // // // // // //  Solve Using  One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Two Pointer ans sort() function   TC = O(nlog(n)) , SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////




// class Solution {
// public:
//     int numRescueBoats(vector<int>& people, int limit)  {
//     }
// };




/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======> 
// // //  1st Method    ======> 
// // //  1st Method    ======> 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               




// class Solution {
// public:
//     int numRescueBoats(vector<int>& people, int limit) 
//     {
//         int n = people.size() ;
//         int ans = 0 ;
//         sort(people.begin(), people.end()) ;
//         int i=0 , j = n-1 ;   
//         while(i<j)
//         {
//             int weight = people[i] + people[j] ;
//             if(weight<= limit) i++ , j-- ;
//             else j-- ;
//             ans ++ ;
//         }
//         if(i==j) ans ++ ; // when i==j then it will only be one person and boat will gurantee to carry that person
//         return ans ;
//     }
// };




////                                                      
////  ////  ////     or   or   or   or   or   or   or   or   or   or     ////  ////  //// 
////  ////  ////     or   or   or   or   or   or   or   or   or   or     ////  ////  //// 
////  ////  ////     or   or   or   or   or   or   or   or   or   or     ////  ////  //// 
////  ////  ////     or   or   or   or   or   or   or   or   or   or     ////  ////  //// 
////  ////  ////     or   or   or   or   or   or   or   or   or   or     ////  ////  //// 
////                                                      



class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) 
    {
        int n = people.size() ;
        int ans = 0 ;
        sort(people.begin(), people.end()) ;
        int i=0 , j = n-1 ;   
        while(i<=j)
        {
            int weight = people[i] + people[j] ;
            if(weight<= limit) i++ , j-- ;
            else j-- ;
            ans ++ ;
        }
        return ans ;
    }
};















































