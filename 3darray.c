#include<stdio.h>

int main(){
    int i,j,k;
    int marks[2][2][3]={
        {{105,91,37},{42,75,68}},
        {{78,83,60},{68,75,80}}
    };
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<3;k++){
                printf("The marks are %d\n",marks[i][j][k]);
            }
        }
    }
    return 0;
}

