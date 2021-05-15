#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//Data structure function

struct good {
    char ID[10];
    char name[80];
    float rate;
    int quantity;
    int isValid;
};

//main menu function

int print_main_menu()
{
    int choice = 0;
    printf("*** Fashion wear Department Store ***\n\n");
    printf("\t1. Add a good.\n");
    printf("\t2. Edit a good.\n");
    printf("\t3. Delete a good.\n");
    printf("\t4. Search a good.\n");
    printf("\t5. Display all goods.\n");
    printf("\t6. Exit.\n\n");

    printf("Enter your choice: ");

    scanf("%d", &choice);
    return choice;
}

//product adding function
void add(struct good arr[], int number)
{
    printf("** Enter Product Details **\n________\n");
    printf("Name: ");
    fflush(stdin);
    scanf("%s", arr[number].name);
    //printf("%s\n", arr[number].name);

    printf("ID: ");
    fflush(stdin);
    scanf("%s", arr[number].ID);

    while(check_id_exists(arr, number, arr[number].ID)) //if found any match with the previous ID it will prompt user for a unique ID
    {
        printf("ERR: ID already exists. Please use a different unique ID.\n");
        printf("ID: ");
        fflush(stdin);
        scanf("%s", arr[number].ID);
    }
    //printf("%s\n", arr[number].ID);

    printf("Rate: ");
    scanf("%f", &arr[number].rate);
    //printf("%f\n", arr[number].rate);

    printf("Quantity: ");
    scanf("%d", &arr[number].quantity);
    //printf("%d\n", arr[number].quantity);



    arr[number].isValid = 1;
    printf("\n");
}

//product editing Function
void edit(struct good arr[], int number)
{
    int idx, choice;

    display_list(arr, number);

    printf("\nEnter the index of the product you want to edit: ");
    scanf("%d", &idx);
    idx--;

    printf("** Edit Good **\n");
    printf("Name: %s, \tID: %s, \tRate: %f, \tQuantity: %d\n", arr[idx].name, arr[idx].ID, arr[idx].rate, arr[idx].quantity);
    printf("\t1. Name.\n");
    printf("\t2. ID.\n");
    printf("\t3. Rate.\n");
    printf("\t4. Quantity.\n");
    printf("\t5. Cancel (go back to main menu).\n");


    printf("\nEnter a choice: ");
    scanf("%d", &choice);

    char str[10];

    switch(choice)
    {
    case 1:
        printf("New Name: ");
        fflush(stdin);
        scanf("%s", arr[idx].name);
        break;
    case 2:

        printf("New ID: ");
        fflush(stdin);
        scanf("%s", str);

        while(check_id_exists(arr, number, str)) //if found any match with the previous ID it will prompt user for a unique ID
        {
            printf("ERR: ID already exists. Please use a different unique ID.\n");
            printf("ID: ");
            fflush(stdin);
            scanf("%s", str);
        }

        strcpy(arr[idx].ID, str);

        break;
    case 3:
        printf("New rate: ");
        scanf("%f", &arr[idx].rate);
        break;
    case 4:
        printf("New quantity: ");
        scanf("%d", &arr[idx].quantity);
        break;
    case 5:
    default:
        return;
        break;
    }

    printf("Name: %s, \tID: %s, \tRate: %f, \tQuantity: %d\n",  arr[idx].name,arr[idx].ID, arr[idx].rate, arr[idx].quantity);
    printf("-- Good Edited --\n\n");

}

//Display Product Function
void display_list(struct good arr[], int number)
{
    printf("** List of products in store **\n________\n");

    int i;
    for (i=0; i<number; i++)
    {
        printf("Index: %d, \tName: %s, \tID: %s, \tRate: %f, \tQuantity: %d\n", i+1, arr[i].name, arr[i].ID, arr[i].rate, arr[i].quantity);
    }
    printf("________\n\n");
}

//Searching Match for ID whether it's Unique or not
int check_id_exists(struct good arr[], int number, char id[])
{
    int i;
    for (i=0; i<number; i++)
    {
        if(strcmp(id, arr[i].ID) == 0)
        {
            return 1;
        }
    }

    return 0;
}

