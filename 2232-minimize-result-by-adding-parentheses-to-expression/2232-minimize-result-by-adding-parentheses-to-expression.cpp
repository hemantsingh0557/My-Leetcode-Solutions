





// /// // Please write a better Recursion approach
// /// // Please write a better Recursion approach
// /// // Please write a better Recursion approach
// /// // Please write a better Recursion approach




// // // not important but see at the bottom of // extream last 
// // // not important but see at the bottom of // extream last 




// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //
// //                // // here l is no of character before '+' and r is the no of character after '+'
// //                // // let say substr() and stoi() complexity is  O(p)  then total complexity = O(l*r*p)
// //
// // //  1st Method  ====>  Simple Recursion   TC = O(l*r*p) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method(Two ways)  ====> Simple Iteration    TC = O(l*r*p) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     string minimizeResult(string expression) {
        
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>   Simple Recursion
// // //  1st Method    ======>   Simple Recursion
// // //  1st Method    ======>   Simple Recursion
// //
// //
// //      // // here l is no of character before '+' and r is the no of character after '+'
// //      // // let say substr() and stoi() complexity is  O(p)  then total complexity = O(l*r*p)
// //                             
// // //   Time Complexity   = O(l*r*p)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               




// class Solution {
// public:
//     int n ; 
//     pair<string , int> calculate(int i , int j , int ind , string expression)
//     {
//         if(j==n) return { "" , INT_MAX} ;
//         //
//         string s1 = expression.substr(0,i) ;
//         string s2 = expression.substr(i,ind-i) ;
//         string s3 = expression.substr(ind+1 ,j - ind ) ;
//         string s4 = expression.substr(j+1 ,n-j);
//         //
//         pair<string , int> p ;
//         p.first = s1 + "("+ s2 + '+' + s3 + ")"+ s4  ;
//         //
//         if(s1.size()==0) s1= "1" ;
//         if(s4.size()==0) s4= "1" ;
//         p.second = stoi(s1) * (stoi(s2) + stoi(s3)) * stoi(s4) ;
//         //
//         pair<string,int> temp = calculate(i , j+1 , ind , expression ) ;
//         if(p.second > temp.second )
//         {
//             p.first = temp.first ; 
//             p.second = temp.second ;
//         }
//         return p ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     string minimizeResult(string expression) 
//     {
//         n = expression.size() ;
//         int ind =0 ;
//         for(int i=0; i<n; i++) if(expression[i]=='+') ind = i ;
//         pair<string , int> ans = {"" , INT_MAX }  ; 
//         for(int i=0; i<ind; i++)
//         {
//             pair<string,int> temp = calculate(i , ind+1 , ind , expression ) ;
//             if(ans.second > temp.second )
//             {
//                 ans.first = temp.first ; 
//                 ans.second = temp.second ;
//             } 
//         }
//         return ans.first ;
//     }
// };















// //                           
// //                           
// // //  2nd Method    ======>   Simple Iteration 
// // //  2nd Method    ======>   Simple Iteration 
// // //  2nd Method    ======>   Simple Iteration 
// //
// //
// //      // // here l is no of character before '+' and r is the no of character after '+'
// //      // // let say substr() and stoi() complexity is  O(p)  then total complexity = O(l*r*p)
// //                             
// // //   Time Complexity   = O(l*r*p)   
// //                              
// // //   Space Complexity  = O(1) constant  
// // 









// // //   2nd Method   ====>      1st way   =====>                                 
// // //   2nd Method   ====>      1st way   =====>                                 
// // //   2nd Method   ====>      1st way   =====>                                 


