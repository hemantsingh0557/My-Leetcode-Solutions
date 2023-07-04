




// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using Two Queue    TC = O(n) , SC = O(2n)
// //                      
// //                      
// // //  2nd Method  ====> Using One Queue    TC = O(n) , SC = O(n) 
// //                 
// //    
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class MyStack {
// public:
//     MyStack() {
//     }
//     void push(int x) {
//     }
//     int pop() {
//     }
//     int top() {
//     }
//     bool empty() {
//     }
// };

// /**
//  * Your MyStack object will be instantiated and called as such:
//  * MyStack* obj = new MyStack();
//  * obj->push(x);
//  * int param_2 = obj->pop();
//  * int param_3 = obj->top();
//  * bool param_4 = obj->empty();
//  */



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>     Using Two Queue 
// // //  1st Method    ======>     Using Two Queue 
// // //  1st Method    ======>     Using Two Queue 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(2n)   
// //                               



// class MyStack {
// public:
//     queue<int> p ;
//     queue<int> q ;
//     MyStack() {
//     }
//     void push(int x) 
//     {
//         p.push(x) ;
//         while(q.size()) p.push(q.front()) , q.pop() ;
//         queue<int> temp = p ;
//         p = q ;
//         q= temp ;
//     }
//     int pop() 
//     {
//         int ans = q.front() ;
//         q.pop() ;
//         return ans ; 
//     }
//     int top() 
//     {
//         return q.front() ; 
//     }
//     bool empty() 
//     {
//         return q.empty() ;
//     }
// };

// /**
//  * Your MyStack object will be instantiated and called as such:
//  * MyStack* obj = new MyStack();
//  * obj->push(x);
//  * int param_2 = obj->pop();
//  * int param_3 = obj->top();
//  * bool param_4 = obj->empty();
//  */









// //                           
// //                           
// // //  2nd Method    ======>     Using One  Queue 
// // //  2nd Method    ======>     Using One  Queue 
// // //  2nd Method    ======>     Using One  Queue 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(n)   
// //                               





class MyStack {
public:
    queue<int> q ;
    MyStack() {
    }
    void push(int x) 
    {
        int n = q.size() ;
        q.push(x) ;
        while(n--) q.push(q.front()) , q.pop() ;
    }
    int pop() 
    {
        int ans  = q.front() ;
        q.pop() ;
        return ans ;
    }
    int top() 
    {
        return q.front() ;
    }
    bool empty() 
    {
        // return q.size()==0 ;
        return q.empty() ;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */













































