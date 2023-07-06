






// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using Doubly Linked List and map     TC = O(1) Best Case , SC = O(n) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class LRUCache {
// public:
//     LRUCache(int capacity) {
        
//     }
    
//     int get(int key) {
        
//     }
    
//     void put(int key, int value) {
        
//     }
// };

// /**
//  * Your LRUCache object will be instantiated and called as such:
//  * LRUCache* obj = new LRUCache(capacity);
//  * int param_1 = obj->get(key);
//  * obj->put(key,value);
//  */



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>   Using Doubly Linked List and map   
// // //  1st Method    ======>   Using Doubly Linked List and map   
// // //  1st Method    ======>   Using Doubly Linked List and map   
// //                             
// // //   Time Complexity   = O(1)
// //                         get => O(1)  Best Case   ,  O(n) very worst Case   
// //                         put => O(1)  Best Case   ,  O(n) very worst Case   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



class LRUCache {
public:
    class Node {
    public :
        int nodekey , nodeval ;
        Node *next ;
        Node *prev ;
        Node(int k , int v )
        {
            nodekey = k ;
            nodeval = v ;
        }
    } ;
    void addnode(Node * newnode)
    {
        Node * temp  = head->next ;
        head->next = newnode ;
        newnode->prev = head ;
        newnode->next = temp ;
        temp->prev= newnode;
    }
    void deletenode(Node * delnode)
    {
        Node * delprev  = delnode->prev ;
        Node * delnext  = delnode->next ;
        delprev->next = delnext ;
        delnext->prev = delprev ;
    }
    Node * head = new Node(-1 , -1) ; 
    Node * tail = new Node(-1 , -1) ; 
    unordered_map<int ,Node*> mp ;
    int n ;
    LRUCache(int capacity) 
    {
        n = capacity ;
        head->next = tail ; 
        tail->prev = head ; 
    }
    
    int get(int key)
    {
        if(mp.count(key))
        {
            Node *oldnode = mp[key] ;
            int ans = oldnode->nodeval ;
            mp.erase(key) ;
            deletenode(oldnode);
            addnode(oldnode);
            mp[key] = head->next ;
            return ans ;
        }
        return -1 ;
    }
    
    void put(int key, int value) 
    {
        if(mp.count(key))
        {
            Node *oldnode = mp[key] ;
            mp.erase(key) ;
            deletenode(oldnode);
        }
        if(mp.size()==n)
        {
            mp.erase(tail->prev->nodekey) ;
            deletenode(tail->prev) ;
        }
        addnode(new Node(key , value)) ;
        mp[key] = head->next ;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */























