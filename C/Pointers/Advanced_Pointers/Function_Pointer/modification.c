#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Define the person structure
typedef struct
{
    char *name;
    int age;
} person_t;

// Function pointer type for print functions
typedef void (*print_func)(void *, const char *);

// Structure to store type info
typedef struct
{
    const char *type;
    print_func print;
} type_info_t;

// Global array to store type information
type_info_t infos[10];
int info_count = 0;

// Print functions for different types
void print_int(void *data, const char *type)
{
    printf("%d\n", *(int *)data);
}

void print_string(void *data, const char *type)
{
    printf("%s\n", (char *)data);
}

void print_person(void *data, const char *type)
{
    person_t *p = (person_t *)data;
    printf("name:%s age:%d\n", p->name, p->age);
}

// Register type information
void register_info(const char *type, print_func print)
{
    infos[info_count].type = type;
    infos[info_count].print = print;
    info_count++;
}

// Print data based on type
void print_text(void *data, const char *type)
{
    for (int i = 0; i < info_count; i++)
    {
        if (strcmp(infos[i].type, type) == 0)
        {
            infos[i].print(data, type);
            return;
        }
    }
}
void main(void)
{
    int int_a = 10;
    char str1[] = "bdcom";
    person_t person = {"Tom", 18};

    memset(&infos, 0, sizeof(infos));

    register_info("int", print_int);
    register_info("string", print_string);
    register_info("person_t", print_person);

    print_text(&int_a, "int");
    print_text(&str1, "string");
    print_text(&person, "person_t");

    return;
}