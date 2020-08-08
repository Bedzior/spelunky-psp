//
// Created by xdbeef on 02.05.18.
//

#ifndef SPELUNKYDS_CLOSEDROOMS_H
#define SPELUNKYDS_CLOSEDROOMS_H


static const int closed_rooms[6][10][10] =
        {
                {
                        {4, 4, 4, 4, 4, 4, 4, 3, 4, 4},
                        {0, 0, 0, 0,  0, 0, 0,  9, 0, 0},
                        {7, 0, 8, 8, 8, 8,  8, 10, 0,  2},
                        {1, 0, 0, 0, 0, 0,  0, 9, 0, 3},
                        {6, 0, 0, 8, 8, 8, 0, 9, 0, 0},
                        {3, 0, 0, 0, 0, 0, 0, 9, 0, 7},
                        {0, 0, 0, 0, 0, 0, 0,  9, 0, 1},
                        {0, 0, 0,  0, 0, 0, 0, 7, 7, 1},
                        {7, 7, 7, 7, 7, 7, 7, 7, 7, 6},
                        {2, 2, 2, 2, 2, 2, 2, 2, 2, 5},
                },
                {
                        {1, 4, 4, 4, 4, 4, 2, 2, 4, 1},
                        {1, 0, 0, 0,  0, 0, 2,  2, 0, 7},
                        {8, 0, 0, 0, 0, 0,  7, 6,  0,  6},
                        {1, 8, 8, 0, 0, 0,  2, 7, 0, 1},
                        {1, 0, 0, 0, 0, 0, 3, 6, 6, 1},
                        {3, 0, 0, 0, 0, 0, 0, 3, 3, 3},
                        {0, 0, 0, 0, 0, 0, 0,  0, 0, 0},
                        {0, 0, 0,  0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 5, 7, 5, 7, 0, 0, 7},
                        {7, 7, 7, 7, 2, 2, 2, 7, 7, 6},
                },
                {
                        {1, 4, 4, 4, 4, 2, 2, 2, 2, 1},
                        {1, 0, 0, 0,  0, 3, 6,  2, 3, 7},
                        {8, 0, 0, 0, 0, 0,  3, 2,  0,  6},
                        {1, 0, 0, 0, 0, 0,  0, 3, 0, 1},
                        {1, 0, 0, 0, 0, 0, 0, 0, 0, 8},
                        {3, 0, 0, 0, 0, 0, 0, 0, 0, 3},
                        {0, 0, 0, 0, 0, 0, 12, 0, 0, 0},
                        {0, 0, 7,  7, 7, 0, 5, 0, 0, 2},
                        {0, 7, 2, 2, 2, 7, 2, 0, 7, 6},
                        {7, 2, 2, 2, 2, 2, 2, 7, 2, 6},
                },
                {

                        {4, 2, 4, 4, 4, 4, 4, 4, 4, 4},
                        {0, 2, 0, 0, 3, 3, 12, 0, 9, 0},
                        {0, 2, 0, 10, 0, 11, 2, 2,  10, 1},
                        {0, 6, 7, 9, 2, 4,  2, 8, 9, 1},
                        {7, 2, 2, 9, 4, 4, 2, 2, 9, 1},
                        {1, 2, 3, 0, 0, 0, 4, 4, 9, 8},
                        {2, 7, 0, 2, 2, 0, 0,  0, 9, 1},
                        {2, 2, 0,  3, 3, 0, 2, 2, 9, 2},
                        {3, 3, 0, 0, 0, 0, 2, 2, 5, 3},
                        {7, 7, 7, 7, 7, 7, 3, 3, 2, 2},
                },
                {

                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0,  0, 0, 8,  7, 0, 0},
                        {8, 0, 0, 0, 8, 9,  0, 4,  0,  0},
                        {0, 0, 0, 0, 0, 10, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 9, 2, 2, 0, 0},
                        {0, 7, 8, 7, 0, 9, 6, 2, 0, 0},
                        {0, 3, 0, 3, 0, 9, 2,  2, 0, 0},
                        {0, 0, 0,  0, 0, 0, 2, 5, 8, 7},
                        {0, 0, 0, 0, 0, 0, 2, 2, 0, 3},
                        {7, 7, 7, 7, 7, 7, 2, 2, 2, 2},
                },
                {

                        {4, 4, 4, 4, 4, 4, 4, 4, 4, 4},
                        {0, 0, 0, 0,  0, 0, 0,  0, 0, 0},
                        {7, 7, 0, 0, 0, 0,  0, 0,  7,  7},
                        {2, 6, 7, 0, 7, 0, 7, 0, 2, 1},
                        {1, 2, 4, 7, 3, 7, 3, 8, 2, 6},
                        {3, 3, 0, 4, 0, 3, 0, 0, 2, 3},
                        {0, 0, 0, 0, 0, 0, 0,  0, 2, 0},
                        {0, 0, 11, 7, 0, 0, 0, 0, 4, 8},
                        {0, 0, 2, 2, 7, 7, 7, 0, 0, 0},
                        {7, 7, 2, 2, 2, 2, 2, 7, 7, 7},
                }
        };




