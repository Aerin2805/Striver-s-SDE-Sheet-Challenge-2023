vector<vector<int>> pascalTriangle(int N) {
    // Write your code here.
    vector<vector<int>> ret;
	for (int i = 0; i < N; i++) {
		vector<int> row(i + 1, 1);
		for (int j = 1; j < i; j++) {
			row[j] = ret[i - 1][j] + ret[i - 1][j - 1];
		}
		ret.push_back(row);
	}
	return ret;
}