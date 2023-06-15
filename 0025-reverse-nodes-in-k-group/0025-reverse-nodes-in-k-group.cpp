






// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Using Recursion     TC = O(n) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====>  Using Iteration(not good)   TC = O(n) , SC = O(1) constant
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



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
//     ListNode* reverseKGroup(ListNode* head, int k) {
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>    Using Recursion  
// // //  1st Method    ======>    Using Recursion  
// // //  1st Method    ======>    Using Recursion  
// //                             
// // //   Time Complexity   = O(n)   
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
//     ListNode* reverseKGroup(ListNode* head, int k) 
//     {
//         ListNode* start = head ;
//         int len = 0;
//         while(start) len++ , start = start->next ;
//         if(len<k) return head;
//         int ct = k ;
//         ListNode* curr = head ;
//         ListNode* prev = NULL ;
//         while(ct-- && curr)
//         {
//             ListNode* temp = curr->next ;
//             curr->next = prev ;
//             prev = curr ;
//             curr = temp ;
//         }
//         head->next = reverseKGroup(curr ,k );
//         return prev ;
//     }
// };

















// //                           
// //                           
// // //  2nd Method    ======>  Using Iteration  (not good)
// // //  2nd Method    ======>  Using Iteration  (not good)
// // //  2nd Method    ======>  Using Iteration  (not good)
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
    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        int len = 0;
        ListNode* ans = NULL , * temp = head ;
        while(temp) len++ , temp = temp->next ;
        ListNode* curr = head , * prev = NULL ;
        ListNode* start = curr ,* last = curr ;
        while(len>=k)
        {
            start = curr ;
            int ct =  k ;
            while(ct--)
            {
                temp = curr->next ;
                curr->next = prev ;
                prev = curr ;
                curr = temp ;
            }
            if(!ans) ans = prev ;
            last->next = prev ;
            last = start ; 
            start->next = curr ;
            len -= k ;
        }
        return ans ;
    }
};



























