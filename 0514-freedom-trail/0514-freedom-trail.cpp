










// //    LeetCode  Daily Challenge Problem


// //    Today's   Date   -    27th   April   2024   -   Saturday    .    










// class Solution {
// public:
//     int findRotateSteps(string ring, string key) {
        
//     }
// };
















// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple Recursion(TLE TLE TLE)   TC = O(m^n) , SC = O(m) 
// //                      
// //                      
// // //  2nd Method  ====> DP Memoization(Top-Down)    TC = O(m*n)(Probably) , SC = O(m*n) 
// //                     
// //                     
// // //  3rd Method  ====> (Try to solve) DP Tabulation(Bottom-Up)   TC = O(m*(n^2)) , SC = O(m*n) 
// //                     
// //                     
// //  4th Method ==>(Try to solve) DP Tabulation(Bottom-Up) Space-Optimized  TC = O(m*(n^2)) , SC = O(n) 
// //
// //
// // 5th Method ==>(Try to solve) Shortest Path(Dijkstra’s algorithm) TC = O(m*n *log(m*n)) , SC = O(m*n) 
// //
// //
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple Recursion(TLE TLE TLE)   T
// // //  1st Method    ======>   Simple Recursion(TLE TLE TLE)   T
// // //  1st Method    ======>   Simple Recursion(TLE TLE TLE)   T
// //                             
// // //   Time Complexity   = O(m^n)   
// //                              
// // //   Space Complexity  = O(m)   
// //                               

// class Solution {
// public:
//     int n  , m ;
//     map<char , vector<int>> mp ;
//     int minSteps(int i , int j , string & ring , string & key )
//     {
//         if( i == m ) return 0 ;
//         int ans = 1e9 ;
//         // cout<<i<<" okok  "<<j<<endl ;
//         vector<int> v = mp[key[i]] ;
//         // for(int k=0; k<v.size(); k++) cout<<v[k]<<" " ;
//         // cout<<endl;
//         for(int k=0; k<v.size(); k++)
//         {
//             // ans = min( ans , abs(v[k] - j) + minSteps( i+1 , v[k] , ring , key )  ) ;
//             ans = min( ans , abs(v[k] - j) + 1 + minSteps( i+1 , v[k] , ring , key )  ) ;
//             //
//             // // testcase  ring = "abcde"  key = "ade" when we go from 'a' to 'd'
//             ans = min( ans , n - v[k] + j + 1 + minSteps( i+1 , v[k] , ring , key )  ) ;
//             //
//             //
//             // just dummy example => let ring is  "abcdefghijklmnop"   and lets we are at index 10
//             // means at 'k' and let say in key next charater is a or b then we got to left ti right
//             //  which takes 6 or 7 steps but if we got right to left then it take 9 or 10 steps
//             ans = min( ans , n - j + v[k] + 1 + minSteps( i+1 , v[k] , ring , key )  ) ;
//         }
//         return ans ;
//     }
//     // // // // //    Main Function of Question    ==========>
//     // // // // //    Main Function of Question    ==========>
//     //
//     int findRotateSteps(string ring, string key) 
//     {
//         n = ring.size()  , m = key.size() ;
//         for(int j=0; j<n; j++ ) mp[ring[j]].push_back( j ) ; 
//         int ans = minSteps( 0 , 0 , ring , key ) ; 
//         return ans  ;
//     }
// };


















// //                           
// //                           
// // //  2nd Method    ======>  DP Memoization(Top-Down) 
// // //  2nd Method    ======>  DP Memoization(Top-Down) 
// // //  2nd Method    ======>  DP Memoization(Top-Down) 
// //                             
// // //   Time Complexity   = O(m*n)   
// //                              
// // //   Space Complexity  = O(m*n)   
// //                               


