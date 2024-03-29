vector<int> stringMatch(string text, string pattern) {

	int n = text.length(), m = pattern.length();
	vector<int>ans, LPS(m, 0);
	int len = 0;
	for(int i = 1; i < m; i++){
		if(pattern[i] == pattern[len]){
			len++;
			LPS[i] = len;
		}
		else{
			if(len != 0){
				len = LPS[len-1];
			}
		}
	}

	int i = 0, j = 0;

	while(i < n){
		if(text[i] == pattern[j]){
			i++;
			j++;
			if(j == m){
				ans.push_back(i-j+1);
				j = LPS[j-1];
			} 
		}
		else {
			if(j > 0) j = LPS[j-1];
			else i++;
		}
	}
	return ans;
