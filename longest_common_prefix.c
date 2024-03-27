char* longestCommonPrefix(char** strs, int strsSize) {
	char eof = '\0';
	char* result = strs[0];

	for(int i = 0; result[i] != eof; i++) {
		for(int j = 1; j < strsSize; j++) {
			if(result[i] != strs[j][i]) {
				result[i] = eof;
				return result;
			}
		}
	}

	return result;
}
