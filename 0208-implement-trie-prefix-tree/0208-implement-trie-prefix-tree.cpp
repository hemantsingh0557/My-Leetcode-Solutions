










// class Trie {
// public:
//     Trie() {
        
//     }
    
//     void insert(string word) {
        
//     }
    
//     bool search(string word) {
        
//     }
    
//     bool startsWith(string prefix) {
        
//     }
// };

// /**
//  * Your Trie object will be instantiated and called as such:
//  * Trie* obj = new Trie();
//  * obj->insert(word);
//  * bool param_2 = obj->search(word);
//  * bool param_3 = obj->startsWith(prefix);
//  */












// //
// // // // // // //  Solve Using  Only one  Method  ===>     
// // // // // // //  Solve Using  Only one  Method  ===>                        
// //                     
// //                 // //   n is sizze of prefix and m is size of map    
// // //  1st Method  ====>  using  unordered_map  only   TC = O(1) , O(1) , O(n)  , SC = O(n*m)
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>    using  unordered_map  only
// // //  1st Method    ======>    using  unordered_map  only
// // //  1st Method    ======>    using  unordered_map  only
// //                             
// //
// //          // //   n is sizze of prefix and m is size of map    
// //
// // //   Time Complexity   = O(1) , O(1) , O(n) 
// //                              
// // //   Space Complexity  = O(n)  
// //                               



class Trie {
public:
    unordered_map<string, int> mp ;
    Trie() {
        
    }
    void insert(string word) 
    {
        mp[word] ++ ;
    }
    
    bool search(string word) 
    {
        return mp.count(word) ;
    }
    
    bool startsWith(string prefix) 
    {
        int n = prefix.size() ;
        for(auto it : mp)
        {
            string temp = it.first ;
            if(prefix == temp.substr(0,n)) return true ; ;
        }
        return false ;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */



























