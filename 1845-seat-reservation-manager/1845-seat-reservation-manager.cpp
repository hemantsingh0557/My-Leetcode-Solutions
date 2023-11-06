























// class SeatManager {
// public:
//     SeatManager(int n) {
        
//     }
    
//     int reserve() {
        
//     }
    
//     void unreserve(int seatNumber) {
        
//     }
// };

// /**
//  * Your SeatManager object will be instantiated and called as such:
//  * SeatManager* obj = new SeatManager(n);
//  * int param_1 = obj->reserve();
//  * obj->unreserve(seatNumber);
//  */




















// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// // //  here m is the maximum calls   
// //                 
// // //  1st Method  ====>  Priority Queue    TC = O((m+n)*log(n)) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====>  Priority Queue    TC = O(m*log(n)) , SC = O(n) 
// //                     
// //                     
// // //  3rd Method  ====>  Ordered Set       TC = O(m*log(n)) , SC = O(n) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    Priority Queue 
// // //  1st Method    ======>    Priority Queue 
// // //  1st Method    ======>    Priority Queue 
// //                     
// // //  here m is the maximum calls   
// //                            
// // //   Time Complexity   = O((m+n)*log(n))
// //                              
// // //   Space Complexity  = O(n)   
// //                               



// class SeatManager {
// public:
//     priority_queue <int, vector<int>, greater<int>> pq;
//     SeatManager(int n) 
//     {
//         while(n>0)
//         {
//             // cout<<n<<endl;
//             pq.push(n--) ;
//         }
//     }
//     int reserve() 
//     {
//         int seat = pq.top() ; 
//         pq.pop() ;
//         return seat ; 
//     }
//     void unreserve(int seatNumber) 
//     {
//         pq.push(seatNumber) ;
//         // return  ; 
//     }
// };

// /**
//  * Your SeatManager object will be instantiated and called as such:
//  * SeatManager* obj = new SeatManager(n);
//  * int param_1 = obj->reserve();
//  * obj->unreserve(seatNumber);
//  */













// //                           
// //                           
// // //  2nd Method    ======>     Priority Queue 
// // //  2nd Method    ======>     Priority Queue 
// // //  2nd Method    ======>     Priority Queue 
// //  
// // //  here m is the maximum calls   
// //                           
// // //   Time Complexity   = O(m*log(n))
// //                              
// // //   Space Complexity  = O(n)   
// //                               




// class SeatManager {
// public:
//     priority_queue <int, vector<int>, greater<int>> pq;
//     int lowerSeat  ;
//     SeatManager(int n) 
//     {
//         lowerSeat = 1 ;
//     }
//     int reserve() 
//     {
//         // if( pq.size() ) 
//         // {
//         //     int seat = pq.top() ;
//         //     pq.pop() ;
//         //     return seat ; 
//         // }
//         // int  seat = lowerSeat ;
//         // lowerSeat ++ ;  
//         // return seat ; 
//         //
//         //
//         int seat ;   
//         if( pq.size() ) seat = pq.top() , pq.pop() ;
//         else  seat = lowerSeat++ ;
//         return seat ; 
//     }
//     void unreserve(int seatNumber) 
//     {
//         pq.push(seatNumber) ;
//         // return  ; 
//     }
// };

// /**
//  * Your SeatManager object will be instantiated and called as such:
//  * SeatManager* obj = new SeatManager(n);
//  * int param_1 = obj->reserve();
//  * obj->unreserve(seatNumber);
//  */
















// //                           
// //                           
// // //  3rd Method    ======>     Ordered Set
// // //  3rd Method    ======>     Ordered Set
// // //  3rd Method    ======>     Ordered Set
// //                     
// // //  here m is the maximum calls   
// //                          
// // //   Time Complexity   = O(m*log(n))
// //                              
// // //   Space Complexity  = O(n)   
// //                               

class SeatManager {
public:
    set <int> st;
    int lowerSeat  ;
    SeatManager(int n) 
    {
        lowerSeat = 1 ;
    }
    int reserve() 
    {
        if( st.size() ) 
        {
            int seat = *st.begin() ;
            st.erase(st.begin()) ;
            return seat ; 
        }
        int  seat = lowerSeat ;
        lowerSeat ++ ;  
        return seat ; 
        
        //
        // int seat ;   
        // if( st.size() ) seat = *st.begin() , st.erase(st.begin()) ;
        // else  seat = lowerSeat++ ;
        // return seat ; 
    }
    void unreserve(int seatNumber) 
    {
        st.insert(seatNumber) ;
        // return  ; 
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */



















































