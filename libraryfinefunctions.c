/ calculatingthe fine for overdue library books
#include <stdio.h>

int main() {
    int bookID,dueDate, returnDate, daysOverdue, fineRate=0,
    fineAmount;
    printf("Enter the bookID");
    scanf("%d\n", &bookID);

    printf("Enter the dueDate");
    scanf("%d\n", &dueDate);

    printf("Enter the returnDate");
    scanf("%d\n", &returnDate);

    //the days overdue
    daysOverdue=returnDate-dueDate;

    if(daysOverdue=0,fineRate=0,fineRate=0)
    {
        printf("the book was returned after the due date");
    }

   else if(daysOverdue<=7)
   {
       fineRate=20;
   }

     else if(daysOverdue<=14)
   {
       fineRate=50;
   }

      else
   {
       fineRate=50;
   }
   //calculating the fine amount
   fineAmount=fineRate*daysOverdue;

   //Displaying the required information
   printf("book id: %d\n",bookID);
   printf("book due rate: %d\n",dueDate);
   printf("book Return rate: %d\n",returnDate);
   printf("days overdue: %d\n",daysOverdue);
    printf("fine rate: ksh %d\n per day\n",fineRate);
    printf("Total fineAmount: ksh %d\n",fineAmount);




    return 0;
