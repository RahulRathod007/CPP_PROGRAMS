#include <stdio.h>

int main() {
    // Data for the table
    int id[] = {1, 2, 3};
    char name[][20] = {"John Suryawanshi", "Alice", "Bob"};
    double salary[] = {50000.50, 60000.75, 55000.25};

    // Print table header
    printf("%-15s%-20s%-10s\n", "ID", "Name", "Salary");
    printf("-----------------------------------------\n");

    // Print table data
    for (int i = 0; i < 3; i++) {
        printf("%-15d%-20s%-10.2lf\n", id[i], name[i], salary[i]);
    }

    return 0;
}
