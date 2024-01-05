#include <stdio.h>

struct Book {
    int id;
    char title[20];
};

int main() {
    struct Book b; // 'struct' is needed here
    int idnum;
    FILE *src;
    FILE *dest;

    src = fopen("records.txt", "r");
    if (src == NULL) {
        printf("Unable to open records.txt for reading.\n");
        return 1;
    }

    dest = fopen("temp.txt", "w");
    if (dest == NULL) {
        printf("Unable to create temp.txt for writing.\n");
        fclose(src);
        return 1;
    }

    printf("Enter book id to be deleted: ");
    scanf("%d", &idnum);

    while (fread(&b, sizeof(struct Book), 1, src) == 1) {
        if (b.id != idnum) {
            fwrite(&b, sizeof(struct Book), 1, dest);
        }
    }

    fclose(src);
    fclose(dest);

    remove("records.txt");
    rename("temp.txt", "records.txt");

    return 0;
}
