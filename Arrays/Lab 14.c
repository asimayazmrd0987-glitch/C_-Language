#include <stdio.h>

int main() {
    FILE *fp;
    char name[50], regNo[30], classNo[20], department[50];
    char names[5][50];
    int i;
    
    fp = fopen("STUDENT.txt", "w");
    if (fp == NULL) {
        printf("Error creating file.\n");
        return 1;
    }

    printf("Enter your name: ");
    gets(name);

    printf("Enter your registration number: ");
    gets(regNo);

    printf("Enter your class number: ");
    gets(classNo);

    printf("Enter your department: ");
    gets(department);

    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Registration Number: %s\n", regNo);
    fprintf(fp, "Class Number: %s\n", classNo);
    fprintf(fp, "Department: %s\n", department);

    fclose(fp);

    fp = fopen("STUDENT.txt", "r");
    if (fp == NULL) {
        printf("Error reading file.\n");
        return 1;
    }

    printf("\n--- Contents of STUDENT.txt ---\n");
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);

    fp = fopen("NAMES.DAT", "w");
    if (fp == NULL) {
        printf("Error creating NAMES.DAT file.\n");
        return 1;
    }

    printf("\nEnter five names:\n");
    for (i = 0; i < 5; i++) {
        printf("Name %d: ", i + 1);
        gets(names[i]);
        fprintf(fp, "%s\n", names[i]);
    }

    fclose(fp);

    printf("\nData successfully written to NAMES.DAT\n");

    return 0;
}

