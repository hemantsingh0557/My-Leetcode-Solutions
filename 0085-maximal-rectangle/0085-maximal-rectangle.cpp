












// //    LeetCode  Daily Challenge Problem


// //    Today's   Date   -    13th   April   2024   -   Saturday    .    












// class Solution {
// public:
//     int maximalRectangle(vector<vector<char>>& matrix) {
        
//     }
// };















// //
// // // // // // //  Solve Using  Three   Method  ===>     
// // // // // // //  Solve Using  Three   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Using prefix ( somthing like histogram )   TC = O(r*r*c) , SC = O(r*c) 
// //                      
// //                      
// // //  2nd Method  ====> Try to write better code quality    TC = O() , SC = O() 
// //                     
// //                     
// // //  3rd Method  ====> Try using histogram    TC = O() , SC = O()  
// //                     
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// //  example test case 

// matrix = [["0","0","1","0"],["0","0","1","0"],["0","0","1","0"],["0","0","1","1"],["0","1","1","1"],["0","1","1","1"],["1","1","1","1"]]


// //  after   => 

// 0 0 1 0 
// 0 0 1 0 
// 0 0 1 0 
// 0 0 1 2 
// 0 1 2 3 
// 0 1 2 3 
// 1 2 3 4 




// //                           
// //                           
// // //  1st Method    ======>    Using prefix ( somthing like histogram )
// // //  1st Method    ======>    Using prefix ( somthing like histogram )
// // //  1st Method    ======>    Using prefix ( somthing like histogram )
// //                             
// // //   Time Complexity   = O(r*r*c)   
// //                              
// // //   Space Complexity  = O(r*c)   
// //                               


class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) 
    {
        int r = matrix.size()  , c = matrix[0].size() ; 
        vector<vector<int>> preFix( r , vector<int>(c+1 , 0 ) ) ;
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if( matrix[i][j] == '0' ) preFix[i][j+1] =  matrix[i][j] - '0' ; 
                else preFix[i][j+1] = preFix[i][j] + matrix[i][j] - '0' ; 
            }
        }
        // for(int i=0; i<r; i++)
        // {
        //     for(int j=1; j<=c; j++)
        //     {
        //         cout<<preFix[i][j]<<" "; 
        //     }
        //     cout<<endl;
        // }
        // cout<<endl;
        int ans = 0 ;
        for(int j=1; j<=c; j++)
        {
            for(int i=0; i<r; i++)
            {
                int ct = 0 , mn = 250 ;
                for(int k=i; k<r; k++)
                {
                    if( preFix[k][j] == 0 )
                    {
                        ct = 0 ;
                        mn = 250 ; 
                    }
                    else
                    {
                        mn = min( mn , preFix[k][j] ) ;
                        ct++ ;
                    }
                    // cout<<j<<" "<<i<<" "<<ct<<" "<<mn<<" "<<preFix[k][j]<<endl;
                    ans = max( { ans , ct * mn , preFix[k][j]  } ) ;
                }
            }
        }
        return ans  ; 
    }
};
















// //                           
// //                           
// // //  2nd Method    ======>   Try to write better code quality 
// // //  2nd Method    ======>   Try to write better code quality 
// // //  2nd Method    ======>   Try to write better code quality 
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               





// //                           
// //                           
// // //  3rd Method    ======>  Try using histogram     
// // //  3rd Method    ======>  Try using histogram     
// // //  3rd Method    ======>  Try using histogram     
// //                             
// // //   Time Complexity   = O()   
// //                              
// // //   Space Complexity  = O()   
// //                               























