// class Solution {
// public:
//     string minimizeResult(string expression) 
//     {
//         int n = expression.size() ;
//         int ind =0 ;
//         for(int i=0; i<n; i++) if(expression[i]=='+') ind = i ;
//         string ans = "" ;
//         int value = INT_MAX ;
//         for(int i=0; i<ind; i++)
//         {
//             for(int j=ind+1 ; j<n; j++)
//             {
//                 string s1 = expression.substr(0,i) ;
//                 string s2 = expression.substr(i,ind-i) ;
//                 string s3 = expression.substr(ind+1 , j-ind )  ;
//                 string s4 = expression.substr(j+1 , n-j) ;
//                 string res = s1 + '(' + s2 + '+' + s3 + ')' + s4 ;
//                 int temp = stoi(s2) + stoi(s3) ;
//                 if(s1.size()!=0) temp = temp *  stoi(s1) ;
//                 if(s4.size()!=0) temp = temp *  stoi(s4) ;
//                 if(temp<value) ans = res , value = temp ;
//             }
//         }
//         return ans ;
//     }
// };








// // // //  take some help from solution tab  ======>   for inert() at specific postion                  
// // // //  take some help from solution tab  ======>   for inert() at specific postion                  
// // // //  take some help from solution tab  ======>   for inert() at specific postion                  
// // // //  take some help from solution tab  ======>   for inert() at specific postion                  
// // // //  take some help from solution tab  ======>   for inert() at specific postion                  


// // //   2nd Method   ====>      2nd  way   =====>                                 
// // //   2nd Method   ====>      2nd  way   =====>                                 
// // //   2nd Method   ====>      2nd  way   =====>                                 


class Solution {
public:
    string minimizeResult(string expression) 
    {
        int n = expression.size() ;
        int ind =0 ;
        for(int i=0; i<n; i++) if(expression[i]=='+') ind = i ;
        int value = INT_MAX ;
        int left , right ;
        for(int i=0; i<ind; i++)
        {
            for(int j=ind+1 ; j<n; j++)
            {
                string s1 = expression.substr(0,i) ;
                string s2 = expression.substr(i,ind-i) ;
                string s3 = expression.substr(ind+1 , j-ind )  ;
                string s4 = expression.substr(j+1 , n-j) ;
                int temp = stoi(s2) + stoi(s3) ;
                if(s1.size()!=0) temp = temp *  stoi(s1) ;
                if(s4.size()!=0) temp = temp *  stoi(s4) ;
                if(temp<value) value = temp , left = i , right =  j ;
            }
        }
        // cout<<left<<" "<<right<<endl;
        expression.insert(left  , "(" );
        expression.insert(right+2 , ")" );  // // here we add 2 because after adding "("  at left position
        // // epression length will increase and at (j+1)th position where we want to insert ")"  will now
        // // become jth position due to adding "("  at left position  so we need to add 2 here  
        return expression ;
    }
};


































































// // // // //  write this by mistake , I think it is asking the minimum value
// // // // //  write this by mistake , I think it is asking the minimum value
// // // // //  write this by mistake , I think it is asking the minimum value




// class Solution {
// public:
//     int n ; 
//     int calculate(int i , int j , int ind , string expression)
//     {
//         if(j==n) return INT_MAX ;
//         string s1 = expression.substr(0,i) ;
//         string s2 = expression.substr(i,ind-i) ;
//         string s3 = expression.substr(ind+1 ,j - ind ) ;
//         string s4 = expression.substr(j+1 ,n-j);
//         if(s1.size()==0) s1= "1" ;
//         if(s4.size()==0) s4= "1" ;
//         int ans = stoi(s1) * (stoi(s2) + stoi(s3)) * stoi(s4) ;
//         ans = min( ans , calculate(i , j+1 , ind , expression ) ) ; 
//         return ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     string minimizeResult(string expression) 
//     {
//         n = expression.size() ;
//         int ind =0 ;
//         for(int i=0; i<n; i++) if(expression[i]=='+') ind = i ;
//         int ans = INT_MAX ; 
//         for(int i=0; i<ind; i++)
//         {
//             ans = min( ans , calculate(i , ind+1 , ind , expression ) ) ; 
//         }
//         cout<< ans<<endl ;
//         return "" ;
//     }
// };



























