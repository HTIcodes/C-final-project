#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include<time.h>

struct user{

    char name[50];
    char family[50];
    char national_id[50];
    char username[50];
    char password[50];
    char phone[50];
    char email[50];
    char login_time[100];
    char logout_time[100];

    struct user *next;

};

struct admin{

    char name[50];
    char family[50];
    char national_id[50];
    char username[50];
    char password[50];
    char phone[50];
    char email[50];

    struct admin *next;

};

struct apartment{

    int no;
    int municipal_area;
    char address[200];
    int age;
    int substruction;
    int floor;
    int land;
    char phone[50];
    int bedroom;
    int price;
    int status;
    char registration_date[100];
    char sale_date[100];
    char registerar_uname[50];
    char seller_uname[50];

    struct apartment *next;

};

struct house{

    int no;
    int municipal_area;
    char address[200];
    int age;
    int substruction;
    int floor;
    int land;
    char phone[50];
    int bedroom;
    int price;
    int status;
    char registration_date[100];
    char sale_date[100];
    char registerar_uname[50];
    char seller_uname[50];

    struct house *next;

};

struct commercial{

    int no;
    int municipal_area;
    char address[200];
    char document[50];
    int age;
    int substruction;
    int floor;
    int land;
    char phone[50];
    int room;
    int price;
    int status;
    char registration_date[100];
    char sale_date[100];
    char registerar_uname[50];
    char seller_uname[50];

    struct Commercial *next;


};

struct land{

    int no;
    int municipal_area;
    char address[200];
    char type[50];
    char phone[50];
    int meterage;
    int price;
    int status;
    char registration_date[100];
    char sale_date[100];
    char registerar_uname[50];
    char seller_uname[50];

    struct land *next;

};

struct rent_apartment{

    int no;
    int municipal_area;
    char address[200];
    int age;
    int substruction;
    int floor;
    int land;
    char phone[50];
    int bedroom;
    int mortgage_price;
    int rent_price;
    int status;
    char registration_date[100];
    char sale_date[100];
    char registerar_uname[50];
    char seller_uname[50];

    struct rent_apartment *next;

};

struct rent_house{

    int no;
    int municipal_area;
    char address[200];
    int age;
    int substruction;
    int floor;
    int land;
    char phone[50];
    int bedroom;
    int mortgage_price;
    int rent_price;
    int status;
    char registration_date[100];
    char sale_date[100];
    char registerar_uname[50];
    char seller_uname[50];

    struct rent_house *next;

};

struct rent_commercial{

    int no;
    int municipal_area;
    char address[200];
    char document[50];
    int age;
    int substruction;
    int floor;
    int land;
    char phone[50];
    int room;
    int mortgage_price;
    int rent_price;
    int status;
    char registration_date[100];
    char sale_date[100];
    char registerar_uname[50];
    char seller_uname[50];

    struct rent_commercial *next;

};

struct rent_land{

    int no;
    int municipal_area;
    char address[200];
    char type[50];
    char phone[50];
    int meterage;
    int mortgage_price;
    int rent_price;
    int status;
    char registration_date[100];
    char sale_date[100];
    char registerar_uname[50];
    char seller_uname[50];

    struct rent_land *next;

};

/*functions*/
void line();
void line_2();
void line_usermenu();
int validate_admin(char uname[],char pass[]);
int validate_admin2(char uname[],char pass[]);
int validate_user(char username[],char password[]);
void star_password(char password[]);
int check_password(char password[]);
int check_phone_number(char phone[]);
int check_national_id(char id[]);
int check_username(char uname[]);
int check_email(char email[]);
void encrypt_password(char password[],int key);
void decrypt_password(char password[],int key);
void register_user();
void add_admin();
void setting_user(char uname[]);
void change_user_name_family(char uname[]);
void change_user_password(char uname[]);
void change_user_email(char uname[]);
void change_login_user_time(char uname[]);
void change_logout_user_time(char uname[]);
void monitor_user();
void user_activity_sale_apartment();
void user_activity_sale_house();
void user_activity_sale_commercial();
void user_activity_sale_land();
void user_activity_rent_apartment();
void user_activity_rent_house();
void user_activity_rent_commercial();
void user_activity_rent_land();
void total_price_available_sale_apartment();
void total_price_available_sale_house();
void total_price_available_sale_commercial();
void total_price_available_sale_land();
void total_price_available_rent_apartment();
void total_price_available_rent_house();
void total_price_available_rent_commercial();
void total_price_available_rent_land();
void sold_filter_date_sale_apartment();
void sold_filter_date_sale_house();
void sold_filter_date_sale_commercial();
void sold_filter_date_sale_land();
void sold_filter_date_rent_apartment();
void sold_filter_date_rent_house();
void sold_filter_date_rent_commercial();
void sold_filter_date_rent_land();
void add_sale_apartment(char uname[]);
void add_sale_house(char uname[]);
void add_sale_commercial(char uname[]);
void add_sale_land(char uname[]);
void add_rent_apartment(char uname[]);
void add_rent_house(char uname[]);
void add_rent_commercial(char uname[]);
void add_rent_land(char uname[]);
int auto_id_add_sale_apartment();
int auto_id_add_sale_house();
int auto_id_add_sale_commercial();
int auto_id_add_sale_land();
int auto_id_add_rent_apartment();
int auto_id_add_rent_house();
int auto_id_add_rent_commercial();
int auto_id_add_rent_land();
void show_sale_apartment();
void show_sale_house();
void show_sale_commercial();
void show_rent_apartment();
void show_rent_house();
void show_rent_commercial();
void show_rent_land();
void remove_sale_apartment(char uname[]);
void remove_sale_house(char uname[]);
void remove_sale_commercial(char uname[]);
void remove_sale_land(char uname[]);
void remove_rent_apartment(char uname[]);
void remove_rent_house(char uname[]);
void remove_rent_commercial(char uname[]);
void remove_rent_land(char uname[]);
void filter_sale_apartment();
void filter_sale_house();
void filter_sale_commercial();
void filter_sale_land();
void filter_rent_apartment();
void filter_rent_house();
void filter_rent_commercial();
void filter_rent_land();
/*functions*/

void main()
{
    int choice,choice2,choice3,choice4,choice5,choice6,choice7,choice8,choice9,choice10,choice11,choice12,choice13,choice14,choice15,choice16,choice17,choice18,choice19;

    char uname[50];
    char pass[50];
    char admin_uname[50];
    char admin_pass[50];


    do{
        system("cls");
        line();
        printf("\n\t\tLOGIN MENU\n");
        line();
        printf("\n\n1. Login As An Admin ");
        printf("\n2. Login As An User");
        printf("\n3. Register A New User ");
        printf("\n0. EXIT");

        printf("\n\n>>> Enter One Option : ");
        scanf("%d", &choice);

        switch(choice){

            case 1:
                    line_2();
                    printf("Please Enter username : ");
                    fflush(stdin);
                    gets(admin_uname);
                    printf("Please Enter password : ");
                    fflush(stdin);
                    star_password(admin_pass);
                    if(validate_admin2(admin_uname,admin_pass)!=0 || validate_admin(admin_uname,admin_pass)!=0){

                            do{
                                system("cls");
                                line();
                                printf("\n\t\tADMIN MENU\n");
                                line();
                                printf("\n1.Monitor Users");
                                printf("\n2.Total Price Of Available-Properties");
                                printf("\n3.Sold-Properties Filter By Date");
                                printf("\n4.Add New Admin");
                                printf("\n0.sign out");
                                printf("\n\n>>> Enter One Option : ");
                                scanf("%d", &choice2);

                                switch(choice2){

                                    case 1:
                                            do{
                                                system("cls");
                                                line();
                                                printf("\n\t\tADMIN MENU\n");
                                                line();
                                                printf("\n1.login And Logout Users Time");
                                                printf("\n2.Users Activity");
                                                printf("\n0.back");
                                                printf("\n\n>>> Enter One Option : ");
                                                scanf("%d", &choice12);

                                                switch(choice12){
                                                    case 1:
                                                        monitor_user();
                                                        break;
                                                    case 2:
                                                            do{
                                                                system("cls");
                                                                line();
                                                                printf("\n\t\tADMIN MENU\n");
                                                                line();
                                                                printf("\n1.user activity in sale-apartment");
                                                                printf("\n2.user activity in sale-house");
                                                                printf("\n3.user activity in sale-commercail");
                                                                printf("\n4.user activity in sale-land");
                                                                printf("\n5.user activity in rent-apartment");
                                                                printf("\n6.user activity in rent-house");
                                                                printf("\n7.user activity in rent-commercial");
                                                                printf("\n8.user activity in rent-land");
                                                                printf("\n0.back");
                                                                printf("\n\n>>> Enter One Option : ");
                                                                scanf("%d", &choice13);

                                                                switch(choice13){

                                                                    case 1:
                                                                        user_activity_sale_apartment();
                                                                        break;
                                                                    case 2:
                                                                        user_activity_sale_house();
                                                                        break;
                                                                    case 3:
                                                                        user_activity_sale_commercial();
                                                                        break;
                                                                    case 4:
                                                                        user_activity_sale_land();
                                                                        break;
                                                                    case 5:
                                                                        user_activity_rent_apartment();
                                                                        break;
                                                                    case 6:
                                                                        user_activity_rent_house();
                                                                        break;
                                                                    case 7:
                                                                        user_activity_rent_commercial();
                                                                        break;
                                                                    case 8:
                                                                        user_activity_rent_land();
                                                                        break;
                                                                }
                                                            }while(choice13!=0);
                                                        break;
                                                }
                                            }while(choice12!=0);
                                            break;

                                        case 2:
                                            do{
                                                system("cls");
                                                line();
                                                printf("\n\t\tADMIN MENU\n");
                                                line();
                                                printf("\n1.Total Price Available sale-apartment");
                                                printf("\n2.Total Price Available sale-house");
                                                printf("\n3.Total Price Available sale-commercail");
                                                printf("\n4.Total Price Available sale-land");
                                                printf("\n5.Total Price Available rent-apartment");
                                                printf("\n6.Total Price Available rent-house");
                                                printf("\n7.Total Price Available rent-commercial");
                                                printf("\n8.Total Price Available rent-land");
                                                printf("\n0.back");
                                                printf("\n\n>>> Enter One Option : ");
                                                scanf("%d", &choice14);

                                                switch(choice14){

                                                    case 1:
                                                            total_price_available_sale_apartment();
                                                            break;
                                                    case 2:
                                                            total_price_available_sale_house();
                                                            break;
                                                    case 3:
                                                            total_price_available_sale_commercial();
                                                            break;
                                                    case 4:
                                                            total_price_available_sale_land();
                                                            break;
                                                    case 5:
                                                            total_price_available_rent_apartment();
                                                            break;
                                                    case 6:
                                                            total_price_available_rent_house();
                                                            break;
                                                    case 7:
                                                            total_price_available_rent_commercial();
                                                            break;
                                                    case 8:
                                                            total_price_available_rent_land();
                                                            break;
                                                }
                                            }while(choice14!=0);
                                            break;

                                        case 3:
                                            do{
                                               system("cls");
                                                line();
                                                printf("\n\t\tADMIN MENU\n");
                                                line();
                                                printf("\n1.Sold Filter By Date Sale-Apartment");
                                                printf("\n2.Sold Filter By Date Sale-House");
                                                printf("\n3.Sold Filter By Date Sale-Commercial");
                                                printf("\n4.Sold Filter By Date Sale-Land");
                                                printf("\n5.Sold Filter By Date Rent-Apartment");
                                                printf("\n6.Sold Filter By Date Rent-House");
                                                printf("\n7.Sold Filter By Date Rent-Commercial");
                                                printf("\n8.Sold Filter By Date Rent-Land");
                                                printf("\n0.back");
                                                printf("\n\n>>> Enter One Option : ");
                                                scanf("%d", &choice15);

                                                switch(choice15){

                                                    case 1:
                                                            sold_filter_date_sale_apartment();
                                                            break;
                                                    case 2:
                                                            sold_filter_date_sale_house();
                                                            break;
                                                    case 3:
                                                            sold_filter_date_sale_commercial();
                                                            break;
                                                    case 4:
                                                            sold_filter_date_sale_land();
                                                            break;
                                                    case 5:
                                                            sold_filter_date_rent_apartment();
                                                            break;
                                                    case 6:
                                                            sold_filter_date_rent_house();
                                                            break;
                                                    case 7:
                                                            sold_filter_date_rent_commercial();
                                                            break;
                                                    case 8:
                                                            sold_filter_date_rent_land();
                                                            break;
                                                }
                                            }while(choice15!=0);
                                            break;
                                    case 4:
                                        add_admin();
                                        break;

                                }

                            }while(choice2!=0);
                    }
                    else{
                        printf("\nInvalid Username or Password. Try Again\n");
                        system("pause");
                    }
                    break;

            case 2:
                    line_2();
                    printf("Please Enter Username : ");
                    fflush(stdin);
                    gets(uname);
                    printf("Please Enter password : ");
                    star_password(pass);

                    if(validate_user(uname,pass)){

                            change_login_user_time(uname);
                            do{
                                system("cls");
                                printf("\t\tWELCOME %s\n",uname);
                                line_usermenu();
                                printf("\n1.Add New Case");
                                printf("\n2.Remove case");
                                printf("\n3.records");
                                printf("\n4.setting");
                                printf("\n0.sign out");
                                printf("\n\n>>> Enter One Option : ");
                                scanf("%d", &choice3);

                                switch(choice3){

                                    case 1:
                                            do{
                                                system("cls");
                                                line_usermenu();
                                                printf("\n1.Add case for sale");
                                                printf("\n2.Add case for rent");
                                                printf("\n0.back");
                                                printf("\n\n>>> Enter One Option : ");
                                                scanf("%d", &choice4);

                                                switch(choice4){

                                                    case 1:
                                                        do{
                                                            system("cls");
                                                            line_usermenu();
                                                            printf("\n1.Add Residential Property");
                                                            printf("\n2.Add Commercial property");
                                                            printf("\n3.Add land");
                                                            printf("\n0.back");
                                                            printf("\n\n>>> Enter One Option : ");
                                                            scanf("%d", &choice5);

                                                            switch(choice5){

                                                                case 1:
                                                                    do{
                                                                        system("cls");
                                                                        line_usermenu();
                                                                        printf("\n1.Add Apartment");
                                                                        printf("\n2.Add House");
                                                                        printf("\n0.back");
                                                                        printf("\n\n>>> Enter One Option : ");
                                                                        scanf("%d", &choice6);

                                                                        switch(choice6){

                                                                            case 1:
                                                                                add_sale_apartment(uname);
                                                                                break;
                                                                            case 2:
                                                                                add_sale_house(uname);
                                                                                break;

                                                                        }

                                                                    }while(choice6!=0);

                                                                    break;
                                                                case 2:
                                                                    add_sale_commercial(uname);
                                                                    break;
                                                                case 3:
                                                                    add_sale_land(uname);
                                                                    break;
                                                            }
                                                        }while(choice5!=0);

                                                        break;

                                                    case 2:
                                                        do{
                                                                system("cls");
                                                                line_usermenu();
                                                                printf("\n1.Add Residential Property");
                                                                printf("\n2.Add Commercial property");
                                                                printf("\n3.Add land");
                                                                printf("\n0.back");
                                                                printf("\n\n>>> Enter One Option : ");
                                                                scanf("%d",&choice7);

                                                                switch(choice7)
                                                                {
                                                                    case 1:
                                                                        do{
                                                                                system("cls");
                                                                                line_usermenu();
                                                                                printf("\n1.Add Apartment");
                                                                                printf("\n2.Add House");
                                                                                printf("\n0.back");
                                                                                printf("\n\n>>> Enter One Option : ");
                                                                                scanf("%d",&choice8);

                                                                                switch(choice8)
                                                                                {
                                                                                    case 1:
                                                                                        add_rent_apartment(uname);
                                                                                        break;
                                                                                    case 2:
                                                                                        add_rent_house(uname);
                                                                                        break;
                                                                                }
                                                                        }while(choice8!=0);
                                                                        break;
                                                                    case 2:
                                                                        add_rent_commercial(uname);
                                                                        break;
                                                                    case 3:
                                                                        add_rent_land(uname);
                                                                        break;
                                                                }

                                                        }while(choice7!=0);
                                                        break;

                                                }

                                                }while(choice4!=0);
                                        break;
                                    case 2:
                                        do{
                                            system("cls");
                                            line_usermenu();
                                            printf("\n1.Remove sale-apartment Case");
                                            printf("\n2.Remove sale-house Case");
                                            printf("\n3.Remove sale-commercial property Case");
                                            printf("\n4.Remove sale-land Case");
                                            printf("\n5.Remove rent-apartment Case");
                                            printf("\n6.Remove rent-house Case");
                                            printf("\n7.Remove rent-commercial property Case");
                                            printf("\n8.Remove rent-land Case");
                                            printf("\n0.back");

                                            printf("\n\n>>> Enter One Option : ");
                                            scanf("%d",&choice11);

                                            switch(choice11){

                                                    case 1:
                                                        remove_sale_apartment(uname);
                                                        break;
                                                    case 2:
                                                        remove_sale_house(uname);
                                                        break;
                                                    case 3:
                                                        remove_sale_commercial(uname);
                                                        break;
                                                    case 4:
                                                        remove_sale_land(uname);
                                                        break;
                                                    case 5:
                                                        remove_rent_apartment(uname);
                                                        break;
                                                    case 6:
                                                        remove_rent_house(uname);
                                                        break;
                                                    case 7:
                                                        remove_rent_commercial(uname);
                                                        break;
                                                    case 8:
                                                        remove_rent_land(uname);
                                                        break;

                                                }
                                            }while(choice11!=0);
                                        break;
                                    case 3:
                                        do{
                                            system("cls");
                                            line_usermenu();
                                            printf("\n1.showing cases");
                                            printf("\n2.Filter cases");
                                            printf("\n0.back");
                                            printf("\n\n>>> Enter One Option : ");
                                            scanf("%d",&choice9);

                                            switch(choice9){

                                                case 1:
                                                    do{
                                                        system("cls");
                                                        line_usermenu();
                                                        printf("\n1.sale apartment");
                                                        printf("\n2.sale house");
                                                        printf("\n3.sale commercial property");
                                                        printf("\n4.sale land");
                                                        printf("\n5.rent apartment");
                                                        printf("\n6.rent house");
                                                        printf("\n7.rent commercial property");
                                                        printf("\n8.rent land");
                                                        printf("\n0.back");

                                                        printf("\n\n>>> Enter One Option : ");
                                                        scanf("%d",&choice10);

                                                        switch(choice10){

                                                            case 1:
                                                                show_sale_apartment();
                                                                break;
                                                            case 2:
                                                                show_sale_house();
                                                                break;
                                                            case 3:
                                                                show_sale_commercial();
                                                                break;
                                                            case 4:
                                                                show_sale_land();
                                                                break;
                                                            case 5:
                                                                show_rent_apartment();
                                                                break;
                                                            case 6:
                                                                show_rent_house();
                                                                break;
                                                            case 7:
                                                                show_rent_commercial();
                                                                break;
                                                            case 8:
                                                                show_rent_land();
                                                                break;

                                                        }
                                                    }while(choice10!=0);
                                                    break;
                                                case 2:
                                                    do{
                                                        system("cls");
                                                        line_usermenu();
                                                        printf("\n1.sale apartment");
                                                        printf("\n2.sale house");
                                                        printf("\n3.sale commercial property");
                                                        printf("\n4.sale land");
                                                        printf("\n5.rent apartment");
                                                        printf("\n6.rent house");
                                                        printf("\n7.rent commercial property");
                                                        printf("\n8.rent land");
                                                        printf("\n0.back");

                                                        printf("\n\n>>> Enter One Option : ");
                                                        scanf("%d",&choice16);

                                                        switch(choice16){

                                                            case 1:
                                                                filter_sale_apartment();
                                                                break;
                                                            case 2:
                                                                filter_sale_house();
                                                                break;
                                                            case 3:
                                                                filter_sale_commercial();
                                                                break;
                                                            case 4:
                                                                filter_sale_land();
                                                                break;
                                                            case 5:
                                                                filter_rent_apartment();
                                                                break;
                                                            case 6:
                                                                filter_rent_house();
                                                                break;
                                                            case 7:
                                                                filter_rent_commercial();
                                                                break;
                                                            case 8:
                                                                filter_rent_land();
                                                                break;

                                                        }
                                                    }while(choice16!=0);
                                                    break;

                                            }

                                        }while(choice9!=0);
                                        break;
                                    case 4:
                                        setting_user(uname);
                                        break;

                                }

                            }while(choice3!=0);
                            change_logout_user_time(uname);
                    }
                    else{
                        printf("\nInvalid Username or Password. Try Again\n");
                        system("pause");
                    }

                    break;
            case 3:

                    register_user();
                    system("pause");

                    break;

        }

    }while(choice!=0);
}

void line()
{
	int i;
    for( i=0; i<50; i++){
        printf("-");
        usleep(70);
    }
}

void line_2()
{
    int i;
    printf("\n");
    for(i=0;i<50;i++){
        printf("=");
        usleep(70);
    }
    printf("\n");
    printf("\n");
}

void line_usermenu()
{
    int i;
    char usermenu[100] = "====================USER MENU====================";
    printf("\n");
    for(i=0;i<strlen(usermenu);i++){
        printf("%c",usermenu[i]);
        usleep(70);
    }
    printf("\n");

}
int validate_admin(char uname[],char pass[])
{
    if(strcmp(uname,"ADMIN")==0 && strcmp(pass,"NEWADMIN")== 0 ){
        return 1;
    }
    else{
        return 0;
    }
}

int validate_user(char uname[],char pass[])
{
    struct user *head = NULL, *temp = NULL, *last = NULL;
    struct user u;

    FILE *fp = fopen("profile.txt","r");

    while(fread(&u,sizeof(struct user),1,fp)){

        temp = malloc(sizeof(struct user));

        strcpy(temp->name,u.name);
        strcpy(temp->family,u.family);
        strcpy(temp->national_id,u.national_id);
        strcpy(temp->username,u.username);
        decrypt_password(u.password,0xFACA);
        strcpy(temp->password,u.password);
        strcpy(temp->email,u.email);
        strcpy(temp->phone,u.phone);
        strcpy(temp->login_time,u.login_time);
        strcpy(temp->logout_time,u.logout_time);

        if(head==NULL){
            head = temp;
            head->next = NULL;
            last = head;
        }
        else{
            last->next = temp;
            last = temp;
            last->next = NULL;
        }
    }
    fclose(fp);

    temp = head;
    while(temp != NULL){

        if(strcmp(temp->username,uname)==0 && strcmp(temp->password,pass)==0){
            return 1;
        }
        temp = temp->next;
    }

    return 0;
}

void star_password(char password[])
{
    int i=0;
    char ch;

    // 13 is ASCII code of 'enter' button.
    while(1){
        ch = getch();
        if(ch == 13){
            password[i] = '\0';
            break;
        }
        else
        // 8 is ASCII code of 'backspace' button.
            if(ch == 8){
                if(i>0){
                    i--;
                    printf("\b \b");//set cursor back while deleting one item.
                }
            }
        else{
            password[i++] = ch;
            printf("* \b");
        }
    }
}

void encrypt_password(char password[],int key)
{
    int i;
    for(i=0; i<strlen(password); i++){

        password[i] = password[i] - key;
    }
}

void decrypt_password(char password[],int key)
{
    int i;
    for(i=0; i<strlen(password); i++){

        password[i] = password[i] + key;
    }
}

void register_user()
{

    struct user u;

    line_2();

    printf("Please Enter name : ");
    fflush(stdin);
    gets(u.name);
    printf("Please Enter family name : ");
    fflush(stdin);
    gets(u.family);

    do{
        printf("Please Enter National Id : ");
        fflush(stdin);
        gets(u.national_id);
    }while(check_national_id(u.national_id) == 0);

    do{
        printf("Please Enter username : ");
        fflush(stdin);
        gets(u.username);
    }while(check_username(u.username) == 0);

    do{
    printf("Please Enter password : ");
    star_password(u.password);
    }while(check_password(u.password) == 0);

    encrypt_password(u.password,0xFACA);//it's better to pass key to function in hex.

    do{
        printf("\n");
        printf("Please Enter phone number : ");
        fflush(stdin);
        gets(u.phone);

    }while(check_phone_number(u.phone) == 0);

    do{
        printf("Please Enter email : ");
        fflush(stdin);
        gets(u.email);
    }while(check_email(u.email) == 0);

    struct tm *ptr;
    time_t t;

    t = time(NULL);
    ptr = localtime(&t);

    strftime(u.login_time,100,"%c",ptr);
    strftime(u.logout_time,100,"%c",ptr);

    FILE *fp = fopen("profile.txt","a");

    fwrite(&u,sizeof(struct user),1,fp);


    fclose(fp);

    printf("\nAccount Created Successfuly . Don't share your username and password with anyone!\n");


}

void add_admin()
{
    struct admin u;

    line_2();

    printf("Please Enter name : ");
    fflush(stdin);
    gets(u.name);
    printf("Please Enter family name : ");
    fflush(stdin);
    gets(u.family);

    do{
        printf("Please Enter National Id : ");
        fflush(stdin);
        gets(u.national_id);
    }while(check_national_id(u.national_id) == 0);

    do{
        printf("Please Enter username : ");
        fflush(stdin);
        gets(u.username);
    }while(check_username(u.username) == 0);

    do{
    printf("Please Enter password : ");
    star_password(u.password);
    }while(check_password(u.password) == 0);

    encrypt_password(u.password,0xFACA);//it's better to pass key to function in hex.

    do{
        printf("\n");
        printf("Please Enter phone number : ");
        fflush(stdin);
        gets(u.phone);

    }while(check_phone_number(u.phone) == 0);

    do{
        printf("Please Enter email : ");
        fflush(stdin);
        gets(u.email);
    }while(check_email(u.email) == 0);


    FILE *fp = fopen("admin_profile.txt","a");

    fwrite(&u,sizeof(struct admin),1,fp);


    fclose(fp);

    printf("\nAccount Created Successfuly . Don't share your username and password with anyone!\n");
    system("pause");
}

int validate_admin2(char uname[],char pass[])
{
    struct admin *head = NULL, *temp = NULL, *last = NULL;
    struct admin u;

    FILE *fp = fopen("admin_profile.txt","r");

    while(fread(&u,sizeof(struct admin),1,fp)){

        temp = malloc(sizeof(struct admin));

        strcpy(temp->name,u.name);
        strcpy(temp->family,u.family);
        strcpy(temp->national_id,u.national_id);
        strcpy(temp->username,u.username);
        decrypt_password(u.password,0xFACA);
        strcpy(temp->password,u.password);
        strcpy(temp->email,u.email);
        strcpy(temp->phone,u.phone);

        if(head==NULL){
            head = temp;
            head->next = NULL;
            last = head;
        }
        else{
            last->next = temp;
            last = temp;
            last->next = NULL;
        }
    }
    fclose(fp);

    temp = head;
    while(temp != NULL){

        if(strcmp(temp->username,uname)==0 && strcmp(temp->password,pass)==0){
            return 1;
        }
        temp = temp->next;
    }

    return 0;
}

void setting_user(char uname[])
{

    int opt;

    do{
        system("cls");
        line();
        printf("\n\t\tSETTING MENU\n");
        line();

        printf("\n1.Change Name and Family-Name");
        printf("\n2.Change Password");
        printf("\n3.Change Email");
        printf("\n0.back");

        printf("\n\n>>> Enter One Option : ");
        scanf("%d",&opt);

        switch(opt)
        {
            case 1:
                change_user_name_family(uname);
                break;
            case 2:
                change_user_password(uname);
                break;
            case 3:
                change_user_email(uname);
                break;
        }

    }while(opt!=0);

}

void change_login_user_time(char uname[])
{
    struct tm *ptr;
    time_t t;

    FILE *fp, *fp1;
    struct user u;


    fp = fopen("profile.txt","r");
    fp1 = fopen("TempProfile.txt","w");

    while(fread(&u,sizeof(struct user),1,fp)!=0){


        if(strcmp(uname,u.username)==0){

            t = time(NULL);
            ptr = localtime(&t);

            strftime(u.login_time,100,"%c",ptr);

        }

        fwrite(&u,sizeof(struct user),1,fp1);

    }
    fclose(fp);
    fclose(fp1);

    fp1 = fopen("TempProfile.txt","r");
    fp = fopen("profile.txt","w");

    while(fread(&u,sizeof(struct user),1,fp1)!=0){


        fwrite(&u,sizeof(struct user),1,fp);

    }
    fclose(fp1);
    fclose(fp);

}

void change_logout_user_time(char uname[])
{
    struct tm *ptr;
    time_t t;

    FILE *fp, *fp1;
    struct user u;


    fp = fopen("profile.txt","r");
    fp1 = fopen("TempProfile.txt","w");

    while(fread(&u,sizeof(struct user),1,fp)!=0){


        if(strcmp(uname,u.username)==0){

            t = time(NULL);
            ptr = localtime(&t);

            strftime(u.logout_time,100,"%c",ptr);

        }

        fwrite(&u,sizeof(struct user),1,fp1);

    }
    fclose(fp);
    fclose(fp1);

    fp1 = fopen("TempProfile.txt","r");
    fp = fopen("profile.txt","w");

    while(fread(&u,sizeof(struct user),1,fp1)!=0){


        fwrite(&u,sizeof(struct user),1,fp);

    }
    fclose(fp1);
    fclose(fp);

}

void monitor_user()
{
    FILE *fp;
    struct user u;
    fp = fopen("profile.txt","r");

    while(fread(&u,sizeof(struct user),1,fp)!=0){

        line_2();
        printf("\n\nUser %s %s With User-name %s With National-Id %s Logged In At %s And Signed Out At %s\n\n",u.name,u.family,u.username,u.national_id,u.login_time,u.logout_time);

    }
    printf("\n");
    system("pause");

}

void add_sale_apartment(char uname[])
{
    struct tm *ptr;
    time_t t;
    struct apartment ap;

    line_2();

    ap.no = auto_id_add_sale_apartment();

    printf("Please Enter The Municipal Area : ");
    fflush(stdin);
    scanf("%d",&ap.municipal_area);


    printf("Please Enter The Address : ");
    fflush(stdin);
    gets(ap.address);


    printf("Please Enter The Age Of The Apartment : ");
    fflush(stdin);
    scanf("%d",&ap.age);


    printf("Please Enter The Size Of Substruction Area : ");
    fflush(stdin);
    scanf("%d",&ap.substruction);


    printf("Please Enter The Floor : ");
    fflush(stdin);
    scanf("%d",&ap.floor);


    printf("Please Enter The Size Of The Land : ");
    fflush(stdin);
    scanf("%d",&ap.land);


    printf("Please Enter Owner Phone Number : ");
    fflush(stdin);
    gets(ap.phone);


    printf("Please Enter The Amount Of Bedrooms : ");
    fflush(stdin);
    scanf("%d",&ap.bedroom);


    printf("Please Enter The Price($) : ");
    fflush(stdin);
    scanf("%d",&ap.price);

    ap.status = 1;// 1 means available and 0 means not available.

    t = time(NULL);
    ptr = localtime(&t);

    strftime(ap.registration_date,100,"%x",ptr);
    strftime(ap.sale_date,100,"%x",ptr);

    strcpy(ap.registerar_uname,uname);
    strcpy(ap.seller_uname,uname);


    FILE *fp = fopen("sale_apartment.txt","a");

    fwrite(&ap,sizeof(struct apartment),1,fp);

    fclose(fp);

    printf("\nNew Case Has Been Added To The System Successfully.\n");
    system("pause");

}

void add_sale_house(char uname[])
{

    struct tm *ptr;
    time_t t;
    struct house h;

    line_2();

    h.no = auto_id_add_sale_house();

    printf("Please Enter The Municipal Area : ");
    fflush(stdin);
    scanf("%d",&h.municipal_area);


    printf("Please Enter The Address : ");
    fflush(stdin);
    gets(h.address);


    printf("Please Enter The Age Of The House : ");
    fflush(stdin);
    scanf("%d",&h.age);


    printf("Please Enter The Size Of Substruction Area : ");
    fflush(stdin);
    scanf("%d",&h.substruction);


    printf("Please Enter The Floor : ");
    fflush(stdin);
    scanf("%d",&h.floor);


    printf("Please Enter The Size Of The Land : ");
    fflush(stdin);
    scanf("%d",&h.land);


    printf("Please Enter Owner Phone Number : ");
    fflush(stdin);
    gets(h.phone);


    printf("Please Enter The Amount Of Bedrooms : ");
    fflush(stdin);
    scanf("%d",&h.bedroom);


    printf("Please Enter The Price($) : ");
    fflush(stdin);
    scanf("%d",&h.price);

    h.status = 1;// 1 means available and 0 means not available.

    t = time(NULL);
    ptr = localtime(&t);

    strftime(h.registration_date,100,"%x",ptr);
    strftime(h.sale_date,100,"%x",ptr);

    strcpy(h.registerar_uname,uname);
    strcpy(h.seller_uname,uname);


    FILE *fp = fopen("sale_house.txt","a");

    fwrite(&h,sizeof(struct house),1,fp);

    fclose(fp);

    printf("\nNew Case Has Been Added To The System Successfully.\n");
    system("pause");


}

void add_sale_commercial(char uname[])
{
    int opt;
    struct tm *ptr;
    time_t t;
    struct commercial co;

    line_2();

    co.no = auto_id_add_sale_commercial();

    printf("Please Enter The Municipal Area : ");
    fflush(stdin);
    scanf("%d",&co.municipal_area);


    printf("Please Enter The Address : ");
    fflush(stdin);
    gets(co.address);

    printf("Please Specify The Document Type(1-Official administrative document OR 2-Administrative position)\nPlease Enter number 1 or 2 : ");
    fflush(stdin);
    scanf("%d",&opt);
    if(opt == 1){
        strcpy(co.document,"Official administrative document");
    }
    if(opt == 2){
        strcpy(co.document,"Administrative position");
    }


    printf("Please Enter The Age Of The Commercial Property : ");
    fflush(stdin);
    scanf("%d",&co.age);


    printf("Please Enter The Size Of Substruction Area : ");
    fflush(stdin);
    scanf("%d",&co.substruction);


    printf("Please Enter The Floor : ");
    fflush(stdin);
    scanf("%d",&co.floor);


    printf("Please Enter The Size Of The Land : ");
    fflush(stdin);
    scanf("%d",&co.land);


    printf("Please Enter Owner Phone Number : ");
    fflush(stdin);
    gets(co.phone);


    printf("Please Enter The Amount Of Rooms : ");
    fflush(stdin);
    scanf("%d",&co.room);


    printf("Please Enter The Price($) : ");
    fflush(stdin);
    scanf("%d",&co.price);

    co.status = 1;// 1 means available and 0 means not available.

    t = time(NULL);
    ptr = localtime(&t);

    strftime(co.registration_date,100,"%x",ptr);
    strftime(co.sale_date,100,"%x",ptr);

    strcpy(co.registerar_uname,uname);
    strcpy(co.seller_uname,uname);


    FILE *fp = fopen("sale_commercial.txt","a");

    fwrite(&co,sizeof(struct commercial),1,fp);

    fclose(fp);

    printf("\nNew Case Has Been Added To The System Successfully.\n");
    system("pause");

}

void add_sale_land(char uname[])
{
    int opt;
    struct tm *ptr;
    time_t t;
    struct land ld;

    line_2();

    ld.no = auto_id_add_sale_land();

    printf("Please Enter The Municipal Area : ");
    fflush(stdin);
    scanf("%d",&ld.municipal_area);


    printf("Please Enter The Address : ");
    fflush(stdin);
    gets(ld.address);

    printf("Please Specify The land Type(1-agriculture OR 2-residential development land)\nPlease Enter number 1 or 2 : ");
    fflush(stdin);
    scanf("%d",&opt);
    if(opt == 1){
        strcpy(ld.type,"agriculture");
    }
    if(opt == 2){
        strcpy(ld.type,"residential development");
    }

    printf("Please Enter The Land Measurement : ");
    fflush(stdin);
    scanf("%d",&ld.meterage);


    printf("Please Enter Owner Phone Number : ");
    fflush(stdin);
    gets(ld.phone);


    printf("Please Enter The Price($) : ");
    fflush(stdin);
    scanf("%d",&ld.price);

    ld.status = 1;// 1 means available and 0 means not available.

    t = time(NULL);
    ptr = localtime(&t);

    strftime(ld.registration_date,100,"%x",ptr);
    strftime(ld.sale_date,100,"%x",ptr);

    strcpy(ld.registerar_uname,uname);
    strcpy(ld.seller_uname,uname);


    FILE *fp = fopen("sale_land.txt","a");

    fwrite(&ld,sizeof(struct land),1,fp);

    fclose(fp);

    printf("\nNew Case Has Been Added To The System Successfully.\n");
    system("pause");
}

void add_rent_apartment(char uname[])
{
    struct tm *ptr;
    time_t t;
    struct rent_apartment ap;

    line_2();

    ap.no = auto_id_add_rent_apartment();

    printf("Please Enter The Municipal Area : ");
    fflush(stdin);
    scanf("%d",&ap.municipal_area);


    printf("Please Enter The Address : ");
    fflush(stdin);
    gets(ap.address);


    printf("Please Enter The Age Of The Apartment : ");
    fflush(stdin);
    scanf("%d",&ap.age);


    printf("Please Enter The Size Of Substruction Area : ");
    fflush(stdin);
    scanf("%d",&ap.substruction);


    printf("Please Enter The Floor : ");
    fflush(stdin);
    scanf("%d",&ap.floor);


    printf("Please Enter The Size Of The Land : ");
    fflush(stdin);
    scanf("%d",&ap.land);


    printf("Please Enter Owner Phone Number : ");
    fflush(stdin);
    gets(ap.phone);


    printf("Please Enter The Amount Of Bedrooms : ");
    fflush(stdin);
    scanf("%d",&ap.bedroom);


    printf("Please Enter The Mortgage Price($) : ");
    fflush(stdin);
    scanf("%d",&ap.mortgage_price);

    printf("Please Enter The rent Price($) : ");
    fflush(stdin);
    scanf("%d",&ap.rent_price);

    ap.status = 1;// 1 means available and 0 means not available.

    t = time(NULL);
    ptr = localtime(&t);

    strftime(ap.registration_date,100,"%x",ptr);
    strftime(ap.sale_date,100,"%x",ptr);

    strcpy(ap.registerar_uname,uname);
    strcpy(ap.seller_uname,uname);


    FILE *fp = fopen("rent_apartment.txt","a");

    fwrite(&ap,sizeof(struct rent_apartment),1,fp);

    fclose(fp);

    printf("\nNew Case Has Been Added To The System Successfully.\n");
    system("pause");

}

void add_rent_house(char uname[])
{
    struct tm *ptr;
    time_t t;
    struct rent_house h;

    line_2();

    h.no = auto_id_add_rent_house();

    printf("Please Enter The Municipal Area : ");
    fflush(stdin);
    scanf("%d",&h.municipal_area);


    printf("Please Enter The Address : ");
    fflush(stdin);
    gets(h.address);


    printf("Please Enter The Age Of The House : ");
    fflush(stdin);
    scanf("%d",&h.age);


    printf("Please Enter The Size Of Substruction Area : ");
    fflush(stdin);
    scanf("%d",&h.substruction);


    printf("Please Enter The Floor : ");
    fflush(stdin);
    scanf("%d",&h.floor);


    printf("Please Enter The Size Of The Land : ");
    fflush(stdin);
    scanf("%d",&h.land);


    printf("Please Enter Owner Phone Number : ");
    fflush(stdin);
    gets(h.phone);


    printf("Please Enter The Amount Of Bedrooms : ");
    fflush(stdin);
    scanf("%d",&h.bedroom);


    printf("Please Enter The Mortgage Price($) : ");
    fflush(stdin);
    scanf("%d",&h.mortgage_price);

    printf("Please Enter The Rent Price($) : ");
    fflush(stdin);
    scanf("%d",&h.rent_price);

    h.status = 1;// 1 means available and 0 means not available.

    t = time(NULL);
    ptr = localtime(&t);

    strftime(h.registration_date,100,"%x",ptr);
    strftime(h.sale_date,100,"%x",ptr);

    strcpy(h.registerar_uname,uname);
    strcpy(h.seller_uname,uname);


    FILE *fp = fopen("rent_house.txt","a");

    fwrite(&h,sizeof(struct rent_house),1,fp);

    fclose(fp);

    printf("\nNew Case Has Been Added To The System Successfully.\n");
    system("pause");
}

void add_rent_commercial(char uname[])
{
    int opt;
    struct tm *ptr;
    time_t t;
    struct rent_commercial co;

    line_2();

    co.no = auto_id_add_rent_commercial();

    printf("Please Enter The Municipal Area : ");
    fflush(stdin);
    scanf("%d",&co.municipal_area);


    printf("Please Enter The Address : ");
    fflush(stdin);
    gets(co.address);

    printf("Please Specify The Document Type(1-Official administrative document OR 2-Administrative position)\nPlease Enter number 1 or 2 : ");
    fflush(stdin);
    scanf("%d",&opt);
    if(opt == 1){
        strcpy(co.document,"Official administrative document");
    }
    if(opt == 2){
        strcpy(co.document,"Administrative position");
    }


    printf("Please Enter The Age Of The Commercial Property : ");
    fflush(stdin);
    scanf("%d",&co.age);


    printf("Please Enter The Size Of Substruction Area : ");
    fflush(stdin);
    scanf("%d",&co.substruction);


    printf("Please Enter The Floor : ");
    fflush(stdin);
    scanf("%d",&co.floor);


    printf("Please Enter The Size Of The Land : ");
    fflush(stdin);
    scanf("%d",&co.land);


    printf("Please Enter Owner Phone Number : ");
    fflush(stdin);
    gets(co.phone);


    printf("Please Enter The Amount Of Rooms : ");
    fflush(stdin);
    scanf("%d",&co.room);


    printf("Please Enter The Mortgage Price($) : ");
    fflush(stdin);
    scanf("%d",&co.mortgage_price);

    printf("Please Enter The Rent Price($) : ");
    fflush(stdin);
    scanf("%d",&co.rent_price);

    co.status = 1;// 1 means available and 0 means not available.

    t = time(NULL);
    ptr = localtime(&t);

    strftime(co.registration_date,100,"%x",ptr);
    strftime(co.sale_date,100,"%x",ptr);

    strcpy(co.registerar_uname,uname);
    strcpy(co.seller_uname,uname);


    FILE *fp = fopen("rent_commercial.txt","a");

    fwrite(&co,sizeof(struct rent_commercial),1,fp);

    fclose(fp);

    printf("\nNew Case Has Been Added To The System Successfully.\n");
    system("pause");
}

void add_rent_land(char uname[])
{
    int opt;
    struct tm *ptr;
    time_t t;
    struct rent_land ld;

    line_2();

    ld.no = auto_id_add_rent_land();

    printf("Please Enter The Municipal Area : ");
    fflush(stdin);
    scanf("%d",&ld.municipal_area);


    printf("Please Enter The Address : ");
    fflush(stdin);
    gets(ld.address);

    printf("Please Specify The land Type(1-agriculture OR 2-residential development land)\nPlease Enter number 1 or 2 : ");
    fflush(stdin);
    scanf("%d",&opt);
    if(opt == 1){
        strcpy(ld.type,"agriculture");
    }
    if(opt == 2){
        strcpy(ld.type,"residential development");
    }

    printf("Please Enter The Land Measurement : ");
    fflush(stdin);
    scanf("%d",&ld.meterage);


    printf("Please Enter Owner Phone Number : ");
    fflush(stdin);
    gets(ld.phone);


    printf("Please Enter The Mortgage Price($) : ");
    fflush(stdin);
    scanf("%d",&ld.mortgage_price);

    printf("Please Enter The Rent Price($) : ");
    fflush(stdin);
    scanf("%d",&ld.rent_price);

    ld.status = 1;// 1 means available and 0 means not available.

    t = time(NULL);
    ptr = localtime(&t);

    strftime(ld.registration_date,100,"%x",ptr);
    strftime(ld.sale_date,100,"%x",ptr);

    strcpy(ld.registerar_uname,uname);
    strcpy(ld.seller_uname,uname);


    FILE *fp = fopen("rent_land.txt","a");

    fwrite(&ld,sizeof(struct rent_land),1,fp);

    fclose(fp);

    printf("\nNew Case Has Been Added To The System Successfully.\n");
    system("pause");
}

void show_sale_apartment()
{
    int count_apartemnt = 0;
    struct apartment *head = NULL , *temp = NULL , *last = NULL;
    struct apartment ap;

    FILE *fp = fopen("sale_apartment.txt","r");

    while(fread(&ap,sizeof(struct apartment),1, fp)){


        temp = malloc(sizeof(struct apartment));

        temp->no = ap.no;
        temp->municipal_area = ap.municipal_area;
        strcpy(temp->address,ap.address);
        temp->age = ap.age;
        temp->substruction = ap.substruction;
        temp->floor = ap.floor;
        temp->land = ap.land;
        strcpy(temp->phone,ap.phone);
        temp->bedroom = ap.bedroom;
        temp->price = ap.price;
        temp->status = ap.status;
        strcpy(temp->registration_date,ap.registration_date);
        strcpy(temp->sale_date,ap.sale_date);
        strcpy(temp->registerar_uname,ap.registerar_uname);
        strcpy(temp->seller_uname,ap.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 1){
            count_apartemnt++;//to find the amount of the apartments.
            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("age of apartment : %d\n",temp->age);
            printf("substruction meterage : %d\n",temp->substruction);
            printf("floor : %d\n",temp->floor);
            printf("meterage of land : %d\n",temp->land);
            printf("owner phone-number : %s\n",temp->phone);
            printf("amount of bedrooms : %d\n",temp->bedroom);
            printf("price($) : %d\n",temp->price);
            printf("registration date : %s\n",temp->registration_date);
            printf("\n==========================\n\n");
        }
        temp = temp->next;
    }

    if(count_apartemnt == 0 || count_apartemnt == 1)
        printf("\n%d Apartment Is Available For Sale.\n\n",count_apartemnt);
    else
        printf("\n%d Apartments Are Available For Sale.\n\n",count_apartemnt);
    system("pause");

}

void show_sale_house()
{
    int count_house = 0;
    struct house *head = NULL , *temp = NULL , *last = NULL;
    struct house h;

    FILE *fp = fopen("sale_house.txt","r");

    while(fread(&h,sizeof(struct house),1, fp)){


        temp = malloc(sizeof(struct house));

        temp->no = h.no;
        temp->municipal_area = h.municipal_area;
        strcpy(temp->address,h.address);
        temp->age = h.age;
        temp->substruction = h.substruction;
        temp->floor = h.floor;
        temp->land = h.land;
        strcpy(temp->phone,h.phone);
        temp->bedroom = h.bedroom;
        temp->price = h.price;
        temp->status = h.status;
        strcpy(temp->registration_date,h.registration_date);
        strcpy(temp->sale_date,h.sale_date);
        strcpy(temp->registerar_uname,h.registerar_uname);
        strcpy(temp->seller_uname,h.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 1){
            count_house++;//to find the amount of the apartments.
            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("age of house : %d\n",temp->age);
            printf("substruction meterage : %d\n",temp->substruction);
            printf("floor : %d\n",temp->floor);
            printf("meterage of land : %d\n",temp->land);
            printf("owner phone-number : %s\n",temp->phone);
            printf("amount of bedrooms : %d\n",temp->bedroom);
            printf("price($) : %d\n",temp->price);
            printf("registration date : %s\n",temp->registration_date);
            printf("\n==========================\n\n");
        }
        temp = temp->next;
    }

    if(count_house == 0 || count_house == 1)
        printf("\n%d House Is Available For Sale.\n\n",count_house);
    else
        printf("\n%d Houses Are Available For Sale.\n\n",count_house);

    system("pause");
}

void show_sale_commercial()
{
    int count_commercial = 0;
    struct commercial *head = NULL , *temp = NULL , *last = NULL;
    struct commercial co;

    FILE *fp = fopen("sale_commercial.txt","r");

    while(fread(&co,sizeof(struct commercial),1, fp)){


        temp = malloc(sizeof(struct commercial));

        temp->no = co.no;
        temp->municipal_area = co.municipal_area;
        strcpy(temp->address,co.address);
        strcpy(temp->document,co.document);
        temp->age = co.age;
        temp->substruction = co.substruction;
        temp->floor = co.floor;
        temp->land = co.land;
        strcpy(temp->phone,co.phone);
        temp->room = co.room;
        temp->price = co.price;
        temp->status = co.status;
        strcpy(temp->registration_date,co.registration_date);
        strcpy(temp->sale_date,co.sale_date);
        strcpy(temp->registerar_uname,co.registerar_uname);
        strcpy(temp->seller_uname,co.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 1){
            count_commercial++;//to find the amount of the apartments.
            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("type of document : %s\n",temp->document);
            printf("age of commercial property : %d\n",temp->age);
            printf("substruction meterage : %d\n",temp->substruction);
            printf("floor : %d\n",temp->floor);
            printf("meterage of land : %d\n",temp->land);
            printf("owner phone-number : %s\n",temp->phone);
            printf("amount of rooms : %d\n",temp->room);
            printf("price($) : %d\n",temp->price);
            printf("registration date : %s\n",temp->registration_date);
            printf("\n==========================\n\n");
        }
        temp = temp->next;
    }

    if(count_commercial == 0 || count_commercial == 1)
        printf("\n%d Commercial Property Is Available For Sale.\n\n",count_commercial);
    else
        printf("\n%d Commercial Properties Are Available For Sale.\n\n",count_commercial);
    system("pause");

}

void show_sale_land()
{
    int count_land = 0;
    struct land *head = NULL , *temp = NULL , *last = NULL;
    struct land ld;

    FILE *fp = fopen("sale_land.txt","r");

    while(fread(&ld,sizeof(struct land),1, fp)){


        temp = malloc(sizeof(struct land));

        temp->no = ld.no;
        temp->municipal_area = ld.municipal_area;
        strcpy(temp->address,ld.address);
        strcpy(temp->type,ld.type);
        temp->meterage = ld.meterage;
        strcpy(temp->phone,ld.phone);
        temp->price = ld.price;
        temp->status = ld.status;
        strcpy(temp->registration_date,ld.registration_date);
        strcpy(temp->sale_date,ld.sale_date);
        strcpy(temp->registerar_uname,ld.registerar_uname);
        strcpy(temp->seller_uname,ld.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 1){
            count_land++;//to find the amount of the apartments.
            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("type of land : %s\n",temp->type);
            printf("meterage of land : %d\n",temp->meterage);
            printf("owner phone-number : %s\n",temp->phone);
            printf("price($) : %d\n",temp->price);
            printf("registration date : %s\n",temp->registration_date);
            printf("\n==========================\n\n");
        }
        temp = temp->next;
    }
    if(count_land == 0 || count_land == 1)
        printf("\n%d Land Is Available For Sale.\n\n",count_land);
    else
        printf("\n%d Lands Are Available For Sale.\n\n",count_land);
    system("pause");
}

void show_rent_apartment()
{
    int count_apartemnt = 0;
    struct rent_apartment *head = NULL , *temp = NULL , *last = NULL;
    struct rent_apartment ap;

    FILE *fp = fopen("rent_apartment.txt","r");

    while(fread(&ap,sizeof(struct rent_apartment),1, fp)){


        temp = malloc(sizeof(struct rent_apartment));

        temp->no = ap.no;
        temp->municipal_area = ap.municipal_area;
        strcpy(temp->address,ap.address);
        temp->age = ap.age;
        temp->substruction = ap.substruction;
        temp->floor = ap.floor;
        temp->land = ap.land;
        strcpy(temp->phone,ap.phone);
        temp->bedroom = ap.bedroom;
        temp->mortgage_price = ap.mortgage_price;
        temp->rent_price = ap.rent_price;
        temp->status = ap.status;
        strcpy(temp->registration_date,ap.registration_date);
        strcpy(temp->sale_date,ap.sale_date);
        strcpy(temp->registerar_uname,ap.registerar_uname);
        strcpy(temp->seller_uname,ap.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 1){
            count_apartemnt++;//to find the amount of the apartments.
            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("age of apartment : %d\n",temp->age);
            printf("substruction meterage : %d\n",temp->substruction);
            printf("floor : %d\n",temp->floor);
            printf("meterage of land : %d\n",temp->land);
            printf("owner phone-number : %s\n",temp->phone);
            printf("amount of bedrooms : %d\n",temp->bedroom);
            printf("Mortgage price($) : %d\n",temp->mortgage_price);
            printf("Rent price($) : %d\n",temp->rent_price);
            printf("registration date : %s\n",temp->registration_date);
            printf("\n==========================\n\n");
        }
        temp = temp->next;
    }
    if(count_apartemnt == 0 || count_apartemnt == 1)
        printf("\n%d Apartment Is Available For Rent.\n\n",count_apartemnt);
    else
        printf("\n%d Apartments Are Available For Rent.\n\n",count_apartemnt);

    system("pause");
}

void show_rent_house()
{
    int count_house = 0;
    struct rent_house *head = NULL , *temp = NULL , *last = NULL;
    struct rent_house h;

    FILE *fp = fopen("rent_house.txt","r");

    while(fread(&h,sizeof(struct rent_house),1, fp)){


        temp = malloc(sizeof(struct rent_house));

        temp->no = h.no;
        temp->municipal_area = h.municipal_area;
        strcpy(temp->address,h.address);
        temp->age = h.age;
        temp->substruction = h.substruction;
        temp->floor = h.floor;
        temp->land = h.land;
        strcpy(temp->phone,h.phone);
        temp->bedroom = h.bedroom;
        temp->mortgage_price = h.mortgage_price;
        temp->rent_price = h.rent_price;
        temp->status = h.status;
        strcpy(temp->registration_date,h.registration_date);
        strcpy(temp->sale_date,h.sale_date);
        strcpy(temp->registerar_uname,h.registerar_uname);
        strcpy(temp->seller_uname,h.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 1){
            count_house++;//to find the amount of the apartments.
            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("age of house : %d\n",temp->age);
            printf("substruction meterage : %d\n",temp->substruction);
            printf("floor : %d\n",temp->floor);
            printf("meterage of land : %d\n",temp->land);
            printf("owner phone-number : %s\n",temp->phone);
            printf("amount of bedrooms : %d\n",temp->bedroom);
            printf("Mortgage price($) : %d\n",temp->mortgage_price);
            printf("Rent price($) : %d\n",temp->rent_price);
            printf("registration date : %s\n",temp->registration_date);
            printf("\n==========================\n\n");
        }
        temp = temp->next;
    }

    if(count_house == 0 || count_house == 1)
        printf("\n%d House Is Available For Rent.\n\n",count_house);
    else
        printf("\n%d Houses Are Available For Rent.\n\n",count_house);

    system("pause");
}

void show_rent_commercial()
{
    int count_commercial = 0;
    struct rent_commercial *head = NULL , *temp = NULL , *last = NULL;
    struct rent_commercial co;

    FILE *fp = fopen("rent_commercial.txt","r");

    while(fread(&co,sizeof(struct rent_commercial),1, fp)){


        temp = malloc(sizeof(struct rent_commercial));

        temp->no = co.no;
        temp->municipal_area = co.municipal_area;
        strcpy(temp->address,co.address);
        strcpy(temp->document,co.document);
        temp->age = co.age;
        temp->substruction = co.substruction;
        temp->floor = co.floor;
        temp->land = co.land;
        strcpy(temp->phone,co.phone);
        temp->room = co.room;
        temp->mortgage_price = co.mortgage_price;
        temp->rent_price = co.rent_price;
        temp->status = co.status;
        strcpy(temp->registration_date,co.registration_date);
        strcpy(temp->sale_date,co.sale_date);
        strcpy(temp->registerar_uname,co.registerar_uname);
        strcpy(temp->seller_uname,co.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 1){
            count_commercial++;//to find the amount of the apartments.
            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("type of document : %s\n",temp->document);
            printf("age of commercial property : %d\n",temp->age);
            printf("substruction meterage : %d\n",temp->substruction);
            printf("floor : %d\n",temp->floor);
            printf("meterage of land : %d\n",temp->land);
            printf("owner phone-number : %s\n",temp->phone);
            printf("amount of rooms : %d\n",temp->room);
            printf("Mortgage price($) : %d\n",temp->mortgage_price);
            printf("Rent price($) : %d\n",temp->rent_price);
            printf("registration date : %s\n",temp->registration_date);
            printf("\n==========================\n\n");
        }
        temp = temp->next;
    }
    if(count_commercial == 0 || count_commercial == 1)
        printf("\n%d Commercial Property Is Available For Rent.\n\n",count_commercial);
    else
        printf("\n%d Commercial Properties Are Available For Rent.\n\n",count_commercial);
    system("pause");
}

void show_rent_land()
{
    int count_land = 0;
    struct rent_land *head = NULL , *temp = NULL , *last = NULL;
    struct rent_land ld;

    FILE *fp = fopen("rent_land.txt","r");

    while(fread(&ld,sizeof(struct rent_land),1, fp)){


        temp = malloc(sizeof(struct rent_land));

        temp->no = ld.no;
        temp->municipal_area = ld.municipal_area;
        strcpy(temp->address,ld.address);
        strcpy(temp->type,ld.type);
        temp->meterage = ld.meterage;
        strcpy(temp->phone,ld.phone);
        temp->mortgage_price = ld.mortgage_price;
        temp->rent_price = ld.rent_price;
        temp->status = ld.status;
        strcpy(temp->registration_date,ld.registration_date);
        strcpy(temp->sale_date,ld.sale_date);
        strcpy(temp->registerar_uname,ld.registerar_uname);
        strcpy(temp->seller_uname,ld.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 1){
            count_land++;//to find the amount of the apartments.
            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("type of land : %s\n",temp->type);
            printf("meterage of land : %d\n",temp->meterage);
            printf("owner phone-number : %s\n",temp->phone);
            printf("Mortgage price($) : %d\n",temp->mortgage_price);
            printf("Rent price($) : %d\n",temp->rent_price);
            printf("registration date : %s\n",temp->registration_date);
            printf("\n==========================\n\n");
        }
        temp = temp->next;
    }
    if(count_land == 0 || count_land == 1)
        printf("\n%d Land Is Available For Rent.\n\n",count_land);
    else
        printf("\n%d Lands Are Available For Rent.\n\n",count_land);
    system("pause");
}

int auto_id_add_sale_apartment()
{
    struct apartment ap;
    int no = 0;
    FILE *fp = fopen("sale_apartment.txt","r");

    while(fread(&ap,sizeof(struct apartment),1,fp)){
        no = ap.no;
    }

    fclose(fp);

    return no+1;
}

int auto_id_add_sale_house()
{
    struct house h;
    int no = 0;
    FILE *fp = fopen("sale_house.txt","r");

    while(fread(&h,sizeof(struct house),1,fp)){
        no = h.no;
    }

    fclose(fp);

    return no+1;
}

int auto_id_add_sale_commercial()
{
    struct commercial co;
    int no = 0;
    FILE *fp = fopen("sale_commercial.txt","r");

    while(fread(&co,sizeof(struct commercial),1,fp)){
        no = co.no;
    }

    fclose(fp);

    return no+1;
}

int auto_id_add_sale_land()
{
    struct land ld;
    int no = 0;
    FILE *fp = fopen("sale_land.txt","r");

    while(fread(&ld,sizeof(struct land),1,fp)){
        no = ld.no;
    }

    fclose(fp);

    return no+1;
}

int auto_id_add_rent_apartment()
{
    struct rent_apartment ap;
    int no = 0;
    FILE *fp = fopen("rent_apartment.txt","r");

    while(fread(&ap,sizeof(struct rent_apartment),1,fp)){
        no = ap.no;
    }

    fclose(fp);

    return no+1;
}

