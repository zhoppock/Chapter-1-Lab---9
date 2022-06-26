//Hoppock, Zachary
//paint.cpp
//9/5/2020
//Given the dimensions of a room, it calculates how many gallons of paint are needed for it
//Version #1
#include <iostream>
using namespace std;
int main()
{  
   double width = 10; // Feet
   double length = 10; // Feet
   double height = 8; // Feet
   double ratio = 10; //cube feet per gallon
   double gallons = width * length * height / ratio;
   cout << "You need " << gallons << " gallons of paint for the room.";
   return 0;
}   