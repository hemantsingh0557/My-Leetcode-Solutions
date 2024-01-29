

















// class MyQueue {
// public:
//     MyQueue() {
        
//     }
    
//     void push(int x) {
        
//     }
    
//     int pop() {
        
//     }
    
//     int peek() {
        
//     }
    
//     bool empty() {
        
//     }
// };

// /**
//  * Your MyQueue object will be instantiated and called as such:
//  * MyQueue* obj = new MyQueue();
//  * obj->push(x);
//  * int param_2 = obj->pop();
//  * int param_3 = obj->peek();
//  * bool param_4 = obj->empty();
//  */




















        
// //   
// // // // // // //  Solve Using  Four   Method  ===>     
// // // // // // //  Solve Using  Four   Method  ===>                        
// //                     
// //               // // for earch operation time complexity is O(n)
// // //  1st Method  ====>  Using Two Stack   TC = O(n) , SC = O(2n) 
// //                      
// //                      
// //                // // for earch operation time complexity is O(n)
// // //  2nd Method  ====>  Using Two Stack    TC = O(n) , SC = O(2n) 
// //                     
// //                     
// //                // // for earch operation time complexity is O(1) Amortized
// // //  3rd Method  ====>  Using Two Stack    TC = O(1) Amortized   , SC = O(2n) 
// //                     
// //                     
// //                // // for earch operation time complexity is O(1)
// // //  4th Method  ====>  Using Two Pointer \U0001f525 One Vector TC = O(1) , SC = O(n) 
// //
// //
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Using Two Stack 
// // //  1st Method    ======>    Using Two Stack 
// // //  1st Method    ======>    Using Two Stack 
// //                             
// // //   Time Complexity   = O(n)    push => O(1) ,  pop => O(n) ,  top => O(n)
// //                              
// // //   Space Complexity  = O(2n)   
// //                               



// class MyQueue {
// public:
//     stack<int> s1 ;
//     stack<int> s2 ;
//     MyQueue() {
//     }
//     void push(int x) 
//     {
//         s1.push(x) ;
//     }
//     int pop() 
//     {
//         while(s1.size()) s2.push(s1.top()) , s1.pop() ;
//         int ans = s2.top() ;
//         s2.pop() ;
//         while(s2.size()) s1.push(s2.top()) , s2.pop() ;
//         return ans ;
//     }
//     int peek() 
//     {
//         while(s1.size()) s2.push(s1.top()) , s1.pop() ;
//         int ans = s2.top() ;
//         while(s2.size()) s1.push(s2.top()) , s2.pop() ;
//         return ans ;
//     }
//     bool empty() 
//     {
//         return s1.empty() ;
//     }
// };

// /**
//  * Your MyQueue object will be instantiated and called as such:
//  * MyQueue* obj = new MyQueue();
//  * obj->push(x);
//  * int param_2 = obj->pop();
//  * int param_3 = obj->peek();
//  * bool param_4 = obj->empty();
//  */







// //                           
// //                           
// // //  2nd Method    ======>    Two stack
// // //  2nd Method    ======>    Two stack
// // //  2nd Method    ======>    Two stack
// //                             
// // //   Time Complexity   = O(n)     push => O(n) ,  pop => O(1) ,  top => O(1)
// //                              
// // //   Space Complexity  = O(2n)   
// //                               



// class MyQueue {
// public:
//     stack<int> s1 ;
//     stack<int> s2 ;
//     MyQueue() {
//     }
//     void push(int x) 
//     {
//         while(s1.size()) s2.push(s1.top()) , s1.pop() ;
//         s1.push(x) ;
//         while(s2.size()) s1.push(s2.top()) , s2.pop() ;
//     }
//     int pop() 
//     {
//         int ans = s1.top() ;
//         s1.pop() ;
//         return ans ;
//     }
//     int peek() 
//     {
//         int ans = s1.top() ;
//         return ans ;
//     }
//     bool empty() 
//     {
//         return s1.empty() ;
//     }
// };

// /**
//  * Your MyQueue object will be instantiated and called as such:
//  * MyQueue* obj = new MyQueue();
//  * obj->push(x);
//  * int param_2 = obj->pop();
//  * int param_3 = obj->peek();
//  * bool param_4 = obj->empty();
//  */











// //                           
// //                           
// // //  3rd Method    ======>    Two stack
// // //  3rd Method    ======>    Two stack
// // //  3rd Method    ======>    Two stack
// //                             
// // //   Time Complexity   = O(1)  Amortized
// //                      push => O(1) ,  pop => O(1)Amortized or O(n) ,  top => O(1)Amortized or O(n)
// //                              
// // //   Space Complexity  = O(2n)   
// //                               





// class MyQueue {
// public:
//     stack<int> s1 ;
//     stack<int> s2 ;
//     MyQueue() {
//     }
//     void push(int x) 
//     {
//         s1.push(x) ;
//     }
//     int pop() 
//     {
//         int ans ;
//         // if(!s2.empty)
//         // {
//         //     ans = s2.top() ;
//         //     s2.pop() ;
//         //     return ans ;
//         // }
//         if(s2.empty()) while(s1.size()) s2.push(s1.top()) , s1.pop() ;
//         ans = s2.top() ;
//         s2.pop() ;
//         return ans ;
//     }
//     int peek() 
//     {
//         if(s2.empty()) while(s1.size()) s2.push(s1.top()) , s1.pop() ;
//         return s2.top() ;
//     }
//     bool empty() 
//     {
//         return s1.empty() && s2.empty();
//     }
// };

// /**
//  * Your MyQueue object will be instantiated and called as such:
//  * MyQueue* obj = new MyQueue();
//  * obj->push(x);
//  * int param_2 = obj->pop();
//  * int param_3 = obj->peek();
//  * bool param_4 = obj->empty();
//  */
















// //                           
// //                           
// // //  4th  Method    ======>   Two Pointer \U0001f525 One Vector
// // //  4th  Method    ======>   Two Pointer \U0001f525 One Vector
// // //  4th  Method    ======>   Two Pointer \U0001f525 One Vector
// //                             
// // //   Time Complexity   = O(1)     push => O(1) ,  pop => O(1) ,  top => O(1)
// //                              
// // //   Space Complexity  = O(n)   
// //                               







class MyQueue {
public:
    vector<int> v ;
    int i=0 , j =-1 ;
    MyQueue() {
    }
    void push(int x) 
    {
        v.push_back(x) ;
        j++ ;
    }
    int pop() 
    {
        int ans = v[i++] ; 
        return ans ;
    }
    int peek() 
    {
        int ans = v[i] ; 
        return ans ;
    }
    bool empty() 
    {
        int n = j-i+1 ;
        if(n==0) return true;
        return false ;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */











