int auto_id_add_rent_house()
{
    struct rent_house h;
    int no = 0;
    FILE *fp = fopen("rent_house.txt","r");

    while(fread(&h,sizeof(struct rent_house),1,fp)){
        no = h.no;
    }

    fclose(fp);

    return no+1;
}

int auto_id_add_rent_commercial()
{
    struct rent_commercial co;
    int no = 0;
    FILE *fp = fopen("rent_commercial.txt","r");

    while(fread(&co,sizeof(struct rent_commercial),1,fp)){
        no = co.no;
    }

    fclose(fp);

    return no+1;
}

int auto_id_add_rent_land()
{
    struct rent_land ld;
    int no = 0;
    FILE *fp = fopen("rent_land.txt","r");

    while(fread(&ld,sizeof(struct rent_land),1,fp)){
        no = ld.no;
    }

    fclose(fp);

    return no+1;
}

void remove_sale_apartment(char uname[])
{
    struct tm *ptr;
    time_t t;
    FILE *fp, *fp1;
    int case_number;
    struct apartment ap;
    int found = 0;

    system("cls");

    line_2();

    printf("Please Enter The Case-Number You Want To Remove : ");
    scanf("%d",&case_number);


    fp = fopen("sale_apartment.txt","r");
    fp1 = fopen("temp_sale_apartment.txt","w");

    while(fread(&ap,sizeof(struct apartment),1,fp)!=0){


        if(ap.no == case_number && ap.status == 1){

            found = 1;
            strcpy(ap.seller_uname,uname);
            ap.status = 0;

            t = time(NULL);
            ptr = localtime(&t);

            strftime(ap.sale_date,100,"%x",ptr);


        }

        fwrite(&ap,sizeof(struct apartment),1,fp1);

    }
    fclose(fp);
    fclose(fp1);

    fp1 = fopen("temp_sale_apartment.txt","r");
    fp = fopen("sale_apartment.txt","w");

    while(fread(&ap,sizeof(struct apartment),1,fp1)!=0){


        fwrite(&ap,sizeof(struct apartment),1,fp);

    }
    fclose(fp1);
    fclose(fp);
    if(found == 1){
        printf("\nCase Has Been Removed Successfully.\n");
    }else{
        printf("\nThere Is No Case With This Number.\n\n");
    }
    system("pause");

}

void remove_sale_house(char uname[])
{
    struct tm *ptr;
    time_t t;
    FILE *fp, *fp1;
    int case_number;
    struct house h;
    int found = 0;

    system("cls");

    line_2();

    printf("Please Enter The Case-Number You Want To Remove : ");
    scanf("%d",&case_number);


    fp = fopen("sale_house.txt","r");
    fp1 = fopen("temp_sale_house.txt","w");

    while(fread(&h,sizeof(struct house),1,fp)!=0){


        if(h.no == case_number && h.status == 1){

            found  = 1;
            strcpy(h.seller_uname,uname);
            h.status = 0;

            t = time(NULL);
            ptr = localtime(&t);

            strftime(h.sale_date,100,"%x",ptr);


        }

        fwrite(&h,sizeof(struct house),1,fp1);

    }
    fclose(fp);
    fclose(fp1);

    fp1 = fopen("temp_sale_house.txt","r");
    fp = fopen("sale_house.txt","w");

    while(fread(&h,sizeof(struct house),1,fp1)!=0){


        fwrite(&h,sizeof(struct house),1,fp);

    }
    fclose(fp1);
    fclose(fp);
    if(found == 1){
        printf("\nCase Has Been Removed Successfully.\n");
    }else{
        printf("\nThere Is No Case With This Number.\n\n");
    }
    system("pause");
}

void remove_sale_commercial(char uname[])
{
    struct tm *ptr;
    time_t t;
    FILE *fp, *fp1;
    int case_number;
    struct commercial co;
    int found = 0;

    system("cls");

    line_2();

    printf("Please Enter The Case-Number You Want To Remove : ");
    scanf("%d",&case_number);


    fp = fopen("sale_commercial.txt","r");
    fp1 = fopen("temp_sale_commercial.txt","w");

    while(fread(&co,sizeof(struct commercial),1,fp)!=0){


        if(co.no == case_number && co.status == 1){

            found = 1;
            strcpy(co.seller_uname,uname);
            co.status = 0;

            t = time(NULL);
            ptr = localtime(&t);

            strftime(co.sale_date,100,"%x",ptr);


        }

        fwrite(&co,sizeof(struct commercial),1,fp1);

    }
    fclose(fp);
    fclose(fp1);

    fp1 = fopen("temp_sale_commercial.txt","r");
    fp = fopen("sale_commercial.txt","w");

    while(fread(&co,sizeof(struct commercial),1,fp1)!=0){


        fwrite(&co,sizeof(struct commercial),1,fp);

    }
    fclose(fp1);
    fclose(fp);
    if(found == 1){
        printf("\nCase Has Been Removed Successfully.\n");
    }else{
        printf("\nThere Is No Case With This Number.\n\n");
    }
    system("pause");
}

void remove_sale_land(char uname[])
{
    struct tm *ptr;
    time_t t;
    FILE *fp, *fp1;
    int case_number;
    struct land ld;
    int found = 0;

    system("cls");

    line_2();

    printf("Please Enter The Case-Number You Want To Remove : ");
    scanf("%d",&case_number);


    fp = fopen("sale_land.txt","r");
    fp1 = fopen("temp_sale_land.txt","w");

    while(fread(&ld,sizeof(struct land),1,fp)!=0){


        if(ld.no == case_number && ld.status == 1){

            found = 1;
            strcpy(ld.seller_uname,uname);
            ld.status = 0;

            t = time(NULL);
            ptr = localtime(&t);

            strftime(ld.sale_date,100,"%x",ptr);


        }

        fwrite(&ld,sizeof(struct land),1,fp1);

    }
    fclose(fp);
    fclose(fp1);

    fp1 = fopen("temp_sale_land.txt","r");
    fp = fopen("sale_land.txt","w");

    while(fread(&ld,sizeof(struct land),1,fp1)!=0){


        fwrite(&ld,sizeof(struct land),1,fp);

    }
    fclose(fp1);
    fclose(fp);
    if(found == 1){
        printf("\nCase Has Been Removed Successfully.\n");
    }else{
        printf("\nThere Is No Case With This Number.\n\n");
    }
    system("pause");
}

void remove_rent_apartment(char uname[])
{
    struct tm *ptr;
    time_t t;
    FILE *fp, *fp1;
    int case_number;
    struct rent_apartment ap;
    int found = 0;

    system("cls");

    line_2();

    printf("Please Enter The Case-Number You Want To Remove : ");
    scanf("%d",&case_number);


    fp = fopen("rent_apartment.txt","r");
    fp1 = fopen("temp_rent_apartment.txt","w");

    while(fread(&ap,sizeof(struct rent_apartment),1,fp)!=0){


        if(ap.no == case_number && ap.status == 1){

            found  = 1;
            strcpy(ap.seller_uname,uname);
            ap.status = 0;

            t = time(NULL);
            ptr = localtime(&t);

            strftime(ap.sale_date,100,"%x",ptr);


        }

        fwrite(&ap,sizeof(struct rent_apartment),1,fp1);

    }
    fclose(fp);
    fclose(fp1);

    fp1 = fopen("temp_rent_apartment.txt","r");
    fp = fopen("rent_apartment.txt","w");

    while(fread(&ap,sizeof(struct rent_apartment),1,fp1)!=0){


        fwrite(&ap,sizeof(struct rent_apartment),1,fp);

    }
    fclose(fp1);
    fclose(fp);
    if(found == 1){
        printf("\nCase Has Been Removed Successfully.\n");
    }else{
        printf("\nThere Is No Case With This Number.\n\n");
    }
    system("pause");
}

void remove_rent_house(char uname[])
{
    struct tm *ptr;
    time_t t;
    FILE *fp, *fp1;
    int case_number;
    struct rent_house h;
    int found = 0;

    system("cls");

    line_2();

    printf("Please Enter The Case-Number You Want To Remove : ");
    scanf("%d",&case_number);


    fp = fopen("rent_house.txt","r");
    fp1 = fopen("temp_rent_house.txt","w");

    while(fread(&h,sizeof(struct rent_house),1,fp)!=0){


        if(h.no == case_number && h.status == 1){

            found = 1;
            strcpy(h.seller_uname,uname);
            h.status = 0;

            t = time(NULL);
            ptr = localtime(&t);

            strftime(h.sale_date,100,"%x",ptr);


        }

        fwrite(&h,sizeof(struct rent_house),1,fp1);

    }
    fclose(fp);
    fclose(fp1);

    fp1 = fopen("temp_rent_house.txt","r");
    fp = fopen("rent_house.txt","w");

    while(fread(&h,sizeof(struct rent_house),1,fp1)!=0){


        fwrite(&h,sizeof(struct rent_house),1,fp);

    }
    fclose(fp1);
    fclose(fp);
    if(found == 1){
        printf("\nCase Has Been Removed Successfully.\n");
    }else{
        printf("\nThere Is No Case With This Number.\n\n");
    }
    system("pause");
}

void remove_rent_commercial(char uname[])
{
    struct tm *ptr;
    time_t t;
    FILE *fp, *fp1;
    int case_number;
    struct rent_commercial co;
    int found = 0;

    system("cls");

    line_2();

    printf("Please Enter The Case-Number You Want To Remove : ");
    scanf("%d",&case_number);


    fp = fopen("rent_commercial.txt","r");
    fp1 = fopen("temp_rent_commercial.txt","w");

    while(fread(&co,sizeof(struct rent_commercial),1,fp)!=0){


        if(co.no == case_number && co.status == 1){

            found = 1;
            strcpy(co.seller_uname,uname);
            co.status = 0;

            t = time(NULL);
            ptr = localtime(&t);

            strftime(co.sale_date,100,"%x",ptr);


        }

        fwrite(&co,sizeof(struct rent_commercial),1,fp1);

    }
    fclose(fp);
    fclose(fp1);

    fp1 = fopen("temp_rent_commercial.txt","r");
    fp = fopen("rent_commercial.txt","w");

    while(fread(&co,sizeof(struct rent_commercial),1,fp1)!=0){


        fwrite(&co,sizeof(struct rent_commercial),1,fp);

    }
    fclose(fp1);
    fclose(fp);
    if(found == 1){
        printf("\nCase Has Been Removed Successfully.\n");
    }else{
        printf("\nThere Is No Case With This Number.\n\n");
    }
    system("pause");
}

void remove_rent_land(char uname[])
{
    struct tm *ptr;
    time_t t;
    FILE *fp, *fp1;
    int case_number;
    struct rent_land ld;
    int found = 0;

    system("cls");

    line_2();

    printf("Please Enter The Case-Number You Want To Remove : ");
    scanf("%d",&case_number);


    fp = fopen("rent_land.txt","r");
    fp1 = fopen("temp_rent_land.txt","w");

    while(fread(&ld,sizeof(struct rent_land),1,fp)!=0){


        if(ld.no == case_number && ld.status == 1){

            found = 1;
            strcpy(ld.seller_uname,uname);
            ld.status = 0;

            t = time(NULL);
            ptr = localtime(&t);

            strftime(ld.sale_date,100,"%x",ptr);


        }

        fwrite(&ld,sizeof(struct rent_land),1,fp1);

    }
    fclose(fp);
    fclose(fp1);

    fp1 = fopen("temp_rent_land.txt","r");
    fp = fopen("rent_land.txt","w");

    while(fread(&ld,sizeof(struct rent_land),1,fp1)!=0){


        fwrite(&ld,sizeof(struct rent_land),1,fp);

    }
    fclose(fp1);
    fclose(fp);
    if(found == 1){
        printf("\nCase Has Been Removed Successfully.\n");
    }else{
        printf("\nThere Is No Case With This Number.\n\n");
    }
    system("pause");
}

void user_activity_sale_apartment()
{
    char username[50];
    struct apartment *head = NULL , *temp = NULL , *last = NULL;
    struct apartment ap;

    system("cls");

    line_2();

    printf("Please Enter Employee Username To Search :");
    fflush(stdin);
    gets(username);


    FILE *fp = fopen("sale_apartment.txt","r");

    while(fread(&ap,sizeof(struct apartment),1, fp)){


        temp = malloc(sizeof(struct apartment));

        temp->no = ap.no;
        temp->municipal_area = ap.municipal_area;
        strcpy(temp->address,ap.address);
        temp->age = ap.age;
        temp->substruction = ap.substruction;
        temp->floor = ap.floor;
        temp->land = ap.land;
        strcpy(temp->phone,ap.phone);
        temp->bedroom = ap.bedroom;
        temp->price = ap.price;
        temp->status = ap.status;
        strcpy(temp->registration_date,ap.registration_date);
        strcpy(temp->sale_date,ap.sale_date);
        strcpy(temp->registerar_uname,ap.registerar_uname);
        strcpy(temp->seller_uname,ap.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 1&&(strcmp(temp->registerar_uname,username)==0||strcmp(temp->seller_uname,username)==0)){

            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("age of apartment : %d\n",temp->age);
            printf("substruction meterage : %d\n",temp->substruction);
            printf("floor : %d\n",temp->floor);
            printf("meterage of land : %d\n",temp->land);
            printf("owner phone-number : %s\n",temp->phone);
            printf("amount of bedrooms : %d\n",temp->bedroom);
            printf("price($) : %d\n",temp->price);
            printf("Registerar username : %s\n",temp->registerar_uname);
            printf("status : available\n");
            printf("registration date : %s\n",temp->registration_date);
            printf("\n==========================\n\n");
        }
        if(temp->status == 0&&(strcmp(temp->registerar_uname,username)==0||strcmp(temp->seller_uname,username)==0)){
            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("age of apartment : %d\n",temp->age);
            printf("substruction meterage : %d\n",temp->substruction);
            printf("floor : %d\n",temp->floor);
            printf("meterage of land : %d\n",temp->land);
            printf("owner phone-number : %s\n",temp->phone);
            printf("amount of bedrooms : %d\n",temp->bedroom);
            printf("price($) : %d\n",temp->price);
            printf("Registerar username : %s\n",temp->registerar_uname);
            printf("Seller username : %s\n",temp->seller_uname);
            printf("status : Sold\n");
            printf("registration date : %s\n",temp->registration_date);
            printf("sale date : %s\n",temp->sale_date);
            printf("\n==========================\n\n");
        }
        temp = temp->next;
    }

    system("pause");
}

void user_activity_sale_house()
{
    char username[50];
    struct house *head = NULL , *temp = NULL , *last = NULL;
    struct house ap;

    system("cls");

    line_2();

    printf("Please Enter Employee Username To Search :");
    fflush(stdin);
    gets(username);


    FILE *fp = fopen("sale_house.txt","r");

    while(fread(&ap,sizeof(struct house),1, fp)){


        temp = malloc(sizeof(struct house));

        temp->no = ap.no;
        temp->municipal_area = ap.municipal_area;
        strcpy(temp->address,ap.address);
        temp->age = ap.age;
        temp->substruction = ap.substruction;
        temp->floor = ap.floor;
        temp->land = ap.land;
        strcpy(temp->phone,ap.phone);
        temp->bedroom = ap.bedroom;
        temp->price = ap.price;
        temp->status = ap.status;
        strcpy(temp->registration_date,ap.registration_date);
        strcpy(temp->sale_date,ap.sale_date);
        strcpy(temp->registerar_uname,ap.registerar_uname);
        strcpy(temp->seller_uname,ap.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 1&&(strcmp(temp->registerar_uname,username)==0||strcmp(temp->seller_uname,username)==0)){

            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("age of house : %d\n",temp->age);
            printf("substruction meterage : %d\n",temp->substruction);
            printf("floor : %d\n",temp->floor);
            printf("meterage of land : %d\n",temp->land);
            printf("owner phone-number : %s\n",temp->phone);
            printf("amount of bedrooms : %d\n",temp->bedroom);
            printf("price($) : %d\n",temp->price);
            printf("Registerar username : %s\n",temp->registerar_uname);
            printf("status : available\n");
            printf("registration date : %s\n",temp->registration_date);
            printf("\n==========================\n\n");
        }
        if(temp->status == 0&&(strcmp(temp->registerar_uname,username)==0||strcmp(temp->seller_uname,username)==0)){
            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("age of house : %d\n",temp->age);
            printf("substruction meterage : %d\n",temp->substruction);
            printf("floor : %d\n",temp->floor);
            printf("meterage of land : %d\n",temp->land);
            printf("owner phone-number : %s\n",temp->phone);
            printf("amount of bedrooms : %d\n",temp->bedroom);
            printf("price($) : %d\n",temp->price);
            printf("Registerar username : %s\n",temp->registerar_uname);
            printf("Seller username : %s\n",temp->seller_uname);
            printf("status : Sold\n");
            printf("registration date : %s\n",temp->registration_date);
            printf("sale date : %s\n",temp->sale_date);
            printf("\n==========================\n\n");
        }
        temp = temp->next;
    }

    system("pause");
}

void user_activity_sale_commercial()
{
    char username[50];
    struct commercial *head = NULL , *temp = NULL , *last = NULL;
    struct commercial co;

    system("cls");

    line_2();

    printf("Please Enter Employee Username To Search :");
    fflush(stdin);
    gets(username);

    FILE *fp = fopen("sale_commercial.txt","r");

    while(fread(&co,sizeof(struct commercial),1, fp)){


        temp = malloc(sizeof(struct commercial));

        temp->no = co.no;
        temp->municipal_area = co.municipal_area;
        strcpy(temp->address,co.address);
        strcpy(temp->document,co.document);
        temp->age = co.age;
        temp->substruction = co.substruction;
        temp->floor = co.floor;
        temp->land = co.land;
        strcpy(temp->phone,co.phone);
        temp->room = co.room;
        temp->price = co.price;
        temp->status = co.status;
        strcpy(temp->registration_date,co.registration_date);
        strcpy(temp->sale_date,co.sale_date);
        strcpy(temp->registerar_uname,co.registerar_uname);
        strcpy(temp->seller_uname,co.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 1&&(strcmp(temp->registerar_uname,username)==0||strcmp(temp->seller_uname,username)==0)){

            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("type of document : %s\n",temp->document);
            printf("age of commercial property : %d\n",temp->age);
            printf("substruction meterage : %d\n",temp->substruction);
            printf("floor : %d\n",temp->floor);
            printf("meterage of land : %d\n",temp->land);
            printf("owner phone-number : %s\n",temp->phone);
            printf("amount of rooms : %d\n",temp->room);
            printf("price($) : %d\n",temp->price);
            printf("Registerar username : %s\n",temp->registerar_uname);
            printf("status : available\n");
            printf("registration date : %s\n",temp->registration_date);
            printf("\n==========================\n\n");
        }
        if(temp->status == 0&&(strcmp(temp->registerar_uname,username)==0||strcmp(temp->seller_uname,username)==0)){

            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("type of document : %s\n",temp->document);
            printf("age of commercial property : %d\n",temp->age);
            printf("substruction meterage : %d\n",temp->substruction);
            printf("floor : %d\n",temp->floor);
            printf("meterage of land : %d\n",temp->land);
            printf("owner phone-number : %s\n",temp->phone);
            printf("amount of rooms : %d\n",temp->room);
            printf("price($) : %d\n",temp->price);
            printf("Registerar username : %s\n",temp->registerar_uname);
            printf("seller username : %s\n",temp->seller_uname);
            printf("status : Sold\n");
            printf("registration date : %s\n",temp->registration_date);
            printf("sale date : %s\n",temp->sale_date);
            printf("\n==========================\n\n");
        }
        temp = temp->next;
    }

    system("pause");
}

