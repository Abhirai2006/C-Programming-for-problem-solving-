#include <stdio.h>
#include <stdlib.h>

struct student {
    int roll_no;
    char name[20];
};

int main() {
    int n;
    printf("Enter the number of students:\n");
    scanf("%d", &n);

    struct student* s = (struct student*)malloc(n * sizeof(struct student));
    if (s == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input
    for (int i = 0; i < n; i++) {
        printf("Enter the name of student %d:\n", i + 1);
        scanf("%s", s[i].name);  // No & needed for strings

        printf("Enter the roll number of student %d:\n", i + 1);
        scanf("%d", &s[i].roll_no);
    }

    // Output
    for (int i = 0; i < n; i++) {
        printf("Student %d: Name = %s, Roll Number = %d\n", i + 1, s[i].name, s[i].roll_no);
    }

    // Free memory
    free(s);
    return 0;
}
