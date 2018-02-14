#include <stdio.h>

typedef struct {
	int ID;
	char account;
	int balance;
} BankCustomer;

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);

	BankCustomer customer[10];
	FILE*file;
	file = fopen("bank.txt", "r");

     int i;
	 for (i=0;i<10;i++) {

     fscanf(file, "%i %c %i", &customer[i].ID, &customer[i].account, &customer[i].balance);
	 }



	int checking=(customer[0].balance+ customer[3].balance + customer[8].balance)*0.33;
	int savings=(customer[1].balance+ customer[2].balance + customer[5].balance+ customer[7].balance + customer[9].balance) / 0.2;
	int deposit = (customer[4].balance+ customer[6].balance)*0.5;

    printf(" Average balance for checking accounts %i\n", checking); 
    printf(" Average balance for saving accounts %i\n", savings); 
    printf("Average balance for deposit accounts %i", deposit);   
	fclose(file);
	return 0;
}
