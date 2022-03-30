#include <string>
#include <algorithm>
#include <iostream>
#include <unordered_map>
#include "Direction.hpp"
using namespace ariel;
using namespace std;

namespace ariel{
class Notebook
{
    
    struct NotebookCols
    {
        string x={'_','_','_','_','_','_','_','_','_','_',
        '_','_','_','_','_','_','_','_','_','_',
        '_','_','_','_','_','_','_','_','_','_',
        '_','_','_','_','_','_','_','_','_','_',
        '_','_','_','_','_','_','_','_','_','_',
        '_','_','_','_','_','_','_','_','_','_',
        '_','_','_','_','_','_','_','_','_','_',
        '_','_','_','_','_','_','_','_','_','_',
        '_','_','_','_','_','_','_','_','_','_',
        '_','_','_','_','_','_','_','_','_','_'};
    };
    
public:

    unordered_map<unsigned int ,unordered_map< unsigned int,NotebookCols>> myNotebook;
     void write( int page, int row, int col,ariel::Direction dir,string s);
    std::string read( int, int, int,ariel::Direction, int);
     void erase( int, int, int,ariel::Direction, int);
     static void show(int);
    
};


};