class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int n1=player1.size();
        int n2=player2.size();
        int ans=0;
        int sum1=0,sum2=0;
        for(int i=0;i<n1;i++)
        {
            sum1+=player1[i];
        }
        for(int i=0;i<n2;i++)
        {
            sum2+=player2[i];
        }
         
        for(int i=0;i<n1;i++)
        {
            if((i>0 && player1[i-1]==10) || (i>1 &&player1[i-2]==10)){
                sum1+=player1[i];
            }  
        }
        for(int i=0;i<n2;i++){
            if((i>0 && player2[i-1]==10) || (i>1 && player2[i-2]==10)){
                sum2+=player2[i];
            }   
        }
       
        if(sum1>sum2)
        {
            ans=1;
        }
        else if(sum2>sum1)
        {
            ans=2;
        }
        else
        {
            ans=0;
        }
       
        return ans;
    }
};
