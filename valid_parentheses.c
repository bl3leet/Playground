#include <stdbool.h>
#include <string.h>

char get_close_pair(char c)
{
	switch(c) {
		case '(': return ')';
		case '[': return ']';
		case '{': return '}';
	}
	return NULL;
}

bool isValid(char* s)
{
	int len = strlen(s);
	int cur = -1;
	char pair;

	if(len % 2) return false;

	for(int i = 0; i < len; i++) {
		pair = get_close_pair(s[i]);
		// open
		if(pair)
			s[++cur] = pair;
		// close
		else if(cur < 0 || s[i] != s[cur--])
			return false;
	}

	return (cur < 0);
}
