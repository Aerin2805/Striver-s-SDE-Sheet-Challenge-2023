int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	//priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
       sort(arr, arr+n);
    	sort(dep, dep+n);
    	
    	int i=0, j=1;
    	int ans = 1;
    	
    	while(i<n && j<n){
    	    if(arr[j]>dep[i]) i++;
    	    else ans++;
    	       
    	    j++;
    	}
    	return ans;
}