class Solution {
public:
    int n  , m ;
    int dp[105][105] ;
    map<char , vector<int>> mp ;
    int minSteps(int i , int j , string & ring , string & key )
    {
        if( i == m ) return 0 ;
        if( dp[i][j] != -1 ) return  dp[i][j] ;
        int ans = 1e9 ;
        // cout<<i<<" okok  "<<j<<endl ;
        vector<int> v = mp[key[i]] ;
        // for(int k=0; k<v.size(); k++) cout<<v[k]<<" " ;
        // cout<<endl;
        for(int k=0; k<v.size(); k++)
        {
            // ans = min( ans , abs(v[k] - j) + minSteps( i+1 , v[k] , ring , key )  ) ;
            ans = min( ans , abs(v[k] - j) + 1 + minSteps( i+1 , v[k] , ring , key )  ) ;
            //
            // // testcase  ring = "abcde"  key = "ade" when we go from 'a' to 'd'
            ans = min( ans , n - v[k] + j + 1 + minSteps( i+1 , v[k] , ring , key )  ) ;
            //
            //
            // just dummy example => let ring is  "abcdefghijklmnop"   and lets we are at index 10
            // means at 'k' and let say in key next charater is a or b then we got to left ti right
            //  which takes 6 or 7 steps but if we got right to left then it take 9 or 10 steps
            ans = min( ans , n - j + v[k] + 1 + minSteps( i+1 , v[k] , ring , key )  ) ;
        }
        return  dp[i][j] = ans ;
    }
    // // // // //    Main Function of Question    ==========>
    // // // // //    Main Function of Question    ==========>
    //
    int findRotateSteps(string ring, string key) 
    {
        memset(dp , -1 , sizeof(dp) ) ;
        n = ring.size()  , m = key.size() ;
        for(int j=0; j<n; j++ ) mp[ring[j]].push_back( j ) ; 
        int ans = minSteps( 0 , 0 , ring , key ) ; 
        return ans  ;
    }
};











// //                           
// //                           
// // //  3rd Method    ======>  (Try to solve) DP Tabulation(Bottom-Up)
// // //  3rd Method    ======>  (Try to solve) DP Tabulation(Bottom-Up)
// // //  3rd Method    ======>  (Try to solve) DP Tabulation(Bottom-Up)
// //                             
// // //   Time Complexity   = O(m*(n^2))   
// //                              
// // //   Space Complexity  = O(m*n)  
// //                               


// class Solution {
// public:
//     int findRotateSteps(string ring, string key) {
//         int ringLen = ring.length();
//         int keyLen = key.length();
//         vector<vector<int>> bestSteps(ringLen, vector<int>(keyLen + 1, INT_MAX));
//         // Initialize values of best_steps to largest integer
//         for (auto& row : bestSteps) {
//             fill(row.begin(), row.end(), INT_MAX);
//         }
//         // Initialize last column to zero to represent the word has been spelled
//         for (int i = 0; i < ringLen; i++) {
//             bestSteps[i][keyLen] = 0;
//         }
//         // For each occurrence of the character at key_index of key in ring
//         // Stores minimum steps to the character from ringIndex of ring
//         for (int keyIndex = keyLen - 1; keyIndex >= 0; keyIndex--) {
//             for (int ringIndex = 0; ringIndex < ringLen; ringIndex++) {
//                 for (int charIndex = 0; charIndex < ringLen; charIndex++) {
//                     if (ring[charIndex] == key[keyIndex]) {
//                         bestSteps[ringIndex][keyIndex] = min(bestSteps[ringIndex][keyIndex],
//                                 1 + countSteps(ringIndex, charIndex, ringLen) 
//                                 + bestSteps[charIndex][keyIndex + 1]);
//                     }
//                 }
//             }
//         }

//         return bestSteps[0][0];
//     }

// private:
//     // Find the minimum steps between two indexes of ring
//     int countSteps(int curr, int next, int ringLength) {
//         int stepsBetween = abs(curr - next);
//         int stepsAround = ringLength - stepsBetween;
//         return min(stepsBetween, stepsAround);
//     }
// };












// //                           
// //                           
// // //  4th Method    ======> (Try to solve) DP Tabulation(Bottom-Up) Space-Optimized
// // //  4th Method    ======> (Try to solve) DP Tabulation(Bottom-Up) Space-Optimized
// // //  4th Method    ======> (Try to solve) DP Tabulation(Bottom-Up) Space-Optimized
// //                             
// // //   Time Complexity   = O(m*(n^2))    
// //                              
// // //   Space Complexity  = O(n)   
// //                               

