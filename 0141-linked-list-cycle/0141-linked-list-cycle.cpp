









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
//     bool hasCycle(ListNode *head) {
        
//     }
// };



















// //
// //
// //
// // // // // // //  Solve Using Three  Method  ===>
// // // // // // //  Solve Using Three  Method  ===>
// //
// //
// // // // 1st Method    ======>  Using set or map      TC = O(n) , SC = O(n)  
// //
// //
// // // // 2nd Method    ======>  Simple Using Count      TC = O(n) , SC = O(1) constant 
// //
// //
// //                       // //  Floyd's Tortoise and Hare 
// // // // 3rd Method    ======>  Slow and fast pointer     TC = O(n) , SC = O(1) constant 
// // 
// //
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
//     bool hasCycle(ListNode *head) 
//     {
//         set< ListNode * > st ; 
//         ListNode *temp = head ;
//         while(temp ) 
//         {
//             if(st.count(temp)) return true ;
//             st.insert(temp) ;
//             temp = temp->next ;
//         }
//         return false ;
//     }
// };

















// //
// // // //    2nd Method    ======>  Simple Using Count    
// // // //    2nd Method    ======>  Simple Using Count    
// // // //    2nd Method    ======>  Simple Using Count    
// // // //    2nd Method    ======>  Simple Using Count    
// //
// //
// // //   Time Complexity   = o(n)
// //
// //
// // //   Space Complexity  = O(1) constant 
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
//     bool hasCycle(ListNode *head) 
//     {
//         ListNode *temp = head ;
//         int ct = 0 ;
//         while(temp ) 
//         {
//             temp = temp->next ;
//             ct++ ;
//             if(ct==100000) break ;// // although total node not more than 10000 but we take 100000
//         }
//         if(ct<100000) return false ;
//         return true ;
//     }
// };















// //
// // // //    3rd Method    ======>  Slow and fast pointer     
// // // //    3rd Method    ======>  Slow and fast pointer     
// // // //    3rd Method    ======>  Slow and fast pointer     
// // // //    3rd Method    ======>  Slow and fast pointer     
// //
// //     // //  Floyd's Tortoise and Hare 
// //     // //  Floyd's Tortoise and Hare 
// //     // //  Floyd's Tortoise and Hare 
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
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
        ListNode *slow = head , *fast = head ;
        while(fast && fast->next ) 
        {
            slow = slow->next ;
            fast = fast->next->next ;
            if(slow == fast) return true ;
        } 
        return false ;
    }
};


















