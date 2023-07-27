







// class Solution {
// public:
//     vector<int> maximizeXor(vector<int>& nums, vector<vector<int>>& queries) {
        
//     }
// };










// //
// // // // // // //  Solve Using  Two Method  ===>     
// // // // // // //  Solve Using  Two Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  Brute Force ( TLE TLE TLE )   TC = O(n*q) , SC = O(1) constant
// //                      
// //                      
// //                 // //  Q is the size of new array Q which we created of pair of pair
// // //  2nd Method  ====>  Using Trie data  Structure   TC = O(nlog(n) + Qlog(Q)) , SC = O() 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Brute Force ( TLE TLE TLE )
// // //  1st Method    ======>   Brute Force ( TLE TLE TLE )
// // //  1st Method    ======>   Brute Force ( TLE TLE TLE )
// //                             
// // //   Time Complexity   = O(n*q)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               




// class Solution {
// public:
//     vector<int> maximizeXor(vector<int>& nums, vector<vector<int>>& queries) 
//     {
//         int n = nums.size() , q = queries.size() ;
//         vector<int> ans; 
//         for(int i=0; i<q; i++)
//         {
//             int mx = -1 ;
//             for(int j=0; j<n; j++)
//             {
//                 if(queries[i][1] >= nums[j] ) mx = max(mx , queries[i][0] ^ nums[j] ) ;
//             }
//             ans.push_back(mx) ;
//         }
//         return ans ;
//     }
// };








// //                           
// //                           
// // //  2nd Method    ======>   Using Trie data  Structure
// // //  2nd Method    ======>   Using Trie data  Structure
// // //  2nd Method    ======>   Using Trie data  Structure
// //
// //         // //  Q is the size of new array Q which we created of pair of pair
// //                             
// // //   Time Complexity   = O(nlog(n) + Qlog(Q))
// //                              
// // //   Space Complexity  = O()   
// //                               


class Node
{
public :
    Node *  links[2] ;
    bool containskey(int bit)
    {
        return (links[bit]!=NULL) ;
    }
    Node * get(int bit)
    {
        return links[bit] ;
    }
    void put(int bit , Node * node)
    {
        links[bit] = node ;
    }
} ;
class Trie
{
    private : Node * root ;
public :
    Trie()
    {
        root = new Node() ;
    }
    void insert(int num)
    {
        Node * node = root ;
        for(int i=31; i>=0 ; i--)
        {
            int bit = (num>>i) & 1 ;
            if( ! node->containskey(bit) ) node->put(bit , new Node() ) ; 
            node = node->get(bit) ;
        }
    }
    int getMax(int num )
    {
        Node * node = root ;
        int mxNum = 0 ;
        long temp = 0 ;
        for(int i=31; i>=0 ; i--)
        {
            int bit = (num>>i) & 1 ;
            if( node->containskey(1-bit) ) 
            {
                mxNum = mxNum | (1<<i) ; 
                node = node->get(1-bit) ;
            }
            else  node = node->get(bit) ;
        }
        return mxNum ;
    }
} ;
class Solution {
public:
    vector<int> maximizeXor(vector<int>& nums, vector<vector<int>>& queries) 
    {
        int n = nums.size() ;
        int q = queries.size() ; 
        sort(nums.begin() ,nums.end()) ;
        vector<pair<int , pair<int,int>>> Q ;
        for(int i=0; i<q; i++) 
        {
            Q.push_back({queries[i][1] , {queries[i][0] , i}} ) ;  
        }
        sort(Q.begin() ,Q.end()) ;
        vector<int> ans(q,0) ;
        int ind =0 ; 
        Trie  trie ;
        for(int i=0; i<q; i++)          
        {
           int a = Q[i].first ;
           int x = Q[i].second.first ;
           int qInd = Q[i].second.second ;
           while(ind<n && nums[ind]<= a )
           {
               trie.insert(nums[ind]) ;
               ind++ ;
           }
           if(ind==0) ans[qInd] = -1 ;
           else ans[qInd] = trie.getMax(x) ;
        }
        return ans ;
    }
};












































