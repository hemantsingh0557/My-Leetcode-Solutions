

// here we  need to apply the opration exactly one time whihc is mandatory

// // very good question here we will need to find smallest string in which each element respectively to the 
// // given string is lexicographically smaller 
//
// ex==>   cbabc      then answer will be   ==>  baabc
//
//  answer is not bbabc because here if we change only first 'c' to 'b'  then it is smaller but not smallest
//  because baabc is the smallest string and want thw smallest string  
//
// and according to question here 'a' chnage in 'z' that's why we stop changig the string when 'a' comes 
// because ''a' change to 'z' whihc will not the smallest





//
// but if all the chnaracter are only 'a' then we change the last 'a' to 'z' because 
// here we need to perform the opration exaclty once which is mandatory















// //
// // // // // // //  Solve Using  One  Method  ===>     
// // // // // // //  Solve Using  One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Simple Iteration    TC = O(n) , SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     string smallestString(string s)  {
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>   Simple Iteration
// // //  1st Method    ======>   Simple Iteration
// // //  1st Method    ======>   Simple Iteration
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               





class Solution {
public:
    string smallestString(string s) 
    {
        int n = s.size() ;
        int i=0;
        if(s[i]=='a') while(s[i]=='a') i++;
        if(i==n) s[i-1] = 'z'  ;
        for( ; i<n; i++)
        {
            if(s[i] == 'a') break ;
            else if(s[i] != 'a') s[i] = s[i]- 1 ;
        }
        return s ;
    }
};





























