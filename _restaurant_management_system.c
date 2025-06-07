#include <stdio.h>
#include<windows.h>
#include <string.h>
#include <conio.h> 

//prints a welcome message 
void Welcome_Message() {
    SetConsoleOutputCP(CP_UTF8);

    const int box_width = 68;

    printf("\n");
    printf("╔");
    for (int i = 0; i < box_width; i++) printf("═");
    printf("╗\n");

    char* title = "🛎️ RESTAURANT MANAGEMENT SYSTEM🛎️";
    int title_width = 31; 
    int title_padding = (box_width - title_width) / 2;

    printf("║");
    for (int i = 0; i < title_padding; i++) printf(" ");
    printf("%s", title);
    for (int i = 0; i < box_width - title_padding - title_width; i++) printf(" ");
    printf("║\n");
    printf("╚");
    for (int i = 0; i < box_width; i++) printf("═");
    printf("╝\n");

    printf("\n");
    printf("╔");
    for (int i = 0; i < box_width; i++) printf("═");
    printf("╗\n");
    printf("║");
    for (int i = 0; i < box_width; i++) printf(" ");
    printf("║\n");

    char* welcome = "✨ Welcome to the Restaurant Order Management System! ✨";
    int welcome_width = 56;
    int welcome_padding = (box_width - welcome_width) / 2;

    printf("║");
    for (int i = 0; i < welcome_padding; i++) printf(" ");
    printf("%s", welcome);
    for (int i = 0; i < box_width - welcome_padding - welcome_width; i++) printf(" ");
    printf("║\n");


    printf("║");
    for (int i = 0; i < box_width; i++) printf(" ");
    printf("║\n");

    
    printf("║");
    char* dev = "Developed by HUMA";
    int dev_length = strlen(dev);
    int dev_padding = (box_width - dev_length) / 2;
    for (int i = 0; i < dev_padding; i++) printf(" ");
    printf("%s", dev);
    for (int i = 0; i < box_width - dev_padding - dev_length; i++) printf(" ");
    printf("║");
    printf("\n"); 

    printf("║");
    for (int i = 0; i < box_width; i++) printf(" ");
    printf("║\n");


    printf("║");
    for (int i = 0; i < box_width; i++) printf("-");
    printf("║\n");

    printf("║");
    char* random = "This system allows you to:";
    int random_length = strlen(random);
    int random_padding = (box_width - random_length) / 2;
    for (int i = 0; i < random_padding; i++) printf(" ");
    printf("%s", random);
    for (int i = 0; i < box_width - random_padding - random_length; i++) printf(" ");
    printf("║");
    printf("\n");

    printf("║");
    for (int i = 0; i < box_width; i++) printf(" ");
    printf("║\n");


    char* features[] = {
        "  • Register new orders",
        "  • Remove existing orders", 
        "  • Display all orders",
        "  • Search and update times",
        "  • Calculate time taken to serve each order"
    };

    for (int j = 0; j < 5; j++) {
        int line_length = strlen(features[j]);
        printf("║   %s", features[j]);
        for (int i = 0; i < box_width - line_length - 1; i++) printf(" ");
        printf("║\n");
    }

    printf("║");
    for (int i = 0; i < box_width; i++) printf(" ");
    printf("║\n");

    printf("╚");
    for (int i = 0; i < box_width; i++) printf("═");
    printf("╝\n");

}

//provides an aesthetic starting the system display message

void starting_Sys() {
    printf("\n\n                     Press Enter to start the system ..."); 

    getch(); // Wait for Enter to be pressed

    printf("\r"); //moves cursor the previous line 
    for (int i = 0; i < 80; i++) 
    {
        printf(" "); //replaces it with dots 
    }
    printf("\r"); //moves the cursor back to the beginning of line 

    printf("                     Starting the system");
    for (int i = 0; i < 3; i++) {
        Sleep(500);
        printf(".");
        fflush(stdout);
        Beep(800 + i * 100, 200); //Beep(frequency, duration) the sound increases by 100Hz after each iteration
    }

    Sleep(500);
    Beep(1200, 400); //final sound 

    printf("\n\n                     System started successfully! 🎉\n\n");

    Sleep(2000); // 2 sec delay
    
    printf("\n\t\t Loading main menu");
    for (int i = 0; i < 3; i++) {
        Sleep(400);
        printf(".");
        fflush(stdout);
    }
    Sleep(500);
}


