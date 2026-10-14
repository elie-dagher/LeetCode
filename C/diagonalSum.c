
/*
To calculate the sum of the diagonal, first if there is an overlap we will subtract the value to ensure we count dont overlap and double count a cell. Iterate through the diagonal of the 
matrix with indexing, left to right being value_ii and from right to left being value_ij. with j being the top right (matrixsize - 1)
*/
int diagonalSum(int** mat, int matSize, int* matColSize) {
    int res = 0;
    
    int j = matSize - 1;
    for (int i = 0; i < matSize; i++){
        if (i == j) res -= mat[i][i];
        res += mat[i][i];
        res += mat[i][j--];
    }
    
    return res;
}