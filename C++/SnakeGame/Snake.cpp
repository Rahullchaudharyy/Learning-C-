// #include <iostream>
// #include <vector>
// #include <cstdlib>
// #include <ctime>
// #include <ncurses.h>
// #include <unistd.h>

// using namespace std;

// bool gameOver;
// const int width = 20;
// const int height = 20;
// int x, y, fruitX, fruitY, score;
// vector<pair<int, int>> snake;
// enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
// Direction dir;

// void Setup() {
//     gameOver = false;
//     dir = STOP;
//     x = width / 2;
//     y = height / 2;
//     fruitX = rand() % width;
//     fruitY = rand() % height;
//     score = 0;
//     snake.clear();
//     snake.push_back(make_pair(x, y));
// }

// void Draw() {
//     clear(); // Clear the screen

//     for (int i = 0; i < width + 2; i++)
//         printw("#");
//     printw("\n");

//     for (int i = 0; i < height; i++) {
//         for (int j = 0; j < width; j++) {
//             if (j == 0)
//                 printw("#");
//             if (i == y && j == x)
//                 printw("O"); // Snake head
//             else if (i == fruitY && j == fruitX)
//                 printw("F"); // Food
//             else {
//                 bool print = false;
//                 for (auto segment : snake) {
//                     if (segment.first == j && segment.second == i) {
//                         printw("o");
//                         print = true;
//                     }
//                 }
//                 if (!print) printw(" ");
//             }

//             if (j == width - 1)
//                 printw("#");
//         }
//         printw("\n");
//     }

//     for (int i = 0; i < width + 2; i++)
//         printw("#");
//     printw("\n");
//     printw("Score: %d\n", score);
//     refresh(); // Refresh the screen
// }

// void Input() {
//     int ch = getch();
//     switch (ch) {
//     case 'a':
//         dir = LEFT;
//         break;
//     case 'd':
//         dir = RIGHT;
//         break;
//     case 'w':
//         dir = UP;
//         break;
//     case 's':
//         dir = DOWN;
//         break;
//     case 'x':
//         gameOver = true;
//         break;
//     }
// }

// void Logic() {
//     int prevX = snake[0].first;
//     int prevY = snake[0].second;
//     int prev2X, prev2Y;
//     snake[0] = make_pair(x, y);

//     for (int i = 1; i < snake.size(); i++) {
//         prev2X = snake[i].first;
//         prev2Y = snake[i].second;
//         snake[i] = make_pair(prevX, prevY);
//         prevX = prev2X;
//         prevY = prev2Y;
//     }

//     switch (dir) {
//     case LEFT:
//         x--;
//         break;
//     case RIGHT:
//         x++;
//         break;
//     case UP:
//         y--;
//         break;
//     case DOWN:
//         y++;
//         break;
//     default:
//         break;
//     }

//     if (x >= width) x = 0; else if (x < 0) x = width - 1;
//     if (y >= height) y = 0; else if (y < 0) y = height - 1;

//     for (int i = 1; i < snake.size(); i++)
//         if (snake[i].first == x && snake[i].second == y)
//             gameOver = true;

//     if (x == fruitX && y == fruitY) {
//         score += 10;
//         fruitX = rand() % width;
//         fruitY = rand() % height;
//         snake.push_back(make_pair(-1, -1));
//     }
// }

// int main() {
//     initscr(); // Initialize the window
//     timeout(100); // Set a timeout for getch()
//     noecho(); // Don't echo input
//     cbreak(); // Disable line buffering
//     curs_set(0); // Hide the cursor

//     Setup();
//     while (!gameOver) {
//         Draw();
//         Input();
//         Logic();
//     }

//     endwin(); // End ncurses mode
//     return 0;
// }




#include <ncurses.h>

int main() {
    initscr();
    printw("Hello, ncurses!");
    refresh();
    getch();
    endwin();
    return 0;
}
