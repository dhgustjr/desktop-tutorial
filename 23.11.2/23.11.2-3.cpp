#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int Id;
    int Level;
} Item;

Item* MakeItem(int id, int level) {
    Item* newItem = (Item*)malloc(sizeof(Item));
    newItem->Id = id;
    newItem->Level = level;
    return newItem;
}

int main() {
    Item* Items[4];

    Items[0] = MakeItem(1, 0);
    Items[1] = MakeItem(3, 1);
    Items[2] = MakeItem(2, 2);
    Items[3] = MakeItem(4, 3);

    for (int i = 0; i < 4; i++) {
        printf("Item, id : %d, Level : %d\n", Items[i]->Id, Items[i]->Level);
    }

    for (int i = 0; i < 4; i++) {
        free(Items[i]);
    }

    return 0;
}