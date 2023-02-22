#include<stdio.h>
#include<math.h>
void  quadraticEquation(){
	float  a,b,c; 
    printf("Enter a, b, c\n"); 
    scanf ("%f%f%f", &a,&b,&c); 
    // kiem tra cac he so
    if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh vo nghiem!");
        } else {
            printf("Phuong trinh co mot nghiem: x = %f", (-c / b));
        }
        return;
    }
    // tinh delta
    float delta = b*b - 4*a*c;
    float x1;
    float x2;
    // tinh nghiem
    if (delta > 0) {
        x1 = (float) ((-b + sqrt(delta)) / (2*a));
        x2 = (float) ((-b - sqrt(delta)) / (2*a));
        printf("Phuong trinh co 2 nghiem la: x1 = %.2f va x2 = %.2f", x1, x2);
    } else if (delta == 0) {
        x1 = (-b / (2 * a));
        printf("Phong trinh co nghiem kep: x1 = x2 = %.2f", x1);
    } else {
        printf("Phuong trinh vo nghiem!");
    }
}
int bankDepositProblem(){
	int month,i;
	float deposits, interest, interestRates;
	printf("Enter deposits: ");
	scanf("%f",&deposits);
	nhapLai:
	printf("Enter deposits interest rates :");
	scanf("%f",&interestRates);
	if(interestRates<=0.11){
		printf("Eter the month of deposit: ");
		scanf("%d",&month);
		interest=deposits*interestRates*month;
		deposits+=interest;
		printf("Deposit received is %.2f\n",deposits);
	}	goto nhapLai;	
}
int main(){
	int option;
do {
	printf("\n######## MENU ########\n");
	printf("1.Quadratic equation\n");
	printf("2.Bank deposit problem\n");
	printf("3.Quit\n");
	scanf("%d",&option);
	switch(option){
		case 1:
		quadraticEquation();
		break;	
		case 2:
		bankDepositProblem();
		break;	
	    case 3:
	    	return 0;
	default:
		printf("Enter 1 to 3!");
	}
	
}while (option>0 || option<=3);
}

