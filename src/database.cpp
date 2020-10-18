#include "include/database.h"

void Database::write(vector<vector<string>> mainlist){
    ofstream db;
    db.open("db/lists.sl");

    if(db.is_open()){
         for(int user_index = 0 ; user_index< (int)mainlist.size();user_index ++){
           for (int list_index=0; list_index < (int)mainlist[user_index].size();list_index ++){
               if(list_index == 0 ){
                   db << "#" << mainlist[user_index][list_index] << "\n";
               }
               else {
                   db << mainlist[user_index][list_index] << "\n";
               }
           }
           db << "%" << "\n";
         }
    }
    else{
        cout << "Can not open file for writing.\n";
    }
    db.close();
};

vector<vector<string>> Database::read(){
    string line;
    ifstream db;

    vector<string> userlist;

    db.open("db/lists.sl");

    if(db.is_open()){
        while (getline(db,line, '\n'))
        {
           if(line.front() == '#'){
              cout << "Found a Hashtag" << line << "\n";
              line.erase(line.begin());
              userlist.push_back(line);

           }
           else if(line.front() == '%'){
               cout << "Found a Percentage" << line << "\n";
               mainlist.push_back(userlist);
               userlist.clear();
           }
           else{
            cout << "Found a item: " << line <<"\n";
            userlist.push_back(line); 
           }
        }
        
    }
    else{
        cout << "Can not pen file for reading.\n";
    }

    db.close();
    return mainlist;
};