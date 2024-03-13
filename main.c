#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define ROWS 8
#define COLUMNS 8

struct chess_board{

    char board[ROWS*COLUMNS];
    char turn;
    char side;
    int enpassent[2];
    int castling[4]; // index 0 for WKS, index 1 for KQS, index 2 for BKS, index 3 for BQS   


}

void draw(struct chess_board){
    for(int row=0;row<ROWS;row++){
        for(int column=0;column<COLUMNS;column++){
            printf("%c",board[row*COLUMNS+column]);
    }
        printf("\n");
    }
}

bool isCheckmate(struct chess_board){
    return false;
}

bool inCheck(struct chess_board){
    return false;
}

void flipBoard(struct chess_board){
    char temp[ROWS*COLUMNS];
    for(int row=0;row<ROWS;row++){
        for(int column=0;column<COLUMNS;column++){
            temp[] = chess_board[];            
        }
    }
}



int main(){
    
    struct chess_board game;
    
    /*
                    {'r','n','b','q','k','b','n','r',
                    'p','p','p','p','p','p','p','p',
                    '*','*','*','*','*','*','*','*',
                    '*','*','*','*','*','*','*','*',
                    '*','*','*','*','*','*','*','*',
                    '*','*','*','*','*','*','*','*',
                    'P','P','P','P','P','P','P','P',
                    'R','N','B','Q','K','B','N','R'};
    */

    char side = 'W';

    printf("Chose Side (W/B): ");
    fgets() 


    //draw(board);


    return 0;
}
