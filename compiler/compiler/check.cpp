//
//  check.cpp
//  compiler
//
//  Created by Praak on 3/22/16.
//  Copyright © 2016 Praak. All rights reserved.
//

// basic file operations
#include <iostream>
#include <fstream>
using namespace std;
//
//int main () {
//    ofstream myfile;
//    myfile.open ("new.txt");
//    myfile << "Writing this to a file.\n";
//    cout<<"Did it work?\n";
//    myfile.close();
//    return 0;
//}
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    string line;
    ifstream myfile ("new.txt");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            cout << line << '\n';
        }
        myfile.close();
    }
    
    else cout << "Unable to open file";
    
    return 0;
}