











// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* removeZeroSumSublists(ListNode* head) {
        
//     }
// };
























// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple make array then again make list  TC = O(n^2) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> Try other method like map    TC = O() , SC = O() 
// //                     
// //                     
// // //  3rd Method  ====> Try other method like map      TC = O() , SC = O()  
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple make array then again make list
// // //  1st Method    ======>   Simple make array then again make list
// // //  1st Method    ======>   Simple make array then again make list
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) 
    {
        vector<int> v; 
        ListNode * temp = head  ;
        while( temp ) v.push_back(temp->val) , temp = temp->next ; 
        int n = v.size() ; 
        for(int i=0; i<v.size(); i++)
        {
            int sum = 0 ; 
            int st = i , end = -1 ; 
            for(int j=i; j<v.size(); j++)
            {
                sum += v[j]  ;
                if( sum == 0 ) end = max( end , j ) ; 
            }
            // cout<<st<<" "<<end<<endl;
            if( end != -1 ) v.erase(v.begin() + st, v.begin() + end +1 )   ;
        }
        //
        //
        // // make new list 
        //
        ListNode * ans = NULL ; 
        temp = NULL ; 
        for(auto val : v ) 
        {
            if( ! ans ) ans = new ListNode( val )  , temp = ans  ; 
            else temp->next = new ListNode( val ) , temp = temp->next ; 
        }
        return ans ; 
    }
};






// //                           
// //                           
// // //  2nd Method    ======>   Try other method like map 
// // //  2nd Method    ======>   Try other method like map 
// // //  2nd Method    ======>   Try other method like map 
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               





// //                           
// //                           
// // //  3rd Method    ======>    Try other method like map 
// // //  3rd Method    ======>    Try other method like map 
// // //  3rd Method    ======>    Try other method like map 
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               





































