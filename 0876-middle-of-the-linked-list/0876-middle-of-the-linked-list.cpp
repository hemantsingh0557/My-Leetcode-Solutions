










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
//     ListNode* middleNode(ListNode* head) {
        
//     }
// };












// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Two Pass using length    TC = O(2*n) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====> One Pass slow and fast pointer    TC = O(n) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Two Pass using length 
// // //  1st Method    ======>    Two Pass using length 
// // //  1st Method    ======>    Two Pass using length 
// //                             
// // //   Time Complexity   = O(2*n)   
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
//     ListNode* middleNode(ListNode* head) 
//     {
//         int len = 0 ;
//         ListNode* temp ;
//         while(temp != NULL)
//         {
//             len++;
//             temp = temp->next ;
//         }
//         // cout<<len<<endl;
//         int ct = 1 ;
//         while(ct<=len/2)
//         {
//             head = head->next ;
//             ct++;
//         }
//         return head ;
//     }
// };













// //                           
// //                           
// // //  2nd Method    ======>    One Pass slow and fast pointer 
// // //  2nd Method    ======>    One Pass slow and fast pointer 
// // //  2nd Method    ======>    One Pass slow and fast pointer 
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
    ListNode* middleNode(ListNode* head) 
    {
        ListNode * slow = head ,  *fast = head  ; 
        while( fast && fast->next ) slow = slow->next , fast = fast->next->next ; 
        return slow ; 
    }
};

















































