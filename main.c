#include <stdio.h>
#include <stdlib.h>
#include "function.h" 


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct User users[100];

int main(int argc, char *argv[]) {
	int choice;
	int choose; 
	int userCount=2; 
	do{
		showRole();
		printf("   Enter the choice: ");
		scanf("%d",&choice);
		switch(choice!=0){
			case 1:
				do{
					showMenu();
					printf("   Enter the choice: ");
					scanf("%d",&choose);
					switch(choose){
						case 1:
							showUserlist();
						break; 
						case 2:
							addUser(users ,&userCount);
						break; 
					}
				}while(choose!=0);
				
			break; 
			default:
			printf("Loi vui long nhap lai!!!\n");
		}
	}while(choice!=0);
	return 0;
}
