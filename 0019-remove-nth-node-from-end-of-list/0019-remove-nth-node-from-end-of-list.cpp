















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
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
        
//     }
// };

















// //
// // // // // // //  Solve Using  Two   Method  ===>                        
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                                        
// //                                        
// // //  1st Method  ====>  Two Pass using length    TC = O(2n) , SC = O(1) constant
// //                                    
// //                                    
// // //  2nd Method  ====> Slow and fast pointer and move n steps  TC = O(n) , SC = O(1) constant
// //                                    
// //                                    
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////






// //                           
// // //  1st Method    ======>   Two Pass using length
// // //  1st Method    ======>   Two Pass using length
// // //  1st Method    ======>   Two Pass using length
// //                             
// // //   Time Complexity   = O(2n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

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
//     ListNode* removeNthFromEnd(ListNode* head, int n) 
//     {
//         ListNode* temp = head ;
//         int len = 0 ;
//         while(temp)
//         {
//             len++;
//             temp = temp->next ;
//         } 
//         if(len-n==0) 
//         {
//             head = head->next ; 
//             return head ;
//         }
//         temp = head ;
//         int ct= 1 ;
//         while(temp && ct<len-n)
//         {
//             temp = temp->next; 
//             ct++;
//         }
//         if(temp && temp->next) temp->next = temp->next->next;
//         return head;
//     }
// };









// //                           
// // //  2nd Method    ======>    Slow and fast pointer and move n steps
// // //  2nd Method    ======>    Slow and fast pointer and move n steps
// // //  2nd Method    ======>    Slow and fast pointer and move n steps
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* slow = head , *fast = head ;
        while(n--) fast = fast->next ;
        if( !fast ) return head->next ;
        while(fast && fast->next )
        {
            slow = slow->next ;
            fast = fast->next ;
        }
        slow->next = slow->next->next ;
        return head;
    }
};



















