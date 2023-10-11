












// class Solution {
// public:
//     vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        
//     }
// };













// //
// // // // // // //  Solve Using  Four  Method  ===>     
// // // // // // //  Solve Using  Four  Method  ===>                        
// //                     
// //                     
// // // // // //   n is size of peopel array and m is size of flower array               
// //                     
// // // 1st Method ==> Simple Brute Force( TLE TLE TLE)  TC = O(n*m) , SC = O(1) constant
// //                      
// //                      
// // 2nd Method ==> Sort() and priorityQueue  TC = O(m*log(m) + n*(loh(n)+log(m))), SC = O(n+m) 
// //                     
// //                     
// // 3rd Method ==> Line Sweep => BinarySearch, prefix, Hashing  TC = O((m+n)log(m)), SC = O(m) 
// //                     
// //                     
// // // 4th Method ==> Binary Search and sort()    TC = O( (m+n)*log(m) )  , SC = O(m) 
// // 
// // 
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple Brute Force( TLE TLE TLE) 
// // //  1st Method    ======>   Simple Brute Force( TLE TLE TLE) 
// // //  1st Method    ======>   Simple Brute Force( TLE TLE TLE) 
// //   
// //                     
// // // //  n is size of peopel array and m is size of flower array               
// //                          
// // //   Time Complexity   = O(n*m)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               

// class Solution {
// public:
//     vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) 
//     {
//         int m = flowers.size() ; 
//         int n = people.size() ; 
//         vector<int> ans ; 
//         for(int i=0; i<n; i++)
//         {
//             int ct = 0 ; 
//             for(int j=0; j<m; j++)
//             {
//                 int st = flowers[j][0] ;  
//                 int end = flowers[j][1] ;  
//                 if( st <= people[i] && people[i] <= end ) ct++; 
//             }
//             ans.push_back(ct) ;
//         }
//         return ans ;
//     }
// };












// //                           
// //                           
// // //  2nd Method    ======>   Sort() and priorityQueue or set
// // //  2nd Method    ======>   Sort() and priorityQueue or set
// // //  2nd Method    ======>   Sort() and priorityQueue or set
// //     
// //                     
// // // //  n is size of peopel array and m is size of flower array               
// //                        
// // Time Complexity = O(m*log(m) + n*log(n) + n*log(m) + n) = O(m*log(m) + n*(loh(n)+log(m))) 
// //                              
// // Space Complexity = O(n+m)   
// //                               


// class Solution {
// public:
//     vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) 
//     {
//         int m = flowers.size() ; 
//         int n = people.size() ; 
//         sort( flowers.begin() , flowers.end() ) ;
//         vector<int> sortedPeople(people.begin(), people.end());
//         sort(sortedPeople.begin(), sortedPeople.end());
//         //
//         //
//         unordered_map<int,int> mp ;
//         priority_queue<int , vector<int> , greater<int> > minHeap ;  // can also use set
//         vector<int> ans ; 
//         int j = 0 ; 
//         for(int i=0; i<n; i++)
//         {
//             while( j < m && flowers[j][0] <= sortedPeople[i] )
//             {
//                 minHeap.push( flowers[j][1] ) ; 
//                 j++ ;   
//             }
//             while( minHeap.size() && minHeap.top() < sortedPeople[i] )
//             {
//                 minHeap.pop(  ) ; 
//             }
//             mp[sortedPeople[i]] = minHeap.size(); 
//         }
//         for(int i=0; i<n; i++)
//         {
//             ans.push_back( mp[people[i]] ) ;
//         }
//         return ans ;
//     }
// };












// //                           
// //                           
// // // 3rd Method ===> Line Sweep Algorithms ==>  Binary Search, prefix, Hashing(map or vector) 
// // // 3rd Method ===> Line Sweep Algorithms ==>  Binary Search, prefix, Hashing(map or vector) 
// // // 3rd Method ===> Line Sweep Algorithms ==>  Binary Search, prefix, Hashing(map or vector) 
// //      
// //                     
// // // //  n is size of peopel array and m is size of flower array               
// //                       
// // //   Time Complexity   = O(m*log(m) + m*log(m) + n*log(m)) ==== O((m+n)log(m)) 
// //                              
// // //   Space Complexity  = O(3*m)  
// //                               





// // // we can do this approach using two ways one s vector and other is map
// // // but in vector we can initialize max of 1e6 or 1e7 array size
// // // so using vector we can't do this so we will use map




