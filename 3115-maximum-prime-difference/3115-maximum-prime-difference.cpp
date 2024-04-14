












// //  LeetCode  Weekly Contest  393  (  Able To Solve Two Question )


// //  2nd  Question  ===> Able to solve in contest


// //  Today's  Date   -    14th April 2024  -  Sunday    .    












// class Solution {
// public:
//     int maximumPrimeDifference(vector<int>& nums) 
//     {
//     }
// };















// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Chekc Prime Numbers     TC =  O(n) ( Probably )  , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======> Chekc Prime Numbers 
// // //  1st Method    ======> Chekc Prime Numbers 
// // //  1st Method    ======> Chekc Prime Numbers 
// //                             
// // //   Time Complexity   = O(n) ( Probably )   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

class Solution {
public:
    bool isPrime(int n)
    {
        if (n <= 1) return false; // //  return basec condition
        for (int i = 2; i <= n / 2; i++) if (n % i == 0) return false;
        return true;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int maximumPrimeDifference(vector<int>& nums) 
    {
        int n = nums.size() ; 
        int mn = 150 , mx = -1 ; 
        for(int i=0; i<n; i++)
        {
            if( isPrime(nums[i]) ) mn = min(mn , i ) , mx = max(mx , i) ;
        }
        return mx - mn ;    
    }
};




























