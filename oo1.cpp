int solve(int N,string s, int c[])
  {
      int answer=0,ans2=0,a=0;
      for(int i=0;i<N/2;i+=2){
          answer=0,ans2=0;
          string first=s.substr(i,2);
          string second =s.substr(N-i-2,2);
          if(first[0]==second [0] && first[1]==second [1])continue;
          else if(first[0]==second [0])answer+=min(c[i+1],c[N-i-1]);
          else if(first[1]==second [1])answer+=min(c[i],c[N-i-2]);
          else{
             answer+=min(c[i+1],c[N-i-1]); 
             answer+=min(c[i],c[N-i-2]);
          }
          if(first[0]==second [1] && first[1]==second [0])continue;
          else if(first[0]==second [1])ans2+=min(c[i+1],c[N-i-2]);
          else if(first[1]==second [0])ans2+=min(c[i],c[N-i-1]);
          else{
             ans2+=min(c[i+1],c[N-i-2]); 
             ans2+=min(c[i],c[N-i-1]);
          }
          a+=min(answer,ans2);
      }
       
      return a;
      
  }