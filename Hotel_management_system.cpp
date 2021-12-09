#include <iostream>
using namespace std;
//HOTEL MANAGEMENT SYSTEM
//Author : Dheerendra Goyal
int main()
{
    int quant;
    int choice;
    //Quantity
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;
    //food items sold
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;
    //Total price of items;
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;
    //Input all the quantities
    cout << "\n\t Quantity of items we have";
    cout << "\n Rooms available: ";
    cin >> Qrooms;
    cout << "\n Quantity of pasta: ";
    cin >> Qpasta;
    cout << "\n Quantity of burgers: ";
    cin >> Qburger;
    cout << "\n Quantity of noodles: ";
    cin >> Qnoodles;
    cout << "\n Quantity of shake: ";
    cin >> Qshake;
    cout << "\n Quantity of chicken-rolls: ";
    cin >> Qchicken;

//label : menu
menu:
    cout << "\n=============================================";
    cout << "\n\t\t Please select from the menu options";
    cout << "\n\n 1) Rooms";
    cout << "\n 2) Pasta";
    cout << "\n 3) Burger";
    cout << "\n 4) Noodles";
    cout << "\n 5) shake";
    cout << "\n 6) chicken-rolls";
    cout << "\n 7) Information regarding sales and collection ";
    cout << "\n 8) Exit";
    cout << "\n=============================================";
    cout << "\n\n Please Enter your choice: ";
    cin >> choice;

    //switch case according to choice
    switch (choice)
    {
    //Case 1
    case 1:
        cout << "\n\n Enter the number of rooms you want: ";
        cin >> quant;
        if (Qrooms - Srooms >= quant)
        {
            Srooms += quant;
            Total_rooms = Total_rooms + quant * 1200;
            cout << "\n\n\t" << quant << " rooms have been alloted to you!";
        }
        else
            cout << "\n\t Only " << Qrooms - Srooms << " Rooms are in hotel";
        break;

    //case 2
    case 2:
        cout << "\n\n Enter pasta Quantity: ";
        cin >> quant;
        if (Qpasta - Spasta >= quant)
        {
            Spasta += quant;
            Total_pasta = Total_pasta + quant * 100;
            cout << "\n\n\t" << quant << " pasta ordered!";
        }
        else
            cout << "\n\t Only " << Qpasta - Spasta << " Pasta remaining in hotel";
        break;

    //case 3
    case 3:
        cout << "\n\n Enter burger Quantity: ";
        cin >> quant;
        if (Qburger - Sburger >= quant)
        {
            Sburger += quant;
            Total_burger = Total_burger + quant * 80;
            cout << "\n\n\t" << quant << " burger ordered!";
        }
        else
            cout << "\n\t Only " << Qburger - Sburger << " burgers remaining in hotel";
        break;

    //case 4
    case 4:
        cout << "\n\n Enter Noodle Quantity: ";
        cin >> quant;
        if (Qnoodles - Snoodles >= quant)
        {
            Snoodles += quant;
            Total_noodles = Total_noodles + quant * 150;
            cout << "\n\n\t" << quant << " noodle ordered!";
        }
        else
            cout << "\n\t Only " << Qnoodles - Snoodles << " Noodles remaining in hotel";
        break;

    //case 5
    case 5:
        cout << "\n\n Enter Shake Quantity: ";
        cin >> quant;
        if (Qshake - Sshake >= quant)
        {
            Sshake += quant;
            Total_shake = Total_shake + quant * 70;
            cout << "\n\n\t" << quant << " shake ordered!";
        }
        else
            cout << "\n\t Only " << Qshake - Sshake << " Shakes remaining in hotel";
        break;

    //case 6
    case 6:
        cout << "\n\n Enter chicken-roll Quantity: ";
        cin >> quant;
        if (Qchicken - Schicken >= quant)
        {
            Schicken += quant;
            Total_chicken = Total_chicken + quant * 250;
            cout << "\n\n\t" << quant << " chicken-rolls ordered!";
        }
        else
            cout << "\n\t Only " << Qchicken - Schicken << " chicken-rolls remaining in hotel";
        break;

    //case 7
    case 7:
        cout << "\n\t Details of sales and collection ";
        cout << "\n=============================================";
        cout << "\n Number of rooms we had: " << Qrooms;
        cout << "\n Number of rooms gave for rent: " << Srooms;
        cout << "\n Remaining rooms: " << Qrooms - Srooms;
        cout << "\n Total rooms collection for the day: " << Total_rooms;
        cout << "\n-------------------------------------------------------------";

        cout << "\n Number of Pastas we had: " << Qpasta;
        cout << "\n Number of Pastas gave for rent: " << Spasta;
        cout << "\n Remaining Pastas: " << Qpasta - Spasta;
        cout << "\n Total Pastas collection for the day: " << Total_pasta;
        cout << "\n-------------------------------------------------------------";

        cout << "\n Remaining Burgers: " << Qburger - Sburger;
        cout << "\n Number of Burgers gave for rent: " << Sburger;
        cout << "\n Number of Burgers we had: " << Qburger;
        cout << "\n Total Burger collection for the day: " << Total_burger;
        cout << "\n-------------------------------------------------------------";

        cout << "\n Number of Noodles we had: " << Qnoodles;
        cout << "\n Number of Noodles gave for rent: " << Snoodles;
        cout << "\n Remaining Noodles: " << Qnoodles - Snoodles;
        cout << "\n Total Noodles collection for the day: " << Total_noodles;
        cout << "\n-------------------------------------------------------------";

        cout << "\n Number of Shakes we had: " << Qshake;
        cout << "\n Number of Shakes gave for rent: " << Sshake;
        cout << "\n Remaining Shakes: " << Qshake - Sshake;
        cout << "\n Total Shakes collection for the day: " << Total_shake;
        cout << "\n-------------------------------------------------------------";

        cout << "\n Number of Chicken-roll we had: " << Qchicken;
        cout << "\n Number of Chicken-roll gave for rent: " << Schicken;
        cout << "\n Remaining Chicken-roll: " << Qchicken - Schicken;
        cout << "\n Total Chicken-roll collection for the day: " << Total_chicken;
        cout << "\n=============================================";
        cout << "\n\n\n Total Collection of the day: " << Total_rooms + Total_pasta + Total_burger + Total_noodles + Total_shake + Total_chicken;
        cout << "\n=============================================";
        break;

    //case 8
    case 8:
        exit(0);

    //default
    default:
        cout << "\n Please select the numbers mentioned above: ";
        break;
    }
    goto menu;
}
