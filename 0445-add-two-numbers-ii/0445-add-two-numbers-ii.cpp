





// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //
// //                // //  // Here, m and n are is the number of nodes in l1 and l2
// //                // //  // Here, m and n are is the number of nodes in l1 and l2
// //
// //
// // //  1st Method  ====>  Using Reverse List   TC = O(n+m) , SC = O(n+m) 
// //                      
// //                      
// // //  2nd Method  ====>   Using stack     TC = O(n+m) , SC = O(n+m) 
// //                     
// //                     
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
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
//     }
// };




/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>   Using Reverse List 
// // //  1st Method    ======>   Using Reverse List 
// // //  1st Method    ======>   Using Reverse List 
// //                             
// // //   Time Complexity   = O(n+m)    // Here, m and n are is the number of nodes in l1 and l2   
// //                              
// // //   Space Complexity  = O(n+m)    // Here, m and n are is the number of nodes in l1 and l2 
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
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
//     {
//         ListNode* head1 = l1 , *head2 = l2 ;
//         ListNode* prev1 = NULL , *prev2 = NULL ;
//         while(head1)
//         {
//             ListNode * temp1 = head1->next ;
//             head1->next = prev1 ;
//             prev1 = head1;
//             head1 = temp1 ;
//         }
//         head1 = prev1 ;
//         while(head2)
//         {
//             ListNode * temp2 = head2->next ;
//             head2->next = prev2 ;
//             prev2 = head2;
//             head2 = temp2 ;
//         }
//         head2 = prev2 ;
//         int carry =0;
//         ListNode * ans = NULL ;
//         while(head1 || head2 )
//         {
//             int value = carry  ;
//             if(head1) value += head1->val , head1 = head1->next ;   
//             if(head2) value += head2->val , head2 = head2->next ;  
//             carry = value / 10 ;
//             value = value % 10 ; 
//             // if(value >=10) value -= 10 , carry=1 ;
//             // else carry = 0;
//             ListNode*temp = new ListNode(value) ;
//             temp ->next = ans ;
//             ans = temp ;
//         }
//         if(carry)
//         {
//             ListNode*temp = new ListNode(carry) ;
//             temp ->next = ans ;
//             ans = temp ;
//         }
//         return   ans  ;
//     }
// };


















// //                           
// //                           
// // //  2nd Method  (Three Ways)  ======>     Using stack  
// // //  2nd Method  (Three Ways)  ======>     Using stack  
// // //  2nd Method  (Three Ways)  ======>     Using stack  
// //                             
// // //   Time Complexity   = O(n+m)    // Here, m and n are is the number of nodes in l1 and l2
// //                               
// // //   Space Complexity  = O(n+m)    // Here, m and n are is the number of nodes in l1 and l2
// //                               



// // //   2nd Method   ====>      1st way   =====>                                 
// // //   2nd Method   ====>      1st way   =====>                                 
// // //   2nd Method   ====>      1st way   =====>                                 


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
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
//     {
//         ListNode* head1 = l1 , *head2 = l2 ;
//         stack<ListNode*> st1 , st2 ;
//         while(head1) st1.push(head1) , head1 = head1->next ;
//         while(head2) st2.push(head2) , head2 = head2->next ;
//         int carry =0;
//         ListNode * ans = new ListNode() ; ;
//         while(st1.size() || st2.size())
//         {
//             int value = carry  ;
//             if(st1.size()) value += st1.top()->val , st1.pop() ;   
//             if(st2.size()) value += st2.top()->val , st2.pop() ;  
//             carry = value / 10 ;
//             value = value % 10 ; 
//             // if(value >=10) value -= 10 , carry=1 ;
//             // else carry = 0;
//             ans->val = value ;
//             ListNode*temp = new ListNode(carry) ;
//             temp ->next = ans ;
//             ans = temp ;
//         }
//         return  carry==0 ? ans->next : ans  ;
//     }
// };




// // //   2nd Method   ====>     2nd way   =====>                                 
// // //   2nd Method   ====>     2nd way   =====>                                 
// // //   2nd Method   ====>     2nd way   =====>             


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
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
//     {
//         ListNode* head1 = l1 , *head2 = l2 ;
//         stack<ListNode*> st1 , st2 ;
//         while(head1) st1.push(head1) , head1 = head1->next ;
//         while(head2) st2.push(head2) , head2 = head2->next ;
//         int carry =0;
//         ListNode * ans = NULL ;
//         while(st1.size() || st2.size())
//         {
//             int value = carry  ;
//             if(st1.size()) value += st1.top()->val , st1.pop() ;   
//             if(st2.size()) value += st2.top()->val , st2.pop() ;  
//             carry = value / 10 ;
//             value = value % 10 ; 
//             // if(value >=10) value -= 10 , carry=1 ;
//             // else carry = 0;
//             ListNode*temp = new ListNode(value) ;
//             temp ->next = ans ;
//             ans = temp ;
//         }
//         if(carry==1)
//         {
//             ListNode * temp = new ListNode(carry) ;
//             temp->next = ans;
//             return temp ;
//         }
//         return   ans  ;
//     }
// };





// // //   2nd Method   ====>     3rd way   =====>                                 
// // //   2nd Method   ====>     3rd way   =====>                                 
// // //   2nd Method   ====>     3rd way   =====>             



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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode* head1 = l1 , *head2 = l2 ;
        stack<ListNode*> st1 , st2 ;
        while(head1) st1.push(head1) , head1 = head1->next ;
        while(head2) st2.push(head2) , head2 = head2->next ;
        int carry =0;
        int sz1 = st1.size()  ,    sz2 = st2.size() ;   
        while(st1.size() || st2.size())
        {
            int value = carry  ;
            if(st1.size()) value += st1.top()->val  ;   
            if(st2.size()) value += st2.top()->val  ;  
            carry = value / 10 ;
            value = value % 10 ; 
            // if(value >=10) value -= 10 , carry=1 ;
            // else carry = 0;
            if(st1.size())  st1.top()->val = value , st1.pop() ; ;
            if(st2.size())  st2.top()->val = value , st2.pop() ;  
        }
        if(carry==1)
        {
            ListNode * temp = new ListNode(carry) ;
            if(sz1>=sz2) temp->next =l1 ;  
            else  temp->next =l2 ;  
            return temp ;
        }
        return sz1>=sz2 ? l1 : l2 ;
    }
};
















