// displays the menu with options available for the system. this could have been dont with loop as well 
int menu() {
    int choice;
    printf("\n");

    printf(""); 
    printf("╔══════════════════════════════════════════════════════════════════════╗\n");
    printf("║                  🍽️  Restaurant Management Menu  🍽️                    ║\n");
    printf("╚══════════════════════════════════════════════════════════════════════╝\n");
    printf("╔══════════════════════════════════════════════════════════════════════╗\n"); 
    printf("║ 1. ➕ Register New Order                                             ║\n");
    printf("║ 2. 🗑️  Remove Existing Order                                          ║\n");
    printf("║ 3. 📋 Display All Orders                                             ║\n");
    printf("║ 4. 🔎 Search Order Time                                              ║\n");
    printf("║ 5. ⏳ Update Time                                                    ║\n");
    printf("║ 6. 👋 Exit                                                           ║\n");
    printf("╚══════════════════════════════════════════════════════════════════════╝\n");

    printf("\t\t➡️   Enter your choice (1-6): ");
    scanf("%d", &choice);
    return choice;
}


//head message for all optiions in the menu 
void head_Message(const char *title) {

    int width = 64;  
    int width_without_border = width - 2;  
    int titleLen = strlen(title);
    int left_spacing= (width_without_border - titleLen) / 2;
    int right_spacing = width_without_border - titleLen - left_spacing;  
    
    printf("\n");
    
    printf("╔");
    for (int i = 0; i < width_without_border; i++) {
        printf("═");
    }
    printf("╗\n");
    
    printf("║");
    
    for (int i = 0; i < left_spacing; i++) {
        printf(" ");
    }
    
    printf("%s", title);
    
    for (int i = 0; i < right_spacing; i++) {
        printf(" ");
    }
    
    printf("║\n");
    
    printf("╚");
    for (int i = 0; i < width_without_border; i++) {
        printf("═");
    }
    printf("╝\n");
}

//final exit program 
void Exit_Program() {
    printf("\n");
    printf("╔");
    for(int i = 0; i < 68; i++) {
        printf("═");
    }
    printf("╗\n");
    printf("║                ✨ THANK YOU FOR USING OUR SYSTEM ✨                ║\n");

    printf("╚");
    for(int i = 0; i < 68; i++) {
        printf("═");
    }
    printf("╝\n");
}

//time validation into 12 hr format 
int is_ValidTime(int hour, int minute, int am_pm)
{
    if (hour<1 || hour > 12)
    {
        printf("\n"); 
        printf("🚫 Invalid Hour. Hour must be within 1 and 12.\n");
        return 0; 
    }
    if (minute < 0 || minute > 59)
    {
        printf("\n"); 
        printf("🚫 Invalid Minute. Minute must be within 0 and 59.\n");
        return 0;
    }
    if (am_pm <0 || am_pm > 1)
    {
        printf("\n"); 
        printf("🚫 Invalid Am/Pm. Must be 0 for AM and 1 for PM.\n");
        return 0; 
    }
    return 1; 
}

//checks if any order number is duplicate
int is_OrderNumber_Duplicate(int *order_number, int total_orders, int new_order_id) 
{
    for (int i = 0; i < total_orders; i++) {
        if (*(order_number + i) == new_order_id) {
            return 1; 
        }
    }
    return 0; 
} 

//regusters orders 

void Register_Order(int *order_number, int *quantity, int *order_hr, 
    int *order_min, int *order_am_pm, int *serve_hr, int *serve_min, int *serve_am_pm, int i, int *valid)
{
    int temp_order_num;
    do {
        printf("Enter Order Number: ");
        scanf("%d", &temp_order_num);
        
        if (is_OrderNumber_Duplicate(order_number, i, temp_order_num)) {
            printf("🚫 Order Number %d already exists! Please enter a different order number. 🙏\n", temp_order_num);
        } else {
            *(order_number + i) = temp_order_num;
            break;
        }
    } while (1);


    printf("Enter quantity of Food Items: ");
    scanf("%d", quantity + i);

    do
    {
        printf("Enter Order time 🔽 \n");
        printf("----------------\n");

        printf("Enter hour: ");
        scanf("%d", order_hr+i);

        printf("Enter minute: ");
        scanf("%d", order_min+i);

        printf("Enter 0 for AM, 1 for PM: ");
        scanf("%d", order_am_pm+i);

        *valid = is_ValidTime(*(order_hr + i), *(order_min + i), *(order_am_pm + i));

        if (!*valid)
        {
            printf("✏️ Please RE - ENTER a valid order time!\n");
            printf("\n"); 
        }

    } while (!*valid);

    do
    {
        printf("Enter Serve time 🔽\n");
        printf("----------------\n");

        printf("Enter hour: ");
        scanf("%d", serve_hr+i);

        printf("Enter minute: ");
        scanf("%d", serve_min+i);

        printf("Enter 0 for AM, 1 for PM: ");
        scanf("%d", serve_am_pm +i );

        *valid = is_ValidTime(*(serve_hr +i), *(serve_min+i), *(serve_am_pm+i));

        if (!*valid)
        {
            printf("✏️ Please RE - ENTER a valid serve time!\n");
        }

    } while (!*valid);
    printf("\n");
    printf("\t✅ Order Registered Successfully! 🥳\n");
    
}

