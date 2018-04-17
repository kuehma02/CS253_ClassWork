#include "exercise4.hpp"

int** readMatrixFromFile(const char* fileInStr, int &rows, int &cols) {
    int** matrix = NULL;
    ifstream fileIn;

    fileIn.open(fileInStr);
    if (fileIn.fail()){
        cout << "This file does not exist" << fileInStr << endl;
        exit(1);
    }

    fileIn >> rows;
    fileIn >> cols;

    matrix = new int*[rows];

    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
        for (int j = 0; j < cols; j++) {
            fileIn >> matrix[i][j];
        }
    }

    fileIn.close();
    return matrix;
}

void printMatrix(int** matrix, int rows, int cols) {
    cout << "This is a " << rows << "x" << cols << " matrix" << endl;
   
   for (int i = 0;  i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << setw(3) << matrix[i][j];
        }
        cout << endl;
    }
}

void writeMatrix(int **matrix, int rows, int cols, const char* fileOutStr) {
    ofstream fileOut;
    fileOut.open(fileOutStr);
    
    for (int i = 0;  i < rows; i++){
        for (int j = 0; j < cols; j++){
            fileOut << setw(3) << matrix[i][j];
        }
        fileOut << endl;
    }

    fileOut.close();
}


void multiplyMatrices(int** matrix1, int** matrix2, int** &result, int rows, int col_row, int cols) {
    result = new int*[rows];

    for (int i = 0; i < rows; i++) {
        result[i] = new int[cols];
        for (int j = 0; j < cols; j++) {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col_row; j++) {
            for (int k = 0; k < cols; k++) {
                result[i][k] += matrix1[i][j] * matrix2 [j][k];
            }
        }
    }
}
void deleteMatrix(int** matrix, int rows, int cols) {
    delete [] matrix;
}
