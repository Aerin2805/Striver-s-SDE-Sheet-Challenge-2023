bool searchMatrix(vector<vector<int>>& mat, int target) {

int s = 0;
int n = mat.size();        
int m = mat[0].size();
int e = n*m - 1;

while(s<=e){

int mid = s + (e - s)/2;
int element = mat[mid/m][mid%m];

if(target<element) e = mid-1;
else s = mid + 1;

if(target==element) return true;
}

return false;
}