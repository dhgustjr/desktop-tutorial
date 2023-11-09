#include<stdio.h>
#include<stdlib.h>

struct Item {
	int id;
	int Level;
};

struct Item* MakeItem(int id, int Level) {
	struct Item* newItem = (struct Item*)malloc(sizeof(struct Item));

	newItem->id = id;
	newItem->Level = Level;

	return newItem;
}

int IsGoodItem(struct Item* item) {
	if (item->Level >= 2) return 1;
	return 0;
}

void FindItemByPredicate(struct Item** items, int size, int (*func)(struct Item*)) {
	for (int i = 0; i < size; i++) {
		if (func(items[i])) { 
			printf("finditem! id : %d, Level : %d\n", items[i]->id, items[i]->Level);
		}
	}
}

int main() {
	struct Item* items[4] = { 
		MakeItem(1,0),
		MakeItem(3,1),
		MakeItem(2,2),
		MakeItem(4,3)
	}; 

	FindItemByPredicate(items, 4, IsGoodItem);
	printf("\n");

	for (int i = 0; i < 4; i++) {
		free(items[i]);
	}
	return 0;
}