//
//  gameBoard.cpp
//
//  Created by Adam Abernathy on sept 8 2021
//  Copyright © 2021 Adam Abernathy. All rights reserved.
//
// game board implemntation
//

#include "myDefines.h"

//macros
using namespace std;
#define ROWS 9
#define COLUMNS 10
#define TEST_SHIPS 4

/*******************************************************************************
**
**MARK: Constructors
**
*******************************************************************************/
//default
GameBoard::GameBoard() {
    num_rows = ROWS;
    num_col = COLUMNS;
    num_ships = TEST_SHIPS;
    
    board_arr = new char*[num_rows];
    
    for (int r = 0; r<ROWS; r++) {
        board_arr[r] = new char[COLUMNS];
        for (int c = 0; c<COLUMNS; c++){
            board_arr[r][c] = col_head[11];
        }
    }
    
    
}

//with param
GameBoard::GameBoard(int p_rows, int p_cols, int p_ships) {
    num_rows = p_rows;
    num_col = p_cols;
    num_ships = p_ships;
    
    board_arr = new char*[p_rows];
    
    for (int r = 0; r<p_rows; r++) {
        board_arr[r] = new char[p_cols];
        for (int c = 0; c<p_cols; c++){
            board_arr[r][c] = col_head[11];
        }
    }
}

/*******************************************************************************
**
**MARK: Setter Methods
**
*******************************************************************************/

void GameBoard::set_rows(int row) {
    num_rows = row;
}

void GameBoard::set_col(int col) {
    num_col = col;
}

void GameBoard::set_ships(int ship) {
    num_ships = ship;
}

/*******************************************************************************
**
**MARK: Getter Methods
**
*******************************************************************************/

int GameBoard::get_rows() const{
    return num_rows;
}

int GameBoard::get_col() const{
    return num_col;
}

int GameBoard::get_ships() const{
    return num_ships;
}

/*******************************************************************************
**
**MARK: Methods
**
*******************************************************************************/

void GameBoard::printBoard() {
//    cout << "THE BOARD" << endl;
    printInstructions();
    cout << endl;
    printLegend();
    printHeader();
    //print current array
    cout << endl << "THEND BOARD" << endl;
    
}

void GameBoard::printInstructions() {
    cout << "inst line 1" << endl;
    cout << "inst line 2" << endl;
    cout << "inst line 3" << endl;
    cout << "inst line 4" << endl;
}

void GameBoard::printLegend() {
    cout << "************* LEGEND ************" << endl;
    cout << "X => HIT  O => MISS  ? => UNKNOWN" << endl;
    cout << "*********************************" << endl;
}

void GameBoard::printSquare() {
    //TODO: needs proto
}


void GameBoard::print_play(char **arr) {
    for (int r = 0; r<num_rows; r++) {
        
    }
}

void GameBoard::printHeader() {
    for (int c = 0; c<num_col; c++) {
        if (c == num_col) {
            cout << col_head[c];
            goto END;
        }
        if (c == 0){
            cout << " _ | " << col_head[c];
        } else {
            cout << " | " << col_head[c];
        }
    }
    END:
    //satisfies compiler
    cout << " | _ " << endl;
}
    
    
