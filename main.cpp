#include "iostream"
#include <vector>

using namespace std;

const int SIZE = 4;
double sumColumn( const double m[][SIZE], int rowSize, int columnIndex){
    double sum=0;
    for(int i=0; i<rowSize; i++){
        sum+=m[i][columnIndex];
    }
    return sum;
}

int main(){
    const int rows=5;
    double m[rows][SIZE]={
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20}};
    for (int i=0; i<SIZE; i++){
        cout<<"Sum of column "<<i<<" = "<<sumColumn(m, rows, i)<<endl;
    }

    return 0;
}