void user_activity_sale_land()
{
    char username[50];
    struct land *head = NULL , *temp = NULL , *last = NULL;
    struct land ld;

    system("cls");

    line_2();

    printf("Please Enter Employee Username To Search :");
    fflush(stdin);
    gets(username);

    FILE *fp = fopen("sale_land.txt","r");

    while(fread(&ld,sizeof(struct land),1, fp)){


        temp = malloc(sizeof(struct land));

        temp->no = ld.no;
        temp->municipal_area = ld.municipal_area;
        strcpy(temp->address,ld.address);
        strcpy(temp->type,ld.type);
        temp->meterage = ld.meterage;
        strcpy(temp->phone,ld.phone);
        temp->price = ld.price;
        temp->status = ld.status;
        strcpy(temp->registration_date,ld.registration_date);
        strcpy(temp->sale_date,ld.sale_date);
        strcpy(temp->registerar_uname,ld.registerar_uname);
        strcpy(temp->seller_uname,ld.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 1&&(strcmp(temp->registerar_uname,username)==0||strcmp(temp->seller_uname,username)==0)){

            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("type of land : %s\n",temp->type);
            printf("meterage of land : %d\n",temp->meterage);
            printf("owner phone-number : %s\n",temp->phone);
            printf("price($) : %d\n",temp->price);
            printf("Registerar username : %s\n",temp->registerar_uname);
            printf("status : available\n");
            printf("registration date : %s\n",temp->registration_date);
            printf("\n==========================\n\n");
        }
        if(temp->status == 0&&(strcmp(temp->registerar_uname,username)==0||strcmp(temp->seller_uname,username)==0)){

            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("type of land : %s\n",temp->type);
            printf("meterage of land : %d\n",temp->meterage);
            printf("owner phone-number : %s\n",temp->phone);
            printf("price($) : %d\n",temp->price);
            printf("Registerar username : %s\n",temp->registerar_uname);
            printf("seller username : %s\n",temp->seller_uname);
            printf("status : Sold\n");
            printf("registration date : %s\n",temp->registration_date);
            printf("sale date : %s\n",temp->sale_date);
            printf("\n==========================\n\n");
        }
        temp = temp->next;
    }

    system("pause");
}

void user_activity_rent_apartment()
{
    char username[50];
    struct rent_apartment *head = NULL , *temp = NULL , *last = NULL;
    struct rent_apartment ap;

    system("cls");

    line_2();

    printf("Please Enter Employee Username To Search :");
    fflush(stdin);
    gets(username);


    FILE *fp = fopen("rent_apartment.txt","r");

    while(fread(&ap,sizeof(struct rent_apartment),1, fp)){


        temp = malloc(sizeof(struct rent_apartment));

        temp->no = ap.no;
        temp->municipal_area = ap.municipal_area;
        strcpy(temp->address,ap.address);
        temp->age = ap.age;
        temp->substruction = ap.substruction;
        temp->floor = ap.floor;
        temp->land = ap.land;
        strcpy(temp->phone,ap.phone);
        temp->bedroom = ap.bedroom;
        temp->mortgage_price = ap.mortgage_price;
        temp->rent_price = ap.rent_price;
        temp->status = ap.status;
        strcpy(temp->registration_date,ap.registration_date);
        strcpy(temp->sale_date,ap.sale_date);
        strcpy(temp->registerar_uname,ap.registerar_uname);
        strcpy(temp->seller_uname,ap.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 1&&(strcmp(temp->registerar_uname,username)==0||strcmp(temp->seller_uname,username)==0)){

            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("age of apartment : %d\n",temp->age);
            printf("substruction meterage : %d\n",temp->substruction);
            printf("floor : %d\n",temp->floor);
            printf("meterage of land : %d\n",temp->land);
            printf("owner phone-number : %s\n",temp->phone);
            printf("amount of bedrooms : %d\n",temp->bedroom);
            printf("mortagage price($) : %d\n",temp->mortgage_price);
            printf("rent price($) : %d\n",temp->rent_price);
            printf("Registerar username : %s\n",temp->registerar_uname);
            printf("status : available\n");
            printf("registration date : %s\n",temp->registration_date);
            printf("\n==========================\n\n");
        }
        if(temp->status == 0&&(strcmp(temp->registerar_uname,username)==0||strcmp(temp->seller_uname,username)==0)){
            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("age of apartment : %d\n",temp->age);
            printf("substruction meterage : %d\n",temp->substruction);
            printf("floor : %d\n",temp->floor);
            printf("meterage of land : %d\n",temp->land);
            printf("owner phone-number : %s\n",temp->phone);
            printf("amount of bedrooms : %d\n",temp->bedroom);
            printf("mortagage price($) : %d\n",temp->mortgage_price);
            printf("rent price($) : %d\n",temp->rent_price);
            printf("Registerar username : %s\n",temp->registerar_uname);
            printf("Seller username : %s\n",temp->seller_uname);
            printf("status : Sold\n");
            printf("registration date : %s\n",temp->registration_date);
            printf("sale date : %s\n",temp->sale_date);
            printf("\n==========================\n\n");
        }
        temp = temp->next;
    }

    system("pause");
}

void user_activity_rent_house()
{
    char username[50];
    struct rent_house *head = NULL , *temp = NULL , *last = NULL;
    struct rent_house ap;

    system("cls");

    line_2();

    printf("Please Enter Employee Username To Search :");
    fflush(stdin);
    gets(username);


    FILE *fp = fopen("rent_house.txt","r");

    while(fread(&ap,sizeof(struct rent_house),1, fp)){


        temp = malloc(sizeof(struct rent_house));

        temp->no = ap.no;
        temp->municipal_area = ap.municipal_area;
        strcpy(temp->address,ap.address);
        temp->age = ap.age;
        temp->substruction = ap.substruction;
        temp->floor = ap.floor;
        temp->land = ap.land;
        strcpy(temp->phone,ap.phone);
        temp->bedroom = ap.bedroom;
        temp->mortgage_price = ap.mortgage_price;
        temp->rent_price = ap.rent_price;
        temp->status = ap.status;
        strcpy(temp->registration_date,ap.registration_date);
        strcpy(temp->sale_date,ap.sale_date);
        strcpy(temp->registerar_uname,ap.registerar_uname);
        strcpy(temp->seller_uname,ap.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 1&&(strcmp(temp->registerar_uname,username)==0||strcmp(temp->seller_uname,username)==0)){

            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("age of house : %d\n",temp->age);
            printf("substruction meterage : %d\n",temp->substruction);
            printf("floor : %d\n",temp->floor);
            printf("meterage of land : %d\n",temp->land);
            printf("owner phone-number : %s\n",temp->phone);
            printf("amount of bedrooms : %d\n",temp->bedroom);
            printf("mortagage price($) : %d\n",temp->mortgage_price);
            printf("rent price($) : %d\n",temp->rent_price);
            printf("Registerar username : %s\n",temp->registerar_uname);
            printf("status : available\n");
            printf("registration date : %s\n",temp->registration_date);
            printf("\n==========================\n\n");
        }
        if(temp->status == 0&&(strcmp(temp->registerar_uname,username)==0||strcmp(temp->seller_uname,username)==0)){
            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("age of house : %d\n",temp->age);
            printf("substruction meterage : %d\n",temp->substruction);
            printf("floor : %d\n",temp->floor);
            printf("meterage of land : %d\n",temp->land);
            printf("owner phone-number : %s\n",temp->phone);
            printf("amount of bedrooms : %d\n",temp->bedroom);
            printf("mortagage price($) : %d\n",temp->mortgage_price);
            printf("rent price($) : %d\n",temp->rent_price);
            printf("Registerar username : %s\n",temp->registerar_uname);
            printf("Seller username : %s\n",temp->seller_uname);
            printf("status : Sold\n");
            printf("registration date : %s\n",temp->registration_date);
            printf("sale date : %s\n",temp->sale_date);
            printf("\n==========================\n\n");
        }
        temp = temp->next;
    }

    system("pause");
}

void user_activity_rent_commercial()
{
    char username[50];
    struct rent_commercial *head = NULL , *temp = NULL , *last = NULL;
    struct rent_commercial co;

    system("cls");

    line_2();

    printf("Please Enter Employee Username To Search :");
    fflush(stdin);
    gets(username);

    FILE *fp = fopen("rent_commercial.txt","r");

    while(fread(&co,sizeof(struct rent_commercial),1, fp)){


        temp = malloc(sizeof(struct rent_commercial));

        temp->no = co.no;
        temp->municipal_area = co.municipal_area;
        strcpy(temp->address,co.address);
        strcpy(temp->document,co.document);
        temp->age = co.age;
        temp->substruction = co.substruction;
        temp->floor = co.floor;
        temp->land = co.land;
        strcpy(temp->phone,co.phone);
        temp->room = co.room;
        temp->mortgage_price = co.mortgage_price;
        temp->rent_price = co.rent_price;
        temp->status = co.status;
        strcpy(temp->registration_date,co.registration_date);
        strcpy(temp->sale_date,co.sale_date);
        strcpy(temp->registerar_uname,co.registerar_uname);
        strcpy(temp->seller_uname,co.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 1&&(strcmp(temp->registerar_uname,username)==0||strcmp(temp->seller_uname,username)==0)){

            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("type of document : %s\n",temp->document);
            printf("age of commercial property : %d\n",temp->age);
            printf("substruction meterage : %d\n",temp->substruction);
            printf("floor : %d\n",temp->floor);
            printf("meterage of land : %d\n",temp->land);
            printf("owner phone-number : %s\n",temp->phone);
            printf("amount of rooms : %d\n",temp->room);
            printf("mortagage price($) : %d\n",temp->mortgage_price);
            printf("rent price($) : %d\n",temp->rent_price);
            printf("Registerar username : %s\n",temp->registerar_uname);
            printf("status : available\n");
            printf("registration date : %s\n",temp->registration_date);
            printf("\n==========================\n\n");
        }
        if(temp->status == 0&&(strcmp(temp->registerar_uname,username)==0||strcmp(temp->seller_uname,username)==0)){

            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("type of document : %s\n",temp->document);
            printf("age of commercial property : %d\n",temp->age);
            printf("substruction meterage : %d\n",temp->substruction);
            printf("floor : %d\n",temp->floor);
            printf("meterage of land : %d\n",temp->land);
            printf("owner phone-number : %s\n",temp->phone);
            printf("amount of rooms : %d\n",temp->room);
            printf("mortagage price($) : %d\n",temp->mortgage_price);
            printf("rent price($) : %d\n",temp->rent_price);
            printf("Registerar username : %s\n",temp->registerar_uname);
            printf("seller username : %s\n",temp->seller_uname);
            printf("status : Sold\n");
            printf("registration date : %s\n",temp->registration_date);
            printf("sale date : %s\n",temp->sale_date);
            printf("\n==========================\n\n");
        }
        temp = temp->next;
    }

    system("pause");
}

void user_activity_rent_land()
{
    char username[50];
    struct rent_land *head = NULL , *temp = NULL , *last = NULL;
    struct rent_land ld;

    system("cls");

    line_2();

    printf("Please Enter Employee Username To Search :");
    fflush(stdin);
    gets(username);

    FILE *fp = fopen("rent_land.txt","r");

    while(fread(&ld,sizeof(struct rent_land),1, fp)){


        temp = malloc(sizeof(struct rent_land));

        temp->no = ld.no;
        temp->municipal_area = ld.municipal_area;
        strcpy(temp->address,ld.address);
        strcpy(temp->type,ld.type);
        temp->meterage = ld.meterage;
        strcpy(temp->phone,ld.phone);
        temp->mortgage_price = ld.mortgage_price;
        temp->rent_price = ld.rent_price;
        temp->status = ld.status;
        strcpy(temp->registration_date,ld.registration_date);
        strcpy(temp->sale_date,ld.sale_date);
        strcpy(temp->registerar_uname,ld.registerar_uname);
        strcpy(temp->seller_uname,ld.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 1&&(strcmp(temp->registerar_uname,username)==0||strcmp(temp->seller_uname,username)==0)){

            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("type of land : %s\n",temp->type);
            printf("meterage of land : %d\n",temp->meterage);
            printf("owner phone-number : %s\n",temp->phone);
            printf("mortagage price($) : %d\n",temp->mortgage_price);
            printf("rent price($) : %d\n",temp->rent_price);
            printf("Registerar username : %s\n",temp->registerar_uname);
            printf("status : available\n");
            printf("registration date : %s\n",temp->registration_date);
            printf("\n==========================\n\n");
        }
        if(temp->status == 0&&(strcmp(temp->registerar_uname,username)==0||strcmp(temp->seller_uname,username)==0)){

            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("type of land : %s\n",temp->type);
            printf("meterage of land : %d\n",temp->meterage);
            printf("owner phone-number : %s\n",temp->phone);
            printf("mortagage price($) : %d\n",temp->mortgage_price);
            printf("rent price($) : %d\n",temp->rent_price);
            printf("Registerar username : %s\n",temp->registerar_uname);
            printf("seller username : %s\n",temp->seller_uname);
            printf("status : Sold\n");
            printf("registration date : %s\n",temp->registration_date);
            printf("sale date : %s\n",temp->sale_date);
            printf("\n==========================\n\n");
        }
        temp = temp->next;
    }

    system("pause");
}

void total_price_available_sale_apartment()
{
    int total_price = 0;
    struct apartment *head = NULL , *temp = NULL , *last = NULL;
    struct apartment ap;

    FILE *fp = fopen("sale_apartment.txt","r");

    while(fread(&ap,sizeof(struct apartment),1, fp)){


        temp = malloc(sizeof(struct apartment));

        temp->no = ap.no;
        temp->municipal_area = ap.municipal_area;
        strcpy(temp->address,ap.address);
        temp->age = ap.age;
        temp->substruction = ap.substruction;
        temp->floor = ap.floor;
        temp->land = ap.land;
        strcpy(temp->phone,ap.phone);
        temp->bedroom = ap.bedroom;
        temp->price = ap.price;
        temp->status = ap.status;
        strcpy(temp->registration_date,ap.registration_date);
        strcpy(temp->sale_date,ap.sale_date);
        strcpy(temp->registerar_uname,ap.registerar_uname);
        strcpy(temp->seller_uname,ap.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 1){
            total_price = total_price + temp->price;
        }
        temp = temp->next;
    }

    printf("\n%d($) is total price for available sale-apartments.\n\n",total_price);
    system("pause");
}

void total_price_available_sale_house()
{
    int total_price = 0;
    struct house *head = NULL , *temp = NULL , *last = NULL;
    struct house h;

    FILE *fp = fopen("sale_house.txt","r");

    while(fread(&h,sizeof(struct house),1, fp)){


        temp = malloc(sizeof(struct house));

        temp->no = h.no;
        temp->municipal_area = h.municipal_area;
        strcpy(temp->address,h.address);
        temp->age = h.age;
        temp->substruction = h.substruction;
        temp->floor = h.floor;
        temp->land = h.land;
        strcpy(temp->phone,h.phone);
        temp->bedroom = h.bedroom;
        temp->price = h.price;
        temp->status = h.status;
        strcpy(temp->registration_date,h.registration_date);
        strcpy(temp->sale_date,h.sale_date);
        strcpy(temp->registerar_uname,h.registerar_uname);
        strcpy(temp->seller_uname,h.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 1){
            total_price = total_price + temp->price;
        }
        temp = temp->next;
    }

    printf("\n%d($) is total price for available sale-houses.\n\n",total_price);
    system("pause");
}

void total_price_available_sale_commercial()
{
    int total_price = 0;
    struct commercial *head = NULL , *temp = NULL , *last = NULL;
    struct commercial co;

    FILE *fp = fopen("sale_commercial.txt","r");

    while(fread(&co,sizeof(struct commercial),1, fp)){


        temp = malloc(sizeof(struct commercial));

        temp->no = co.no;
        temp->municipal_area = co.municipal_area;
        strcpy(temp->address,co.address);
        strcpy(temp->document,co.document);
        temp->age = co.age;
        temp->substruction = co.substruction;
        temp->floor = co.floor;
        temp->land = co.land;
        strcpy(temp->phone,co.phone);
        temp->room = co.room;
        temp->price = co.price;
        temp->status = co.status;
        strcpy(temp->registration_date,co.registration_date);
        strcpy(temp->sale_date,co.sale_date);
        strcpy(temp->registerar_uname,co.registerar_uname);
        strcpy(temp->seller_uname,co.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 1){
            total_price = total_price + temp->price;
        }
        temp = temp->next;
    }

    printf("\n%d($) is total price for available sale-commercial properties.\n\n",total_price);
    system("pause");
}

void total_price_available_sale_land()
{
    int total_price = 0;
    struct land *head = NULL , *temp = NULL , *last = NULL;
    struct land ld;

    FILE *fp = fopen("sale_land.txt","r");

    while(fread(&ld,sizeof(struct land),1, fp)){


        temp = malloc(sizeof(struct land));

        temp->no = ld.no;
        temp->municipal_area = ld.municipal_area;
        strcpy(temp->address,ld.address);
        strcpy(temp->type,ld.type);
        temp->meterage = ld.meterage;
        strcpy(temp->phone,ld.phone);
        temp->price = ld.price;
        temp->status = ld.status;
        strcpy(temp->registration_date,ld.registration_date);
        strcpy(temp->sale_date,ld.sale_date);
        strcpy(temp->registerar_uname,ld.registerar_uname);
        strcpy(temp->seller_uname,ld.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 1){
            total_price = total_price + temp->price;
        }
        temp = temp->next;
    }

    printf("\n%d($) is total price for available sale-lands.\n\n",total_price);
    system("pause");
}

void total_price_available_rent_apartment()
{
    int total_mortgage_price = 0;
    int total_rent_price = 0;
    struct rent_apartment *head = NULL , *temp = NULL , *last = NULL;
    struct rent_apartment ap;

    FILE *fp = fopen("rent_apartment.txt","r");

    while(fread(&ap,sizeof(struct rent_apartment),1, fp)){


        temp = malloc(sizeof(struct rent_apartment));

        temp->no = ap.no;
        temp->municipal_area = ap.municipal_area;
        strcpy(temp->address,ap.address);
        temp->age = ap.age;
        temp->substruction = ap.substruction;
        temp->floor = ap.floor;
        temp->land = ap.land;
        strcpy(temp->phone,ap.phone);
        temp->bedroom = ap.bedroom;
        temp->mortgage_price = ap.mortgage_price;
        temp->rent_price = ap.rent_price;
        temp->status = ap.status;
        strcpy(temp->registration_date,ap.registration_date);
        strcpy(temp->sale_date,ap.sale_date);
        strcpy(temp->registerar_uname,ap.registerar_uname);
        strcpy(temp->seller_uname,ap.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 1){
            total_mortgage_price = total_mortgage_price + temp->mortgage_price;

            total_rent_price = total_rent_price + temp->rent_price;
        }
        temp = temp->next;
    }

    printf("\n%d($) is total mortgage price for available rent-apartments.\n",total_mortgage_price);
    printf("\n%d($) is total rent price for available rent-apartments.\n\n",total_rent_price);
    system("pause");

}

void total_price_available_rent_house()
{
    int total_mortgage_price = 0;
    int total_rent_price = 0;
    struct rent_house *head = NULL , *temp = NULL , *last = NULL;
    struct rent_house h;

    FILE *fp = fopen("rent_house.txt","r");

    while(fread(&h,sizeof(struct rent_house),1, fp)){


        temp = malloc(sizeof(struct rent_house));

        temp->no = h.no;
        temp->municipal_area = h.municipal_area;
        strcpy(temp->address,h.address);
        temp->age = h.age;
        temp->substruction = h.substruction;
        temp->floor = h.floor;
        temp->land = h.land;
        strcpy(temp->phone,h.phone);
        temp->bedroom = h.bedroom;
        temp->mortgage_price = h.mortgage_price;
        temp->rent_price = h.rent_price;
        temp->status = h.status;
        strcpy(temp->registration_date,h.registration_date);
        strcpy(temp->sale_date,h.sale_date);
        strcpy(temp->registerar_uname,h.registerar_uname);
        strcpy(temp->seller_uname,h.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 1){
            total_mortgage_price = total_mortgage_price + temp->mortgage_price;

            total_rent_price = total_rent_price + temp->rent_price;
        }
        temp = temp->next;
    }

    printf("\n%d($) is total mortgage price for available rent-houses.\n",total_mortgage_price);
    printf("\n%d($) is total rent price for available rent-houses.\n\n",total_rent_price);
    system("pause");

}

