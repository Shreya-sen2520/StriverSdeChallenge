#include <bits/stdc++.h>
int uniquePaths(int m, int n) {
	// Write your code here.
	        vector<int> cur(n, 1);
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                cur[j] += cur[j - 1];
            }
        }
        return cur[n - 1];
}
