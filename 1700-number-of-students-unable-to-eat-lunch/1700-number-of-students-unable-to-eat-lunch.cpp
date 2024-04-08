














// class Solution {
// public:
//     int countStudents(vector<int>& students, vector<int>& sandwiches) {
        
//     }
// };








// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simulation Using Queue and Stack  TC = O(n*n) , SC = O(n+n) 
// //                      
// //                      
// // //  2nd Method  ====> Using Counting    TC = O(n+n) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>  Simulation Using Queue and Stack   
// // //  1st Method    ======>  Simulation Using Queue and Stack 
// // //  1st Method    ======>  Simulation Using Queue and Stack   
// //                             
// // //   Time Complexity   = O(n*n)   
// //                              
// // //   Space Complexity  = O(n+n)   
// //    



// // //  1st Method   ====>  1st way   =====> Using both dequeu and stack       
// // //  1st Method   ====>  1st way   =====> Using both dequeu and stack       
// // //  1st Method   ====>  1st way   =====> Using both dequeu and stack       

// class Solution {
// public:
//     int countStudents(vector<int>& students, vector<int>& sandwiches) 
//     {
//         int n = students.size() ; 
//         deque<int> dq ; 
//         stack<int> st ;
//         for(int i=0; i<n; i++)
//         {
//             dq.push_back(students[i]) ;
//             st.push(sandwiches[n-1-i]) ;
//         } 
//         int ct = 0 ; 
//         while( ct < dq.size()  )
//         {
//             if( dq.size() && st.size() && dq.front() == st.top() ) 
//             {
//                 dq.pop_front() ; 
//                 st.pop() ; 
//                 ct = 0 ; 
//             }
//             else
//             {
//                 ct++ ; 
//                 int num = dq.front() ; 
//                 dq.pop_front() ;
//                 dq.push_back(num) ; 
//             }
//         }
//         return ct ;  
//     }
// };




// // //  1st Method   ====>  2nd way   =====> Using only dequeu        
// // //  1st Method   ====>  2nd way   =====> Using only dequeu        
// // //  1st Method   ====>  2nd way   =====> Using only dequeu        

// class Solution {
// public:
//     int countStudents(vector<int>& students, vector<int>& sandwiches) 
//     {
//         int n = students.size() ; 
//         deque<int> dq ; 
//         for(int i=0; i<n; i++) dq.push_back(students[i]) ;
//         int i = 0 , ct = 0 ; 
//         while( ct < dq.size()  )
//         {
//             if( dq.size() && i < n && dq.front() == sandwiches[i] ) 
//             {
//                 i++ ; 
//                 ct = 0 ; 
//                 dq.pop_front() ;
//             }
//             else
//             {
//                 ct++ ; 
//                 int num = dq.front() ; 
//                 dq.pop_front() ;
//                 dq.push_back(num) ; 
//             }
//         }
//         return ct ;  
//     }
// };











// //                           
// //                           
// // //  2nd Method    ======> Using Counting    
// // //  2nd Method    ======> Using Counting  
// // //  2nd Method    ======> Using Counting    
// //                             
// // //   Time Complexity   = O(n+n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) 
    {
        int n = students.size() ; 
        int squareStudentCount = 0 , circleStudentCount = 0 ; 
        for(int i=0; i<n; i++) 
        {
            if( students[i]  ) squareStudentCount ++ ; 
            else circleStudentCount ++ ; 
        }
        for(int i=0; i<n; i++ )
        {
            if( sandwiches[i] == 1  && squareStudentCount == 0  ) return circleStudentCount ; 
            else if( sandwiches[i] == 0  && circleStudentCount == 0  ) return squareStudentCount ; 
            if( sandwiches[i] == 1  ) squareStudentCount -- ;
            else circleStudentCount -- ;
        }
        return 0 ;   
    }
};










































