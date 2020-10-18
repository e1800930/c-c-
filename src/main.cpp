#include "include/list.h"
#include "include/database.h"
/*#include <iostream>
#include<vector>
using namespace std;

//void print_menu(string name); //storing data func
//void print_list(); //printing func
//void add_item(); //adding item func
//void delete_item(); //deleting item func


vector  <string> list; //name of the vector is "list"
string name;

//all of these had been moved to list.h*/

int main(int arg_count, char *args[]) {
    List simplelist;
    Database data;

    if(arg_count > 1){
        simplelist.name = string(args[1]);
        simplelist.mainlist= data.read();
        simplelist.find_user();
        simplelist.print_menu();
        data.write(simplelist.mainlist);
        //data.write(simplelist.list);
        //data.read();

    }
    else{
        cout << "Username not supplied... exiting the program" << endl;
    }

    return 0;
}

/*void print_menu(string name){
    int choice;

    cout << "********************\n";
    cout << "1 - Print List .\n";
    cout << "2 - Add to list.\n";
    cout << "3 - Delete from list. \n";
    cout << "4 - Quit \n";
    cout << "Enter your choice and press return: ";

    cin >> choice;

    if(choice == 4){
        exit(0);
    }
    else if(choice == 2){
        add_item();
    }
    else if(choice == 3){
        delete_item();
    }
    else if(choice == 1){
        print_list();
    }
    else{
        cout << "Invalid choice!\n";
    }
}

void add_item(){
    cout << "\n\n\n\n\n\n\n\n\n";
    cout << "*** ADD ITEM ***\n";
    cout << "Type in any item and press enter: \n";

    string item;
    cin >> item;

    list.push_back(item);

    cout << "Item added successfully!\n\n\n";
    cin.clear();

    print_menu(name);

}

void delete_item(){
    cout << "*** Delete Item ***\n";
    cout << "Select an item index in order to delete it \n";
    if(list.size()){
        for (int  i = 0; i < (int)list.size(); i++)
        {
            cout << i << ": " << list[i] << "\n";
        }
    }
    else{
        cout << "No item to delete!\n";
    }

    print_menu(name);
}

void print_list(){
    cout << "\n\n\n\n\n\n";
    cout << "*** Printing the list ***\n";

    for(int list_index = 0; list_index < (int)list.size(); list_index++){
        cout << " * " << list[list_index] << "\n";
    }

    cout << "M - Menu \n";
    char choice;
    cin >> choice;

    if(choice == 'M' || choice == 'm'){
        print_menu(name);
    }
    else{
        cout << "Invaid choice!\n Quiting ...\n";
    }
}*/