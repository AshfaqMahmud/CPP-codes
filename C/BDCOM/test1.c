#include<stdio.h>
#include<string.h>

typedef struct Student
{
    char name[10];
    int score;
} student_t;

// Comparison function that compares two students based on their scores
int cmp_student(const void *a, const void *b)
{
    student_t *student1 = *(student_t **)a;
    student_t *student2 = *(student_t **)b;
    
    // Return positive if first score is less (for ascending order)
    return (student1->score - student2->score);
}

// Function to find the student with maximum score
student_t *max_score(void **list, int n, int (*cmp)(const void *, const void *))
{
    student_t **plist = (student_t **)list;
    student_t *max = plist[0];
    
    for(int i = 1; i < n; i++)
    {
        // If current student's score is higher than max
        if(cmp(&plist[i], &max) > 0)
        {
            max = plist[i];
        }
    }
    
    return max;
}

void main(void)
{
    student_t list[5] = {{"Tom", 68}, {"Jerry", 72}, {"Moby", 60}, {"Kirby", 89}, {"Bsdk", 99}};
    student_t *plist[5] = {&list[0], &list[1], &list[2], &list[3], &list[4]};

    student_t *pmax = max_score((void **)plist, 5, cmp_student);

    printf("%s gets the highest score %d\n", pmax->name, pmax->score);

    return;
}