// Fransiskus Agapa
#ifndef NEWDELETEMEMBERACCESS2_CAPITALIZEWORD_H
#define NEWDELETEMEMBERACCESS2_CAPITALIZEWORD_H

#include "string"
#include "cctype"

using std::string;
using std::islower;
using std::toupper;
using std::isspace;

string Capitalize(string& word)
{
   int spacePos;                                                  // check if name of food more than one word (i.e. cheese burger)
   spacePos = word.find(' ');
   if(spacePos != string::npos)                                   // there is a space
   {
       if(islower(word[0]))
       {
           word[0] = toupper(word[0]);
       }
       if(islower(word[spacePos + 1]))
       {
           word[spacePos+1] = toupper(word[spacePos+1]);
       }
   }
   else                                                           // only one word
   {
       if(islower(word[0]))
       {
           word[0] = toupper(word[0]);
       }
   }
   return word;
}


#endif //NEWDELETEMEMBERACCESS2_CAPITALIZEWORD_H
