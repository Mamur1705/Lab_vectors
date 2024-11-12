#include "iostream"
#include <vector>

using namespace std;

const int N=4;
void multiplyMatrix(const double a[][N], const double b[][N], double c[][N]){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            double sum=0;
            for(int k=0; k<N; k++){
                sum+=a[i][k]*b[k][j];
            }
            c[i][j]=sum;
        }
    }
}
int main(){
    double m[N][N]={
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16}};

    double c[N][N]={
            {6, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16}};

    double g[N][N];
    multiplyMatrix(m, c, g);
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout<<g[i][j]<<" ";

        }
        cout<<endl;
    }

    return 0;
}