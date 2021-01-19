#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include "oui.h"

void affi_map(char **map)
{
    int i = 0;
    while (i <= 8){
        printf("%s", map[i]);
        i++;
    }
}

void free_map(char** map)
{
    int i = 0;
    while (i < 8) {
        free(map[i]);
    }
    return;    
}

char **save_map(char **map, char **save_map, char *save, int line)
{
    int i = 0;
    save_map = malloc((sizeof(char **) * 190) + 1);
    save_map[0] = malloc((sizeof(char) * 19) + 1);
    save_map[1] = malloc((sizeof(char) * 19) + 1);
    save_map[2] = malloc((sizeof(char) * 19) + 1);
    save_map[3] = malloc((sizeof(char) * 19) + 1);
    save_map[4] = malloc((sizeof(char) * 19) + 1);
    save_map[5] = malloc((sizeof(char) * 19) + 1);
    save_map[6] = malloc((sizeof(char) * 19) + 1);
    save_map[7] = malloc((sizeof(char) * 19) + 1);
    save_map[8] = malloc((sizeof(char) * 19) + 1);

    while (i <= 8) {
        if (i == line)
            strcpy(save_map[i], save);
        else
            strcpy(save_map[i], map[i]);
        i++;
    }
    return(save_map);
}

char **moove(char *test, char *move, char **map)
{
    char **savemap;
    char *save;
    char sp;
    int i = 0;

    if (test[0] == 'a') {
        i = atoi(&test[1]);
        if (i > 0 && i <= 8) {
            save = malloc((sizeof(char*) * 19) + 1);
            strcpy(save, map[9 - i]);
            sp = save[2];
            save[2] = ' ';
            map = save_map(map, savemap, save, 9 - i);
            free(save);
        }
    }
    if (move[0] == 'a') {
        i = 0;
        i = atoi(&move[1]);
        if (i > 0 && i <= 8) {
            save = malloc((sizeof(char*) * 19) + 1);
            strcpy(save, map[9 - i]);
            save[2] = sp;
            map = save_map(map, savemap, save, 9 - i);
            free(save);
            affi_map(map);
        }
    }
    if (test[0] == 'b') {
        i = atoi(&test[1]);
        if (i > 0 && i <= 8) {
            save = malloc((sizeof(char*) * 19) + 1);
            strcpy(save, map[9 - i]);
            sp = save[4];
            save[4] = ' ';
            map = save_map(map, savemap, save, 9 - i);
            free(save);
        }
    }
    if (move[0] == 'b') {
        i = 0;
        i = atoi(&move[1]);
        if (i > 0 && i <= 8) {
            save = malloc((sizeof(char*) * 19) + 1);
            strcpy(save, map[9 - i]);
            save[4] = sp;
            map = save_map(map, savemap, save, 9 - i);
            free(save);
            affi_map(map);
        }
    }
    if (test[0] == 'c') {
        i = atoi(&test[1]);
        if (i > 0 && i <= 8) {
            save = malloc((sizeof(char*) * 19) + 1);
            strcpy(save, map[9 - i]);
            sp = save[6];
            save[6] = ' ';
            map = save_map(map, savemap, save, 9 - i);
            free(save);
        }
    }
    if (move[0] == 'c') {
        i = 0;
        i = atoi(&move[1]);
        if (i > 0 && i <= 8) {
            save = malloc((sizeof(char*) * 19) + 1);
            strcpy(save, map[9 - i]);
            save[6] = sp;
            map = save_map(map, savemap, save, 9 - i);
            free(save);
            affi_map(map);
        }
    }
    if (test[0] == 'd') {
        i = atoi(&test[1]);
        if (i > 0 && i <= 8) {
            save = malloc((sizeof(char*) * 19) + 1);
            strcpy(save, map[9 - i]);
            sp = save[8];
            save[8] = ' ';
            map = save_map(map, savemap, save, 9 - i);
            free(save);
        }
    }
    if (move[0] == 'd') {
        i = 0;
        i = atoi(&move[1]);
        if (i > 0 && i <= 8) {
            save = malloc((sizeof(char*) * 19) + 1);
            strcpy(save, map[9 - i]);
            save[8] = sp;
            map = save_map(map, savemap, save, 9 - i);
            free(save);
            affi_map(map);
        }
    }
    if (test[0] == 'e') {
        i = atoi(&test[1]);
        if (i > 0 && i <= 8) {
            save = malloc((sizeof(char*) * 19) + 1);
            strcpy(save, map[9 - i]);
            sp = save[10];
            save[10] = ' ';
            map = save_map(map, savemap, save, 9 - i);
            free(save);
        }
    }
    if (move[0] == 'e') {
        i = 0;
        i = atoi(&move[1]);
        if (i > 0 && i <= 10) {
            save = malloc((sizeof(char*) * 19) + 1);
            strcpy(save, map[9 - i]);
            save[10] = sp;
            map = save_map(map, savemap, save, 9 - i);
            free(save);
            affi_map(map);
        }
    }
    if (test[0] == 'f') {
        i = atoi(&test[1]);
        if (i > 0 && i <= 8) {
            save = malloc((sizeof(char*) * 19) + 1);
            strcpy(save, map[9 - i]);
            sp = save[12];
            save[12] = ' ';
            map = save_map(map, savemap, save, 9 - i);
            free(save);
        }
    }
    if (move[0] == 'f') {
        i = 0;
        i = atoi(&move[1]);
        if (i > 0 && i <= 10) {
            save = malloc((sizeof(char*) * 19) + 1);
            strcpy(save, map[9 - i]);
            save[12] = sp;
            map = save_map(map, savemap, save, 9 - i);
            free(save);
            affi_map(map);
        }
    }
    if (test[0] == 'g') {
        i = atoi(&test[1]);
        if (i > 0 && i <= 8) {
            save = malloc((sizeof(char*) * 19) + 1);
            strcpy(save, map[9 - i]);
            sp = save[14];
            save[14] = ' ';
            map = save_map(map, savemap, save, 9 - i);
            free(save);
        }
    }
    if (move[0] == 'g') {
        i = 0;
        i = atoi(&move[1]);
        if (i > 0 && i <= 10) {
            save = malloc((sizeof(char*) * 19) + 1);
            strcpy(save, map[9 - i]);
            save[14] = sp;
            map = save_map(map, savemap, save, 9 - i);
            free(save);
            affi_map(map);
        }
    }
    if (test[0] == 'h') {
        i = atoi(&test[1]);
        if (i > 0 && i <= 8) {
            save = malloc((sizeof(char*) * 19) + 1);
            strcpy(save, map[9 - i]);
            sp = save[16];
            save[16] = ' ';
            map = save_map(map, savemap, save, 9 - i);
            free(save);
        }
    }
    if (move[0] == 'h') {
        i = 0;
        i = atoi(&move[1]);
        if (i > 0 && i <= 10) {
            save = malloc((sizeof(char*) * 19) + 1);
            strcpy(save, map[9 - i]);
            save[16] = sp;
            map = save_map(map, savemap, save, 9 - i);
            free(save);
            affi_map(map);
        }
    }
    return (map);
}

