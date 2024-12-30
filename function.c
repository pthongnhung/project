void showRole(){
    printf("*** Bank Account Management***\n");
    printf("\n");
    printf("        CHOOSE YOUR ROLE\n");
    printf("   ==============================\n"); 
    printf("        [1]. Admin\n");
    printf("        [2]. User\n");
    printf("        [0]. Exit the Program\n");
    printf("   ==============================\n");
}
void showMenu(){
	printf("***User Management system***\n");
	printf("\n");
	printf("                MENU      \n");
	printf("   ==============================\n ");
	printf("       [1] Show All users\n");
	printf("        [2] Add A New user\n");
	printf("        [3] Lock (Unlock) an user\n"); 
	printf("        [4] Show detail an user\n");
	printf("        [5] Sort user list\n");
	printf("        [6] Search user by name\n");
	printf("        [7] Check user input data\n");
	printf("        [8] Data storage\n");
	printf("        [0] Exit The Program\n");
	printf("   ==============================\n");
}
void showUserlist(){
	printf("		------------List of user------------------		\n");
    printf("====================================================================================\n");
    printf("| %-10s | %-20s | %-20s | %-11s | %-6s |\n",
          "ID", "Name", "Email", "Phone", "Status");
    printf("====================================================================================\n");
    printf("| %-10s | %-20s | %-20s | %-11s | %-6s |\n",
	"0333928768", "Pham Thi Hong Nhung", "nhung@gmail.com", "0999888000", "open");
	printf("| %-10s | %-20s | %-20s | %-11s | %-6s |\n",
	"0333928763","Vu Thi Ngoc Huyen", "Huyen@gmail.com", "0999888777", "Lock");
    printf("====================================================================================\n");
}
void addUser(struct User users[100] ,int *userCount ){
	int gender; 
    printf("\t      Add A New User \n");
        printf("\Enter account information\n);
        printf("Enter the ID: ");
        scanf("%d", &users[*userCount].Id);
		getchar(); 
        printf("Enter the name: ");
        fgets(users[*userCount].name, sizeof(users[*userCount].name), stdin);
        users[*userCount].name[strcspn(users[*userCount].name, "\n")] = '\0';
        printf("Enter the email: ");
        fgets(users[*userCount].email, sizeof(users[*userCount].email), stdin);
        users[*userCount].email[strcspn(users[*userCount].email, "\n")] = '\0';
        printf("Enter the phone: ");
        fgets(users[*userCount].phone, sizeof(users[*userCount].phone), stdin);
        users[*userCount].phone[strcspn(users[*userCount].phone, "\n")] = '\0';
        printf("Enter the gender (1:Male, 0:Female): ");
        scanf("%d", &gender);
		getchar(); 
		if (gender == 1) {
            users[*userCount].gender = true; 
        } else if (gender == 0) {
            users[*userCount].gender = false; 
        } else {
            printf("Invalid choice. Please select again. (1:Male, 2:Female): ");
        }
        printf("Enter the date of birth:\n");
        printf("\tEnter the day:");
        scanf("%d", &users[*userCount].dateOfBirth.day);
		getchar();
        printf("\tEnter the month:");
        scanf("%d", &users[*userCount].dateOfBirth.month);
		getchar();
        printf("\tEnter the year:");
        scanf("%d", &users[*userCount].dateOfBirth.year);
		getchar();
        printf("Enter the username: ");
        fgets(users[*userCount].username, sizeof(users[*userCount].username), stdin);
        users[*userCount].username[strcspn(users[*userCount].username, "\n")] = '\0';
        printf("Enter the balance: ");
        scanf("%lf", &accountInfo[*userCount].balance);
		getchar();
		snprintf(users[*usersCount].status,sizeof(users[*userCount].status), "open");
       *length ++;
        printf("User(s) added successfully!\n");
}
