#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int lead = arr[0];
	int cnt = 1;
	int t = floor(n/2);
	for(int i = 1 ; i<n ; i++){
    
		if(lead==arr[i]) cnt++;
		else if(cnt==0){
			cnt = 1;
			lead = arr[i];
		}
		else if(arr[i]!=lead)cnt--;
	}
	
	if(cnt!=0){
		int ans = 0;
		for(int i = 0 ; i<n ; i++){
			if(lead==arr[i])ans++;
		}

		if(ans>t) return lead;
	}
	return -1;
}