// // //   3rd Method  ===>  1st way ===> using vector but can't do this( can't initialize )      
// // //   3rd Method  ===>  1st way ===> using vector but can't do this( can't initialize )      
// // //   3rd Method  ===>  1st way ===> using vector but can't do this( can't initialize )      

// class Solution {
// public:
//     vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) 
//     {
//         int m = flowers.size() ; 
//         int n = people.size() ; 
//         //
//         // // we can't initialize an array bigger than 1e7 size ( max )
//         // // we can't initialize an array bigger than 1e7 size ( max )
//         // // got the MLE error 
//         vector<int> flowersbloom( 1e9+7 , 0 ) ; // // // can't do this // give  MLE MLE MLE
//         for(int i=0; i<m; i++)
//         {
//             int st = flowers[i][0] ;  
//             int end = flowers[i][1] ;  
//             flowersbloom[st]++ ;   
//             flowersbloom[end+1]-- ;   
//         }
//         //
//         //
//         //
//         // if it is possible then here we will take the prefix sum of the flowersbloom array
//         // and then we can find the ans like below
//         //
//         int prev=0 ;
//         // // can't run below loop if by any chance program run till here then below loop
//         // // definetely give TLE TLE TLE
//         for(int i=0; i<1e9+7; i++) 
//         {
//             flowersbloom[i] = flowersbloom[i] + prev ;
//             prev = flowersbloom[i] ;
//         }
//         vector<int> ans ;
//         for(int i=0; i<n; i++) ans.push_back( flowersbloom[people[i] ] ) ; 
//         return ans ;
//     }
// };







// // //   3rd Method  ===>  2nd way ===>     using    map      
// // //   3rd Method  ===>  2nd way ===>     using    map      
// // //   3rd Method  ===>  2nd way ===>     using    map      


// class Solution {
// public:
//     vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) 
//     {
//         int m = flowers.size() ; 
//         int n = people.size() ; 
//         map<int,int> flowersbloom ;
//         flowersbloom[0] = 0 ;
//         for(int i=0; i<m; i++)
//         {
//             int st = flowers[i][0] ;  
//             int end = flowers[i][1] ;  
//             flowersbloom[st]++ ;   
//             flowersbloom[end+1]-- ;   
//         }
//         //
//         // here positions[i] is the time
//         vector<int> positions ; 
//         //
//         // prefixSum[i] gives the no of flower which are bloom at a specific time positions[i]
//         vector<int> prefixSum ;
//         int curr = 0  ;
//         for(auto it : flowersbloom )
//         {
//             positions.push_back( it.first ) ; 
//             curr += it.second ;
//             prefixSum.push_back( curr ) ; 
//         }
//         //
//         vector<int> ans ;
//         for(int i=0; i<n; i++)
//         {
//             auto it = upper_bound( positions.begin() , positions.end() , people[i] ) ;
//             int ind = it - positions.begin() - 1 ; 
//             ans.push_back( prefixSum[ind] ) ;
//         }
//         return ans ;
//     }
// };
















// //                           
// //                           
// // //  4th  Method    ======>   Binary Search and sort()  
// // //  4th  Method    ======>   Binary Search and sort()  
// // //  4th  Method    ======>   Binary Search and sort()  
// //      
// //                     
// // // //  n is size of peopel array and m is size of flower array               
// //                       
// // //   Time Complexity   = O(mlog(m) + m*log(m) + n * mlog(m) ) ==== O( (m+n)*log(m) )   
// //                              
// // //   Space Complexity  = O(2*m)   
// //                               



class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) 
    {
        int m = flowers.size() ; 
        int n = people.size() ; 
        vector<int> starts , ends  ;
        for(int i=0; i<m; i++)
        {
            starts.push_back( flowers[i][0] ) ;   
            ends.push_back( flowers[i][1]+1 ) ;   
        }
        sort( starts.begin() , starts.end() ) ;
        sort( ends.begin() , ends.end() ) ;
        vector<int> ans ; 
        for(int i=0; i<n; i++)
        {
            int j = upper_bound( starts.begin() , starts.end() , people[i] ) - starts.begin() ;    
            int k = upper_bound( ends.begin() , ends.end() , people[i] ) - ends.begin() ;    
            int ct = j - k ; 
            ans.push_back(ct) ;
        }
        return ans ;
    }
};

