//helper function: checks if an order exists
int is_OrderID_Exists(int *order_number, int total_orders, int search_ID )
{
    int i; 
    for (i=0; i<total_orders; i++)
    {
        if (*(order_number + i) == search_ID)
        {
            return i;
        }
    }
    return -1; 
}

//removes any order selected 
void Remove_Order(int *order_number, int *total_orders, int *quantity, 
                 int *order_hr, int *order_min, int *order_am_pm,
                 int *serve_hr, int *serve_min, int *serve_am_pm)
{
    int i, exist_function, remove_ID;

    printf("Enter Order Number to remove: ");
    scanf("%d", &remove_ID);

    exist_function = is_OrderID_Exists(order_number, *total_orders, remove_ID);

    if (exist_function == -1)
    {
        printf("Order NOT found! 😕\n");
        return; 
    }

    for (i = exist_function; i < (*total_orders) - 1; i++)
    {
        order_number[i] = order_number[i+1];
        quantity[i] = quantity[i+1];
        order_hr[i] = order_hr[i+1];
        order_min[i] = order_min[i+1];
        order_am_pm[i] = order_am_pm[i+1];
        serve_hr[i] = serve_hr[i+1];
        serve_min[i] = serve_min[i+1];
        serve_am_pm[i] = serve_am_pm[i+1];
    }
    
    (*total_orders)--;

    printf("🗑️🧹 Order number %d REMOVED Successfully!\n", remove_ID); 

}


// converts time back to 24 hr format for calculatio. Handles day rollover if serve time is next day
int convert_time (int hour, int minute, int am_pm)
{
    int hour_24_format = hour, convert_to_min; 
    if (am_pm ==0)
    {
        if (hour == 12)
        {
            hour_24_format = 0; 
        }else 
        {
            hour_24_format = hour; 
        }
    }else{
        if (hour == 12)
        {
            hour_24_format = 12;
        }else 
        {
            hour_24_format = hour + 12; 
        }
    }
    convert_to_min = hour_24_format * 60 + minute; 
    return convert_to_min; 
}

//displays all orders
void Display_All_Orders(int *order_number, int *quantity, int *order_hr, int *order_min, int *order_am_pm,
int *serve_hr, int *serve_min, int *serve_am_pm, int total_orders)
{

    if (total_orders == 0)
    {
        printf("\nNo Orders To Display 😢!\n"); 
        return; 
    }
    printf("\n╔═════════════════════════════════════════════════════════════════════════════════╗\n");
    printf("║ %-10s │ %-8s │ %-15s │ %-15s │ %-16s ║\n", "Order No.", "Quantity", "Order Time", "Serve Time", "Time to Serve (min)");
    printf("╠═════════════════════════════════════════════════════════════════════════════════╣\n");

    for (int i=0; i<total_orders ; i++)
    {
        int order_time = convert_time(*(order_hr + i), *(order_min + i), *(order_am_pm + i));
        int serve_time = convert_time(*(serve_hr + i), *(serve_min + i), *(serve_am_pm + i));

        int time_to_serve = serve_time - order_time;

        if (time_to_serve < 0)
        {
            time_to_serve = time_to_serve + (24 * 60);
        }

        const char* order_am_pm_str; 
        if (*(order_am_pm + i) == 0)
        {
            order_am_pm_str = "AM";
        } else 
        {
            order_am_pm_str = "PM";
        }

        const char* serve_am_pm_str; 
        if (*(serve_am_pm + i) == 0)
        {
            serve_am_pm_str = "AM";
        } else 
        {
            serve_am_pm_str = "PM";
        }

        printf("║ %-10d │ %-8d │ %2d:%02d %-9s │ %2d:%02d %-9s │ %-19d ║\n", 
            *(order_number + i), *(quantity + i),*(order_hr + i), *(order_min + i), order_am_pm_str,
            *(serve_hr + i), *(serve_min + i), serve_am_pm_str, time_to_serve);
    }
    printf("╚═════════════════════════════════════════════════════════════════════════════════╝\n");
    
}

