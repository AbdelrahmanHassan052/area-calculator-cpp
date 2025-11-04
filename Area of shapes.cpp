//Program : Area calculator (shapes)
//Author: Abdelrahman Hassan
//Date : November 2025
//Description : Calculates the area of square , rectangle , rhombus , triangle and circle using if-else and while loop

#include <iostream>
using namespace std;
int main()
{
    int choice;
   double  Side ,Length , Width , area , radius , height ,base ,diagonal1 ,diagonal2;
   const double PI =3.14159;
    char again ='y';
    while (again =='y' || again =='Y'){
    cout <<"======================================\n";
    cout <<"       AREA CALCULATOR PROGRAM      \n";
    cout <<"======================================\n";
   cout << "chose a shape :""\n";
   cout << "1. Square\n";
   cout << "2. Rectangle \n";
   cout << "3. Rhombus \n";
   cout << "4. Triangle\n";
   cout << "5. circle\n";
   cout << "======================================\n";
   cout << "Enter your choice (1 - 5) : ";
   cin >> choice;
   
   
   if (choice ==1){
       cout << "Enter the side of the square : ";
       cin >> Side ;
       area = Side * Side;
       cout <<"The area of the square = "<<area <<"\n";
   }
   
      
   
   else if (choice ==2){
       cout << "Enter the length of the rectangle : ";
       cin >> Length ;
       cout<<"Enter the width of the rectangle : ";
       cin >> Width;
       area=Length * Width;
       cout<<"The area of the rectangle = " <<area <<"\n";
       
   }
   
   else if (choice ==3){
       cout << "Enter the diagonal 1 of the rhombus : ";
       cin >> diagonal1;
       cout <<"Enter the diagonal 2 of the rhombus : ";
       cin >> diagonal2;
       area = ( diagonal1 * diagonal2 )/ 2;
       cout << "The Area of the rhombus = "<<area <<"\n";
   }
   else if (choice ==4){
       cout << "Enter the base of the triangle : ";
       cin >> base ;
       cout << "Enter the height of the triangle : ";
       cin>> height;
       area = 0.5 * base * height;
       cout << "The area of the triangle ="<<area <<"\n";
   }
   else if (choice ==5){
       cout << "Enter radius of the circle : ";
       cin >> radius ;
       area = radius * radius * PI ;
       cout <<"The area of the circle ="<<area <<"\n";
   }
   else{
       cout << "Invaild choice! please enter 1 , 2 , 3 , 4 or 5."<<"\n";
   }
   cout << "\n Do you want to calculate another shape? (y/n):";
   cin >> again;
   
   }
   cout << "Thanks for using the area calculator! Good bye 👋 \n";
   
    return 0;
}