void total_price_available_rent_commercial()
{
    int total_mortgage_price = 0;
    int total_rent_price = 0;
    struct rent_commercial *head = NULL , *temp = NULL , *last = NULL;
    struct rent_commercial co;

    FILE *fp = fopen("rent_commercial.txt","r");

    while(fread(&co,sizeof(struct rent_commercial),1, fp)){


        temp = malloc(sizeof(struct rent_commercial));

        temp->no = co.no;
        temp->municipal_area = co.municipal_area;
        strcpy(temp->address,co.address);
        strcpy(temp->document,co.document);
        temp->age = co.age;
        temp->substruction = co.substruction;
        temp->floor = co.floor;
        temp->land = co.land;
        strcpy(temp->phone,co.phone);
        temp->room = co.room;
        temp->mortgage_price = co.mortgage_price;
        temp->rent_price = co.rent_price;
        temp->status = co.status;
        strcpy(temp->registration_date,co.registration_date);
        strcpy(temp->sale_date,co.sale_date);
        strcpy(temp->registerar_uname,co.registerar_uname);
        strcpy(temp->seller_uname,co.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 1){
            total_mortgage_price = total_mortgage_price + temp->mortgage_price;

            total_rent_price = total_rent_price + temp->rent_price;
        }
        temp = temp->next;
    }

    printf("\n%d($) is total mortgage price for available rent-commercial properties.\n",total_mortgage_price);
    printf("\n%d($) is total rent price for available rent-commercial properties.\n\n",total_rent_price);
    system("pause");
}

void total_price_available_rent_land()
{
    int total_mortgage_price = 0;
    int total_rent_price = 0;
    struct rent_land *head = NULL , *temp = NULL , *last = NULL;
    struct rent_land ld;

    FILE *fp = fopen("rent_land.txt","r");

    while(fread(&ld,sizeof(struct rent_land),1, fp)){


        temp = malloc(sizeof(struct rent_land));

        temp->no = ld.no;
        temp->municipal_area = ld.municipal_area;
        strcpy(temp->address,ld.address);
        strcpy(temp->type,ld.type);
        temp->meterage = ld.meterage;
        strcpy(temp->phone,ld.phone);
        temp->mortgage_price = ld.mortgage_price;
        temp->rent_price = ld.rent_price;
        temp->status = ld.status;
        strcpy(temp->registration_date,ld.registration_date);
        strcpy(temp->sale_date,ld.sale_date);
        strcpy(temp->registerar_uname,ld.registerar_uname);
        strcpy(temp->seller_uname,ld.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 1){
            total_mortgage_price = total_mortgage_price + temp->mortgage_price;

            total_rent_price = total_rent_price + temp->rent_price;
        }
        temp = temp->next;
    }

    printf("\n%d($) is total mortgage price for available rent-lands.\n",total_mortgage_price);
    printf("\n%d($) is total rent price for available rent-lands.\n\n",total_rent_price);
    system("pause");
}

void sold_filter_date_sale_apartment()
{
    int count_apartment = 0;
    char date_1[100];
    char date_2[100];
    struct apartment *head = NULL , *temp = NULL , *last = NULL;
    struct apartment ap;

    system("cls");

    line_2();

    printf("Please Enter The Dates In This Format (mm/dd/yy)\n\n");
    printf("Beggining Date : ");
    fflush(stdin);
    gets(date_1);
    printf("End Date : ");
    fflush(stdin);
    gets(date_2);

    FILE *fp = fopen("sale_apartment.txt","r");

    while(fread(&ap,sizeof(struct apartment),1, fp)){


        temp = malloc(sizeof(struct apartment));

        temp->no = ap.no;
        temp->municipal_area = ap.municipal_area;
        strcpy(temp->address,ap.address);
        temp->age = ap.age;
        temp->substruction = ap.substruction;
        temp->floor = ap.floor;
        temp->land = ap.land;
        strcpy(temp->phone,ap.phone);
        temp->bedroom = ap.bedroom;
        temp->price = ap.price;
        temp->status = ap.status;
        strcpy(temp->registration_date,ap.registration_date);
        strcpy(temp->sale_date,ap.sale_date);
        strcpy(temp->registerar_uname,ap.registerar_uname);
        strcpy(temp->seller_uname,ap.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 0 && strcmp(temp->sale_date,date_1)>= 0 && strcmp(date_2,temp->sale_date)>= 0 ){

            count_apartment++;
            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("age of apartment : %d\n",temp->age);
            printf("substruction meterage : %d\n",temp->substruction);
            printf("floor : %d\n",temp->floor);
            printf("meterage of land : %d\n",temp->land);
            printf("owner phone-number : %s\n",temp->phone);
            printf("amount of bedrooms : %d\n",temp->bedroom);
            printf("price($) : %d\n",temp->price);
            printf("Registerar username : %s\n",temp->registerar_uname);
            printf("Seller username : %s\n",temp->seller_uname);
            printf("status : Sold\n");
            printf("registration date : %s\n",temp->registration_date);
            printf("sale date : %s\n",temp->sale_date);

            printf("\n==========================\n\n");
        }
        temp = temp->next;
    }

    printf("\n%d Apartment(s) Has Been Sold In This Period.\n\n",count_apartment);
    system("pause");
}

void sold_filter_date_sale_house()
{
    int count_house = 0;
    char date_1[100];
    char date_2[100];
    struct house *head = NULL , *temp = NULL , *last = NULL;
    struct house ap;

    system("cls");

    line_2();

    printf("Please Enter The Dates In This Format (mm/dd/yy)\n\n");
    printf("Beggining date : ");
    fflush(stdin);
    gets(date_1);
    printf("End date : ");
    fflush(stdin);
    gets(date_2);

    FILE *fp = fopen("sale_house.txt","r");

    while(fread(&ap,sizeof(struct house),1, fp)){


        temp = malloc(sizeof(struct house));

        temp->no = ap.no;
        temp->municipal_area = ap.municipal_area;
        strcpy(temp->address,ap.address);
        temp->age = ap.age;
        temp->substruction = ap.substruction;
        temp->floor = ap.floor;
        temp->land = ap.land;
        strcpy(temp->phone,ap.phone);
        temp->bedroom = ap.bedroom;
        temp->price = ap.price;
        temp->status = ap.status;
        strcpy(temp->registration_date,ap.registration_date);
        strcpy(temp->sale_date,ap.sale_date);
        strcpy(temp->registerar_uname,ap.registerar_uname);
        strcpy(temp->seller_uname,ap.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 0 && strcmp(temp->sale_date,date_1)>= 0 && strcmp(date_2,temp->sale_date)>= 0 ){

            count_house++;
            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("age of apartment : %d\n",temp->age);
            printf("substruction meterage : %d\n",temp->substruction);
            printf("floor : %d\n",temp->floor);
            printf("meterage of land : %d\n",temp->land);
            printf("owner phone-number : %s\n",temp->phone);
            printf("amount of bedrooms : %d\n",temp->bedroom);
            printf("price($) : %d\n",temp->price);
            printf("Registerar username : %s\n",temp->registerar_uname);
            printf("Seller username : %s\n",temp->seller_uname);
            printf("status : Sold\n");
            printf("registration date : %s\n",temp->registration_date);
            printf("sale date : %s\n",temp->sale_date);

            printf("\n==========================\n\n");
        }
        temp = temp->next;
    }

    printf("\n%d House(s) Has Been Sold In This Period.\n\n",count_house);
    system("pause");
}

void sold_filter_date_sale_commercial()
{
    int count_commercial = 0;
    char date_1[100];
    char date_2[100];
    struct commercial *head = NULL , *temp = NULL , *last = NULL;
    struct commercial co;

    system("cls");

    line_2();

    printf("Please Enter The Dates In This Format (mm/dd/yy)\n\n");
    printf("Beggining date : ");
    fflush(stdin);
    gets(date_1);
    printf("End date : ");
    fflush(stdin);
    gets(date_2);

    FILE *fp = fopen("sale_commercial.txt","r");

    while(fread(&co,sizeof(struct commercial),1, fp)){


        temp = malloc(sizeof(struct commercial));

        temp->no = co.no;
        temp->municipal_area = co.municipal_area;
        strcpy(temp->address,co.address);
        strcpy(temp->document,co.document);
        temp->age = co.age;
        temp->substruction = co.substruction;
        temp->floor = co.floor;
        temp->land = co.land;
        strcpy(temp->phone,co.phone);
        temp->room = co.room;
        temp->price = co.price;
        temp->status = co.status;
        strcpy(temp->registration_date,co.registration_date);
        strcpy(temp->sale_date,co.sale_date);
        strcpy(temp->registerar_uname,co.registerar_uname);
        strcpy(temp->seller_uname,co.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 0 && strcmp(temp->sale_date,date_1)>= 0 && strcmp(date_2,temp->sale_date)>= 0 ){

            count_commercial++;
            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("type of document : %s\n",temp->document);
            printf("age of commercial property : %d\n",temp->age);
            printf("substruction meterage : %d\n",temp->substruction);
            printf("floor : %d\n",temp->floor);
            printf("meterage of land : %d\n",temp->land);
            printf("owner phone-number : %s\n",temp->phone);
            printf("amount of rooms : %d\n",temp->room);
            printf("price($) : %d\n",temp->price);
            printf("Registerar username : %s\n",temp->registerar_uname);
            printf("seller username : %s\n",temp->seller_uname);
            printf("status : Sold\n");
            printf("registration date : %s\n",temp->registration_date);
            printf("sale date : %s\n",temp->sale_date);
            printf("\n==========================\n\n");
        }
        temp = temp->next;
    }

    printf("\n%d Commercial Properties Has Been Sold In This Period.\n\n",count_commercial);
    system("pause");

}

void sold_filter_date_sale_land()
{
    int count_land = 0;
    char date_1[100];
    char date_2[100];
    struct land *head = NULL , *temp = NULL , *last = NULL;
    struct land ld;

    system("cls");

    line_2();

    printf("Please Enter The Dates In This Format (mm/dd/yy)\n\n");
    printf("Beggining date : ");
    fflush(stdin);
    gets(date_1);
    printf("End date : ");
    fflush(stdin);
    gets(date_2);

    FILE *fp = fopen("sale_land.txt","r");

    while(fread(&ld,sizeof(struct land),1, fp)){


        temp = malloc(sizeof(struct land));

        temp->no = ld.no;
        temp->municipal_area = ld.municipal_area;
        strcpy(temp->address,ld.address);
        strcpy(temp->type,ld.type);
        temp->meterage = ld.meterage;
        strcpy(temp->phone,ld.phone);
        temp->price = ld.price;
        temp->status = ld.status;
        strcpy(temp->registration_date,ld.registration_date);
        strcpy(temp->sale_date,ld.sale_date);
        strcpy(temp->registerar_uname,ld.registerar_uname);
        strcpy(temp->seller_uname,ld.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 0 && strcmp(temp->sale_date,date_1)>= 0 && strcmp(date_2,temp->sale_date)>= 0 ){

            count_land++;
            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("type of land : %s\n",temp->type);
            printf("meterage of land : %d\n",temp->meterage);
            printf("owner phone-number : %s\n",temp->phone);
            printf("price($) : %d\n",temp->price);
            printf("Registerar username : %s\n",temp->registerar_uname);
            printf("seller username : %s\n",temp->seller_uname);
            printf("status : Sold\n");
            printf("registration date : %s\n",temp->registration_date);
            printf("sale date : %s\n",temp->sale_date);
            printf("\n==========================\n\n");
        }
        temp = temp->next;
    }

    printf("\n%d Land(s) Has Been Sold In This Period.\n\n",count_land);
    system("pause");
}

void sold_filter_date_rent_apartment()
{
    int count_apartment = 0;
    char date_1[100];
    char date_2[100];
    struct rent_apartment *head = NULL , *temp = NULL , *last = NULL;
    struct rent_apartment ap;

    system("cls");

    line_2();

    printf("Please Enter The Dates In This Format (mm/dd/yy)\n\n");
    printf("Beggining date : ");
    fflush(stdin);
    gets(date_1);
    printf("End date : ");
    fflush(stdin);
    gets(date_2);

    FILE *fp = fopen("rent_apartment.txt","r");

    while(fread(&ap,sizeof(struct rent_apartment),1, fp)){


        temp = malloc(sizeof(struct rent_apartment));

        temp->no = ap.no;
        temp->municipal_area = ap.municipal_area;
        strcpy(temp->address,ap.address);
        temp->age = ap.age;
        temp->substruction = ap.substruction;
        temp->floor = ap.floor;
        temp->land = ap.land;
        strcpy(temp->phone,ap.phone);
        temp->bedroom = ap.bedroom;
        temp->mortgage_price = ap.mortgage_price;
        temp->rent_price = ap.rent_price;
        temp->status = ap.status;
        strcpy(temp->registration_date,ap.registration_date);
        strcpy(temp->sale_date,ap.sale_date);
        strcpy(temp->registerar_uname,ap.registerar_uname);
        strcpy(temp->seller_uname,ap.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 0 && strcmp(temp->sale_date,date_1)>= 0 && strcmp(date_2,temp->sale_date)>= 0 ){

            count_apartment++;
            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("age of apartment : %d\n",temp->age);
            printf("substruction meterage : %d\n",temp->substruction);
            printf("floor : %d\n",temp->floor);
            printf("meterage of land : %d\n",temp->land);
            printf("owner phone-number : %s\n",temp->phone);
            printf("amount of bedrooms : %d\n",temp->bedroom);
            printf("mortagage price($) : %d\n",temp->mortgage_price);
            printf("rent price($) : %d\n",temp->rent_price);
            printf("Registerar username : %s\n",temp->registerar_uname);
            printf("Seller username : %s\n",temp->seller_uname);
            printf("status : Sold\n");
            printf("registration date : %s\n",temp->registration_date);
            printf("sale date : %s\n",temp->sale_date);
            printf("\n==========================\n\n");
        }
        temp = temp->next;
    }

    printf("\n%d Apartment(s) Has Been Rented In This Period.\n\n",count_apartment);
    system("pause");

}

void sold_filter_date_rent_house()
{
    int count_house = 0;
    char date_1[100];
    char date_2[100];
    struct rent_house *head = NULL , *temp = NULL , *last = NULL;
    struct rent_house h;

    system("cls");

    line_2();

    printf("Please Enter The Dates In This Format (mm/dd/yy)\n\n");
    printf("Beggining date : ");
    fflush(stdin);
    gets(date_1);
    printf("End date : ");
    fflush(stdin);
    gets(date_2);

    FILE *fp = fopen("rent_house.txt","r");

    while(fread(&h,sizeof(struct rent_house),1, fp)){


        temp = malloc(sizeof(struct rent_house));

        temp->no = h.no;
        temp->municipal_area = h.municipal_area;
        strcpy(temp->address,h.address);
        temp->age = h.age;
        temp->substruction = h.substruction;
        temp->floor = h.floor;
        temp->land = h.land;
        strcpy(temp->phone,h.phone);
        temp->bedroom = h.bedroom;
        temp->mortgage_price = h.mortgage_price;
        temp->rent_price = h.rent_price;
        temp->status = h.status;
        strcpy(temp->registration_date,h.registration_date);
        strcpy(temp->sale_date,h.sale_date);
        strcpy(temp->registerar_uname,h.registerar_uname);
        strcpy(temp->seller_uname,h.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 0 && strcmp(temp->sale_date,date_1)>= 0 && strcmp(date_2,temp->sale_date)>= 0 ){

            count_house++;
            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("age of house : %d\n",temp->age);
            printf("substruction meterage : %d\n",temp->substruction);
            printf("floor : %d\n",temp->floor);
            printf("meterage of land : %d\n",temp->land);
            printf("owner phone-number : %s\n",temp->phone);
            printf("amount of bedrooms : %d\n",temp->bedroom);
            printf("mortagage price($) : %d\n",temp->mortgage_price);
            printf("rent price($) : %d\n",temp->rent_price);
            printf("Registerar username : %s\n",temp->registerar_uname);
            printf("Seller username : %s\n",temp->seller_uname);
            printf("status : Sold\n");
            printf("registration date : %s\n",temp->registration_date);
            printf("sale date : %s\n",temp->sale_date);
            printf("\n==========================\n\n");
        }
        temp = temp->next;
    }

    printf("\n%d House(s) Has Been Rented In This Period.\n\n",count_house);
    system("pause");
}

void sold_filter_date_rent_commercial()
{
    int count_commercial = 0;
    char date_1[100];
    char date_2[100];
    struct rent_commercial *head = NULL , *temp = NULL , *last = NULL;
    struct rent_commercial co;

    system("cls");

    line_2();

    printf("Please Enter The Dates In This Format (mm/dd/yy)\n\n");
    printf("Beggining date : ");
    fflush(stdin);
    gets(date_1);
    printf("End date : ");
    fflush(stdin);
    gets(date_2);

    FILE *fp = fopen("rent_commercial.txt","r");

    while(fread(&co,sizeof(struct rent_commercial),1, fp)){


        temp = malloc(sizeof(struct rent_commercial));

        temp->no = co.no;
        temp->municipal_area = co.municipal_area;
        strcpy(temp->address,co.address);
        strcpy(temp->document,co.document);
        temp->age = co.age;
        temp->substruction = co.substruction;
        temp->floor = co.floor;
        temp->land = co.land;
        strcpy(temp->phone,co.phone);
        temp->room = co.room;
        temp->mortgage_price = co.mortgage_price;
        temp->rent_price = co.rent_price;
        temp->status = co.status;
        strcpy(temp->registration_date,co.registration_date);
        strcpy(temp->sale_date,co.sale_date);
        strcpy(temp->registerar_uname,co.registerar_uname);
        strcpy(temp->seller_uname,co.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 0 && strcmp(temp->sale_date,date_1)>= 0 && strcmp(date_2,temp->sale_date)>= 0 ){

            count_commercial++;
            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("type of document : %s\n",temp->document);
            printf("age of commercial property : %d\n",temp->age);
            printf("substruction meterage : %d\n",temp->substruction);
            printf("floor : %d\n",temp->floor);
            printf("meterage of land : %d\n",temp->land);
            printf("owner phone-number : %s\n",temp->phone);
            printf("amount of rooms : %d\n",temp->room);
            printf("mortagage price($) : %d\n",temp->mortgage_price);
            printf("rent price($) : %d\n",temp->rent_price);
            printf("Registerar username : %s\n",temp->registerar_uname);
            printf("seller username : %s\n",temp->seller_uname);
            printf("status : Sold\n");
            printf("registration date : %s\n",temp->registration_date);
            printf("sale date : %s\n",temp->sale_date);
            printf("\n==========================\n\n");
        }
        temp = temp->next;
    }

    printf("\n%d Commercial Properties Has Been Rented In This Period.\n\n",count_commercial);
    system("pause");
}

void sold_filter_date_rent_land()
{
    int count_land = 0;
    char date_1[100];
    char date_2[100];
    struct rent_land *head = NULL , *temp = NULL , *last = NULL;
    struct rent_land ld;

    system("cls");

    line_2();

    printf("Please Enter The Dates In This Format (mm/dd/yy)\n\n");
    printf("Beggining date : ");
    fflush(stdin);
    gets(date_1);
    printf("End date : ");
    fflush(stdin);
    gets(date_2);

    FILE *fp = fopen("rent_land.txt","r");

    while(fread(&ld,sizeof(struct rent_land),1, fp)){


        temp = malloc(sizeof(struct rent_land));

        temp->no = ld.no;
        temp->municipal_area = ld.municipal_area;
        strcpy(temp->address,ld.address);
        strcpy(temp->type,ld.type);
        temp->meterage = ld.meterage;
        strcpy(temp->phone,ld.phone);
        temp->mortgage_price = ld.mortgage_price;
        temp->rent_price = ld.rent_price;
        temp->status = ld.status;
        strcpy(temp->registration_date,ld.registration_date);
        strcpy(temp->sale_date,ld.sale_date);
        strcpy(temp->registerar_uname,ld.registerar_uname);
        strcpy(temp->seller_uname,ld.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 0 && strcmp(temp->sale_date,date_1)>= 0 && strcmp(date_2,temp->sale_date)>= 0 ){

            count_land++;
            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("type of land : %s\n",temp->type);
            printf("meterage of land : %d\n",temp->meterage);
            printf("owner phone-number : %s\n",temp->phone);
            printf("mortagage price($) : %d\n",temp->mortgage_price);
            printf("rent price($) : %d\n",temp->rent_price);
            printf("Registerar username : %s\n",temp->registerar_uname);
            printf("seller username : %s\n",temp->seller_uname);
            printf("status : Sold\n");
            printf("registration date : %s\n",temp->registration_date);
            printf("sale date : %s\n",temp->sale_date);
            printf("\n==========================\n\n");
        }
        temp = temp->next;
    }

    printf("\n%d Land(s) Has Been Rented In This Period.\n\n",count_land);
    system("pause");
}

