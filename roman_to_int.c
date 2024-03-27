#include <string.h>

int get_value(char c) {
	switch(c) {
		case 'I': return 1;
		case 'V': return 5;
		case 'X': return 10;
		case 'L': return 50;
		case 'C': return 100;
		case 'D': return 500;
		case 'M': return 1000;
	}

	return 0;
}

int romanToInt(char* s) {
	int len = strlen(s);
	int result = 0, cur = 0, pre = 0;

	for(int i = 0; i < len; i++) {
		cur = get_value(s[i]);
		if(pre < cur)
			pre *= -1;
		result += pre;
		pre = cur;
	}

	return result + cur;
}
