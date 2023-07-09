



// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method(3 Ways)  ====> Simple Recursion (without and with set)   TC = O(2^n) , SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     int minimumBeautifulSubstrings(string s) {
        
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>      Simple Recursion (without and with set) 
// // //  1st Method    ======>      Simple Recursion (without and with set) 
// // //  1st Method    ======>      Simple Recursion (without and with set) 
// //                             
// // //   Time Complexity   = O(2^n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



// // //   1st   Method   ====>      1st way   =====>     Without set                                
// // //   1st   Method   ====>      1st way   =====>     Without set                                
// // //   1st   Method   ====>      1st way   =====>     Without set                                




// class Solution {
// public:
//     int n ;
//     bool isPower(int i , int j , string & s)
//     {
//         int num =  0 , value =1  ;
//         for(int k= j ; k>=i; k--)
//         {
//             if(s[k]=='1') num += value ;
//             value *= 2 ; 
//         }
//         while(num != 1)
//         {
//             if(num%5==0) num /= 5 ;
//             else return false ;
//         }
//         return true ;
//     }
//     int calculateSubstr(int i , string s)
//     {
//         if(s[i]=='0') return 150 ;
//         if(i==n) return 0 ;
//         int ans = 150 ;
//         for(int j=i; j<n; j++)
//         {
//             if(isPower(i , j , s)) ans = min(ans , 1 + calculateSubstr(j+1 , s) ) ;  
//         }
//         return ans ;
//     } 
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int minimumBeautifulSubstrings(string s) 
//     {
//         n = s.size() ; 
//         int ans = calculateSubstr(0 , s) ;
//         return ans>=150 ? -1 : ans ;
//     }
// };





// // //   1st   Method   ====>    2nd  way   =====>     using set                                 
// // //   1st   Method   ====>    2nd  way   =====>     using set                                 
// // //   1st   Method   ====>    2nd  way   =====>     using set                                 



// class Solution {
// public:
//     int n ;
//     unordered_set<int> st= { 1 , 5 , 25 , 125 , 625 , 3125 , 15625};
//     // int findnumber(int i , int j , string &s)
//     // {
//     //     int num =  0 , value =1  ;
//     //     for(int k= j ; k>=i; k--)
//     //     {
//     //         if(s[k]=='1') num += value ;
//     //         value *= 2 ; 
//     //     }
//     //     return num ;
//     // }
//     int calculateSubstr(int i , string s)
//     {
//         if(s[i]=='0') return 150 ;
//         if(i==n) return 0 ;
//         int ans = 150 ;
//         for(int j=i; j<n; j++)
//         {
//             string temp = s.substr(i , j-i+1) ;
//             int num   = stoi(temp , 0 , 2)  ;
//             //
//             // // // find num by inbuilt function or by your own function
//             //
//             // int num   = findnumber(i , j , s)  ;
//             if( st.count(num)) ans = min(ans , 1 + calculateSubstr(j+1 , s ) ) ;  
//         }
//         return ans ;
//     } 
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int minimumBeautifulSubstrings(string s) 
//     {
//         n = s.size() ; 
//         int ans = calculateSubstr(0 , s ) ;
//         return ans>=150 ? -1 : ans ;
//     }
// };








// // //   1st   Method   ====>   3rd   way   =====>     using set                                 
// // //   1st   Method   ====>   3rd   way   =====>     using set                                 
// // //   1st   Method   ====>   3rd   way   =====>     using set                                 



class Solution {
public:
    int n ;
    unordered_set<string> st= { "1" , "101" , "11001" , "1111101" , "1001110001", "110000110101", "11110100001001"};
    int calculateSubstr(int i , string s)
    {
        if(i==n) return 0 ;
        int ans = 150 ;
        for(int j=i; j<n; j++)
        {
            string temp  = s.substr(i , j-i+1) ;
            if( st.count(temp)) ans = min(ans , 1 + calculateSubstr(j+1 , s ) ) ;  
        }
        return ans ;
    } 
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int minimumBeautifulSubstrings(string s) 
    {
        n = s.size() ; 
        int ans = calculateSubstr(0 , s ) ;
        return ans>=150 ? -1 : ans ;
    }
};
