void filter_sale_apartment()
{
    int min_floor, max_floor;
    int min_price, max_price;
    int min_municipal, max_municipal;
    int min_land, max_land;
    int min_substruction , max_substruction;
    int min_bedroom, max_bedroom;
    int min_age, max_age;
    int count_apartemnt = 0;
    struct apartment *head = NULL , *temp = NULL , *last = NULL;
    struct apartment ap;

    system("cls");

    line_2();

    printf("Please Enter Min Price : ");
    scanf("%d",&min_price);
    printf("Please Enter Max Price : ");
    scanf("%d",&max_price);

    line_2();

    printf("Please Enter The Min Number Of Bedrooms : ");
    scanf("%d",&min_bedroom);
    printf("Please Enter The Max Number Of Bedrooms : ");
    scanf("%d",&max_bedroom);

    line_2();

    printf("Please Enter Min Floor : ");
    scanf("%d",&min_floor);
    printf("Please Enter Max Floor : ");
    scanf("%d",&max_floor);

    line_2();

    printf("Please Enter Min Municipal Area : ");
    scanf("%d",&min_municipal);
    printf("Please Enter Max Municipal Area : ");
    scanf("%d",&max_municipal);

    line_2();

    printf("Please Enter Min substruction Area : ");
    scanf("%d",&min_substruction);
    printf("Please Enter Max substruction Area  : ");
    scanf("%d",&max_substruction);

    line_2();

    printf("Please Enter Min Meterage Of Land : ");
    scanf("%d",&min_land);
    printf("Please Enter Max Meterage Of Land: ");
    scanf("%d",&max_land);

    line_2();

    printf("Please Enter Min Age Of Apartment : ");
    scanf("%d",&min_age);
    printf("Please Enter Max Age Of Apartment : ");
    scanf("%d",&max_age);

    system("cls");

    FILE *fp = fopen("sale_apartment.txt","r");

    while(fread(&ap,sizeof(struct apartment),1, fp)){


        temp = malloc(sizeof(struct apartment));

        temp->no = ap.no;
        temp->municipal_area = ap.municipal_area;
        strcpy(temp->address,ap.address);
        temp->age = ap.age;
        temp->substruction = ap.substruction;
        temp->floor = ap.floor;
        temp->land = ap.land;
        strcpy(temp->phone,ap.phone);
        temp->bedroom = ap.bedroom;
        temp->price = ap.price;
        temp->status = ap.status;
        strcpy(temp->registration_date,ap.registration_date);
        strcpy(temp->sale_date,ap.sale_date);
        strcpy(temp->registerar_uname,ap.registerar_uname);
        strcpy(temp->seller_uname,ap.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 1 && temp->floor >= min_floor && temp->floor <= max_floor && temp->price >= min_price && temp->price <= max_price
            && temp->municipal_area >= min_municipal && temp->municipal_area <= max_municipal && temp->bedroom >= min_bedroom && temp->bedroom <= max_bedroom
            && temp->land >= min_land && temp->land <= max_land && temp->substruction >= min_substruction && temp->substruction <= max_substruction && temp->age >= min_age
            && temp->age <= max_age ){
            count_apartemnt++;//to find the amount of the apartments.
            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("age of apartment : %d\n",temp->age);
            printf("substruction meterage : %d\n",temp->substruction);
            printf("floor : %d\n",temp->floor);
            printf("meterage of land : %d\n",temp->land);
            printf("owner phone-number : %s\n",temp->phone);
            printf("amount of bedrooms : %d\n",temp->bedroom);
            printf("price($) : %d\n",temp->price);
            printf("registration date : %s\n",temp->registration_date);
            printf("\n==========================\n\n");
        }
        temp = temp->next;
    }

    printf("\n%d Apartment(s) Is Available For Sale With This Conditions.\n\n",count_apartemnt);
    system("pause");
}

void filter_sale_house()
{
    int min_floor, max_floor;
    int min_price, max_price;
    int min_municipal, max_municipal;
    int min_land, max_land;
    int min_substruction , max_substruction;
    int min_bedroom, max_bedroom;
    int min_age, max_age;
    int count_house = 0;
    struct house *head = NULL , *temp = NULL , *last = NULL;
    struct house ap;

    system("cls");

    line_2();

    printf("Please Enter Min Price : ");
    scanf("%d",&min_price);
    printf("Please Enter Max Price : ");
    scanf("%d",&max_price);

    line_2();

    printf("Please Enter The Min Number Of Bedrooms : ");
    scanf("%d",&min_bedroom);
    printf("Please Enter The Max Number Of Bedrooms : ");
    scanf("%d",&max_bedroom);

    line_2();

    printf("Please Enter Min Floor : ");
    scanf("%d",&min_floor);
    printf("Please Enter Max Floor : ");
    scanf("%d",&max_floor);

    line_2();

    printf("Please Enter Min Municipal Area : ");
    scanf("%d",&min_municipal);
    printf("Please Enter Max Municipal Area : ");
    scanf("%d",&max_municipal);

    line_2();

    printf("Please Enter Min substruction Area : ");
    scanf("%d",&min_substruction);
    printf("Please Enter Max substruction Area  : ");
    scanf("%d",&max_substruction);

    line_2();

    printf("Please Enter Min Meterage Of Land : ");
    scanf("%d",&min_land);
    printf("Please Enter Max Meterage Of Land: ");
    scanf("%d",&max_land);

    line_2();

    printf("Please Enter Min Age Of House : ");
    scanf("%d",&min_age);
    printf("Please Enter Max Age Of House : ");
    scanf("%d",&max_age);

    system("cls");

    FILE *fp = fopen("sale_house.txt","r");

    while(fread(&ap,sizeof(struct house),1, fp)){


        temp = malloc(sizeof(struct house));

        temp->no = ap.no;
        temp->municipal_area = ap.municipal_area;
        strcpy(temp->address,ap.address);
        temp->age = ap.age;
        temp->substruction = ap.substruction;
        temp->floor = ap.floor;
        temp->land = ap.land;
        strcpy(temp->phone,ap.phone);
        temp->bedroom = ap.bedroom;
        temp->price = ap.price;
        temp->status = ap.status;
        strcpy(temp->registration_date,ap.registration_date);
        strcpy(temp->sale_date,ap.sale_date);
        strcpy(temp->registerar_uname,ap.registerar_uname);
        strcpy(temp->seller_uname,ap.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 1 && temp->floor >= min_floor && temp->floor <= max_floor && temp->price >= min_price && temp->price <= max_price
            && temp->municipal_area >= min_municipal && temp->municipal_area <= max_municipal && temp->bedroom >= min_bedroom && temp->bedroom <= max_bedroom
            && temp->land >= min_land && temp->land <= max_land && temp->substruction >= min_substruction && temp->substruction <= max_substruction && temp->age >= min_age
            && temp->age <= max_age ){
            count_house++;//to find the amount of the apartments.
            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("age of house : %d\n",temp->age);
            printf("substruction meterage : %d\n",temp->substruction);
            printf("floor : %d\n",temp->floor);
            printf("meterage of land : %d\n",temp->land);
            printf("owner phone-number : %s\n",temp->phone);
            printf("amount of bedrooms : %d\n",temp->bedroom);
            printf("price($) : %d\n",temp->price);
            printf("registration date : %s\n",temp->registration_date);
            printf("\n==========================\n\n");
        }
        temp = temp->next;
    }

    if(count_house == 0 || count_house == 1)
        printf("\n%d House Is Available For Sale With This Conditions.\n\n",count_house);
    else
        printf("\n%d Houses Are Available For Sale With This Conditions.\n\n",count_house);

    system("pause");
}

