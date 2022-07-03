// print snake pattern
#include<iostream>
using namespace std;

const int R = 3, C = 4; //declaring R and C as global variables so that they aren't required to be passed as parameters

void printSnake(int mat[R][C]){
    for (int i = 0; i<R; i++){
        if (i%2==0){
            for (int j = 0; j<C; j++)
                cout<<mat[i][j]<<" ";
        }
        else{
            for (int j = C-1; j>=0; j--)
                cout<<mat[i][j]<<" ";
        }
    }
}

int main()
{
    int mat[R][C] = {1,2,3,4,5,6,7,8,9,10,11,12};
    printSnake(mat);
    return 0;
}