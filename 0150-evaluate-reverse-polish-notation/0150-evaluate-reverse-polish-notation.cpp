

















// class Solution {
// public:
//     int evalRPN(vector<string>& tokens) {
        
//     }
// };















// //
// // // // // // //  Solve Using  Only One   Method  ===>     
// // // // // // //  Solve Using  Only One   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Using Stack    TC = O(n) , SC = O(n) 
// //                      
// //                      
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Using Stack    
// // //  1st Method    ======>   Using Stack    
// // //  1st Method    ======>   Using Stack    
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               






class Solution {
public:
    void evaluateExp( string s , stack<int> & st )   
    {
        int b = st.top() ; 
        st.pop() ; 
        int a = st.top() ; 
        st.pop() ; 
        if( s == "+" ) st.push( a + b )  ;   
        if( s == "-" ) st.push( a - b )  ;   
        if( s == "*" ) st.push( a * b )  ;   
        if( s == "/" ) st.push( a / b )  ;   
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int evalRPN(vector<string>& tokens) 
    {
        int n = tokens.size() ; 
        stack<int> st ;
        int ans = 0 ;
        for(int i=0; i<n; i++)
        {
            string s = tokens[i] ; 
            if( s == "+" || s == "-" || s == "*" || s == "/" ) evaluateExp( s , st ) ; 
            else st.push(stoi(s)) ; 
        }
        return st.top() ; 
    }
};



























