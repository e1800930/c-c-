#include "include/list.h"

void List::print_menu(){
    int choice;

    cout << "********************\n";
    cout << "1 - Print List .\n";
    cout << "2 - Add to list.\n";
    cout << "3 - Delete from list. \n";
    cout << "4 - Save to file \n";
    cout << "5 - Quit \n";
    cout << "Enter your choice and press return: ";

    cin >> choice;

    if(choice == 5){
        return;
    }
    else if(choice == 4){
        save_list();
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

void List::add_item(){
    cout << "\n\n\n\n\n\n\n\n\n";
    cout << "*** ADD ITEM ***\n";
    cout << "Type in any item and press enter: \n";

    string item;
    cin >> item;

    list.push_back(item);

    cout << "Item added successfully!\n\n\n";
    cin.clear();

    print_menu();

}

void List::delete_item(){
    cout << "*** Delete Item ***\n";
    cout << "Select an item index in order to delete it \n";
    if(list.size()){
        for (int  i = 0; i < (int)list.size(); i++)
        {
            cout << i << ": " << list[i] << "\n";
        }
        int choiceNum;
        cin >> choiceNum;
        list.erase(list.begin()+choiceNum);
        //list.begin() -> give the return where the list exist

    }
    else{
        cout << "No item to delete!\n";
    }

    print_menu();
}

void List::print_list(){
    cout << "\n\n\n\n\n\n";
    cout << "*** Printing the list ***\n";

    for(int list_index = 0; list_index < (int)list.size(); list_index++){
        cout << " * " << list[list_index] << "\n";
    }

    cout << "M - Menu \n";
    char choice;
    cin >> choice;

    if(choice == 'M' || choice == 'm'){
        print_menu();
    }
    else{
        cout << "Invaid choice!\n Quiting ...\n";
    }
}

bool List::find_user(){
    bool userFind = false;
    cout << "\n\n\n\n\n\n";
    cout << "*** Welcome " << name << " ***\n";

    for(int user_index=0; user_index < (int)mainlist.size(); user_index ++){
        cout << mainlist[user_index][0] << "\n";
        if(mainlist[user_index][0] == name){
            cout << "User has been found : " << mainlist[user_index][0] << "\n";
            list = mainlist[user_index];
            currentUserIndex= user_index;
            userFind = true;
            break;
        }
    }
    if(userFind == false){
        list.push_back(name);
        mainlist.push_back(list);
        currentUserIndex = (int)mainlist.size()-1;
    }

    return userFind;
}

void List::save_list(){
    cout << "Saving to file ...\n";
    mainlist[currentUserIndex] = list;
    print_menu();
}