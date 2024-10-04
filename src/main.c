//Here is a C program to calculate the fine for overdue library books based on the specified requirements://


#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate, daysOverdue;
    float fineRate, fineAmount;

    // Prompt user for inputs
    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    printf("Enter Due Date (in format DDMMYYYY): ");
    scanf("%d", &dueDate);
    printf("Enter Return Date (in format DDMMYYYY): ");
    scanf("%d", &returnDate);

    // Calculate days overdue
    daysOverdue = returnDate - dueDate;

    // Determine fine rate and calculate fine amount
    if (daysOverdue <= 0) {
        printf("Congratulations, you are not charged any fine.\n");
    } else if (daysOverdue <= 7) {
        fineRate = 50.0;
        fineAmount = fineRate * daysOverdue;
        printf("Book ID: %d\nDue Date: %d\nReturn Date: %d\nDays Overdue: %d\nFine Rate: $%.2f\nFine Amount: $%.2f\n", bookID, dueDate, returnDate, daysOverdue, fineRate, fineAmount);
    } else if (daysOverdue <= 14) {
        fineRate = 100.0;
        fineAmount = fineRate * daysOverdue;
        printf("Book ID: %d\nDue Date: %d\nReturn Date: %d\nDays Overdue: %d\nFine Rate: $%.2f\nFine Amount: $%.2f\n", bookID, dueDate, returnDate, daysOverdue, fineRate, fineAmount);
    } else if (daysOverdue <= 21) {
        fineRate = 200.0;
        fineAmount = fineRate * daysOverdue;
        printf("Book ID: %d\nDue Date: %d\nReturn Date: %d\nDays Overdue: %d\nFine Rate: $%.2f\nFine Amount: $%.2f\n", bookID, dueDate, returnDate, daysOverdue, fineRate, fineAmount);
    } else {
        fineRate = 300.0;
        fineAmount = fineRate * daysOverdue;
        printf("Book ID: %d\nDue Date: %d\nReturn Date: %d\nDays Overdue: %d\nFine Rate: $%.2f\nFine Amount: $%.2f\n", bookID, dueDate, returnDate, daysOverdue, fineRate, fineAmount);
    }

    return 0;
}


//This program prompts the user to enter the book ID, due date, and return date. It then calculates the number of days overdue and determines the fine rate based on the specified rates. Finally, it calculates the fine amount and displays the results.//

	
