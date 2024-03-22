








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
//     bool isPalindrome(ListNode* head) {
//     }
// };





















// //
// //
// //
// // // // // // //  Solve Using  Three   Method  ===>
// // // // // // //  Solve Using  Three   Method  ===>
// 
//
// // 1st Method    ======>  Make a new Reverse List     TC = O(n)  ,  SC = O(n)  
// // 
// //
// // 2nd Method ====> slow and fast pointer(Half Reversed list)  TC = O(n), SC = O(1) constant
// //
// //
// // 3rd Method ====> slow and fast pointer(Half Reversed list)  TC = O(n), SC = O(1) constant
// //      // // 3rd method and 2nd method is same but in 3rd method less repeated iteration 
// //
// //
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////







// //
// //
// // // //    1st Method    ======>  Make a new Reverse List
// // // //    1st Method    ======>  Make a new Reverse List
// // // //    1st Method    ======>  Make a new Reverse List
// //
// //
// // //   Time Complexity   = O(n) 
// //
// //
// // //   Space Complexity  = O(n) constant
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
//     bool isPalindrome(ListNode* head) 
//     {
//         ListNode * rev_head = NULL ;
//         ListNode * ptr = head ;
//         while(ptr != NULL)
//         {
//             ListNode * temp = new ListNode(ptr->val) ;
//             temp->next = rev_head ;
//             rev_head = temp;
//             ptr = ptr->next ;
//         }
//         while(head != NULL)
//         {
//             if(rev_head->val != head->val) return false ;
//             head = head->next ;
//             rev_head = rev_head->next ;
//         }
//         return true ;
//     }
// };












// //
// //
// // // //    2nd Method    ======>  slow and fast pointer( Half Reversed list )
// // // //    2nd Method    ======>  slow and fast pointer( Half Reversed list )
// // // //    2nd Method    ======>  slow and fast pointer( Half Reversed list )
// // // //    2nd Method    ======>  slow and fast pointer( Half Reversed list )
// //
// //      // // 3rd method and 2nd method is same but in 3rd method less repeated iteration 
// //      // // 3rd method and 2nd method is same but in 3rd method less repeated iteration 
// //      // // 3rd method and 2nd method is same but in 3rd method less repeated iteration 
// //
// // //   Time Complexity   = O(n) 
// //
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
//     bool isPalindrome(ListNode* head) 
//     {
//         ListNode* slow = head ;
//         ListNode* fast = head ;
//         while(fast && fast->next)
//         {
//             fast = fast->next->next ;
//             slow = slow->next ;
//         }
//         if(fast != NULL )  slow = slow->next ;      // odd length 
//         ListNode* curr = NULL;
//         ListNode* prev = NULL;
//         while(slow != NULL)
//         {
//             curr = slow->next ;
//             slow->next = prev ;
//             prev = slow ;
//             slow = curr ;
//         }
//         while(prev != NULL)
//         {
//             if(prev->val != head->val) return false ;
//             prev = prev->next ;
//             head = head->next ;
//         }
//         return true ;
//     }
// };















// //
// //
// // // //    3rd Method    ======> slow and fast pointer(Half Reversed list)
// // // //    3rd Method    ======> slow and fast pointer(Half Reversed list)
// // // //    3rd Method    ======> slow and fast pointer(Half Reversed list)
// // // //    3rd Method    ======> slow and fast pointer(Half Reversed list)
// //
// //
// //      // // 3rd method and 2nd method is same but in 3rd method less repeated iteration 
// //      // // 3rd method and 2nd method is same but in 3rd method less repeated iteration 
// //      // // 3rd method and 2nd method is same but in 3rd method less repeated iteration 
// //
// //
// // //   Time Complexity   = O(n) 
// //
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
    bool isPalindrome(ListNode* head) 
    {
        ListNode *slow = head ,  *fast = head , *curr = NULL, *prev = NULL ;
        while(fast && fast->next)
        {
            fast = fast->next->next ;
            curr = slow->next ;
            slow->next = prev ;
            prev = slow ;
            slow = curr ;
        }
        if(fast != NULL )  slow = slow->next ;      // odd length 
        while(slow != NULL)
        {
            if(slow->val != prev->val) return false ;
            slow = slow->next ;
            prev = prev->next ;
        }
        return true ;
    }
};



