void filter_sale_commercial()
{
    int min_floor, max_floor;
    int min_price, max_price;
    int min_municipal, max_municipal;
    int min_land, max_land;
    int min_substruction , max_substruction;
    int min_room, max_room;
    int min_age, max_age;
    char type_of_document[50];
    int opt;
    int count_commercial = 0;
    struct commercial *head = NULL , *temp = NULL , *last = NULL;
    struct commercial co;

    system("cls");

    line_2();

    printf("Please Enter Min Price : ");
    scanf("%d",&min_price);
    printf("Please Enter Max Price : ");
    scanf("%d",&max_price);

    line_2();

    printf("Please Enter The Min Number Of Rooms : ");
    scanf("%d",&min_room);
    printf("Please Enter The Max Number Of Rooms : ");
    scanf("%d",&max_room);

    line_2();

    printf("Please Enter Min Floor : ");
    scanf("%d",&min_floor);
    printf("Please Enter Max Floor : ");
    scanf("%d",&max_floor);

    line_2();

    printf("Please Specify The Document Type(1-Official administrative document OR 2-Administrative position)\nPlease Enter number 1 or 2 : ");
    fflush(stdin);
    scanf("%d",&opt);
    if(opt == 1){
        strcpy(type_of_document,"Official administrative document");
    }
    if(opt == 2){
        strcpy(type_of_document,"Administrative position");
    }

    line_2();

    printf("Please Enter Min Municipal Area : ");
    scanf("%d",&min_municipal);
    printf("Please Enter Max Municipal Area : ");
    scanf("%d",&max_municipal);

    line_2();

    printf("Please Enter Min substruction Area : ");
    scanf("%d",&min_substruction);
    printf("Please Enter Max substruction Area  : ");
    scanf("%d",&max_substruction);

    line_2();

    printf("Please Enter Min Meterage Of Land : ");
    scanf("%d",&min_land);
    printf("Please Enter Max Meterage Of Land: ");
    scanf("%d",&max_land);

    line_2();

    printf("Please Enter Min Age Of Commercial property : ");
    scanf("%d",&min_age);
    printf("Please Enter Max Age Of Commercial property : ");
    scanf("%d",&max_age);

    FILE *fp = fopen("sale_commercial.txt","r");

    while(fread(&co,sizeof(struct commercial),1, fp)){


        temp = malloc(sizeof(struct commercial));

        temp->no = co.no;
        temp->municipal_area = co.municipal_area;
        strcpy(temp->address,co.address);
        strcpy(temp->document,co.document);
        temp->age = co.age;
        temp->substruction = co.substruction;
        temp->floor = co.floor;
        temp->land = co.land;
        strcpy(temp->phone,co.phone);
        temp->room = co.room;
        temp->price = co.price;
        temp->status = co.status;
        strcpy(temp->registration_date,co.registration_date);
        strcpy(temp->sale_date,co.sale_date);
        strcpy(temp->registerar_uname,co.registerar_uname);
        strcpy(temp->seller_uname,co.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

            if(temp->status == 1 && temp->floor >= min_floor && temp->floor <= max_floor && temp->price >= min_price && temp->price <= max_price
            && temp->municipal_area >= min_municipal && temp->municipal_area <= max_municipal && temp->room >= min_room && temp->room <= max_room
            && temp->land >= min_land && temp->land <= max_land && temp->substruction >= min_substruction && temp->substruction <= max_substruction && temp->age >= min_age
            && temp->age <= max_age && strcmp(type_of_document,temp->document)==0){
            count_commercial++;//to find the amount of the apartments.
            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("type of document : %s\n",temp->document);
            printf("age of commercial property : %d\n",temp->age);
            printf("substruction meterage : %d\n",temp->substruction);
            printf("floor : %d\n",temp->floor);
            printf("meterage of land : %d\n",temp->land);
            printf("owner phone-number : %s\n",temp->phone);
            printf("amount of rooms : %d\n",temp->room);
            printf("price($) : %d\n",temp->price);
            printf("registration date : %s\n",temp->registration_date);
            printf("\n==========================\n\n");
        }
        temp = temp->next;
    }

    if(count_commercial == 0 || count_commercial == 1)
        printf("\n%d Commercial Property Is Available For Sale With This Condition.\n\n",count_commercial);
    else
        printf("\n%d Commercial Properties Are Available For Sale With This Condition.\n\n",count_commercial);

    system("pause");
}

void filter_sale_land()
{
    int min_price, max_price;
    int min_municipal, max_municipal;
    int min_land, max_land;
    char type_of_land[50];
    int opt;
    int count_land = 0;
    struct land *head = NULL , *temp = NULL , *last = NULL;
    struct land ld;

    system("cls");

    line_2();

    printf("Please Enter Min Price : ");
    scanf("%d",&min_price);
    printf("Please Enter Max Price : ");
    scanf("%d",&max_price);

    line_2();

    printf("Please Specify The land Type(1-agriculture OR 2-residential development land)\nPlease Enter number 1 or 2 : ");
    fflush(stdin);
    scanf("%d",&opt);
    if(opt == 1){
        strcpy(type_of_land,"agriculture");
    }
    if(opt == 2){
        strcpy(type_of_land,"residential development");
    }

    line_2();

    printf("Please Enter Min Municipal Area : ");
    scanf("%d",&min_municipal);
    printf("Please Enter Max Municipal Area : ");
    scanf("%d",&max_municipal);

    line_2();

    printf("Please Enter Min Meterage Of Land : ");
    scanf("%d",&min_land);
    printf("Please Enter Max Meterage Of Land: ");
    scanf("%d",&max_land);


    FILE *fp = fopen("sale_land.txt","r");

    while(fread(&ld,sizeof(struct land),1, fp)){


        temp = malloc(sizeof(struct land));

        temp->no = ld.no;
        temp->municipal_area = ld.municipal_area;
        strcpy(temp->address,ld.address);
        strcpy(temp->type,ld.type);
        temp->meterage = ld.meterage;
        strcpy(temp->phone,ld.phone);
        temp->price = ld.price;
        temp->status = ld.status;
        strcpy(temp->registration_date,ld.registration_date);
        strcpy(temp->sale_date,ld.sale_date);
        strcpy(temp->registerar_uname,ld.registerar_uname);
        strcpy(temp->seller_uname,ld.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 1 && temp->price >= min_price && temp->price <= max_price
            && temp->municipal_area >= min_municipal && temp->municipal_area <= max_municipal && temp->meterage >= min_land && temp->meterage <= max_land
            && strcmp(type_of_land,temp->type)==0){
            count_land++;//to find the amount of the apartments.
            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("type of land : %s\n",temp->type);
            printf("meterage of land : %d\n",temp->meterage);
            printf("owner phone-number : %s\n",temp->phone);
            printf("price($) : %d\n",temp->price);
            printf("registration date : %s\n",temp->registration_date);
            printf("\n==========================\n\n");
        }
        temp = temp->next;
    }

    if(count_land == 0 || count_land == 1)
        printf("\n%d Land Is Available For Sale With This Condition.\n\n",count_land);
    else
        printf("\n%d Lands Are Available For Sale With This Condition.\n\n",count_land);
    system("pause");
}

void filter_rent_apartment()
{
    int min_floor, max_floor;
    int min_mortgage_price, max_mortgage_price;
    int min_rent_price, max_rent_price;
    int min_municipal, max_municipal;
    int min_land, max_land;
    int min_substruction , max_substruction;
    int min_bedroom, max_bedroom;
    int min_age, max_age;
    int count_apartemnt = 0;
    struct rent_apartment *head = NULL , *temp = NULL , *last = NULL;
    struct rent_apartment ap;

    system("cls");

    line_2();

    printf("Please Enter Min Mortgage Price : ");
    scanf("%d",&min_mortgage_price);
    printf("Please Enter Max Mortgage Price : ");
    scanf("%d",&max_mortgage_price);

    line_2();

    printf("Please Enter Min Rent Price : ");
    scanf("%d",&min_rent_price);
    printf("Please Enter Max Rent Price : ");
    scanf("%d",&max_rent_price);

    line_2();

    printf("Please Enter The Min Number Of Bedrooms : ");
    scanf("%d",&min_bedroom);
    printf("Please Enter The Max Number Of Bedrooms : ");
    scanf("%d",&max_bedroom);

    line_2();

    printf("Please Enter Min Floor : ");
    scanf("%d",&min_floor);
    printf("Please Enter Max Floor : ");
    scanf("%d",&max_floor);

    line_2();

    printf("Please Enter Min Municipal Area : ");
    scanf("%d",&min_municipal);
    printf("Please Enter Max Municipal Area : ");
    scanf("%d",&max_municipal);

    line_2();

    printf("Please Enter Min substruction Area : ");
    scanf("%d",&min_substruction);
    printf("Please Enter Max substruction Area  : ");
    scanf("%d",&max_substruction);

    line_2();

    printf("Please Enter Min Meterage Of Land : ");
    scanf("%d",&min_land);
    printf("Please Enter Max Meterage Of Land: ");
    scanf("%d",&max_land);

    line_2();

    printf("Please Enter Min Age Of Apartment : ");
    scanf("%d",&min_age);
    printf("Please Enter Max Age Of Apartment : ");
    scanf("%d",&max_age);


    FILE *fp = fopen("rent_apartment.txt","r");

    while(fread(&ap,sizeof(struct rent_apartment),1, fp)){


        temp = malloc(sizeof(struct rent_apartment));

        temp->no = ap.no;
        temp->municipal_area = ap.municipal_area;
        strcpy(temp->address,ap.address);
        temp->age = ap.age;
        temp->substruction = ap.substruction;
        temp->floor = ap.floor;
        temp->land = ap.land;
        strcpy(temp->phone,ap.phone);
        temp->bedroom = ap.bedroom;
        temp->mortgage_price = ap.mortgage_price;
        temp->rent_price = ap.rent_price;
        temp->status = ap.status;
        strcpy(temp->registration_date,ap.registration_date);
        strcpy(temp->sale_date,ap.sale_date);
        strcpy(temp->registerar_uname,ap.registerar_uname);
        strcpy(temp->seller_uname,ap.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

            if(temp->status == 1 && temp->floor >= min_floor && temp->floor <= max_floor && temp->mortgage_price >= min_mortgage_price
            && temp->mortgage_price <= max_mortgage_price && temp->rent_price >= min_rent_price && temp->rent_price <= max_rent_price
            && temp->municipal_area >= min_municipal && temp->municipal_area <= max_municipal && temp->bedroom >= min_bedroom && temp->bedroom <= max_bedroom
            && temp->land >= min_land && temp->land <= max_land && temp->substruction >= min_substruction && temp->substruction <= max_substruction && temp->age >= min_age
            && temp->age <= max_age ){
            count_apartemnt++;//to find the amount of the apartments.
            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("age of apartment : %d\n",temp->age);
            printf("substruction meterage : %d\n",temp->substruction);
            printf("floor : %d\n",temp->floor);
            printf("meterage of land : %d\n",temp->land);
            printf("owner phone-number : %s\n",temp->phone);
            printf("amount of bedrooms : %d\n",temp->bedroom);
            printf("Mortgage price($) : %d\n",temp->mortgage_price);
            printf("Rent price($) : %d\n",temp->rent_price);
            printf("registration date : %s\n",temp->registration_date);
            printf("\n==========================\n\n");
        }
        temp = temp->next;
    }
    if(count_apartemnt == 0 || count_apartemnt == 1)
        printf("\n%d Apartment Is Available For Rent With This Condition.\n\n",count_apartemnt);
    else
        printf("\n%d Apartments Are Available For Rent With This Condition.\n\n",count_apartemnt);

    system("pause");
}

void filter_rent_house()
{
    int min_floor, max_floor;
    int min_mortgage_price, max_mortgage_price;
    int min_rent_price, max_rent_price;
    int min_price, max_price;
    int min_municipal, max_municipal;
    int min_land, max_land;
    int min_substruction , max_substruction;
    int min_bedroom, max_bedroom;
    int min_age, max_age;
    int count_house = 0;
    struct rent_house *head = NULL , *temp = NULL , *last = NULL;
    struct rent_house h;

    system("cls");

    line_2();

    printf("Please Enter Min Mortgage Price : ");
    scanf("%d",&min_mortgage_price);
    printf("Please Enter Max Mortgage Price : ");
    scanf("%d",&max_mortgage_price);

    line_2();

    printf("Please Enter Min Rent Price : ");
    scanf("%d",&min_price);
    printf("Please Enter Max Rent Price : ");
    scanf("%d",&max_rent_price);

    line_2();

    printf("Please Enter The Min Number Of Bedrooms : ");
    scanf("%d",&min_bedroom);
    printf("Please Enter The Max Number Of Bedrooms : ");
    scanf("%d",&max_bedroom);

    line_2();

    printf("Please Enter Min Floor : ");
    scanf("%d",&min_floor);
    printf("Please Enter Max Floor : ");
    scanf("%d",&max_floor);

    line_2();

    printf("Please Enter Min Municipal Area : ");
    scanf("%d",&min_municipal);
    printf("Please Enter Max Municipal Area : ");
    scanf("%d",&max_municipal);

    line_2();

    printf("Please Enter Min substruction Area : ");
    scanf("%d",&min_substruction);
    printf("Please Enter Max substruction Area  : ");
    scanf("%d",&max_substruction);

    line_2();

    printf("Please Enter Min Meterage Of Land : ");
    scanf("%d",&min_land);
    printf("Please Enter Max Meterage Of Land: ");
    scanf("%d",&max_land);

    line_2();

    printf("Please Enter Min Age Of House : ");
    scanf("%d",&min_age);
    printf("Please Enter Max Age Of House : ");
    scanf("%d",&max_age);

    FILE *fp = fopen("rent_house.txt","r");

    while(fread(&h,sizeof(struct rent_house),1, fp)){


        temp = malloc(sizeof(struct rent_house));

        temp->no = h.no;
        temp->municipal_area = h.municipal_area;
        strcpy(temp->address,h.address);
        temp->age = h.age;
        temp->substruction = h.substruction;
        temp->floor = h.floor;
        temp->land = h.land;
        strcpy(temp->phone,h.phone);
        temp->bedroom = h.bedroom;
        temp->mortgage_price = h.mortgage_price;
        temp->rent_price = h.rent_price;
        temp->status = h.status;
        strcpy(temp->registration_date,h.registration_date);
        strcpy(temp->sale_date,h.sale_date);
        strcpy(temp->registerar_uname,h.registerar_uname);
        strcpy(temp->seller_uname,h.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    printf("\n========================================================\n\n");

    system("cls");

    temp = head;
    while(temp != NULL){

            if(temp->status == 1 && temp->floor >= min_floor && temp->floor <= max_floor && temp->mortgage_price >= min_mortgage_price
            && temp->mortgage_price <= max_mortgage_price && temp->rent_price >= min_rent_price && temp->rent_price <= max_rent_price
            && temp->municipal_area >= min_municipal && temp->municipal_area <= max_municipal && temp->bedroom >= min_bedroom && temp->bedroom <= max_bedroom
            && temp->land >= min_land && temp->land <= max_land && temp->substruction >= min_substruction && temp->substruction <= max_substruction && temp->age >= min_age
            && temp->age <= max_age ){
            count_house++;//to find the amount of the apartments.
            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("age of house : %d\n",temp->age);
            printf("substruction meterage : %d\n",temp->substruction);
            printf("floor : %d\n",temp->floor);
            printf("meterage of land : %d\n",temp->land);
            printf("owner phone-number : %s\n",temp->phone);
            printf("amount of bedrooms : %d\n",temp->bedroom);
            printf("Mortgage price($) : %d\n",temp->mortgage_price);
            printf("Rent price($) : %d\n",temp->rent_price);
            printf("registration date : %s\n",temp->registration_date);
            printf("\n==========================\n\n");
        }
        temp = temp->next;
    }

    if(count_house == 0 || count_house == 1)
        printf("\n%d House Is Available For Rent With This Condition.\n\n",count_house);
    else
        printf("\n%d Houses Are Available For Rent With This Condition.\n\n",count_house);

    system("pause");
}

void filter_rent_commercial()
{
    int min_floor, max_floor;
    int min_mortgage_price, max_mortgage_price;
    int min_rent_price, max_rent_price;
    int min_municipal, max_municipal;
    int min_land, max_land;
    int min_substruction , max_substruction;
    int min_room, max_room;
    int min_age, max_age;
    char type_of_document[50];
    int opt;
    int count_commercial = 0;
    struct rent_commercial *head = NULL , *temp = NULL , *last = NULL;
    struct rent_commercial co;

    system("cls");

    line_2();

    printf("Please Enter Min Mortgage  Price : ");
    scanf("%d",&min_mortgage_price);
    printf("Please Enter Max Mortgage  Price : ");
    scanf("%d",&max_mortgage_price);

    line_2();

    printf("Please Enter Min Rent Price : ");
    scanf("%d",&min_rent_price);
    printf("Please Enter Max Rent Price : ");
    scanf("%d",&max_rent_price);

    line_2();

    printf("Please Enter The Min Number Of Rooms : ");
    scanf("%d",&min_room);
    printf("Please Enter The Max Number Of Rooms : ");
    scanf("%d",&max_room);

    line_2();

    printf("Please Enter Min Floor : ");
    scanf("%d",&min_floor);
    printf("Please Enter Max Floor : ");
    scanf("%d",&max_floor);

    line_2();

    printf("Please Specify The Document Type(1-Official administrative document OR 2-Administrative position)\nPlease Enter number 1 or 2 : ");
    fflush(stdin);
    scanf("%d",&opt);
    if(opt == 1){
        strcpy(type_of_document,"Official administrative document");
    }
    if(opt == 2){
        strcpy(type_of_document,"Administrative position");
    }

    line_2();

    printf("Please Enter Min Municipal Area : ");
    scanf("%d",&min_municipal);
    printf("Please Enter Max Municipal Area : ");
    scanf("%d",&max_municipal);

    line_2();

    printf("Please Enter Min substruction Area : ");
    scanf("%d",&min_substruction);
    printf("Please Enter Max substruction Area  : ");
    scanf("%d",&max_substruction);

    line_2();

    printf("Please Enter Min Meterage Of Land : ");
    scanf("%d",&min_land);
    printf("Please Enter Max Meterage Of Land: ");
    scanf("%d",&max_land);

    line_2();

    printf("Please Enter Min Age Of Commercial property : ");
    scanf("%d",&min_age);
    printf("Please Enter Max Age Of Commercial property : ");
    scanf("%d",&max_age);

    FILE *fp = fopen("rent_commercial.txt","r");

    while(fread(&co,sizeof(struct rent_commercial),1, fp)){


        temp = malloc(sizeof(struct rent_commercial));

        temp->no = co.no;
        temp->municipal_area = co.municipal_area;
        strcpy(temp->address,co.address);
        strcpy(temp->document,co.document);
        temp->age = co.age;
        temp->substruction = co.substruction;
        temp->floor = co.floor;
        temp->land = co.land;
        strcpy(temp->phone,co.phone);
        temp->room = co.room;
        temp->mortgage_price = co.mortgage_price;
        temp->rent_price = co.rent_price;
        temp->status = co.status;
        strcpy(temp->registration_date,co.registration_date);
        strcpy(temp->sale_date,co.sale_date);
        strcpy(temp->registerar_uname,co.registerar_uname);
        strcpy(temp->seller_uname,co.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){


        if(temp->status == 1 && temp->floor >= min_floor && temp->floor <= max_floor && temp->mortgage_price >= min_mortgage_price && temp->mortgage_price <= max_mortgage_price
        &&temp->rent_price >= min_rent_price && temp->rent_price <= max_rent_price && temp->municipal_area >= min_municipal
        && temp->municipal_area <= max_municipal && temp->room >= min_room && temp->room <= max_room&& temp->land >= min_land && temp->land <= max_land
        && temp->substruction >= min_substruction && temp->substruction <= max_substruction && temp->age >= min_age
        && temp->age <= max_age && strcmp(type_of_document,temp->document)==0){
            count_commercial++;//to find the amount of the apartments.
            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("type of document : %s\n",temp->document);
            printf("age of commercial property : %d\n",temp->age);
            printf("substruction meterage : %d\n",temp->substruction);
            printf("floor : %d\n",temp->floor);
            printf("meterage of land : %d\n",temp->land);
            printf("owner phone-number : %s\n",temp->phone);
            printf("amount of rooms : %d\n",temp->room);
            printf("Mortgage price($) : %d\n",temp->mortgage_price);
            printf("Rent price($) : %d\n",temp->rent_price);
            printf("registration date : %s\n",temp->registration_date);
            printf("\n==========================\n\n");
        }
        temp = temp->next;
    }
    if(count_commercial == 0 || count_commercial == 1)
        printf("\n%d Commercial Property Is Available For Rent With This Condition.\n\n",count_commercial);
    else
        printf("\n%d Commercial Properties Are Available For Rent With This Condition.\n\n",count_commercial);

    system("pause");

}

void filter_rent_land()
{
    int min_mortgage_price, max_mortgage_price;
    int min_rent_price, max_rent_price;
    int min_municipal, max_municipal;
    int min_land, max_land;
    char type_of_land[50];
    int opt;
    int count_land = 0;
    struct rent_land *head = NULL , *temp = NULL , *last = NULL;
    struct rent_land ld;

    system("cls");

    line_2();

    printf("Please Enter Min Mortgage Price : ");
    scanf("%d",&min_mortgage_price);
    printf("Please Enter Max Mortgage Price : ");
    scanf("%d",&max_mortgage_price);

    line_2();

    printf("Please Enter Min Rent Price : ");
    scanf("%d",&min_rent_price);
    printf("Please Enter Max Rent Price : ");
    scanf("%d",&max_rent_price);

    line_2();

    printf("Please Specify The land Type(1-agriculture OR 2-residential development land)\nPlease Enter number 1 or 2 : ");
    fflush(stdin);
    scanf("%d",&opt);
    if(opt == 1){
        strcpy(type_of_land,"agriculture");
    }
    if(opt == 2){
        strcpy(type_of_land,"residential development");
    }

    line_2();

    printf("Please Enter Min Municipal Area : ");
    scanf("%d",&min_municipal);
    printf("Please Enter Max Municipal Area : ");
    scanf("%d",&max_municipal);

    line_2();

    printf("Please Enter Min Meterage Of Land : ");
    scanf("%d",&min_land);
    printf("Please Enter Max Meterage Of Land: ");
    scanf("%d",&max_land);

    FILE *fp = fopen("rent_land.txt","r");

    while(fread(&ld,sizeof(struct rent_land),1, fp)){


        temp = malloc(sizeof(struct rent_land));

        temp->no = ld.no;
        temp->municipal_area = ld.municipal_area;
        strcpy(temp->address,ld.address);
        strcpy(temp->type,ld.type);
        temp->meterage = ld.meterage;
        strcpy(temp->phone,ld.phone);
        temp->mortgage_price = ld.mortgage_price;
        temp->rent_price = ld.rent_price;
        temp->status = ld.status;
        strcpy(temp->registration_date,ld.registration_date);
        strcpy(temp->sale_date,ld.sale_date);
        strcpy(temp->registerar_uname,ld.registerar_uname);
        strcpy(temp->seller_uname,ld.seller_uname);


        if(head==NULL){
                head = temp;
                head->next = NULL;
                last = head;
        }
        else{
                last->next = temp;
                last = temp;
                last->next = NULL;
        }

    }
    fclose(fp);

    system("cls");

    printf("\n========================================================\n\n");

    temp = head;
    while(temp != NULL){

        if(temp->status == 1 && temp->mortgage_price >= min_mortgage_price && temp->mortgage_price <= max_mortgage_price
            && temp->rent_price >= min_rent_price && temp->rent_price <= max_rent_price
            && temp->municipal_area >= min_municipal && temp->municipal_area <= max_municipal && temp->meterage >= min_land && temp->meterage <= max_land
            && strcmp(type_of_land,temp->type)==0){
            count_land++;//to find the amount of the apartments.
            printf("#case number : %d\n\n",temp->no);
            printf("municipal area : %d\n",temp->municipal_area);
            printf("address : %s\n",temp->address);
            printf("type of land : %s\n",temp->type);
            printf("meterage of land : %d\n",temp->meterage);
            printf("owner phone-number : %s\n",temp->phone);
            printf("Mortgage price($) : %d\n",temp->mortgage_price);
            printf("Rent price($) : %d\n",temp->rent_price);
            printf("registration date : %s\n",temp->registration_date);
            printf("\n==========================\n\n");
        }
        temp = temp->next;
    }
    if(count_land == 0 || count_land == 1)
        printf("\n%d Land Is Available For Rent.\n\n",count_land);
    else
        printf("\n%d Lands Are Available For Rent.\n\n",count_land);
    system("pause");

}

int check_password(char password[])
{
    int count_alpha = 0;
    int i;

    if(strlen(password) < 6){
        printf("\n\nERROR\n");
        printf("\nThe Password Should Be Between At Least 6 characters. Please Try Again!!!\n");
        system("pause");
        printf("\n");
        return 0;
    }

    if(strcmp(password,"123456") == 0){
        printf("\n\nERROR\n");
        printf("\nTry Stronger Password. Please Try again!!!\n");
        system("pause");
        printf("\n");
        return 0;
    }

    if(strcmp(password,"987654")== 0){
        printf("\n\nERROR\n");
        printf("\nTry Stronger Password. Please Try again!!!\n");
        system("pause");
        printf("\n");
        return 0;
    }

    for(i=0;i<strlen(password);i++){

        if(isalpha(password[i])!=0){
            count_alpha++;
        }
    }

    if(count_alpha < 4){
        printf("\n\nERROR\n");
        printf("\nThe Password Must Have At Least 4 Alphabet Characters. Please Try Again!!!\n");
        system("pause");
        printf("\n");
        return 0;
    }

    return 1;

}

int check_phone_number(char phone[])
{

    if(strlen(phone) != 11){
        printf("\nERROR\n");
        printf("\nInvalid Phone-Number. Please Try Again!!!\n");
        system("pause");
        printf("\n");
        return 0;
    }

    if(phone[0] != '0' && phone[1] != '9'){
        printf("\nERROR\n");
        printf("\nInvalid Phone-Number. Please Try Again!!!\n");
        system("pause");
        printf("\n");
        return 0;
    }

    return 1;

}

int check_national_id(char id[])
{
    int i;

    if(strlen(id) != 10){
        printf("\nERROR\n");
        printf("\nThe National-Id Must Have 10 characters. Please Try Again!!!\n");
        system("pause");
        printf("\n");
        return 0;
    }

    for(i=0;i<strlen(id);i++){
        if(isalpha(id[i]) != 0){
            printf("\nERROR\n");
            printf("\nThe National-Id Does Not Have Alphabetical Character. Please Try Again!!!\n");
            system("pause");
            return 0;
        }
    }

    return 1;
}

int check_username(char uname[])
{
    struct user u;
    int count_alpha = 0;
    int i;

    if(strlen(uname) < 6){
        printf("\nERROR\n");
        printf("\nUser-name Must At Least 6 Characters. Please Try Again!!!\n");
        system("pause");
        printf("\n");
        return 0;
    }

    for(i=0;i<strlen(uname);i++){
        if(isalpha(uname[i])!=0){
            count_alpha++;
        }
    }

    if(count_alpha < 4){
        printf("\nERROR\n");
        printf("\nThe User-Name Must Have At Least 4 Alphabetical Characters. Please Try Again!!!\n");
        system("pause");
        printf("\n");
        return 0;
    }

    FILE *fp = fopen("profile.txt","r");

    while(fread(&u,sizeof(struct user),1,fp))
    {
        if(strcmp(uname,u.username)==0){
            printf("\nERROR\n");
            printf("\nThe User-Name Has Already Been Taken. Please Try Again!!!\n");
            system("pause");
            printf("\n");
            return 0;
        }
    }

    fclose(fp);

    return 1;
}

int check_email(char email[])
{
    int i;//used for for loop.
    int ir = 0;
    int com = 0;
    int adcount = 0;
    int dotcount = 0;
    int adindex;
    int lastdotindex;

    for(i=0;i<strlen(email);i++){

        if(email[i] == '@'){
            adindex = i;

            if(adindex == 0){
                return 0;
            }
            adcount++;
            if(adcount > 1 ){
                return 0;
            }
        }

        if(email[i] == '.'){
            dotcount++;
            lastdotindex = i;
        }
    }

    if(email[strlen(email) - 2] == 'i' && email[strlen(email) - 1] == 'r' ){
        ir = 1;
    }
    if(email[strlen(email) - 3] == 'c' && email[strlen(email) - 2] == 'o' && email[strlen(email) - 1] == 'm')
    {
        com = 1;
    }

    if((dotcount > 0 && adcount == 1) && (lastdotindex > adindex) && (ir == 1 || com == 1)){
            return 1;
    }else{
        printf("\nERROR\n");
        printf("\nInvalid Email. Please Try Again!!!\n");
        system("pause");
        printf("\n");
        return 0;
    }

}

void change_user_name_family(char uname[])
{
    struct user u;

    FILE *fp;
    FILE *fp1;

    fp = fopen("profile.txt","r");
    fp1 = fopen("TempProfile.txt","w");

    while(fread(&u,sizeof(struct user),1,fp)){

        if(strcmp(uname,u.username)==0){

            system("cls");
            line();
            printf("\n\nPlease Enter New Name : ");
            fflush(stdin);
            gets(u.name);
            printf("Please Enter New Family-Name : ");
            fflush(stdin);
            gets(u.family);
        }

        fwrite(&u,sizeof(struct user),1,fp1);
    }

    fclose(fp);
    fclose(fp1);

    fp1 = fopen("TempProfile.txt","r");
    fp = fopen("profile.txt","w");

    while(fread(&u,sizeof(struct user),1,fp1)){

        fwrite(&u,sizeof(struct user),1,fp);
    }

    fclose(fp);
    fclose(fp1);
    printf("\nUser Information Has Been Changed Successfully . Do Not Share You'r User-Name And Password With Anyone!!!\n");
    system("pause");
}

void change_user_password(char uname[])
{
    struct user u;

    FILE *fp;
    FILE *fp1;

    fp = fopen("profile.txt","r");
    fp1 = fopen("TempProfile.txt","w");

    while(fread(&u,sizeof(struct user),1,fp)){


        if(strcmp(uname,u.username)==0){

            do{
                system("cls");
                line();
                printf("\n\nPlease Enter New Password : ");
                fflush(stdin);
                star_password(u.password);


            }while(check_password(u.password) == 0 );

            encrypt_password(u.password,0xFACA);

        }

        fwrite(&u,sizeof(struct user),1,fp1);
    }

    fclose(fp);
    fclose(fp1);

    fp1 = fopen("TempProfile.txt","r");
    fp = fopen("profile.txt","w");

    while(fread(&u,sizeof(struct user),1,fp1)){

        fwrite(&u,sizeof(struct user),1,fp);
    }

    fclose(fp);
    fclose(fp1);
    printf("\n\nUser Information Has Been Changed Successfully . Do Not Share You'r User-Name And Password With Anyone!!!\n");
    system("pause");
}

void change_user_email(char uname[])
{
    struct user u;

    FILE *fp;
    FILE *fp1;

    fp = fopen("profile.txt","r");
    fp1 = fopen("TempProfile.txt","w");

    while(fread(&u,sizeof(struct user),1,fp)){

        if(strcmp(uname,u.username)==0){

            do{
                system("cls");
                line();
                printf("\n\nPlease Enter New Email : ");
                fflush(stdin);
                star_password(u.email);
            }while(check_email(u.email) == 0);

        }

        fwrite(&u,sizeof(struct user),1,fp1);
    }

    fclose(fp);
    fclose(fp1);

    fp1 = fopen("TempProfile.txt","r");
    fp = fopen("profile.txt","w");

    while(fread(&u,sizeof(struct user),1,fp1)){

        fwrite(&u,sizeof(struct user),1,fp);
    }

    fclose(fp);
    fclose(fp1);
    printf("\nUser Information Has Been Changed Successfully . Do Not Share You'r User-Name And Password With Anyone!!!\n");
    system("pause");
}
