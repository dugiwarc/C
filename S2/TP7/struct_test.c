#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

typedef struct Person   
{
    int age;
    float weight;
    char name[30];
} peep;

void menu();
void got();
void start();
void back();
void addRecord();
void listRecord();
void modifyRecord();
void deleteRecord();
void searchRecord();


int main()
{
    start();
    return 0;
}



void back()
{
    start();
}

void start()
{
    menu();
}






void menu()
{   
    int choice;
    system("cls");
    printf("\n\n\t\t\tMenu\t\t\t\n\n");
    printf("\t1.Add Contact\t2.Show Contacts\t3.Exit\n\t4.Modify\t5.Search\t6.Delete");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            addRecord();
            break;
        case 2:
            listRecord();
            break;
        case 3:
            exit(0);
            break;
        case 4:
            modifyRecord();
            break;
        case 5:
            searchRecord();
            break;
        case 6:
            deleteRecord();
            break;    
        default:
            system("cls");
            menu();
    }
    
}

void addRecord()
{
    system("cls");
    File *f;
    peep p;
    f = fopen("C://Users/Tusk/Desktop/project", "ab+");
    printf("\nEnter name: \n");
    scanf("%s", p.name);
    printf("\nEnter age: \n");
    scanf("%d", p.age);
    printf("\nEnter weight: \n");
    scanf("%f", p.weight);
    fwrite(&p, sizeof(p), 1, f);

    fflush(stdin); 
    printf("\nRecord saved");

    fclose(f);

    printf("\n\nEnter any key");

    getch();
    system("cls");
    menu();
}

void listRecord()
{
    peep p;
    FILE *f;
    f = fopen("C://Users/Tusk/Desktop/project","rb");
    if(f == NULL)
    {
        printf("\nCould not open file");
        exit(1);
    }
    while(fread(&p, sizeof(p), 1, f) == 1)
    {
        printf("\n\n\nYour record is: \n\n");
        printf("\nName=%s\nAge=%d\nWeight=%f", p.name, p.age, p.weight);

        getch();
        system("cls");
    }

    fclose(f);
    printf("\nEnter any key");
    getch();
    system("cls");
    menu();
}

void searchRecord()
{
    peep p;
    FILE *f;
    char name[100];

    f = fopen("C://Users/Tusk/Desktop/project","rb");
    if(f == NULL)
    {
        printf("\nError in opening the file\n");
        exit(1);
    }
    printf("\nEnter the name of the person to look up:\n");
    scanf("%s", name);
    while(fread(&p, sizeof(p), 1, f) == 1)
    {
        if(strcmp(p.name, name) == 0)
        {
            printf("\n\tDetail information about %s", name);
            printf("\nName:%s\nAge:%d\nWeight:%f", p.name, p.age, p.weight);
        }
        else
            printf("FNF");
    }
    fclose(f);
    printf("\nEnter any key: \n");

    getch();
    system("cls");
    menu();
}

void deleteRecord()
{
    peep p;
    FILE *f, *ft;
    int flag;
    char name[100];
    f = fopen("C://Users/Tusk/Desktop/project", "rb");
    if(f == NULL)
    {
        printf("Contact's data not added yet\n");
    }
    else
    {
        ft = fopen("temp", "wb+");
        if(ft == NULL)
            printf("FOE\n");
        else
        {
            printf("Enter contact's name: \n");
            scanf("%s", name);

            fflush(stdin);
            while(fread(&p, sizeof(p), 1, f) == 1)
            {
                if(strcmp(p.name, name) != 0)
                    fwrite(&p, sizeof(p), 1, ft);
                if(strcmp(p.name, name) == 0)
                    flag = 1;
            }
            fclose(f);
            fclose(ft);
            if(flag != 1)
            {
                printf("No contact found.");
                remove("temp.txt");
            }
            else{
                remove("project");
                rename("temp.txt", "project");
                printf("Record deleted successfully.");
            }
        }
    }
    printf("\nEnter any key");

    getch();
    system("cls");
    menu();
}

void modifyRecord()
{
    FILE *f;
    int flag = 0;
    peep p, s;
    char name[50];
    f = fopen("project", "rb+");
    if(f == NULL)
    {
        printf("Contact's data not added yet.");
        exit(1);
    }
    else
    {
        system("cls");
        printf("\nEnter contact's name to modify:\n");
        scanf("%s", name);
        while(fread(&p, sizeof(p), 1, f) == 1)
        {
            if(strcmp(name, p.name) == 0)
            {
                printf("\nEnter name: \n");
                scanf("%s", s.name);
                printf("\nEnter age: \n");
                scanf("%d", s.age);
                printf("\nEnter weight: \n");
                scanf("%f", s.weight);
                fseek(f, sizeof(p), SEEK_CUR);
                fwrite(&s, sizeof(p), 1, f);
                flag = 1;
                break;
            }
            fflush(stdin);
        }
        if(flag == 1)
        {
            printf("\nYour data is has been modified");
        }
        else
        {
            printf("\nData is not found");
        }
        fclose(f);
    }
    printf("\nEnter any key");
    getch();
    system("cls");
    menu();
}

void got(char *name){
    int i = 0, j;
    char c, ch;
    do
    {
        c = getch();
        if(c != 8 && c!= 13)
        {
            *(name + i) = c;
            putch(c);
            i++;
        }
        if(c == 8)
        {
            if(i > 0)
            {
                i--;
            }
            system("cls");
            for(j = 0; j < i; j++){
                putch(ch);
            }
        }
    } while (c != 13);
    *(name + i) = '\0';
}

