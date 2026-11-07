/*
Day: 87
Question: Q137
Title: User Roles Enum
Problem:
Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
*/

#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main(void)
{
    enum Role role;

    printf("Enter role (0=ADMIN, 1=USER, 2=GUEST): ");
    scanf("%d", (int *)&role);

    switch (role) {
        case ADMIN:
            printf("Welcome Admin! Full access granted.\n");
            break;
        case USER:
            printf("Welcome User! Limited access.\n");
            break;
        case GUEST:
            printf("Welcome Guest! View-only access.\n");
            break;
        default:
            printf("Unknown role\n");
    }

    return 0;
}