//1 snake
//2 bat
//3 spider
//4 spikes
//5 caveman
//6 damsel
//7 lamp
//8 shopkeeper [TODO Enum for NPCType]
//9 arrow trap left oriented (12 tile type)
//10 arrow trap right oriented (13 tile type)

static const int closed_rooms_npcs[6][10][10] =
        {
                {
                        {0, 0, 0,  0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 1, 1, 5, 1, 1,  0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0,  0, 0, 0},
                        {0, 0, 0, 1, 13, 1, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0,  0, 0, 0},
                        {1, 1,  1, 5, 13, 1, 1, 0, 0, 0},
                        {0, 0, 0,  0, 0,  0, 0, 0, 0, 0},
                        {0, 0, 0, 0,  0, 0, 0, 0, 0, 0},
                },
                {
                        {0, 0, 0,  0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0,  0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0,  0, 0, 0},
                        {0, 0, 0, 0, 0,  0, 0, 0, 0, 0},
                        {0, 3, 2, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 3, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0,  0, 0, 0},
                        {0, 0,  0, 1, 5,  1, 0, 0, 0, 0},
                        {5, 1, 13, 0, 0,  0, 0, 1, 1, 0},
                        {0, 0, 0, 0,  0, 0, 0, 0, 0, 0},
                },
                {
                        {0, 0, 0,  0, 0, 0, 0, 0, 0, 0},
                        {0, 2, 3, 2, 3, 0, 0,  0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0,  0, 0, 0},
                        {0, 0, 0, 0, 0,  0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 1, 5, 1, 0, 10, 0, 0, 0},
                        {0, 13, 0, 0, 0,  0, 0, 0, 0, 0},
                        {1, 0, 0,  0, 0,  0, 0, 0, 0, 0},
                        {0, 0, 0, 0,  0, 0, 0, 0, 0, 0},
                },
                {
                        {1, 1, 13, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 10, 1, 0, 0},
                        {0, 0, 0, 0, 0, 9, 0,  0, 0, 0},
                        {0, 0, 0, 0, 0,  0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 5, 4, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0,  0, 0, 0},
                        {0, 0,  0, 0, 0,  0, 0, 0, 0, 0},
                        {0, 0, 0,  2, 3,  0, 0, 0, 0, 0},
                        {1, 1, 1, 13, 1, 1, 0, 0, 1, 1},
                },
                {
                        {0, 0, 0,  0, 0, 0, 1, 1, 0, 0},
                        {1, 0, 0, 0, 0, 0, 0,  0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0,  0, 0, 0},
                        {0, 0, 0, 0, 0,  0, 0, 0, 0, 0},
                        {0, 1, 1, 5, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 3, 0, 0, 0, 0,  0, 1, 1},
                        {0, 2,  0, 2, 0,  0, 0, 0, 0, 0},
                        {1, 1, 1,  1, 13, 4, 0, 0, 1, 0},
                        {0, 0, 0, 0,  0, 0, 0, 0, 0, 0},},
                {

                        {0, 0, 0,  0, 0, 0, 0, 0, 0, 0},
                        {1, 1, 0, 0, 0, 0, 0,  0, 1, 1},
                        {0, 0, 1, 0, 1, 0, 13, 0, 0, 0},
                        {0, 0, 0, 5, 0,  1, 0, 1, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 2, 0, 3, 0, 2, 3, 0, 0},
                        {2, 3, 0, 0, 0, 0, 0,  0, 0, 0},
                        {0, 0,  9, 0, 0,  0, 0, 0, 0, 0},
                        {1, 4, 0,  0, 0,  0, 0, 0, 0, 0},
                        {0, 0, 0, 0,  0, 0, 0, 0, 0, 0},
                }
        };
static const int closed_rooms_loot[6][10][10] =
        {
                {
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 1, 1, 13, 1, 1, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 1, 1, 1, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0,  0, 0, 0, 0, 0, 0},
                        {1, 1, 1, 1, 13, 1, 1, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                },
                {
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0,  0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0,  0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 1, 13, 1, 0, 0, 0, 0},
                        {1, 1, 1, 0, 0, 0, 0, 1, 1, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                },
                {
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0,  0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 1, 13, 1, 0, 0, 0, 0, 0},
                        {0, 1, 0, 0, 0,  0, 0, 0, 0, 0},
                        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                },
                {

                        {1, 1, 1, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0,  0, 0, 1, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 1, 1, 1, 0, 0, 0, 0},
                        {0, 0, 0, 0,  0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0,  0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {1, 1, 1, 1, 1, 1, 0, 0, 1, 1},
                },
                {

                        {0, 0, 0, 0, 0, 0, 1, 6, 0, 0},
                        {1, 0, 0, 0, 0,  0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 1, 1, 1, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0,  0, 0, 0, 0, 1, 6},
                        {0, 0, 0, 0, 0,  0, 0, 0, 0, 0},
                        {1, 1, 1, 6, 1, 1, 0, 0, 1, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                },
                {

                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {1, 1, 0, 0, 0,  0, 0, 0, 1, 6},
                        {0, 0, 1, 0, 1, 0, 1, 0, 0, 0},
                        {0, 0, 0, 1, 0, 1, 0, 1, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0,  0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0,  0, 0, 0, 0, 0},
                        {1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
                        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                }
        };


#endif //SPELUNKYDS_CLOSEDROOMS_H