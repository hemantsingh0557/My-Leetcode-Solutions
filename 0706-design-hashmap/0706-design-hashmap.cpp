




// class MyHashMap {
// public:
//     MyHashMap() {
        
//     }
    
//     void put(int key, int value) {
        
//     }
    
//     int get(int key) {
        
//     }
    
//     void remove(int key) {
        
//     }
// };

// /**
//  * Your MyHashMap object will be instantiated and called as such:
//  * MyHashMap* obj = new MyHashMap();
//  * obj->put(key,value);
//  * int param_2 = obj->get(key);
//  * obj->remove(key);
//  */












// //
// // // // // // //  Solve Using  Only One  Method  ===>
// // // // // // //  Solve Using  Only One  Method  ===>
// 
//
// // //  1st Method ====> Best Method   TC = O(1) for each operation , SC = O(n)  
// 
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////




// //
// //
// // // // //   1st  Method    ===============>    Best  Method
// // // // //   1st  Method    ===============>    Best  Method
// // // // //   1st  Method    ===============>    Best  Method
// // // // //   1st  Method    ===============>    Best  Method
// //
// //
// // //   Time Complexity   = O(1) for each operation
// //
// //
// // //   Space Complexity  = O(n)
// //




class MyHashMap {
public:
    int n = 1000007 ;    
    vector<int> v;
    MyHashMap() 
    {
        v.resize(n , -1) ; 
    }
    void put(int key, int value) 
    {
        v[key] = value ;
    }
    int get(int key) 
    {
        return v[key] ;
    }
    void remove(int key) {
        v[key] = -1 ; 
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */


































































