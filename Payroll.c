#include <stdio.h> 
#include <math.h>

int main(){
    
// variables to store values,etc. . 
int employeepaycode; //paycode must be either 1, 2, 3, 4, 5.
int mSalary;//Managers salary
int TotalManagers = 1; // for total number of managers in the case 5 summary
int TotalCommissionworkers = 1; // for total number of commission workers in the case 5 summary
int TotalPieceworkers = 1; // for total number of piece workers in the case 5 summary
int TotalHourlyworkers = 1; // for total number of hourly wage in the case 5 summary
int Hrate; //hourly workers pay per hour
int Hhours; // hours worked by hourly employees.
int hourlyworkerspay; //hourly pay rate for hourly workers
int CItem1, CItem2, CItem3; // items by the commission workers
int commissionWorkerPay; // total commision workers pay
int PItem1, PItem2, PItem3; // items by the piece workers
int pieceWorkersPay;// total for piece workers.

printf("Enter Employee Code from 1 to 5: \n"); //ask the user to input a paycode
scanf("%d", &employeepaycode); // The user will input the Paycode here.

switch(employeepaycode){
    
    
    case 1: //if the emoloyee code is 1 run this case
    printf("Enter Managers Weekly Salary: \n"); 
    scanf("%d", &mSalary);            // input manager salary here.
    printf("The total Weekly Salary for Manager is:  %d", mSalary);
    TotalManagers = TotalManagers++; // to keeo count of the total no of managers
    break;
    
    
    
    case 2: // case 2 runs incase the input paycode is 2
    printf("Enter Hourly Rate for Hourly workers: \n"); 
    scanf("%d", &Hrate); // input hourly payrate here.
    printf("Enter the number of hours worked by Hourly Employees : \n");
    scanf("%d", &Hhours); //input the number of hours.
    if (Hhours <=40){ //if hours is less than 40
        hourlyworkerspay = Hrate * Hhours;
    }else { //if hours is more than 40
        hourlyworkerspay = 40*Hrate+(Hhours-40)*Hrate*1.5; //calculations and overtime pay as asked in the question.
    }
        printf("Hourly workers pay is : %d", hourlyworkerspay);
        TotalHourlyworkers = TotalHourlyworkers++; //to keep count of Hourly workers.
    break;
    
    
    
    case 3: // case 3 incase the user inputs paycode 3
    printf("Commission workers Item 1 total : \n");
      scanf("%d", &CItem1); // input total commission workers item 1
    printf("Commission workers Item 1 total : \n");
      scanf("%d", &CItem2); // input total commission workers item 2
    printf("Commission workers Item 1 total : \n");
      scanf("%d", &CItem3); // input total commission workers item 3
    commissionWorkerPay = 250 + ( 0.057 * CItem1) + ( 0.064 * CItem2) + ( 0.072 * CItem3);
    printf("Total Payment for Commission workers is:  %d", commissionWorkerPay);
    TotalCommissionworkers = TotalCommissionworkers++; //to keep count of commission workers.
    break;
    
    
    
    case 4: // case 4 incase the user inputs paycode 4
    printf("Enter the total Item 1 produced: \n");
      scanf("%d", &PItem1); // input total items 1 produced by piece workers.
    printf("Enter the total Item 1 produced: \n");
      scanf("%d", &PItem2); // input total items 2 produced by piece workers.
    printf("Enter the total Item 1 produced: \n");
      scanf("%d", &PItem3); // input total items 3 produced by piece workers.
    pieceWorkersPay = PItem1 * 22.50 + PItem2 * 24.50 + PItem3 * 26.50; //calculations as asked in the question 
    printf("Total Payment for Piece workers is:  %d", pieceWorkersPay);
    TotalPieceworkers = TotalPieceworkers++; //to keep count of piece workers.
    break;
    
    
    
    case 5: //case to find the whole summary.
    printf("Total managers:  %d", TotalManagers);
    printf(",  Total managers Salary:  %d" , mSalary);
    
    printf("\nTotal no of Hourly Workers:  %d", TotalHourlyworkers);
    printf(",  Total Hourly workers Salary:  %d" , hourlyworkerspay);
    
    printf("\nTotal no of Piece Workers:  %d", TotalCommissionworkers);
    printf(",  Total Piece Workers Salary:  %d" , commissionWorkerPay);
    
    printf("\nTotal no of Piece Workers:  %d", TotalPieceworkers);
    printf(",  Total Piece Workers Salary:  %d" , pieceWorkersPay);
    break;
    
}
return 0;

}