//
//  main.cpp
//  simple-snake-game
//
//  Created by Asafe Brandão on 2/16/24.
//

#include <iostream>

//global variables
bool gameOver;
const int width = 20;
const int heigth = 20;
int x, y, fruitX, fruitY, score;

enum eDirection{STOP = 0, LEFT, RIGTH, UP, DOWN};
eDirection dir;

/*
    Initializes the game state
*/
void Setup()
{
    gameOver = false;
    dir = STOP;
    x = (width / 2);
    y = (heigth /2);
    
    //Gets a random x-point for the fruit within the width of the game board.
    fruitX = rand() % width;
    
    //Gets a random y-point for the fruit within the height of the game board.
    fruitY = rand() % heigth;
    
    score = 0;
}

/*
    Handles the rendering of the game
*/
void Draw()
{
    //clearing screen for linux/unix
    //for windows: system("cls");
    system("clear");
    
    for(int i=0;i<width;i++)
    {
        std::cout << "#";
    }
    std::cout<<std::endl;
    
    
    for(int row = 0;row<heigth;row++)
    {
        for(int col = 0;col<width;col++)
        {
            if(col == 0)
            {
                std::cout << "#";
            }else
            {
                std::cout << " ";
            }
            
            if(col == width-1)
            {
                std::cout << "#";
            }
        }
        std::cout << std::endl;
    }
    
    
    for(int i=0;i<width;i++)
    {
        std::cout << "#";
    }
    std::cout<<std::endl;
    
}

/*
    Handles user input
*/
void Input()
{
    
}

/*
    Updates the game logic based on the current state and user input.
*/
void Logic()
{
    
}

/*
 The main function serving as the entry point of the program.
  Calls Setup, Draw, Input, and Logic functions in a loop until the game is over.
*/
int main()
{
    Setup();
    Draw();
    
    /*
     while(!gameOver)
     {
         Draw();
         Input();
         Logic();
     }
     */
}
