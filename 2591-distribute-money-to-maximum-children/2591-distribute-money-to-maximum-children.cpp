
























// class Solution {
// public:
//     int distMoney(int money, int children) {
        
//     }
// };
















// class Solution {
// public:
//     int distMoney(int money, int children) 
//     {
//         money -= children ;
//         if(money<0) return -1 ;
//         int ans = money/7 ;
//         if(ans==0) return 0 ;
//         money -= ans*7 ;    
//         if(ans==children && money==0 ) return children ;
//         if(ans==children && money>0 ) return children-1 ;
//         if(ans==children-1 && money==3 ) return children-2 ;
//         if(ans<children-1) return ans ;
//         return children-1 ;
//     }
// };














class Solution {
public:
    int distMoney(int money, int children) 
    {
        money -= children ;
        if(money<0) return -1 ;
        int ans = money/7 ;
        money -= ans*7 ;    
        //
        //
        // //   money = (children)*8 - 4     or or or     money = (children-1)*8 + 4
        //
        if(ans==children-1 && money==3 ) return children-2 ;
        //
        //
        // // when money = 8 * children  
        if(ans==children && money==0 ) return children ;
        //
        //
        //
        //
        //// // // 1... edge case
        // when money > children * 8 
        //
        // if(ans==children && money>0 ) return children-1 ;
        //
        //
        //
        //// // // 2... edge case
        // when money < (children-1) * 8
        // 
        // if(ans<children-1) return ans ;
        //
        // 1 and 2 edge case can also be written like the below 
        return min( children-1 , ans )  ;   
    }
};












