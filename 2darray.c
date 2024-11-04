#include<stdio.h>

int main(){
    int i,j;

    int marks[2][3]={
        {100,82,57},
        {78,93,62}};
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("The marks are %d\n",marks[i][j]);

        }
    }
    return 0;
}
