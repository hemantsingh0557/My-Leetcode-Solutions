









// //
// // // // // // //  Solve Using  One  Method  ===>     
// // // // // // //  Solve Using  One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>   Simple Iteration   TC = O(n) , SC = O(1) constant
// //                      
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////


// class Solution {
// public:
//     int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>   Simple Iteration
// // //  1st Method    ======>   Simple Iteration
// // //  1st Method    ======>   Simple Iteration
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               




class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) 
    {
        int n = energy.size() ;
        int moreEnergy = 0 , moreExperience = 0 ;    
        for(int i=0; i<n; i++)
        {
            if(energy[i]>=initialEnergy) 
            {
                moreEnergy +=  energy[i]-initialEnergy + 1  ;
                initialEnergy +=  energy[i]-initialEnergy + 1  ;
            }
            initialEnergy -=  energy[i] ;
            //
            if(experience[i]>=initialExperience) 
            {
                moreExperience +=  experience[i]-initialExperience + 1  ;
                initialExperience +=  experience[i]-initialExperience + 1  ;
            }
            initialExperience +=  experience[i] ;
        }
        cout<<moreEnergy<<"  "<<moreExperience<<endl;
        int ans = moreEnergy + moreExperience ;
        return ans ;
    }
};



























