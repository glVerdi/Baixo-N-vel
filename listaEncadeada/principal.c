#include <stdio.h> 
#include <stdlib.h> 
#include "listas.h"

int main(void) {
        printf("LISTAS!\n");

        // Testing
        List lst1;
        lst1.size = 42;
        printf("%d\n", lst1.size);

        int s = len(&lst1);

        printf("%d\n", s);
        printf("%d\n", lst1.head->data);
        dump(&lst1);

        add(&lst1, 51);
        add(&lst1, 14);
        dump(&lst1);

        List *lst2;
        lst2 = create();
        add(lst2, 3);
        add(lst2, 2);
        add(lst2, 1);
        dump(lst2);
        return EXIT_SUCCESS;
}