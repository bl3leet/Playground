#include <stdbool.h>

bool isPalindrome(int x) {
	unsigned int y = 0;

	for(int i = x; i > 0; i = i / 10) {
		y = (y * 10) + (i % 10);
	}

	return (x == y);
}
