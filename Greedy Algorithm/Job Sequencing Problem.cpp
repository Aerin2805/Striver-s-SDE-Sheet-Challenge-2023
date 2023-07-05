 static  bool comp(Job a, Job b){
        return (a.profit > b.profit);
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr,arr+n,comp);
        
        int maxi = arr[0].dead;
        
        for(int i = 1 ; i<n ; i++) maxi = max(maxi,arr[i].dead);
        
        int slot[maxi+1];
       for(int i = 0 ; i<=maxi ; i++) slot[i]=-1;
      //  memset(arr , -1 , sizeof(slot));
        
        int job = 0;
        int netprofit = 0;
        
        for(int i = 0 ; i<n ; i++){
            for(int j = arr[i].dead ; j>0 ; j--){
                if(slot[j]==-1){
                    slot[j]=i;
                    job++;
                    netprofit+=(arr[i].profit);
                    break;
                }
            }
        }
        
        return {job,netprofit};
  } 