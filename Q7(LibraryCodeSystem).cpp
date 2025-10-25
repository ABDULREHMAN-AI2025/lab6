#include <stdio.h>

int main() {
    int i, code = 1;
    int libraryCode[3], originalCode[3], revLibraryCode[3];

    printf("Enter 3 digit Library book Code\n");
    for (i = 0; i < 3; i++) {
        scanf("%d", &libraryCode[i]);
        originalCode[i] = libraryCode[i];
    }

    for (i = 0; i < 3; i++) {
        revLibraryCode[i] = libraryCode[2 - i];
    }

    for (i = 0; i < 3; i++) {
        if (revLibraryCode[i] != originalCode[i]) {
            code = 0;
            break;
        }
    }

    if (code == 1)
        printf("LIBRARY BOOK CODE IS VALID");
    else
        printf("LIBRARY BOOK CODE IS INVALID");

    return 0;
}

