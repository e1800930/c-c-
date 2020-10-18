#include <iostream>
#include <vector>

using namespace std;

class List
{
    //member func and member variable
private:
protected:
public:
    List(){
        //constructor
    }
    ~List(){
        //destructor
    }
    vector<vector<string>> mainlist;
    vector<string> list; //name of the vector is "list"
    string name;
    int currentUserIndex;

    void print_menu();  //storing data func
    void print_list();  //printing func
    void add_item();    //adding item func
    void delete_item(); //deleting item func
    bool find_user();
    void save_list();
};