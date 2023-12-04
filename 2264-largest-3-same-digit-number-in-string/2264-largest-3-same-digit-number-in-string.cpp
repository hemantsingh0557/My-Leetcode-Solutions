














// class Solution {
// public:
//     string largestGoodInteger(string num) {
        
//     }
// };










// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Iteration    TC = O(n) , SC = O(n) 
// //                      
// //                      
// //                     
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
// // //   Space Complexity  = O(n)   
// //                               


class Solution {
public:
    string largestGoodInteger(string num) 
    {
        int n = num.size() ; 
        if( n < 3 ) return "" ;
        string ans = "" ;
        int prev = 0 ; 
        for(int i=0; i<=n-3; i++)
        {
            string temp = num.substr(i ,3) ;
            //
            //
            // if( temp[0] != temp[1] || temp[1] != temp[2] || temp[2] != temp[0] )  continue ; 
            // if( prev <= stoi(temp) ) ans = temp , prev = stoi(ans) ;
            //
            //
            //
            if( temp[0] == temp[1] && temp[1] == temp[2] )
            {
                if( prev <= stoi(temp) ) ans = temp , prev = stoi(ans) ;
            } 
        }
        return ans ; 
    }
};



















