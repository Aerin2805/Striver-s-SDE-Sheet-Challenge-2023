#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &mat)
{
	int n = mat.size();
	int m = mat[0].size();

	unordered_map<int,bool>mr;
	unordered_map<int,bool>mc;

	for(int i = 0 ; i<n ; i++){
		for(int j = 0 ; j<m ; j++){
			if(mat[i][j]==0){
				mr[i] = true;
				mc[j] = true;
			}
		}
	}
	for(int i = 0 ; i<n ; i++){
		for(int j = 0 ; j<m ; j++){
			if(mr.count(i) || mc.count(j)){
			  mat[i][j]=0;
			}
		}
	}
}