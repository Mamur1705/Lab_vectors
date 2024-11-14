#include <iostream>
using namespace std;

int board[8][8];

//2. Initializetheboard
void initializeBoard() {
   // Initialize the board with empty spaces (0)
   for (int i = 0; i < 8; i++) {
       for (int j = 0; j < 8; ++j) {
           board[i][j] = 0; // Empty
} }
   // Set up Black pieces (1) on rows 0 to 2
   for (int row = 0; row < 3; ++row) {
       for (int col = (row % 2 == 0 ? 1 : 0); col < 8; col += 2){
           board[row][col] = 1; // Black piece
       }
    }
   // Set up White pieces (2) on rows 5 to 7
   for (int row = 5; row < 8; ++row) {
       for (int col = (row % 2 == 0 ? 1 : 0); col < 8; col += 2){
           board[row][col] = 2; // White piece
       }
    }
}
//3. Displaytheboard
void displayBoard() {
   // Display top row with column letters (a to h)
   cout << "  ";  // Extra space for alignment
   for (int col = 0; col < 8; ++col) {
       cout << char('a' + col) << " ";  // Column letters (a-h)
   }
    cout << endl;
    for (int row = 0; row < 8; ++row) {
        cout<<8-row<<" "; //Rownumber(8to1)
       // Print board contents
       for (int col = 0; col < 8; ++col) {
           if (board[row][col] == 0) cout << ". ";
           // Empty space
           else if(board[row][col]==1) cout<<"B ";
           //Black piece
           else if (board[row][col] == 2) cout << "W ";  //white piece
           else if (board[row][col] == 3) cout << "BK ";
           else if (board[row][col] == 4) cout << "WK ";
       }
           cout<<8-row<<" "<<endl; //Rownumberonthe right side
}
   // Display bottom row with column letters (a to h)
   cout << "  ";  // Extra space for alignment
   for (int col = 0; col < 8; ++col) {
       cout << char('a' + col) << " ";  // Column letters (a-h)
   }
}
bool isvalidMove(int fromRow, int fromCol, int toRow, int toCol, int currentPlayer) {
    if(toRow<0 || toRow>=8 || toCol<0 || toCol>=8){
        return false;
    }
    if (board[fromRow][fromCol] == 0 || (currentPlayer == 1 &&
        board[fromRow][fromCol] != 1 && board[fromRow][fromCol] != 3) ||
        (currentPlayer == 2 && board[fromRow][fromCol] != 2 &&
        board[fromRow][fromCol] != 4)) {
        return false;
        }
    if (abs(toRow - fromRow) != abs(toCol - fromCol)) return false;
    if (abs(toRow - fromRow) == 1) {
        if (board[toRow][toCol] != 0) return false;
               return true;
    }
    if (abs(toRow - fromRow) == 2) {
        int midRow = (fromRow + toRow) / 2;
        int midCol = (fromCol + toCol) / 2;
        // Opponent piece must be in the middle
        if (currentPlayer == 1 && board[midRow][midCol] == 2) return true; // Black can capture White
        if (currentPlayer == 2 && board[midRow][midCol] == 1) return true; // White can capture Black
    }
    return false;
}
void makeMove(int fromRow, int fromCol, int toRow, int toCol) {
    // If it's a capture, we need to remove the opponent's piece
    if (abs(toRow - fromRow) == 2) {
        int midRow = (fromRow + toRow) / 2;
        int midCol = (fromCol + toCol) / 2;
        board[midRow][midCol] = 0;  // Remove the captured piece
    }
    // Move the piece to the new position
    board[toRow][toCol] = board[fromRow][fromCol];
    board[fromRow][fromCol] = 0;  // Empty the original position
    // Check for promotion to a king
    if (toRow == 0 && board[toRow][toCol] == 2) {
        board[toRow][toCol] = 4;  // White becomes a King
    } else if (toRow == 7 && board[toRow][toCol] == 1) {
        board[toRow][toCol] = 3;  // Black becomes a King
    }
}
void switchTurn(int &currentPlayer) {
    currentPlayer = (currentPlayer == 1) ? 2 : 1;
}
bool parseInput(const string& input, int &fromRow, int &fromCol,
int &toRow, int &toCol) {
       if (input.size() != 8) return false;
       if (input[2] != ' ' || input[3] != 't' || input[4] != 'o' ||
    input[5] != ' ') {
           return false;  // Invalid format (missing "to")
    }
    // Parse the starting position (e.g., "a3")
    fromCol = input[0] - 'a';
    fromRow = 8 - (input[1] - '0');

    toCol = input[6] - 'a';
    toRow = 8 - (input[7] - '0');
    return (fromRow >= 0 && fromRow < 8 && fromCol >= 0 &&
    fromCol < 8 && toRow >= 0 && toRow < 8 && toCol >= 0 && toCol < 8);
}

int main(){
    initializeBoard();  // Set up the board initially
    int currentPlayer = 1;  // Black starts first
    while (true) {
        displayBoard();
        cout << "Player " << (currentPlayer == 1 ? "Black" :
 "White") << "'s turn" << endl;
        cout << "Enter your move (e.g., a3 to b4): ";
        string input;
        getline(cin, input);

        int fromRow, fromCol, toRow, toCol;
        if (parseInput(input, fromRow, fromCol, toRow, toCol) &&
            isvalidMove(fromRow, fromCol, toRow, toCol,
 currentPlayer)) {
            makeMove(fromRow, fromCol, toRow, toCol);
            switchTurn(currentPlayer);  // Switch turns after a
 } else {
     cout << "Invalid move, try again!" << endl;
 } }
    return 0; }