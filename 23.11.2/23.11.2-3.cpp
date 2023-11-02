#include <stdio.h>
#include <stdlib.h>

// Item 구조체 정의
typedef struct {
    int Id;
    int Level;
} Item;

// MakeItem 함수 정의
Item* MakeItem(int id, int level) {
    Item* newItem = (Item*)malloc(sizeof(Item));
    newItem->Id = id;
    newItem->Level = level;
    return newItem;
}

int main() {
    // Items 배열 선언
    Item* Items[4];

    // Items 배열에 아이템 할당
    Items[0] = MakeItem(1, 0);
    Items[1] = MakeItem(3, 1);
    Items[2] = MakeItem(2, 2);
    Items[3] = MakeItem(4, 3);

    // 아이템 정보 출력
    for (int i = 0; i < 4; i++) {
        printf("Item, id : %d, Level : %d\n", Items[i]->Id, Items[i]->Level);
    }

    // 동적 할당된 메모리 해제
    for (int i = 0; i < 4; i++) {
        free(Items[i]);
    }

    return 0;
}