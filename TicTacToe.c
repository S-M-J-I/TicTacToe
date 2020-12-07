#include<stdio.h>

//TODO: board set up
//TODO: since ' ' is used, mark the board; x-1; o-0
//TODO: set up logic
//if(board[0]==board[1]){ if(board[0]==1 && board[1]==1 && board[2]==1)}



int main(){
    char boardSign[10]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    int board[9] = {5,5,5,5,5,5,5,5,5}; 
    char player1_name[10], player2_name[10], coordinates[10];
    int hasWon;

    printf("Please enter the name of player 1 (X): ");
    fflush(stdin);
    gets(player1_name);
    fflush(stdout);

    printf("Please enter the name of player 2 (O): ");
    fflush(stdin);
    gets(player2_name);
    fflush(stdout);

    printf("\n\n--- Tic Tac Toe board ---\n");
    printf("\t  %c | %c | %c \n", boardSign[0], boardSign[1], boardSign[2]);
    printf("\t-------------\n");
    printf("\t  %c | %c | %c \n", boardSign[3], boardSign[4], boardSign[5]);
    printf("\t-------------\n");
    printf("\t  %c | %c | %c \n", boardSign[6], boardSign[7], boardSign[8]);


    while (1)
    {

        //Player 1 Sequence

        printf("Player 1 (%s), please enter your move: ", player1_name);
        fflush(stdin);
        gets(coordinates);
        fflush(stdout);
        printf("\n");

        if((strcmp(coordinates,"QUIT") == 0) || (strcmp(coordinates,"quit") == 0) || (strcmp(coordinates,"Quit") == 0)){
            break;
        }

        if( (strcmp(coordinates, "1,1") == 0) && boardSign[0]==' '){
            boardSign[0] = 'X';
            board[0] = 1;
        }else if( (strcmp(coordinates, "1,2") == 0) && boardSign[1]==' '){
            boardSign[1] = 'X';
            board[1] = 1;
        }else if( (strcmp(coordinates, "1,3") == 0) && boardSign[2]==' '){
            boardSign[2] = 'X';
            board[2] = 1;
        }else if( (strcmp(coordinates, "2,1") == 0) && boardSign[3]==' '){
            boardSign[3] = 'X';
            board[3] = 1;
        }else if( (strcmp(coordinates, "2,2") == 0) && boardSign[4]==' '){
            boardSign[4] = 'X';
            board[4] = 1;
        }else if( (strcmp(coordinates, "2,3") == 0) && boardSign[5]==' '){
            boardSign[5] = 'X';
            board[5] = 1;
        }else if( (strcmp(coordinates, "3,1") == 0) && boardSign[6]==' '){
            boardSign[6] = 'X';
            board[6] = 1;
        }else if( (strcmp(coordinates, "3,2") == 0) && boardSign[7]==' '){
            boardSign[7] = 'X';
            board[7] = 1;
        }else if( (strcmp(coordinates, "3,3") == 0) && boardSign[8]==' '){
            boardSign[8] = 'X';
            board[8] = 1;
        }else{
            printf("INVALID MOVE. PLEASE TRY AGAIN\n");
            continue;
        }

        printf("\n\n--- Tic Tac Toe board ---\n");
        printf("\t  %c | %c | %c \n", boardSign[0], boardSign[1], boardSign[2]);
        printf("\t-------------\n");
        printf("\t  %c | %c | %c \n", boardSign[3], boardSign[4], boardSign[5]);
        printf("\t-------------\n");
        printf("\t  %c | %c | %c \n", boardSign[6], boardSign[7], boardSign[8]);

        if(boardSign[0]==boardSign[1] && boardSign[1]==boardSign[2]){
            if(boardSign[0]=='X' && boardSign[1]=='X' && boardSign[2]=='X'){
                printf("Player 1 wins. Congratulations player 1(%s), you are the winner\n", player1_name);
                break;
            }
        }else if(boardSign[3]==boardSign[4] && boardSign[4]==boardSign[5]){
            if(boardSign[3]=='X' && boardSign[4]=='X' && boardSign[5]=='X'){
                printf("Player 1 wins. Congratulations player 1(%s), you are the winner\n", player1_name);
                break;
            }
        }else if(boardSign[6]==boardSign[7] && boardSign[7]==boardSign[8]){
            if(boardSign[6]=='X' && boardSign[7]=='X' && boardSign[8]=='X'){
                printf("Player 1 wins. Congratulations player 1(%s), you are the winner\n", player1_name);
                break;
            }
        }else if(boardSign[0]==boardSign[3] && boardSign[3]==boardSign[6]){
            if(boardSign[0]=='X' && boardSign[3]=='X' && boardSign[6]=='X'){
                printf("Player 1 wins. Congratulations player 1(%s), you are the winner\n", player1_name);
                break;
            }
        }else if(boardSign[1]==boardSign[4] && boardSign[4]==boardSign[7]){
            if(boardSign[1]=='X' && boardSign[4]=='X' && boardSign[7]=='X'){
                printf("Player 1 wins. Congratulations player 1(%s), you are the winner\n", player1_name);
                break;
            }
        }else if(boardSign[2]==boardSign[5] && boardSign[5]==boardSign[8]){
            if(boardSign[2]=='X' && boardSign[5]=='X' && boardSign[8]=='X'){
                printf("Player 1 wins. Congratulations player 1(%s), you are the winner\n", player1_name);
                break;
            }
        }else if(boardSign[0]==boardSign[4] && boardSign[4]==boardSign[8]){
            if(boardSign[0]=='X' && boardSign[4]=='X' && boardSign[8]=='X'){
                printf("Player 1 wins. Congratulations player 1(%s), you are the winner\n", player1_name);
                break;
            }
        }else if(boardSign[2]==boardSign[4] && boardSign[4]==boardSign[6]){
            if(boardSign[2]=='X' && boardSign[4]=='X' && boardSign[6]=='X'){
                printf("Player 1 wins. Congratulations player 1(%s), you are the winner\n", player1_name);
                break;
            }
        }else if(board[0] != 5 && board[1] != 5 && board[2] != 5 &&
        board[3] != 5 && board[4] != 5 && board[5] != 5 &&
        board[6] != 5 && board[7] != 5 && board[8] != 5){
            printf("Draw\n");
            break;
        }


        //PLAYER 2 SEQUENCE

        player_2:
        printf("Player 2 (%s), please enter your move: ", player2_name);
        fflush(stdin);
        gets(coordinates);
        fflush(stdout);
        printf("\n");

        if((strcmp(coordinates,"QUIT") == 0) || (strcmp(coordinates,"quit") == 0) || (strcmp(coordinates,"Quit") == 0)){
            break;
        }

        if( (strcmp(coordinates, "1,1") == 0) && boardSign[0]==' '){
            boardSign[0] = 'O';
            board[0] = 0;
        }else if( (strcmp(coordinates, "1,2") == 0) && boardSign[1]==' '){
            boardSign[1] = 'O';
            board[1] = 0;
        }else if( (strcmp(coordinates, "1,3") == 0) && boardSign[2]==' '){
            boardSign[2] = 'O';
            board[2] = 0;
        }else if( (strcmp(coordinates, "2,1") == 0) && boardSign[3]==' '){
            boardSign[3] = 'O';
            board[3] = 0;
        }else if( (strcmp(coordinates, "2,2") == 0) && boardSign[4]==' '){
            boardSign[4] = 'O';
            board[4] = 0;
        }else if( (strcmp(coordinates, "2,3") == 0) && boardSign[5]==' '){
            boardSign[5] = 'O';
            board[5] = 0;
        }else if( (strcmp(coordinates, "3,1") == 0) && boardSign[6]==' '){
            boardSign[6] = 'O';
            board[6] = 0;
        }else if( (strcmp(coordinates, "3,2") == 0) && boardSign[7]==' '){
            boardSign[7] = 'O';
            board[7] = 0;
        }else if( (strcmp(coordinates, "3,3") == 0) && boardSign[8]==' '){
            boardSign[8] = 'O';
            board[8] = 0;
        }else{
            printf("INVALID MOVE. PLEASE TRY AGAIN\n");
            goto player_2;
        }

        printf("\n\n--- Tic Tac Toe board ---\n");
        printf("\t  %c | %c | %c \n", boardSign[0], boardSign[1], boardSign[2]);
        printf("\t-------------\n");
        printf("\t  %c | %c | %c \n", boardSign[3], boardSign[4], boardSign[5]);
        printf("\t-------------\n");
        printf("\t  %c | %c | %c \n", boardSign[6], boardSign[7], boardSign[8]);

        if(boardSign[0]==boardSign[1] && boardSign[1]==boardSign[2]){
            if(boardSign[0]=='O' && boardSign[1]=='O' && boardSign[2]=='O'){
                printf("Player 2 wins. Congratulations player 2(%s), you are the winner\n", player2_name);
                break;
            }
        }else if(boardSign[3]==boardSign[4] && boardSign[4]==boardSign[5]){
            if(boardSign[3]=='O' && boardSign[4]=='O' && boardSign[5]=='O'){
                printf("Player 2 wins. Congratulations player 2(%s), you are the winner\n", player2_name);
                break;
            }
        }else if(boardSign[6]==boardSign[7] && boardSign[7]==boardSign[8]){
            if(boardSign[6]=='O' && boardSign[7]=='O' && boardSign[8]=='O'){
                printf("Player 2 wins. Congratulations player 2(%s), you are the winner\n", player2_name);
                break;
            }
        }else if(boardSign[0]==boardSign[3] && boardSign[3]==boardSign[6]){
            if(boardSign[0]=='O' && boardSign[3]=='O' && boardSign[6]=='O'){
                printf("Player 2 wins. Congratulations player 2(%s), you are the winner\n", player2_name);
                break;
            }
        }else if(boardSign[1]==boardSign[4] && boardSign[4]==boardSign[7]){
            if(boardSign[1]=='O' && boardSign[4]=='O' && boardSign[7]=='O'){
                printf("Player 2 wins. Congratulations player 2(%s), you are the winner\n", player2_name);
                break;
            }
        }else if(boardSign[2]==boardSign[5] && boardSign[5]==boardSign[8]){
            if(boardSign[2]=='O' && boardSign[5]=='O' && boardSign[8]=='O'){
                printf("Player 2 wins. Congratulations player 2(%s), you are the winner\n", player2_name);
                break;
            }
        }else if(boardSign[0]==boardSign[4] && boardSign[4]==boardSign[8]){
            if(boardSign[0]=='O' && boardSign[4]=='O' && boardSign[8]=='O'){
                printf("Player 2 wins. Congratulations player 2(%s), you are the winner\n", player2_name);
                break;
            }
        }else if(boardSign[2]==boardSign[4] && boardSign[4]==boardSign[6]){
            if(boardSign[2]=='O' && boardSign[4]=='O' && boardSign[6]=='O'){
                printf("Player 2 wins. Congratulations player 2(%s), you are the winner\n", player2_name);
                break;
            }
        }else if(board[0] != 5 && board[1] != 5 && board[2] != 5 &&
        board[3] != 5 && board[4] != 5 && board[5] != 5 &&
        board[6] != 5 && board[7] != 5 && board[8] != 5){
            printf("Draw\n");
            break;
        }
    }


    printf("\n\n---GAME END---\n\n");
    getch();    
}
