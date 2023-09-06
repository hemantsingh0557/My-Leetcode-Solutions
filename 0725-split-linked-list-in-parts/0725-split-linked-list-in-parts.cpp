











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
//     vector<ListNode*> splitListToParts(ListNode* head, int k) {
        
//     }
// };















// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // 1st Method ( Two Ways ) ==>  Two Pass Using Length   TC = O(n) , SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method  ( Two Ways )  ======>   Two Pass Using Length
// // //  1st Method  ( Two Ways )  ======>   Two Pass Using Length
// // //  1st Method  ( Two Ways )  ======>   Two Pass Using Length
// //                            
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               






// // //   1st Method   ====>      1st way   =====>       
// // //   1st Method   ====>      1st way   =====>       
// // //   1st Method   ====>      1st way   =====>       


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
//     vector<ListNode*> splitListToParts(ListNode* head, int k) 
//     {
//         ListNode * temp = head ;  
//         int len = 0 ;
//         while(temp) temp = temp->next ,   len++ ;
//         temp = head ; 
//         vector<ListNode*> ans ;
//         // //
//         // //
//         // //
//         if( k >= len )
//         {
//             while(temp) 
//             {
//                 ListNode * newNode = new ListNode(temp->val) ;
//                 ans.push_back(newNode) , temp = temp->next ;
//             }
//             while(len<k) ans.push_back(NULL) , len++ ;
//         }
//         // //
//         // //
//         // //
//         int extraNode = len % k ;  
//         ListNode * prev = NULL  ;
//         while(temp) 
//         {
//             ans.push_back(temp) ;
//             int times = len / k ;   
//             if( extraNode > 0 ) times++ ;   
//             else times = len / k ; 
//             int ct = 0 ;   
//             while(temp && ct < times )
//             {
//                 prev = temp ;
//                 temp = temp->next ;
//                 ct ++ ;
//             }
//             prev ->next = NULL ;
//             extraNode-- ;
//         }
//         return ans ; 
//     }
// };











// // //   1st Method   ====>      2nd  way   =====>       
// // //   1st Method   ====>      2nd  way   =====>       
// // //   1st Method   ====>      2nd  way   =====>       

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
    vector<ListNode*> splitListToParts(ListNode* head, int k) 
    {
        ListNode * temp = head ;  
        int len = 0 ;
        while(temp) temp = temp->next ,   len++ ;
        temp = head ; 
        vector<ListNode*> ans( k , NULL ) ;
        // //
        // //
        int i = 0 , mintimes = len / k , extraNode = len % k ;  
        ListNode * prev = NULL  ;
        while(temp) 
        {
            ans[i++] = temp ; ;
            // if( extraNode > 0 ) times++ ;   
            // else times = len / k ; 
            // int ct = 0 ;   
            // while(temp && ct < times )
            for(int j =0; j < mintimes + (extraNode > 0) ; j++ )
            {
                prev = temp ;
                temp = temp->next ;
            }
            prev ->next = NULL ;
            extraNode-- ;
        }
        return ans ; 
    }
};














































