


















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
//     void reorderList(ListNode* head) {
        
//     }
// };










// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                    
// // // n is half of the no of nodes 
// //                     
// // //  1st Method  ====> Two Pass using map    TC = O(n) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====>  Try slow and fast pointer   TC = O() , SC = O() 
// //                     
// //                     
// // //  3rd Method  ====> Try Using two pointer    TC = O() , SC = O()  
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Two Pass using map  
// // //  1st Method    ======>   Two Pass using map  
// // //  1st Method    ======>   Two Pass using map  
// //                          
// // // n is half of the no of nodes 
// //   
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
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
    void reorderList(ListNode* head) 
    {
        // return head;
        // // //   take example 1 and 2
        // // 
        int len = 0 ; 
        ListNode * temp = head   ;  
        while(temp )  temp = temp->next , len++ ; 
        if( len <= 2 ) return ;  
        int half = 0 , ct = 1 ; 
        if( len % 2 == 1 ) half = len / 2 + 1 ; 
        else half = len / 2 ; 
        // // 
        // // in example 1 half = 2 ,      example 2 half = 2 + 1 = 3
        // //
        unordered_map<ListNode* , ListNode *> mp ; 
        temp = head ;
        ListNode * curr = NULL ; 
        while( ct <= half && temp )  
        {
            mp[temp] = curr  ; 
            curr = temp ;
            temp = temp->next ; 
            ct++ ; 
        } 
        //
        // // // example 1   ===>  curr and temp are  2 and 3 
        // // // example 2   ===>  curr and temp are  3 and 3 
        //
        // cout<<curr->val<<" "<<temp->val<<endl; 
        //
        //
        // // // the below condition is for example 1 ==> temp = 4 and  curr ==> 2->3->NULL 
        if( len % 2 == 0 ) temp = temp->next , curr->next->next = NULL ; 
        else curr->next = NULL ; 
        // // // the above condition is for example 2 ==>   curr ==> 3->NULL 
        //
        //
        // // // now after change example 1   ===>  curr and temp are  2 and 4 
        // // // now after change example 2   ===>  curr and temp are  3 and 4 
        //
        // cout<<curr->val<<" "<<temp->val<<endl;  
        //
        //
        // for(auto it : mp )
        // {
        //     if( it.second )  cout<<it.first->val<<" "<<it.second->val<<endl;
        //     else cout<<it.first->val<<" "<<" NULL val "<<endl;
        // }
        //
        //
        // start from node 4 means temp = 4
        while(temp )
        {
            // //  temp = 4 
            // //  curr = 2 or 3
            ListNode * nxt = temp->next ;  // // NULL(example 1)  or   5 (example 2)
            ListNode * prev = mp[curr] ;   // // 1 (example 1)  or   2 (example 2)
            prev ->next = temp  ; // //  1->4 (example 1)  or   2->4 (example 2)
            temp->next = curr ;   //  4->2 (example 1)  or   4->3 (example 2)
            curr = prev  ;        // curr == 1 (example 1)  or   2(example 2)
            temp = nxt ;        //  NULL(example 1)   or   5 (example 2)
        }
    }
};




















// //                           
// //                           
// // //  2nd Method    ======>   Try slow and fast pointer 
// // //  2nd Method    ======>   Try slow and fast pointer 
// // //  2nd Method    ======>   Try slow and fast pointer 
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               





// //                           
// //                           
// // //  3rd Method    ======>   Try Using two pointer
// // //  3rd Method    ======>   Try Using two pointer
// // //  3rd Method    ======>   Try Using two pointer
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               




































