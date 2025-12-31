#include <stdio.h>
#include <string.h>

#define MAX 5 

struct Friend {
    char name[50];
    char phone[20];
    char address[100];
};

int main() {
    struct Friend friends[MAX];
    struct Friend temp;
    int i, j;
    
    for (i = 0; i < MAX; i++) {
        printf("\nEnter details of friend %d\n", i + 1);

        printf("Name: ");
        fgets(friends[i].name, sizeof(friends[i].name), stdin);
        friends[i].name[strcspn(friends[i].name, "\n")] = '\0';

        printf("Phone Number: ");
        fgets(friends[i].phone, sizeof(friends[i].phone), stdin);
        friends[i].phone[strcspn(friends[i].phone, "\n")] = '\0';

        printf("Address: ");
        fgets(friends[i].address, sizeof(friends[i].address), stdin);
        friends[i].address[strcspn(friends[i].address, "\n")] = '\0';
    }
    printf("\n--- Full Name and Address ---\n");
    for (i = 0; i < MAX; i++) {
        printf("Name: %s\nAddress: %s\n\n", friends[i].name, friends[i].address);
    }

    // Print name and phone number
    printf("\n--- Name and Phone Number ---\n");
    for (i = 0; i < MAX; i++) {
        printf("Name: %s | Phone: %s\n", friends[i].name, friends[i].phone);
    }
    for (i = 0; i < MAX - 1; i++) {
        for (j = i + 1; j < MAX; j++) {
            if (strcmp(friends[i].name, friends[j].name) > 0) {
                temp = friends[i];
                friends[i] = friends[j];
                friends[j] = temp;
            }
        }
    }
    printf("\n--- Friends Sorted Alphabetically ---\n");
    for (i = 0; i < MAX; i++) {
        printf("%s\n", friends[i].name);
    }

    return 0;
}

