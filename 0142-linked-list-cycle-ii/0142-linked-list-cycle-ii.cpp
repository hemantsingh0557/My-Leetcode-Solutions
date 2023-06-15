



// //
// //
// //
// // // // // // //  Solve Using Two  Method  ===>
// // // // // // //  Solve Using Two  Method  ===>
// //
// //
// // // // 1st Method    ======>  Using set or map      TC = O(n) , SC = O(n)  
// //
// //
// //                       // //  Floyd's Tortoise and Hare 
// // // // 2nd Method    ======>  Slow and fast pointer     TC = O(n) , SC = O(1) constant 
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
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */

// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {     
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////








// //
// // // //    1st Method    ======>  Using  set or map  
// // // //    1st Method    ======>  Using  set or map  
// // // //    1st Method    ======>  Using  set or map  
// // // //    1st Method    ======>  Using  set or map  
// //
// //
// // //   Time Complexity   = o(n)
// //
// //
// // //   Space Complexity  = O(n)  
// //




// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */

// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) 
//     {     
//         set<ListNode *> st ;
//         ListNode *temp = head  ;
//         while(temp )
//         {
//            if(st.count(temp)) return temp ;
//            st.insert(temp);
//            temp = temp->next ;
//         }
//         return NULL ;
//     }
// };















// //
// // // //    2nd Method    ======>  Slow and fast pointer     
// //
// //     // //  Floyd's Tortoise and Hare 
// //     // //  Floyd's Tortoise and Hare 
// //     // //  Floyd's Tortoise and Hare 
// // 
// //
// // //   Time Complexity   = o(n)
// //
// //
// // //   Space Complexity  = O(1) constant 
// //



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode *detectCycle(ListNode *head) 
    {     
        ListNode *slow = head , *fast = head ;
        while(fast && fast->next)
        {
            slow = slow->next ;
            fast = fast->next->next ;
            if(slow==fast)  break ;
        }
        if(!fast || !fast->next) return NULL ;
        slow = head ;
        while(slow != fast )
        {
            slow = slow->next;
            fast = fast->next;
        }
        return slow ;
    }
};


















































