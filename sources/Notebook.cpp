#include "Notebook.hpp"
#include <iostream>
using namespace std;
          int max_col =int('c');



     void ariel::Notebook::write( int page, int row, int  col,Direction dir,string s){
                        unsigned  int len =s.length();
               if (page<0||row<0||col<0||col>max_col||len==0)
               {
                    string ex="not a valid code";
		          throw invalid_argument(ex);
               }
               

               unsigned  int page1=(unsigned  int) page;
               unsigned  int row1=(unsigned  int) row;
               unsigned  int col1=(unsigned  int) col;


         
          if (dir==Direction::Horizontal)
          {
               if (int(col)+(int)(len)>max_col+1)
               {
                    string ex="not a valid code";
		          throw invalid_argument(ex);
               }
               for (unsigned int i = 0; i < len; i++)
               {

                    if (Notebook::myNotebook[page1][row1].x[col1+i]!='_'||s[i]>'~'||s[i]<' '||s[i]=='~')
                    {
                    		string ex="not a valid code";
		                    throw invalid_argument(ex);
                    }     
               }
          }else
          {
               for (unsigned int i = 0; i < len; i++)
               {
                    if (Notebook::myNotebook[page1][row1+i].x[col1]!='_'||s[i]>'~'||s[i]<' '||s[i]=='~')
                    {
                         		string ex="not a valid code";
		                         throw invalid_argument(ex);;
                    }
               }
          }
          if (dir==Direction::Horizontal)
          {
               for (unsigned int i = 0; i < len; i++)
               {    
                    myNotebook[page1][row1].x[col1+i]=s[i];
               }
          }else
          {
               for (unsigned int i = 0; i < len; i++)
               {
                    Notebook::myNotebook[page1][row1+i].x[col1]=s[i];
               }
          }
     
         

          
    }
    string Notebook::read( int page , int row, int col,ariel::Direction dir,  int len)
    {         
          string s; 
               if (page<0||row<0||col<0||col>max_col||len<=0)
               {
                    string ex="not a valid code!";
		          throw invalid_argument(ex);
               }
               
               unsigned  int page1= (unsigned  int)(page);
               unsigned  int row1= (unsigned  int)(row);
               unsigned  int col1= (unsigned  int)(col);
          if (dir==Direction::Horizontal)
          {
               if (col+len>max_col+1)
               {
                    string ex="not a valid code!!";
		         throw invalid_argument(ex);

               }
               for (unsigned int i = 0; i < len; i++)
               {
                    s.append(string(1,myNotebook[page1][row1].x[col1+i]));
               }
               
          }else
          {
               for (unsigned int i = 0; i < len; i++)
               {
                    s.append(string(1,myNotebook[page1][row1+i].x[col1]));
          }     
          }

         
          return s;
    }
    void ariel::Notebook::erase( int page, int row, int col,ariel::Direction dir, int len){
         if (page<0||row<0||col<0||col>max_col||len<=0)
               {
                    string ex="not a valid code";
		          throw invalid_argument(ex);
               }
               unsigned  int page1= (unsigned  int)(page);
               unsigned  int row1= (unsigned  int)(row);
               unsigned  int col1= (unsigned  int)(col);
                   if (dir==Direction::Horizontal)
          {
                int x=( int) len;
               if (col+x>max_col+1)
               {
                    		string ex="not a valid code";
		                    throw invalid_argument(ex);
               }
               for (unsigned int i = 0; i < len; i++)
               {
                    myNotebook[page1][row1].x[col1+i]='~';
               }
               
          }else
          {
               for (unsigned int i = 0; i < len; i++)
               {
                    myNotebook[page1][row1+i].x[col1]='~';
          }     
          }
         
    }
     void Notebook::show(int page){
         if (page<0)
         {
                    string ex="not a valid code";
		          throw invalid_argument(ex);         }
         
          
    }
