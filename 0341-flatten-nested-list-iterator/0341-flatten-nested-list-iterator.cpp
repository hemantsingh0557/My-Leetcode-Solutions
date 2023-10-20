















// /**
//  * // This is the interface that allows for creating nested lists.
//  * // You should not implement it, or speculate about its implementation
//  * class NestedInteger {
//  *   public:
//  *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
//  *     bool isInteger() const;
//  *
//  *     // Return the single integer that this NestedInteger holds, if it holds a single integer
//  *     // The result is undefined if this NestedInteger holds a nested list
//  *     int getInteger() const;
//  *
//  *     // Return the nested list that this NestedInteger holds, if it holds a nested list
//  *     // The result is undefined if this NestedInteger holds a single integer
//  *     const vector<NestedInteger> &getList() const;
//  * };
//  */

// class NestedIterator {
// public:
//     NestedIterator(vector<NestedInteger> &nestedList) {
        
//     }
    
//     int next() {
        
//     }
    
//     bool hasNext() {
        
//     }
// };

// /**
//  * Your NestedIterator object will be instantiated and called as such:
//  * NestedIterator i(nestedList);
//  * while (i.hasNext()) cout << i.next();
//  */










// //
// // // // // // //  Solve Using  Two   Method  ===>     
// // // // // // //  Solve Using  Two   Method  ===>                        
// //                     
// //                     
// // //  1st Method ==> Using vector ( store all values first)    TC = O() , SC = O(n) 
// //                      
// //                      
// // //  2nd Method ==> Using stack (not storing all values first) TC = O(), SC = O(n) 
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////


// //                           
// //                           
// // //  1st Method    ======>  Using vector ( store all values first)
// // //  1st Method    ======>  Using vector ( store all values first)
// // //  1st Method    ======>  Using vector ( store all values first)
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



// /**
//  * // This is the interface that allows for creating nested lists.
//  * // You should not implement it, or speculate about its implementation
//  * class NestedInteger {
//  *   public:
//  *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
//  *     bool isInteger() const;
//  *
//  *     // Return the single integer that this NestedInteger holds, if it holds a single integer
//  *     // The result is undefined if this NestedInteger holds a nested list
//  *     int getInteger() const;
//  *
//  *     // Return the nested list that this NestedInteger holds, if it holds a nested list
//  *     // The result is undefined if this NestedInteger holds a single integer
//  *     const vector<NestedInteger> &getList() const;
//  * };
//  */

// class NestedIterator {
// public:
//     vector<int> v  ;
//     int i = 0 ;
//     void makeFlateArray( NestedInteger  x )
//     {
//         bool checkInt = x.isInteger() ;
//         if( checkInt )  v.push_back( x.getInteger() ) ; 
//         else
//         {
//             vector<NestedInteger> tempList = x.getList() ; 
//             int sz = tempList.size() ;
//             for(int j=0; j<sz; j++)
//             {
//                 makeFlateArray(tempList[j]) ; 
//             }
//         }
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     NestedIterator(vector<NestedInteger> &nestedList) 
//     {
//         int n = nestedList.size() ;
//         for(int j=0; j<n; j++)
//         {
//             makeFlateArray(nestedList[j]) ; 
//         }
//     }
//     int next() 
//     {
//         return v[i++] ;
//     }
//     bool hasNext() 
//     {
//         return i < v.size() ; 
//     }
// };
// /**
//  * Your NestedIterator object will be instantiated and called as such:
//  * NestedIterator i(nestedList);
//  * while (i.hasNext()) cout << i.next();
//  */
























// //                           
// //                           
// // //  2nd Method    ======>    Using stack (not storing all values first) 
// // //  2nd Method    ======>    Using stack (not storing all values first) 
// // //  2nd Method    ======>    Using stack (not storing all values first) 
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O(n)   
// //                               



/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */
class NestedIterator {
public:
    stack<NestedInteger> st  ;
    NestedIterator(vector<NestedInteger> &nestedList) 
    {
        int n = nestedList.size() ;
        for(int j=n-1; j>=0; j--)
        {
            st.push( nestedList[j] ) ; 
        }
    }
    int next() 
    {
        int ans = st.top().getInteger() ;
        st.pop() ; 
        return ans ;
    }
    bool hasNext() 
    {
        while( st.size() ) 
        {
            bool checkInt = st.top().isInteger() ;
            if( checkInt ) return true ; 
            //
            vector<NestedInteger> tempList = st.top().getList() ; 
            st.pop() ; 
            int t = tempList.size() ; 
            for(int j=t-1; j>=0; j--)  st.push( tempList[j] ) ; 
        }
        return  false ;
    }
};
/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */






























 