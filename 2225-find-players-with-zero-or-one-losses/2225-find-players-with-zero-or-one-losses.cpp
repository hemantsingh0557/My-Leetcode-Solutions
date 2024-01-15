














// class Solution {
// public:
//     vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
//     }
// };













// //
// // // // // // //  Solve Using  Only One   Method  ===>     
// // // // // // //  Solve Using  Only One   Method  ===> 
// //                       
// // // //  n is length of matches array and m is the no of players                    
// //                     
// // //  1st Method  ====> Simple Map     TC = O(n) , SC = O(m) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======>   Simple Map  
// // //  1st Method    ======>   Simple Map  
// // //  1st Method    ======>   Simple Map  
// //                             
// // // //  n is length of matches array and m is the no of players    
// //                
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(m)   
// //                               

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) 
    {
        int n = matches.size() ; 
        map<int,int> win , lost ; 
        for(int i=0; i<n; i++)
        {
            win[matches[i][0]] ++ ; 
            lost[matches[i][1]] ++ ; 
        }
        vector<vector<int>> ans(2);
        for(auto it : win )
        {
            if( ! lost[it.first] ) ans[0].push_back(it.first) ;
        }
        for(auto it : lost )
        {
            if( lost[it.first] == 1 )  ans[1].push_back(it.first) ;
        }
        return ans ; 
    }
};









































