#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char* name;
    float mark;
} Subject;
int main() {
    Subject* subjects;
    int numSubjects;
    printf("How many subjects would you like to enter? ");
    scanf("%d", &numSubjects);
    subjects = (Subject*) malloc(numSubjects * sizeof(Subject));
    for (int i = 0; i < numSubjects; i++) {
        printf("\nEnter the name of subject %d: ", i+1);
        char buffer[100];
        scanf("%s", buffer);
        subjects[i].name = (char*) malloc((strlen(buffer)+1) * sizeof(char));
        strcpy(subjects[i].name, buffer);
        
        printf("Enter the mark for subject %d: ", i+1);
        scanf("%f", &subjects[i].mark);
    }
    printf("\nSubject\tMark");
    for (int i = 0; i < numSubjects; i++) {
        printf("\n%s\t%.2f", subjects[i].name, subjects[i].mark);
        free(subjects[i].name);
    }
    free(subjects);
    return 0;
}
