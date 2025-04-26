#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "shopping_list.txt"
#define MAX_ITEM 100

void addItem();
void removeItem();
void showList();
void trimline(char str[]);

int main(void)
{
    int choice;

    FILE *fp = fopen(FILENAME, "a");
    if (fp == NULL)
    {
        printf("Error creating file.\n");
        return 1;
    }
    fclose(fp);

    do
    {
        printf("\nMenu:\n");
        printf("1 - Add item\n");
        printf("2 - Remove item\n");
        printf("3 - Show shopping list\n");
        printf("4 - Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        if (choice == 1)
            addItem();
        else if (choice == 2)
            removeItem();
        else if (choice == 3)
            showList();
        else if (choice == 4)
            printf("Exiting...\n");
        else
            printf("Invalid choice.\n");

    } while (choice != 4);

    return 0;
}

void addItem()
{
    char item[MAX_ITEM];

    printf("Enter item to add: ");
    fgets(item, sizeof(item), stdin);
    trimline(item);

    FILE *fp = fopen(FILENAME, "a");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    fprintf(fp, "%s\n", item);
    fclose(fp);

    printf("Item added.\n");
}

void removeItem()
{
    char item[MAX_ITEM];

    showList();

    printf("\nEnter item to remove: ");
    fgets(item, sizeof(item), stdin);
    trimline(item);

    FILE *fp = fopen(FILENAME, "r");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    FILE *temp = fopen("temp.txt", "w");
    if (temp == NULL)
    {
        printf("Error creating temp file.\n");
        fclose(fp);
        return;
    }

    char line[MAX_ITEM];
    int found = 0;
    while (fgets(line, sizeof(line), fp))
    {
        trimline(line);
        if (strcmp(line, item) != 0)
            fprintf(temp, "%s\n", line);
        else
            found = 1;
    }

    fclose(fp);
    fclose(temp);

    remove(FILENAME);
    rename("temp.txt", FILENAME);

    if (found)
        printf("Item removed.\n");
    else
        printf("Item not found.\n");
}

void showList()
{
    FILE *fp = fopen(FILENAME, "r");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    printf("\nShopping List:\n");

    char line[MAX_ITEM];
    int empty = 1;
    while (fgets(line, sizeof(line), fp))
    {
        printf("- %s", line);
        empty = 0;
    }

    if (empty)
        printf("List is empty.\n");

    fclose(fp);
}

void trimline(char str[])
{
    str[strcspn(str, "\n")] = '\0';
}