                        /* PROJECT TITLE: ROCK-PAPER -SCISSORS GAME*/

/*
PROJECT PROBLEM:
    Write a C program capable of playing ROCK, PAPER , SCISSORS game with computer.
your program should be able to print the result after you choose ROCK, PAPER , SCISSORS.

DATE: 29 DECEMBER 2021.
*/

#include<iostream>
using namespace std;
#include<stdlib.h>
#include<time.h>

int RockPaperScissors(char you, char comp){
    // returns 1 if you win, -1 if you lose and 0 if draw
    // Condition for draw
    // Cases covered:
    // rr
    // pp
    // ss
    if(you == comp){
        return 0;
    }

    // Non-draw conditions
    // Cases covered:
    // rp
    // pr
    // rs 
    // sr
    // ps
    // sp
    
    // rp
    // pr
    if(you=='r' && comp=='p'){
        return -1;
    }
    else if(you=='p' && comp=='r'){
        return 1;
    }

    // rs 
    // sr
    if(you=='r' && comp=='s'){
        return 1;
    }
    else if(you=='s' && comp=='r'){
        return -1;
    }

    // ps
    // sp
    if(you=='p' && comp=='s'){
        return -1;
    }
    else if(you=='s' && comp=='p'){
        return 1;
    }
}

int main(){
    char you, comp;
    srand(time(0));

    int number = rand()%100 + 1;
    if(number<33){
        comp = 'r';
    }
    else if(number>33 && number<66){
        comp='p';
    }
    else{
        comp='s';
    }
    
    cout << "Enter 'r' for rock, 'p' for paper and 'c' for scissors" << endl;
    cin >> you;

    int result = RockPaperScissors(you, comp);
    cout << "You chose  "<< you << " and computer chose " << comp  << endl;

    if(result ==0){
        cout << "Game draw!\n" << endl;
    }
    else if(result==1){
        cout << "You win!\n" << endl;
    }
    else{
        cout << "You Lose!\n" <<endl ;
    }
    return 0;
}