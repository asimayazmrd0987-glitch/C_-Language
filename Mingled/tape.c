#include <stdio.h>

struct VideoTape {
    char title[50];
    int length;        // in minutes
    float cost;
    float rentalPrice;
    char releaseDate[20];
};

int main() {

    // Defining and initializing 3 structure variables
    struct VideoTape t1 = {"Sherlock Homes", 180, 1500.0, 200.0, "04-05-2012"};
    struct VideoTape t2 = {"Mevlana Rumi", 148, 1200.0, 180.0, "16-07-2010"};
    struct VideoTape t3 = {"Dark", 136, 1000.0, 150.0, "31-03-1999"};

    // Printing the data
    printf("----- Video Tape Inventory -----\n");

    printf("\nTape 1:\n");
    printf("Title: %s\n", t1.title);
    printf("Length: %d minutes\n", t1.length);
    printf("Cost: %.2f\n", t1.cost);
    printf("Rental Price: %.2f\n", t1.rentalPrice);
    printf("Release Date: %s\n", t1.releaseDate);

    printf("\nTape 2:\n");
    printf("Title: %s\n", t2.title);
    printf("Length: %d minutes\n", t2.length);
    printf("Cost: %.2f\n", t2.cost);
    printf("Rental Price: %.2f\n", t2.rentalPrice);
    printf("Release Date: %s\n", t2.releaseDate);

    printf("\nTape 3:\n");
    printf("Title: %s\n", t3.title);
    printf("Length: %d minutes\n", t3.length);
    printf("Cost: %.2f\n", t3.cost);
    printf("Rental Price: %.2f\n", t3.rentalPrice);
    printf("Release Date: %s\n", t3.releaseDate);

    return 0;
}

