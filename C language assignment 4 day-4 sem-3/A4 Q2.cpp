#include <stdio.h>
#define MAX_PLAYERS 11
struct Player {
    char name[50];
    int runs_scored;
};
int main() {
    struct Player team[MAX_PLAYERS];
    int i, n, total_runs = 0;
    printf("Enter the number of players in the team (maximum %d): ", MAX_PLAYERS);
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("\nEnter details of player %d:\n", i+1);
        printf("Name: ");
        scanf("%s", team[i].name);
        printf("Runs scored: ");
        scanf("%d", &team[i].runs_scored);
        total_runs += team[i].runs_scored;
    }
    printf("\nTotal runs scored by the team: %d\n", total_runs);
    return 0;
}