//searches for a particular order 
void Search_Order_ByID(int *order_number, int *quantity, int *order_hr, int *order_min, int *order_am_pm,
int *serve_hr, int *serve_min, int *serve_am_pm, int total_orders)
{
     int search_ID, index;

     if (total_orders == 0)
     {
        printf("No orders to search from! 😢");
        return;
     }

     printf("Enter the ORDER NUMBER to search: ");
     scanf("%d", &search_ID);

     index = is_OrderID_Exists(order_number, total_orders, search_ID);

     if (index == -1)
     {
        printf("❌ Order NOT found!❌ ");
        return; 
     }

    int new_order_num[1] = {order_number[index]};
 
    int new_quantity[1] = {quantity[index]};
    int new_order_hr[1] = {order_hr[index]};
    int new_order_min[1] = {order_min[index]};
    int new_order_am_pm[1] = {order_am_pm[index]};
    int new_serve_hr[1] = {serve_hr[index]};
    int new_serve_min[1] = {serve_min[index]};
    int new_serve_am_pm[1] = {serve_am_pm[index]};

    printf("\n✅ Order FOUND! Details:\n");

    int count = 1;
    
    Display_All_Orders(new_order_num, new_quantity, new_order_hr, new_order_min, new_order_am_pm, new_serve_hr, new_serve_min, 
        new_serve_am_pm, count);

}

//updates either order time or serve time as required 
void Update_Time(int *order_number, int *order_hr, int *order_min, int *order_am_pm,
                 int *serve_hr, int *serve_min, int *serve_am_pm, int total_orders) {
    if (total_orders == 0) {
        printf("NO orders to update!😢\n");
        return;
    }

    int ID, index, choice, hour, minute, am_pm, valid;

    printf("Enter Order Number to update time: ");
    scanf("%d", &ID);

    index = is_OrderID_Exists(order_number, total_orders, ID);
    if (index == -1) {
        printf(" Order NOT found! ❌\n");
        return;
    }

    printf("What do you want to update?\n");
    printf("1. Order Time.\n");
    printf("2. Serve Time.\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice != 1 && choice != 2) {
        printf("❌ Invalid choice! ❌\n");
        return;
    }

    do {
        printf("Enter Hour: ");
        scanf("%d", &hour);

        printf("Enter Minute: ");
        scanf("%d", &minute);

        printf("Enter 0 for AM, 1 for PM: ");
        scanf("%d", &am_pm);

        valid = is_ValidTime(hour, minute, am_pm);
        if (!valid) {
            printf("❗ Please enter a VALID time.\n");
        }

    } while (!valid);

    if (choice == 1) {
        order_hr[index] = hour;
        order_min[index] = minute;
        order_am_pm[index] = am_pm;
        printf("✅ Order time updated successfully!\n");
    } else {
        serve_hr[index] = hour;
        serve_min[index] = minute;
        serve_am_pm[index] = am_pm;
        printf("✅ Serve time updated successfully!\n");
    }
}

//helper function: pauses the system after each function 
void pause_system() {
    printf("\n\t\t Press any key to continue...");
    getch();
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    Welcome_Message();
    starting_Sys();
    system("cls");
    int order_num[100], quantity[100], order_hr[100], order_min[100], order_am_pm[100], serve_hr[100],
    serve_min[100], serve_am_pm[100], valid = 0; 

    int total_order = 0; 
    
    int choice;
    do {
        choice = menu();

        switch(choice) 
        {
            case 1:
                system("cls");
                head_Message("Register New Order"); 
                if (total_order >= 100) {
                    printf("Maximum order limit reached (100). Cannot add more orders.\n");
                } else {
                    Register_Order(order_num, quantity, order_hr, order_min, order_am_pm, 
                                  serve_hr, serve_min, serve_am_pm, total_order, &valid);
                    total_order ++; 
                }
                pause_system();
                break;

            case 2:
                system("cls");
                head_Message("Remove Order");
                Remove_Order(order_num, &total_order, quantity, order_hr, order_min, order_am_pm, serve_hr, serve_min, serve_am_pm);
                pause_system();
                break;
            
            case 3:
                system("cls");
                head_Message("Display All Orders"); 
                Display_All_Orders(order_num, quantity, order_hr, order_min, order_am_pm, serve_hr, serve_min, serve_am_pm, total_order);
                pause_system();
                break;
            
            case 4:
                system("cls");
                head_Message("Search Order Time"); 
                 Search_Order_ByID(order_num, quantity, order_hr, order_min, order_am_pm, serve_hr, serve_min, serve_am_pm, total_order);
                 pause_system();
                break;
            case 5: 
                system("cls");
                head_Message("Update Order Time"); 
                Update_Time(order_num, order_hr, order_min, order_am_pm, serve_hr, serve_min, serve_am_pm, total_order);
                pause_system();
                break;
            
            case 6:
                system("cls");
                head_Message("Exit"); 
                Exit_Program(); 
                break;

            default:
                printf("Enter a valid choice.\n");
        }


    }while (choice !=6);
} 