//Search by ID Function
void display_by_ID(struct good arr[], int number, char id[])
{
    int i;
    for (i=0; i<number; i++)
    {
        if(strcmp(id, arr[i].ID) == 0)
        {
            printf("Name: %s, \tID: %s, \tRate: %f, \tQuantity: %d\n", arr[i].name, arr[i].ID, arr[i].rate, arr[i].quantity);
        }
    }
}

//search by name Function
void display_by_name(struct good arr[], int number, char name[])
{
    int i;
    for (i=0; i<number; i++)
    {
        if(strcmp(name, arr[i].name) == 0)
        {
            printf("Name: %s, \tID: %s, \tRate: %f, \tQuantity: %d\n", arr[i].name, arr[i].ID, arr[i].rate, arr[i].quantity);
        }
    }
}

//Search By Rate Function
void display_by_rate(struct good arr[], int number, float rate)
{
    int i;
    for (i=0; i<number; i++)
    {
        if(fabs(arr[i].rate - rate) < 0.001)//comparing floating point number if it is equal to zero or not
        {
            printf("Name: %s, \tID: %s, \tRate: %f, \tQuantity: %d\n", arr[i].name, arr[i].ID, arr[i].rate, arr[i].quantity);
        }
    }
}

//Search by quantity Function
void display_by_quantity(struct good arr[], int number, int quantity)
{
    int i;
    for (i=0; i<number; i++)
    {
        if(arr[i].quantity == quantity)
        {
            printf("Name: %s, \tID: %s, \tRate: %f, \tQuantity: %d\n", arr[i].name, arr[i].ID, arr[i].rate, arr[i].quantity);
        }
    }
}

//searching product Function
void search(struct good arr[], int number)
{
    int choice;
    char str[40];
    float rate;
    int quantity;
    printf("** Search Good **\n\n");
    printf("\t1. By name\n");
    printf("\t2. By ID\n");
    printf("\t3. By rate\n");
    printf("\t4. By quantity\n");
    printf("\t5. Cancel (go back to main menu).\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        printf("Enter Product name: ");
        fflush(stdin);
        scanf("%s", str);
        printf("Search results: \n\n");
        display_by_name(arr, number, str);
        break;
    case 2:
        printf("Enter Product ID: ");
        fflush(stdin);
        scanf("%s", str);
        printf("Search results: \n\n");
        display_by_ID(arr, number, str);
        break;
    case 3:
        printf("Enter Product rate: ");
        scanf("%f", &rate);
        printf("Search results: \n\n");
        display_by_rate(arr, number, rate);
        break;
    case 4:
        printf("Enter Product quantity: ");
        scanf("%d", &quantity);
        printf("Search results: \n\n");
        display_by_quantity(arr, number, quantity);
        break;
    case 5:
    default:
        return;
        break;
    }

    printf("\n\n");
}


//deleting Product function
void delete(struct good arr[], int number)
{
    display_list(arr, number);

    int idx;
    printf("Enter the index of the product you want to delete: ");
    scanf("%d", &idx);

    int i;
    for(i=idx-1; i<number-1; i++)
    {
        strcpy(arr[i].ID, arr[i+1].ID);
        strcpy(arr[i].name, arr[i+1].name);
        arr[i].rate = arr[i+1].rate;
        arr[i].quantity = arr[i+1].quantity;
    }

    printf("Product deleted.\n\n");
}


//main function
int main()
{
    struct good products[10];
    int number_of_prd = 0;

    int exit = 0;

    while(exit == 0)
    {
        int choice;
        choice = print_main_menu();

        switch(choice)
        {
        case 1:
            add(products, number_of_prd);
            number_of_prd++;
            break;
        case 2:
            edit(products, number_of_prd);
            break;
        case 3:
            delete(products, number_of_prd);
            number_of_prd--;
            break;
        case 4:
            search(products, number_of_prd);
            break;
        case 5:
            display_list(products, number_of_prd);
            break;
        case 6:
            exit = 1;
            break;
        default:
            break;
        }
    }
}
