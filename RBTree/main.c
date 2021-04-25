#include <stdio.h>
#include <stdlib.h>
#include "RBTree.h"

int main () {
    int ERROR_CODE = 0;
    RBNode_t *root = NULL;
    addValue(&root, 10, &ERROR_CODE);
    if (ERROR_CODE) fprintf(stderr, "ERROR: code %d\n", ERROR_CODE);
    else printf("OK\n");

    addValue(&root, 20, &ERROR_CODE);
    if (ERROR_CODE) {
        printf("ERROR: %d\n", ERROR_CODE);
        return 0;
    }
    addValue(&root, 10, &ERROR_CODE);
    if (ERROR_CODE) {
        printf("ERROR: %d\n", ERROR_CODE);
    }
    ERROR_CODE = 0;
    addValue(&root, 30, &ERROR_CODE);
    if (ERROR_CODE) {
        printf("ERROR: %d\n", ERROR_CODE);
        return 0;
    }
    deleteNode(&root, 20, &ERROR_CODE);
    if (ERROR_CODE) {
        printf("ERROR: %d\n", ERROR_CODE);
        return 0;
    }
    printf("all is okey\n");
    return 0;
}
