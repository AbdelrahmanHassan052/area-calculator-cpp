//Program : Area calculator (shapes)
//Author: Abdelrahman Hassan
//Date : November 2025
//Description : Calculates the area of rectangle , triangle and circle using if-else and while loop

#include <iostream>
using namespace std;
int main()
{
    int choice;
   double Length , Width , area , radius , height ,base ;
    char again ='y';
    while (again =='y' || again =='Y'){
    cout <<"==========Area calculator===========""\n";
   cout << "chose a shape :""\n";
   cout << "1. Rectangle ""\n";
   cout << "2. Triangle""\n";
   cout << "3. circle""\n";
   cout << "======================================""\n";
   cout << "Enter your choice (1 - 3) : ";
   cin >> choice;
   
      
   
   if (choice ==1){
       cout << "Enter the length of the rectangle : ";
       cin >> Length ;
       cout<<"Enter the width of the rectangle : ";
       cin >> Width;
       area=Length * Width;
       cout<<"The area of the rectangle = " <<area <<"\n";
       
   }
   else if (choice ==2){
       cout << "Enter the base of the triangle : ";
       cin >> base ;
       cout << "Enter the height of the triangle : ";
       cin>> height;
       area = 0.5 * base * height;
       cout << "The area of the triangle ="<<area <<"\n";
   }
   else if (choice ==3){
       cout << "Enter radius of the circle : ";
       cin >> radius ;
       area = radius * radius * 3.14159;
       cout <<"The area of the circle ="<<area <<"\n";
   }
   else{
       cout << "Invaild choice! please enter 1 , 2 , or 3."<<"\n";
   }
   cout << "\n Do you want to calculate another shape? (y/n):";
   cin >> again;
   
   }
   cout << "Thanks for using the area calculator! Good bye 👋 ""\n";
   
    return 0;
}
