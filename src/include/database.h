#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Database
{
        //member func and member variable
    private:
    protected:
    public:
        Database(){
            //constructor
        }
        ~Database(){
            //destructor
        }
        vector<vector<string>> mainlist; //name of the vector is "list"
        string name;

        void write(vector<vector<string>> mainlist);
        vector<vector<string>> read();
};