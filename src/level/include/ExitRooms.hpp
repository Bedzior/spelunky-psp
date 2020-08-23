#pragma once

static const int exit_room[6][10][10] =
        {

                {
                        { 3,  4,  4,  0,  0,  0,  0,  4,  4,  4},
                        { 0,  0,  0,  0,  0,  0,  0,  9,  0,  0},
                        { 7,  0,  8,  8,  8,  8,  8, 10,  0,  7},
                        { 2,  0,  0,  0,  0,  0,  0,  9,  0,  3},
                        { 1,  0,  0,  8,  8,  8,  0,  9,  0,  0},
                        { 3,  0,  0,  0,  0,  0,  0,  9,  0,  7},
                        { 0,  0,  0,  0,  0,  0,  0,  9,  7,  1},
                        { 0,  0, 14,  0,  0,  0,  0,  0,  4,  4},
                        { 7,  7,  7,  7,  7,  7,  7,  0,  0,  0},
                        { 1,  2,  2,  6,  2,  2,  2,  7,  7,  7},
                },

                {
                        { 2,  2,  2,  0,  0,  0,  0,  0,  4,  1},
                        { 1,  2,  4,  0,  0,  0,  0,  0,  0,  3},
                        { 3,  4,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  8,  7,  7,  7,  8,  0},
                        { 0,  0,  0,  0,  0,  4,  4,  4,  0,  0},
                        { 0,  7,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  2,  0, 14,  0, 11,  7,  8,  0,  0},
                        { 7,  2,  7,  7,  0,  4,  4,  0,  0,  0},
                        { 2,  2,  6,  5,  0,  0,  0,  0,  7,  0},
                        { 1,  2,  2,  2,  7,  7,  7,  7,  5,  7},

                },
                {
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  7,  0,  0,  7,  7,  7,  7,  0},
                        { 0,  0,  6,  0,  0,  2,  4,  2,  6,  0},
                        { 0,  0,  2,  0,  0,  2,  5,  2,  2,  0},
                        { 0, 14,  2,  8,  0,  4,  4,  4,  4,  0},
                        { 7,  7,  2,  0,  0,  0,  0,  0,  0,  0},
                        { 5,  2,  5,  7,  7,  7,  7,  7,  7,  0},
                        { 2,  2,  2,  2,  2,  2,  2,  2,  6,  7},

                },
                {
                        { 0,  0,  4,  4,  0,  0,  4,  2,  2,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  2,  0,  0},
                        { 8,  7,  8,  8,  8,  8,  0,  4,  8,  8},
                        { 0,  4,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  8,  8,  8,  8,  8},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  7,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  7,  2,  0,  0,  0,  0,  0},
                        { 0,  0,  7,  2,  2,  7,  7, 14,  0,  7},
                        { 7,  7,  2,  5,  5,  2,  2,  7,  7,  5},
                },
                {
                        { 0,  0,  0,  0,  0,  0,  0,  0,  4,  1},
                        { 0,  8,  8,  7,  8,  8,  8,  8,  0,  5},
                        { 0,  0,  0,  4,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  8,  8,  0,  0,  8,  8,  8,  0,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  7,  8,  0,  7,  7,  0,  0},
                        { 0,  0,  0,  2,  0, 14,  5,  2,  0,  0},
                        { 7,  7,  7,  2,  7,  7,  2,  2,  7,  7,}
                },
                {
                        { 3,  4,  2,  0,  0,  0,  0,  0,  2,  3},
                        { 0,  0,  4,  7,  0,  0,  0,  0,  4,  0},
                        { 0,  0,  0,  4,  8,  0,  0,  0,  0,  0},
                        { 0,  7,  0,  0,  0,  0,  7,  7,  7,  0},
                        { 0,  4,  7,  7,  8,  8,  4,  4,  4,  0},
                        { 0,  0,  4,  4,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  7,  7,  0,  0,  7,  0,  0},
                        { 0,  0,  0,  2,  2, 14,  7,  2,  0,  0},
                        { 7,  7,  7,  2,  2,  7,  2,  6,  7,  7},
                },
        };

static const int exit_rooms_loot[6][10][10] =
        {
                {
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  1,  1,  1,  1,  1,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 1,  0,  0,  0,  1,  1,  1,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  1,  1,  1},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                },{
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  1,  1,  1,  1,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 1,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  1,  0},
                        { 0,  0,  0,  0,  1,  1,  1,  1,  0,  1},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                },{
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  1,  1,  1,  1,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  1,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  1,  1,  1,  1,  1,  1,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  1},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                },{
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 1,  1,  1,  1,  1,  1,  0,  0,  1,  1},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  1,  1,  1,  1,  1},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 1,  1,  0,  0,  0,  0,  0,  0,  1,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                },{
                        { 0,  1,  1,  1,  1,  1,  1,  1,  0,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  1,  1,  0,  0,  1,  1,  1,  0,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 1,  1,  1,  0,  0,  0,  0,  0,  1,  1},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                },{
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  0,  1,  1,  1,  0},
                        { 0,  0,  1,  1,  1,  1,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                        { 0,  0,  0,  0,  0,  0,  1,  0,  0,  0},
                        { 1,  1,  1,  0,  0,  0,  0,  0,  1,  1},
                        { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                },
        };
