#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <string.h>

void gotoxy(int column, int line) {
    COORD coord;
    coord.X = column;
    coord.Y = line;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void textattr(int i) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}

struct emp {
    int id;
    char name[20];
    int age;
};

int is_duplicate_id(struct emp *ptr, int id, int counter) {
    for (int i = 0; i < counter; i++) {
        if (ptr[i].id == id) {
            return 1;  // ID is duplicated
        }
    }
    return 0;  // ID is not duplicated
}

int main() {
    char menu[5][60] = {"New", "Display", "Display by index", "Display by name", "Exit"};
    int i, n = 0;
    char ch;
    int flag = 1;
    int size, counter = 0;

    printf("Enter size: ");
    scanf("%d", &size);
    struct emp *ptr = (struct emp *) malloc(size * sizeof(struct emp));

    for (i = 0; i < size; i++) {
        ptr[i].id = -1;
    }

    do {
        system("cls");
        for (i = 0; i < 5; i++) {
            gotoxy(5, 5 + i);
            if (i == n) {
                textattr(0x04);
            } else {
                textattr(0x07);
            }
            printf("%s", menu[i]);
        }

        ch = _getch();

        switch (ch) {
            case -32:
                ch = _getch();
                if (ch == 72) {  // Up arrow
                    n--;
                    if (n < 0) n = 4;
                } else if (ch == 80) {  // Down arrow
                    n++;
                    if (n > 4) n = 0;
                }
                break;

            case 13:  // Enter key
                system("cls");
                if (n == 0) {  // New Employee Entry
                    if (counter < size) {
                        int id;
                        printf("Enter ID: ");
                        scanf("%d", &id);

                        if (is_duplicate_id(ptr, id, counter)) {
                            printf("Duplicate ID! Please enter a unique ID.\n");
                        } else {
                            ptr[counter].id = id;
                            printf("Enter Name: ");
                            scanf("%s", ptr[counter].name);
                            printf("Enter Age: ");
                            scanf("%d", &ptr[counter].age);
                            counter++;  // Increase employee counter
                        }
                    } else {
                        printf("No available size\n");
                    }
                }
                else if (n == 1) {  // Display All Employees
                    for (i = 0; i < counter; i++) {
                        printf("ID: %d, Name: %s, Age: %d\n", ptr[i].id, ptr[i].name, ptr[i].age);
                    }
                    _getch();
                }
                else if (n == 2) {  // Display by ID
                    int id;
                    printf("Enter ID: ");
                    scanf("%d", &id);

                    for (i = 0; i < counter; i++) {
                        if (ptr[i].id == id) {
                            printf("ID: %d, Name: %s, Age: %d\n", ptr[i].id, ptr[i].name, ptr[i].age);
                            break;
                        }
                    }
                    _getch();
                }
                else if (n == 3) {  // Display by Name
                    char name[20];
                    printf("Enter Name: ");
                    scanf("%s", name);

                    for (i = 0; i < counter; i++) {
                        if (strcasecmp(ptr[i].name, name) == 0) {
                            printf("ID: %d, Name: %s, Age: %d\n", ptr[i].id, ptr[i].name, ptr[i].age);
                            break;
                        }
                    }
                    _getch();
                }
                else if (n == 4) {  // Exit
                    printf("Exit selected\n");
                    flag = 0;
                }
                _getch();
                break;

            case 27:  // Escape key to exit
                flag = 0;
                break;
        }
    } while (flag);

    free(ptr);  // Free allocated memory before exiting
    return 0;
}