// class Solution {
// public:
//     int findRotateSteps(string ring, string key) {
//         int ringLen = ring.length();
//         int keyLen = key.length();
//         vector<int> curr(ringLen, 0);
//         vector<int> prev(ringLen, 0);
//         fill(prev.begin(), prev.end(), 0);
//         // For each occurrence of the character at key_index of key in ring
//         // Stores minimum steps to the character from ringIndex of ring
//         for (int keyIndex = keyLen - 1; keyIndex >= 0; keyIndex--) {
//             fill(curr.begin(), curr.end(), INT_MAX);
//             for (int ringIndex = 0; ringIndex < ringLen; ringIndex++) {
//                 for (int charIndex = 0; charIndex < ringLen; charIndex++) {
//                     if (ring[charIndex] == key[keyIndex]) {
//                         curr[ringIndex] = min(curr[ringIndex],
//                                 1 + countSteps(ringIndex, charIndex, ringLen) + prev[charIndex]);
//                     }
//                 }
//             }
//             prev = curr;
//         }

//         return prev[0];
//     }

// private:
//     // Find the minimum steps between two indexes of ring
//     int countSteps(int curr, int next, int ringLength) {
//         int stepsBetween = abs(curr - next);
//         int stepsAround = ringLength - stepsBetween;
//         return min(stepsBetween, stepsAround);
//     }
// };












// //                           
// //                           
// // //  5th Method    ======> (Try to solve) Shortest Path(Dijkstra’s algorithm)
// // //  5th Method    ======> (Try to solve) Shortest Path(Dijkstra’s algorithm)
// // //  5th Method    ======> (Try to solve) Shortest Path(Dijkstra’s algorithm)
// //                             
// // //   Time Complexity   = O(m*n *log(m*n))   
// //                              
// // //   Space Complexity  = O(m*n)  
// //                               

// class Solution {
// public:
//     int findRotateSteps(string ring, string key) {
//         int ringLen = ring.length();
//         int keyLen = key.length();
        
//         // HashMap to store the indices of occurrences of each character in the ring
//         unordered_map<char, vector<int>> characterIndices;
//         for (int i = 0; i < ring.length(); i++) {
//             char ch = ring[i];
//             characterIndices[ch].push_back(i);
//         }

//         // Initialize the heap (priority queue) with the starting point
//         // Each element of the heap is a vector of integers representing:
//         // totalSteps, ringIndex, keyIndex
//         priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> heap;
//         heap.push({0, 0, 0});

//         // HashSet to keep track of visited states
//         unordered_set<string> seen;
        
//         // Spell the keyword using the metal dial
//         int totalSteps = 0;
//         while (!heap.empty()) {
//             // Pop the element with the smallest total steps from the heap
//             vector<int> state = heap.top();
//             heap.pop();
//             totalSteps = state[0];
//             int ringIndex = state[1];
//             int keyIndex = state[2];
            
//             // We have spelled the keyword
//             if (keyIndex == keyLen) {
//                 break;
//             }
            
//             // Continue if we have visited this character from this position in ring before
//             string currentState = to_string(ringIndex) + "-" + to_string(keyIndex);
//             if (seen.count(currentState)) {
//                 continue;
//             }

//             // Otherwise, add this pair to the visited list
//             seen.insert(currentState);
            
//             // Add the rest of the occurrences of this character in ring to the heap
//             for (int nextIndex : characterIndices[key[keyIndex]]) {
//                 heap.push({totalSteps + countSteps(ringIndex, nextIndex, ringLen), 
//                             nextIndex, keyIndex + 1});
//             }
//         }
        
//         // Return the total steps and add keyLen to account for 
//         // pressing the center button for each character in the keyword
//         return totalSteps + keyLen;
//     }

// private:
//     // Find the minimum steps between two indexes of ring
//     int countSteps(int curr, int next, int ringLength) {
//         int stepsBetween = abs(curr - next);
//         int stepsAround = ringLength - stepsBetween;
//         return min(stepsBetween, stepsAround);
//     }
// };























































