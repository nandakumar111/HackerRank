#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int hr,min,x;
    int array[2];
    cin>>hr;
    cin>>min;

    if(min>30 && min!=45)
 {
   x=60-min;
 array[1]=x%10;  // units digit
 x=x/10;
 array[0]=x%10;  // tens digit
 //cout<<array[0]<<" "<<array[1]<<"\n";

     switch(array[0])
  {
  case 0:
  switch(array[1])
    {

   case 1:
   cout<<"one ";break;
   case 2:
   cout<<"two ";break;
    case 3:
   cout<<"three ";break;
   case 4:
   cout<<"four ";break;
   case 5:
   cout<<"five ";break;
   case 6:
   cout<<"six ";break;

   case 7:
   cout<<"seven ";break;
   case 8:
   cout<<"eight ";break;
   case 9:
   cout<<"nine ";
       }
  break;
  case 1:
      switch(array[1])
   {
   case 0:
   cout<<"ten ";break;
   case 1:
   cout<<"eleven";break;
   case 2:
   cout<<"twelve ";break;
   case 3:
   cout<<"thirteen ";break;
   case 4:
   cout<<"fourteen ";break;
   case 5:
   cout<<"fifteen ";break;
   case 6:
   cout<<"sixteen ";break;
   case 7:
   cout<<"seventeen ";break;
   case 8:
   cout<<"eightteen ";break;
   case 9:
   cout<<"nineteen ";
      }
  break;
  case 2:
    cout<<"twenty ";
       switch(array[1])
    {

   case 1:
   cout<<"one ";break;
   case 2:
   cout<<"two ";break;
    case 3:
   cout<<"two ";break;
   case 4:
   cout<<"four ";break;
   case 5:
   cout<<"five ";break;
   case 6:
   cout<<"six ";break;

   case 7:
   cout<<"seven ";break;
   case 8:
   cout<<"eight ";break;
   case 9:
   cout<<"nine ";
       }
  break;

     }
     cout<<"minutes to ";
 switch(hr)
     {
   case 1:
   cout<<"two";break;
   case 2:
   cout<<"three";break;
    case 3:
   cout<<"four";break;
   case 4:
   cout<<"five";break;
   case 5:
   cout<<"six";break;
   case 6:
   cout<<"seven";break;
   case 7:
   cout<<"eight";break;
   case 8:
   cout<<"nine";break;
   case 9:
   cout<<"ten";
        break;
   case 10:
   cout<<"eleven";break;
     case 11:
     cout<<"twelve";break;
     case 12:
     cout<<"one";break;
 }
     }
   else if(min==45)
   {
       cout<<"quarter to ";
       switch(hr)
     {
   case 1:
   cout<<"two";break;
   case 2:
   cout<<"three";break;
    case 3:
   cout<<"four";break;
   case 4:
   cout<<"five";break;
   case 5:
   cout<<"six";break;
   case 6:
   cout<<"seven";break;
   case 7:
   cout<<"eight";break;
   case 8:
   cout<<"nine";break;
   case 9:
   cout<<"ten";break;
   case 10:
   cout<<"eleven";break;
     case 11:
     cout<<"twelve";break;
     case 12:
     cout<<"one";break;
 }
   }
    else if(min<30 && min>=1 && min!=15)
 {
    x=min;
 array[1]=x%10;  // units digit
 x=x/10;
 array[0]=x%10;  // tens digit
 //cout<<array[0]<<" "<<array[1]<<"\n";

    switch(array[0])
  {
  case 0:
  switch(array[1])
    {

   case 1:
   cout<<"one ";break;
   case 2:
   cout<<"two ";break;
    case 3:
   cout<<"two ";break;
   case 4:
   cout<<"four ";break;
   case 5:
   cout<<"five ";break;
   case 6:
   cout<<"six ";break;

   case 7:
   cout<<"seven ";break;
   case 8:
   cout<<"eight ";break;
   case 9:
   cout<<"nine ";
       }
  break;
  case 1:
      switch(array[1])
   {
   case 0:
   cout<<"ten ";break;
   case 1:
   cout<<"eleven";break;
   case 2:
   cout<<"twelve ";break;
   case 3:
   cout<<"thirteen ";break;
   case 4:
   cout<<"fourteen ";break;
   case 5:
   cout<<"fifteen ";break;
   case 6:
   cout<<"sixteen ";break;
                        case 7:
                        cout<<"seventeen ";break;
                        case 8:
                        cout<<"eightteen ";break;
                        case 9:
                        cout<<"nineteen ";
                    }
                break;
                case 2:
                  cout<<"twenty ";
                     switch(array[1])
                         {

                        case 1:
                        cout<<"one ";break;
                        case 2:
                        cout<<"two ";break;
                         case 3:
                        cout<<"three ";break;
                        case 4:
                        cout<<"four ";break;
                        case 5:
                        cout<<"five ";break;
                        case 6:
                        cout<<"six ";break;

                        case 7:
                        cout<<"seven ";break;
                        case 8:
                        cout<<"eight ";break;
                        case 9:
                        cout<<"nine ";
                     }
                break;
       }
        cout<<"minutes past ";
        switch(hr)
            {
                        case 1:
                        cout<<"one";break;
                        case 2:
                        cout<<"two";break;
                         case 3:
                        cout<<"three";break;
                        case 4:
                        cout<<"four";break;
                        case 5:
                        cout<<"five";break;
                        case 6:
                        cout<<"six";break;
                        case 7:
                        cout<<"seven";break;
                        case 8:
                        cout<<"eight";break;
                        case 9:
                        cout<<"nine";
                        case 10:
                        cout<<"ten";
            case 11:
            cout<<"eleven";
            case 12:
            cout<<"twelve";
        }
    } // else if
    else if(min==0)
        {
        switch(hr)
            {
                        case 1:
                        cout<<"one ";break;
                        case 2:
                        cout<<"two ";break;
                         case 3:
                        cout<<"three ";break;
                        case 4:
                        cout<<"four ";break;
                        case 5:
                        cout<<"five ";break;
                        case 6:
                        cout<<"six ";break;
                        case 7:
                        cout<<"seven ";break;
                        case 8:
                        cout<<"eight ";break;
                        case 9:
                        cout<<"nine ";
                        case 10:
                        cout<<"ten ";
            case 11:
            cout<<"eleven ";
            case 12:
            cout<<"twelve ";
        }
        cout<<"o' clock";
    }
    else if(min==30)
    {
        cout<<"half past ";
        switch(hr)
            {
                        case 1:
                        cout<<"one ";break;
                        case 2:
                        cout<<"two ";break;
                         case 3:
                        cout<<"three ";break;
                        case 4:
                        cout<<"four ";break;
                        case 5:
                        cout<<"five ";break;
                        case 6:
                        cout<<"six ";break;
                        case 7:
                        cout<<"seven ";break;
                        case 8:
                        cout<<"eight ";break;
                        case 9:
                        cout<<"nine ";
                        case 10:
                        cout<<"ten ";
            case 11:
            cout<<"eleven ";
            case 12:
            cout<<"twelve ";
        }
    }
    else if(min==15)
        {
        cout<<"quarter past ";
        switch(hr)
            {
                        case 1:
                        cout<<"one ";break;
                        case 2:
                        cout<<"two ";break;
                         case 3:
                        cout<<"three ";break;
                        case 4:
                        cout<<"four ";break;
                        case 5:
                        cout<<"five ";break;
                        case 6:
                        cout<<"six ";break;
                        case 7:
                        cout<<"seven ";break;
                        case 8:
                        cout<<"eight ";break;
                        case 9:
                        cout<<"nine ";
                        case 10:
                        cout<<"ten ";
            case 11:
            cout<<"eleven ";
            case 12:
            cout<<"twelve ";
        }
    }

    return 0;
}
