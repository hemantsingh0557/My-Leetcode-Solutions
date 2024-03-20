











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
//     ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) 
//     {
//     }
// };















// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple iteration    TC = O(n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> Try other method    TC = O(n) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple iteration 
// // //  1st Method    ======>   Simple iteration 
// // //  1st Method    ======>   Simple iteration 
// //                             
// // //   Time Complexity   = O(n)   
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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) 
    {
        ListNode * ans ; 
        if( a != 0 ) ans = list1 ;
        else ans = list2 ;  
        ListNode * temp = list1 ; 
        int ct = 1 ; 
        while( ct < a )
        {
            temp = temp->next  ;
            ct++ ; 
        }
        ListNode * st = temp ; 
        while( ct <= b )
        {
            temp = temp->next  ;
            ct++ ; 
        }
        st->next = list2 ; // // not compulsary  it make the next of 9 to NULL in example 1
        ListNode * end = temp->next ;
        // cout<<st->val<<" "<<temp->val<<" "<<end->val<<endl;
        // temp ->next = NULL ; // // not compulsary  it make the next of 9 to NULL in example 1
        ListNode * temp1 = list2 ; 
        while( temp1->next ) temp1 = temp1->next; 
        temp1 ->next = end ;
        // cout<<temp1->val<<endl;
        return ans   ;
    }
};












// //                           
// //                           
// // //  2nd Method    ======>    Try other method   
// // //  2nd Method    ======>    Try other method   
// // //  2nd Method    ======>    Try other method   
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               






























