














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
//     ListNode* reverseBetween(ListNode* head, int left, int right) {
        
//     }
// };






















// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Two Pass Method      TC = O(2*n) , SC = O(1) constant
// //                      
// //                      
// // //  2nd Method  ====> (Follow up) Single Pass Method    TC = O(n) , SC = O(1) constant
// //                     
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>    Two Pass Method 
// // //  1st Method    ======>    Two Pass Method 
// // //  1st Method    ======>    Two Pass Method 
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
//     ListNode* reverseBetween(ListNode* head, int left, int right) 
//     {
//         // return head ; 
//         if(left == right ) return head ; 
//         ListNode * temp = head ;
//         ListNode * prevleftnode=NULL , *leftnode , *rightnode ;
//         int len = 0 ; 
//         while(temp)
//         {
//             len++ ;
//             if(len==left-1) prevleftnode = temp ;
//             if(len==left) leftnode = temp ;
//             if(len==right) rightnode = temp ;
//             temp = temp->next ;  
//         }
//         // 
//         //
//         // ListNode * prev = NULL ;  // //   if we do this then after while loop we need 
//         // // to do the leftnode->next = temp ;  after while loop 
//         // 
//         ListNode * prev = rightnode->next ; ;
//         temp = leftnode ;
//         while(prev != rightnode )
//         {
//             ListNode * nxt = temp->next ;
//             temp->next = prev ;
//             prev = temp ;
//             temp = nxt ;
//         }
//         // leftnode->next = temp ; // // it is mandotory if we initialize  ListNode * prev = NULL ;  
//         // // and if we initializeListNode * prev = rightnode->next ;  then we don't  neew it
//         //
//         if(left==1) return prev ; 
//         prevleftnode->next = prev ;
//         return head; 
//     }
// };














// //                           
// //                           
// // //  2nd Method    ======>   (Follow up)    Single Pass Method 
// // //  2nd Method    ======>   (Follow up)    Single Pass Method 
// // //  2nd Method    ======>   (Follow up)    Single Pass Method 
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
    ListNode* reverseBetween(ListNode* head, int left, int right) 
    {
        // return head ; 
        if(left == right ) return head ; 
        ListNode * temp = head ;
        ListNode * prevleftnode=NULL , *leftnode  , *prev = NULL ; 
        int len = 0 ; 
        while( len < left-1 ) prevleftnode = temp ,  temp = temp->next , len++  ; 
        leftnode = temp ;
        while(temp && len < right )
        {
            ListNode * nxt = temp->next ;
            temp->next = prev ; 
            prev = temp ; 
            temp = nxt ;
            len++ ;
        }
        leftnode->next = temp ;
        if(left==1) return prev ; 
        prevleftnode->next = prev ;
        return head; 
    }
};






































