



// //
// //
// // // // // // //  Solve Using  Four  Method  ===>
// // // // // // //  Solve Using  Four  Method  ===>
// 
//
// // // //    1st Method    ======>  Two while loops     TC = O(m*n)  ,  SC = O(1) constant 
// // 
// //
// // // //    2nd Method    ======>  using  set         TC = O(m+n)  ,  SC = O(m)  
// //
// //
// // // //    3rd Method    ======>  using  length      TC = O(2m)  ,  SC = O(1) constant 
// //
// //
// // // //    4th Method    ======>  Using Two Pointer   TC = O(2m)  ,  SC = O(1) constant 
// //
// //
//
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
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
//     }
// };


/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //
// //
// // // //    1st Method    ======>  Two while loops     
// // // //    1st Method    ======>  Two while loops     
// // // //    1st Method    ======>  Two while loops     
// // // //    1st Method    ======>  Two while loops     
// //
// //
// // //   Time Complexity   = O(m*n) 
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
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
//     {
//         ListNode * h1 = headA ;
//         while(h1 != NULL)
//         {
//             ListNode * h2 = headB ;
//             while(h2 != NULL)
//             {
//                 if(h1 == h2) return h2 ;
//                 h2 = h2->next ;
//             }
//             h1 = h1->next ; 
//         }
//         return NULL ;
//     }
// };













// //
// //
// // // //    2nd Method    ======>  Using Set  
// // // //    2nd Method    ======>  Using Set  
// // // //    2nd Method    ======>  Using Set  
// // // //    2nd Method    ======>  Using Set  
// //
// //
// // //   Time Complexity   = O(m+n) 
// //
// //
// // //   Space Complexity  = O(m) constant
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
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
//     {
//         set<ListNode *> st;
//         ListNode * h1 = headA ;
//         while(headA != NULL)
//         {
//             st.insert(headA);
//             headA = headA->next ; 
//         }
//         while(headB != NULL)
//         {
//             if(st.find(headB) != st.end()) return headB ;
//             headB = headB->next ; 
//         }
//         return NULL ;
//     }
// };

















// //
// //
// // // //    3rd Method    ======>  Using length  
// // // //    3rd Method    ======>  Using length  
// // // //    3rd Method    ======>  Using length  
// //
// //
// // //   Time Complexity   = O(2m) 
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
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
//     {
//         ListNode * h1 = headA ;
//         ListNode * h2 = headB ;
//         int lenA = 0 , lenB = 0 ;
//         while(h1 != NULL)
//         {
//             lenA++;
//             h1 = h1->next ; 
//         }
//         while(h2 != NULL)
//         {
//             lenB++;
//             h2 = h2->next ; 
//         }
//         int diff = 0 ;
//         if(lenA > lenB) 
//         {
//             diff = lenA - lenB ;
//             while(diff !=0 )
//             {
//                 diff -- ;
//                 headA = headA->next ;
//             }
//         }
//         else 
//         {
//             diff = lenB - lenA ;
//             while(diff !=0 )
//             {
//                 diff -- ;
//                 headB = headB->next ;
//             }
//         }
//         while(headA != NULL)
//         {
//             if(headA ==headB) return headA ;
//             headA = headA->next ;
//             headB = headB->next ;
//         }
//         return NULL ;
//     }
// };



















//
//
// // //    4th Method    ======>  Using Two Pointer 
// // //    4th Method    ======>  Using Two Pointer 
// // //    4th Method    ======>  Using Two Pointer 
// // //    4th Method    ======>  Using Two Pointer 
//
//
// // This method also follow the login of length difference but in indirect way
// // This method also follow the login of length difference but in indirect way
// // This method also follow the login of length difference but in indirect way
//
//
// //   Time Complexity   = O(2m) 
//
//
// //   Space Complexity  = O(1) constant
//



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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        ListNode * h1 = headA ;
        ListNode * h2 = headB ;
        while(h1 != h2 )
        {
            h1 = h1->next ;
            h2 = h2->next ;
            if(h1==h2) return h1 ;
            if(h1==NULL) h1 = headB ;
            if(h2==NULL) h2 = headA ;
        }
        return h1 ;
    }
};






















