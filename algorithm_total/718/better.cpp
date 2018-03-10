class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) {
        if(A.size()==0||B.size()==0)
            return 0;
        int Dp[A.size()+1][B.size()+1]={0};
     
         for(int i=0;i<=A.size();i++){
            for(int j=0;j<=B.size();j++)
            {
                Dp[i][j]=0;
            }
       
    }
        int maxi=0;
        for(int i=1;i<=A.size();i++)
            for(int j=1;j<=B.size();j++)
            {
              
                    if(A[i-1]==B[j-1]){
                       
                         Dp[i][j]=Dp[i-1][j-1]+1;
                             
                        maxi=max(maxi,Dp[i][j]);
                    }
                       
                
               
            }
        return maxi;
        
    }
};