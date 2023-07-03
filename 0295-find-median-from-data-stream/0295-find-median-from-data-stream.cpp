



// //
// // // // // // //  Solve Using  Two  Method  ===>     
// // // // // // //  Solve Using  Two  Method  ===>                        
// //                     
// //                     // // here m is the no of call of findMedian()  function
// // //  1st Method  ====> Using vector (TLE TLE TLE)    TC = O(nlog(n) * m) , SC = O(n) 
// //                      
// //                      
// // //  2nd Method  ====> Max and Min Heap(Priority Queue)    TC = O(nlog(n)) , SC = O(n) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class MedianFinder {
// public:
//     MedianFinder() {
        
//     }
    
//     void addNum(int num) {
        
//     }
    
//     double findMedian() {
        
//     }
// };

// /**
//  * Your MedianFinder object will be instantiated and called as such:
//  * MedianFinder* obj = new MedianFinder();
//  * obj->addNum(num);
//  * double param_2 = obj->findMedian();
//  */


/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>    Using vector (TLE TLE TLE)    
// // //  1st Method    ======>    Using vector (TLE TLE TLE)    
// // //  1st Method    ======>    Using vector (TLE TLE TLE)    
// //                             
// // //   Time Complexity   = O(nlog(n) * m)   // // here m is the no of call of findMedian()  function
// //                              
// // //   Space Complexity  = O(n)   
// //                               


// class MedianFinder {
// public:
//     vector<double> v;
//     MedianFinder() {
//     }
//     void addNum(int num) 
//     {
//         v.push_back(num) ;
//     }
//     double findMedian() 
//     {
//         int n = v.size() ;
//         sort(v.begin() , v.end()) ;
//         if(n%2==1) return (double)v[n/2] ; 
//         return ((double)v[n/2] + (double)v[n/2-1])/2   ;
//     }
// };
// /**
//  * Your MedianFinder object will be instantiated and called as such:
//  * MedianFinder* obj = new MedianFinder();
//  * obj->addNum(num);
//  * double param_2 = obj->findMedian();
//  */









// //                           
// //                           
// // //  2nd Method    ======>   Max and Min Heap(Priority Queue)
// // //  2nd Method    ======>   Max and Min Heap(Priority Queue)
// // //  2nd Method    ======>   Max and Min Heap(Priority Queue)
// //                             
// // //   Time Complexity   =  O(nlog(n))  
// //                              
// // //   Space Complexity  = O(n)   
// //                               



class MedianFinder {
public:
    priority_queue<double> mx  ;
    priority_queue<double, vector<double>, greater<double> > mn  ;
    MedianFinder() {  
    }
    void addNum(int num) 
    {
        if(mx.size()==0 || num<mx.top()) mx.push(num);
        else mn.push(num) ;
        if(mx.size()>mn.size()+1)
        {
            mn.push(mx.top());
            mx.pop();
        }
        else if(mx.size() < mn.size() )
        {
            mx.push(mn.top());
            mn.pop();
        }
    }
    double findMedian() 
    {
        if(mx.size()==mn.size()) return  (double)(mx.top() + mn.top())/2 ;
        return mx.top() ;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */

















