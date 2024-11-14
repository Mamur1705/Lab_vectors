#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    srand(time(0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j]=1+rand()%10;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int transpose[m][n];
    cout << "Transpose: "<< endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transpose[i][j] = arr[j][i];
            cout << transpose[i][j] << " ";
        }
        cout<<endl;
    }
    return 0;
}