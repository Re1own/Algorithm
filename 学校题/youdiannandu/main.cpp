// Exercise 6.24 Part C Solution
// Knight's Tour - access version that runs one tour
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// function prototypes
void clearBoard(int workBoard[][8]);
void printBoard(int workBoard[][8]);
bool validMove(int row, int column, int workBoard[][8]);

int main(void)
{
   srand(time(NULL));

   int board[8][8]; // chess board

   // array of accesibility
   int accessibility[8][8] = {{2, 3, 4, 4, 4, 4, 3, 2},
                              {3, 4, 6, 6, 6, 6, 4, 3},
                              {4, 6, 8, 8, 8, 8, 6, 4},
                              {4, 6, 8, 8, 8, 8, 6, 4},
                              {4, 6, 8, 8, 8, 8, 6, 4},
                              {4, 6, 8, 8, 8, 8, 6, 4},
                              {3, 4, 6, 6, 6, 6, 4, 3},
                              {2, 3, 4, 4, 4, 4, 3, 2} };

   // eight horizontal and vertical moves for the knight
   int horizontal[8] = {2, 1, -1, -2, -2, -1, 1, 2};
   int vertical[8] = {-1, -2, -2, -1, 1, 2, 2, 1};


   clearBoard(board); // initialize array board

   int moveNumber = 0; // move counter
   int currentRow;
   int currentColumn;

   scanf("%d%d", &currentRow, &currentColumn);
   board[currentRow][currentColumn] = ++moveNumber;

   bool done = false;
   int minAccess = 9; // impossible access number

   // continue while knight still has valid moves
   while (!done) {
      int accessNumber = minAccess;
      int minRow; // row with minimum access number
      int minColumn; // column with minimum access number

      int moveType;

      // loop through all move types
      for (moveType = 0; moveType < 8; ++moveType) {
         int testRow = currentRow + vertical[moveType];
         int testColumn = currentColumn + horizontal[moveType];

         // make sure move is valid
         if (validMove(testRow, testColumn, board)) {

            // if move is valid and has lowest accessNumber,
            // set square to accessNumber
            if (accessibility[testRow][testColumn] < accessNumber) {
               accessNumber = accessibility[testRow][testColumn];
               minRow = testRow;
               minColumn = testColumn;
            }

            --accessibility[testRow][testColumn];
         }
      }

      // knight has no moves
      if (accessNumber == minAccess) {
         done = true;
      }
      else {
         currentRow = minRow;
         currentColumn = minColumn;
         board[currentRow][currentColumn] = ++moveNumber;
      }
   }

   printf("The tour ended with %d moves.\n", moveNumber);

   // determine and print if a full tour was made
   if (64 == moveNumber) {
      puts("This is a full tour!");
   }
   else {
      puts("This is not a full tour.");
   }

   puts("The board for this test is:");
   printBoard(board);

   return 0;
}

// function to clear chess board
void clearBoard(int workBoard[][8])
{
   int row, col;
   // set all squares to zero
   for (row = 0; row < 8; ++row) {
      for (col = 0; col < 8; ++col) {
         workBoard[row][col] = 0;
      }

   }
}

// function to print chess board
void printBoard(int workBoard[][8])
{
   int row, col;

   // print squares
   for (row = 0; row < 8; ++row) {

      for (col = 0; col < 8; ++col) {
         printf("%4d", workBoard[row][col]);
      }

      puts("");
   }

}

// function to determine if move is legal
bool validMove(int row, int column, int workBoard[][8])
{
   // NOTE: This test stops as soon as it becomes false
   return (row >= 0 && row <= 7 && column >= 0 &&
      column <= 7 && 0 == workBoard[row][column]);
}



 /*************************************************************************
 * (C) Copyright 1992-2016 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
