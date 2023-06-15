






// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                // // n is the length of the linked-list
// //                // // n is the length of the linked-list
// //                     
// // //  1st Method  ==> Find Length then using vector(Three Pass) TC = O(3*n), SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ==> Make Cycle then Move n-k (max Two Pass) TC = O(2*n), SC = O(1) constant
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
//     ListNode* rotateRight(ListNode* head, int k) {
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======> Find Length then using vector(Three Pass)  
// // //  1st Method    ======> Find Length then using vector(Three Pass)  
// // //  1st Method    ======> Find Length then using vector(Three Pass)  
// //                             
// // //   Time Complexity   = O(3*n)   
// //                              
// // //   Space Complexity  = O(n)   
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
//     ListNode* rotateRight(ListNode* head, int k) 
//     {
//         ListNode* temp = head ;
//         int n = 0;
//         while(temp)
//         {
//             n++ ;
//             temp = temp->next ;
//         }
//         vector<int> v(n) ;
//         temp = head ;
//         int ct = 0 ;
//         while(temp)
//         {
//             v[(ct+k)%n] = temp->val ;
//             ct ++ ;
//             temp = temp->next ;
//         }
//         temp = head ;
//         ct = 0 ;
//         while(temp)
//         {
//             temp->val = v[ct] ;
//             temp = temp->next ;
//             ct ++ ;
//         }
//         return head;
//     }
// };











// //                           
// //                           
// // //  2nd Method    ======> Make Cycle then Move n-k (max Two Pass)
// // //  2nd Method    ======> Make Cycle then Move n-k (max Two Pass)
// // //  2nd Method    ======> Make Cycle then Move n-k (max Two Pass)
// //                             
// // //   Time Complexity   = O(2*n)   
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
    ListNode* rotateRight(ListNode* head, int k) 
    {
        if(!head) return head ; 
        ListNode* temp = head ;
        int n = 1 ;
        while(temp->next)
        {
            n++ ;
            temp = temp->next ;
        }
        temp->next = head; 

        int newHead = k % n ;
        for(int i=0; i< n-newHead; i++) temp = temp->next ;
        head = temp->next ;
        temp->next = NULL ;
        return head;
    }
};


























