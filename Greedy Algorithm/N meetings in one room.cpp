 int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
       priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>> > pq;
       
       for(int i = 0 ; i<n ; i++){
           int e = end[i];
           int s = start[i];
           pq.push({e,s});
       }
       int ans = 1;
       int e = pq.top().first;
       pq.pop();
       while(!pq.empty()){
           if(pq.top().second>e){
               ans++;
               e = pq.top().first;
           }
           pq.pop();
       }
       
       return ans;
    }