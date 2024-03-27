#include <stdio.h>
#include <stdlib.h>

struct ListNode {
	int val;
	struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
	struct ListNode *head, *foo, *bar;
	int upper = 0;
	head = foo = l1;
	bar = l2;

	while(foo) {
		foo->val += ((bar)? bar->val : 0) + upper;
		upper = 0;

		if(foo->val >= 10) {
			foo->val -= 10;
			upper = 1;
		}

		if(foo->next && (bar && bar->next)) {
		}
		else if(foo->next) {
		}
		else if(bar && bar->next) {
			foo->next = bar->next;
			bar->next = NULL;
		}
		else if(upper > 0) {
			foo->next = calloc(1, sizeof(struct ListNode));
		}
		foo = foo->next;
		bar = (bar)? bar->next: NULL;
	}

	return head;
}
