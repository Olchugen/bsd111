//Calculate library fine
#include <stdio.h>
int main(){
    int bookID, dueDate, returnDate, days_overdue;
    printf("Enter the  bookID, dueDate and returnDate:");
    scanf("%d%d%d",&bookID, &dueDate,&returnDate);

    days_overdue = returnDate-dueDate;
    printf("Your days_overdue are %d\n", days_overdue);



    if(days_overdue<0){
        printf("no fine required");
    }
    else if(days_overdue>0 && days_overdue<=7){
        printf("fine due Ksh 20");
    }
    else if(days_overdue>7 && days_overdue<15){
        printf("fine due Ksh 50");
    }
    else if(days_overdue>15){
        printf("fine due Ksh 100");
    }

    return 0;
}
