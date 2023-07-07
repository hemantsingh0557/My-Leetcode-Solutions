





// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Using map and stack   TC = O(log(n)) , SC = O(2*n) 
// //                      
// //                      
// // //  2nd Method  ====>  Using stack    TC = O(1) , SC = O(2*n) 
// //                     
// //                     
// // //  3rd Method  ====>  Using stack (optimized)    TC = O(1) , SC = O(n)  
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class MinStack {
// public:
//     MinStack() {
//     }
//     void push(int val) {
//     }
//     void pop() {
//     }
//     int top() {
//     }
//     int getMin() {
//     }
// };

// /**
//  * Your MinStack object will be instantiated and called as such:
//  * MinStack* obj = new MinStack();
//  * obj->push(val);
//  * obj->pop();
//  * int param_3 = obj->top();
//  * int param_4 = obj->getMin();
//  */



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======> Using map and stack
// // //  1st Method    ======> Using map and stack
// // //  1st Method    ======> Using map and stack
// //                             
// // //   Time Complexity   = O(log(n))  for each operation   
// //                              
// // //   Space Complexity  = O(2*n)   
// //                               




// class MinStack {
// public:
//     stack<int> st ;
//     map<int, int> mp ;
//     MinStack() 
//     {
//     }
//     void push(int val) 
//     {
//         st.push(val) ;
//         mp[val]++ ;
//     }
//     void pop() 
//     {
//         if(mp[st.top()]==1) mp.erase(st.top()) ;
//         else mp[st.top()]-- ;
//         st.pop() ;
//     }
//     int top() 
//     {
//         return st.top() ;
//     }
//     int getMin() 
//     {
//         auto it = mp.begin() ;
//         return (it->first) ; 
//     }
// };

// /**
//  * Your MinStack object will be instantiated and called as such:
//  * MinStack* obj = new MinStack();
//  * obj->push(val);
//  * obj->pop();
//  * int param_3 = obj->top();
//  * int param_4 = obj->getMin();
//  */







// //                           
// //                           
// // //  2nd Method    ======>   Using stack
// // //  2nd Method    ======>   Using stack
// // //  2nd Method    ======>   Using stack
// //                             
// // //   Time Complexity   = O(1)   for each operation
// //                              
// // //   Space Complexity  = O(2*n)   
// //                               



// class MinStack {
// public:
//     stack<pair<int,int>> st ;
//     MinStack() 
//     {
//     }
//     void push(int val) 
//     {
//         if(st.size()==0) 
//         {
//             st.push({val ,val}) ;
//             return ;
//         }
//         int mn = min(val , st.top().second) ;
//         st.push({val , mn}) ;
//     }
//     void pop() 
//     {
//         st.pop() ;
//     }
//     int top() 
//     {
//         return st.top().first ;
//     }
//     int getMin() 
//     {
//         return st.top().second ;
//     }
// };

// /**
//  * Your MinStack object will be instantiated and called as such:
//  * MinStack* obj = new MinStack();
//  * obj->push(val);
//  * obj->pop();
//  * int param_3 = obj->top();
//  * int param_4 = obj->getMin();
//  */












// //                           
// //                           
// // //  3rd Method    ======>   Using stack (optimized)
// // //  3rd Method    ======>   Using stack (optimized)
// // //  3rd Method    ======>   Using stack (optimized)
// //                             
// // //   Time Complexity   = O(1)   for each operation
// //                              
// // //   Space Complexity  = O(n) total  
// //                               





class MinStack {
public:
    stack<long long> st ;
    long long mn ;
    MinStack() 
    {
        mn = INT_MAX ;
    }
    void push(int val) 
    {
        long long value = val ; 
        if(st.size()==0) 
        {
            st.push(value) ;
            mn = value ;
            return ;
        }
        if(val<mn)
        {
            st.push(2*value*1LL - mn) ;
            mn = val;
        }
        else st.push(value) ;
    }
    void pop() 
    {
        if(st.size()==0) return ;
        long long  value = st.top() ;
        if(value<mn) mn = 2*mn*1LL - value ;
        st.pop() ;
    }
    int top() 
    {
        if(st.size()==0) return -1 ;
        long long  value = st.top() ;
        if(value<mn) return mn ;
        return value ;
    }
    int getMin() 
    {
        return mn ;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */









































