void game(char **map)
{
    int i = 0;
    int turn = 0;
    char take[4];
    char move[4];
    while(1) {
        printf("\e[1;1H\e[2J");
        affi_map(map);
        printf("Turn n°: %d\n",turn);
        if (turn % 2 == 0 || turn == 0)
            printf("White's Turn\n");
        else if (turn % 2 == 1)
            printf("Black's Turn\n");
        printf("Piece à déplacé ?\n");
        fgets(take, 4, stdin);
        printf("Où la déplacé ?\n");
        fgets(move, 4, stdin);
        map = moove(take, move, map);
        i++;
        turn++;
    }
}

char **create_map(char **map)
{
    int i = 0;
    map = malloc((sizeof(char**) * 190) + 1);
    map[0] = malloc((sizeof(char) * 19) + 1);
    map[1] = malloc((sizeof(char) * 19) + 1);
    map[2] = malloc((sizeof(char) * 19) + 1);
    map[3] = malloc((sizeof(char) * 19) + 1);
    map[4] = malloc((sizeof(char) * 19) + 1);
    map[5] = malloc((sizeof(char) * 19) + 1);
    map[6] = malloc((sizeof(char) * 19) + 1);
    map[7] = malloc((sizeof(char) * 19) + 1);
    map[8] = malloc((sizeof(char) * 19) + 1);
    map[0] = "  a|b|c|d|e|f|g|h|\n";
    map[1] = "8|T|C|F|Q|K|F|C|T|\n";
    map[2] = "7|P|P|P|P|P|P|P|P|\n";
    map[3] = "6| | | | | | | | |\n";
    map[4] = "5| | | | | | | | |\n";
    map[5] = "4| | | | | | | | |\n";
    map[6] = "3| | | | | | | | |\n";
    map[7] = "2|P|P|P|P|P|P|P|P|\n";
    map[8] = "1|T|C|F|Q|K|F|C|T|\n";
    return (map);
}

int main (int ac, char **av)
{
    int UwU = 0;
    char **map;
    map = create_map(map);
    //free(map);
    game(map);
    return(UwU);
}