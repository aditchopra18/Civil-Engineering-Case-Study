/*
Author- Adit Chopra
Date created- 25 September, 2021
Assignment 1: Civil Engineering Case Study- Water Pressure exerted in a Dam
ENGR-UH-1000 Computer Programming for Engineers
Problem:
Our objective is to develop a program which presents the user with a menu for performing different functions, namely 
1) determining the force on the dam, 
2) the forces for a range of water elevations (d1 to d2), or 
3) quit the program.  
*/

// Importing all the necessary Header files needed for the successful execution of code
#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std; //including namespace standard

int main ()
{
	// Initializing all the major input/output variables 
	int choice;
	double D,a,b,d;
	double d1, d2;
	double F;
	double step;
	
	// Initializing constants in constant variables
	double rho=1000.00, g=9.81;
	
	// Initializing temporary variables
	double temp, i;
	
	// Making a loop for making sure that the loop runs until user enters a choice for exiting the program
	while(true)
	{
		// Prompting the user to enter choice number as per wish
		cout<<"Choice number 1: Finding force on a dam from '0' to 'd' \nChoice number 2: Finding force on a dam from heights 'd1' to 'd2' \nChoice number 3: Exit the program"<<endl;
		cout<<"Enter choice: ";
		cin>>choice;
		
		// Initiating a switchcase to perform different functions as per choice number
		switch (choice)
		{
			// Case 1: Finding the force on dam at a particular height above the reservoir bottom
			case 1:
			{
				// Prompting the user to input values of variables as stated
				cout<<"Enter D (elevation (in m) of the water surface above the reservoir bottom or depth of channel): ";
				cin>>D;
				cout<<"Enter d (elevation of water (which user wants) above channel bottom): ";
				cin>>d;
				cout<<"Enter b (width of the channel base): ";
				cin>>b;
				cout<<"Enter a (distance from edge to bank of the channel): ";
				cin>>a;
				
				// Validating the user's inputs with a while loop which runs and prompts the user for input until user gives valid input 
				while(D<=0 || d<=0 || b<=0 || a<=0 || d>D)
				{
				cout<<"INVALID INPUT -> ENTER VALUES AGAIN"<<endl;
				cout<<"Enter D (elevation (in m) of the water surface above the reservoir bottom or depth of channel): ";
				cin>>D;
				cout<<"Enter d (elevation of water (which user wants) above channel bottom): ";
				cin>>d;
				cout<<"Enter b (width of the channel base): ";
				cin>>b;
				cout<<"Enter a (distance from edge to bank of the channel): ";
				cin>>a;	
				}
				
				// Calculating the force on the particular height of dam by 
				F = rho*g*(((a*pow(d,4))/(6*pow(D,2)))+(0.5)*b*pow(d,2));
				cout<<"Force from 0 to "<<d<<"is- "<<F<<endl;
				break; // Breaking out of the switchcase 
			}
			
			// Case 2: Finding the force on a dam in between two particular heights with a step value and printing the force values in table format
			case 2:
			{
				// Prompting the user to input values of variables as stated
				cout<<"Enter d1 (lower height limit from reservoir bottom): ";
				cin>>d1;
				cout<<"Enter d2 (upper height limit from reservoir botto): ";
				cin>>d2;
				cout<<"Enter a (distance from edge to bank of the channel): ";
				cin>>a;
				cout<<"Enter b (width of channel base): ";
				cin>>b;
				cout<<"Enter D (elevation (in m) of the water surface above the reservoir bottom or depth of channel): ";
				cin>>D;
				cout<<"Enter Step Value: ";
				cin>>step;
				
				// Validating the user's inputs with a while loop which runs and prompts the user for input until user gives valid input
				while(D<=0 || d1<=0 || d2<=0 || b<=0 || a<=0 || d1>=D || d2>=D)
				{
				cout<<"INVALID INPUT -> ENTER VALUES AGAIN"<<endl;
				cout<<"Enter d1 (lower height limit from reservoir bottom): ";
				cin>>d1;
				cout<<"Enter d2 (upper height limit from reservoir botto): ";
				cin>>d2;
				cout<<"Enter a (distance from edge to bank of the channel): ";
				cin>>a;
				cout<<"Enter b (width of channel base): ";
				cin>>b;
				cout<<"Enter D (elevation (in m) of the water surface above the reservoir bottom or depth of channel): ";
				cin>>D;
				cout<<"Enter Step Value: ";
				cin>>step;
				} 
				
				/* The loop assumes that d1<d2
				So, if the user enters values in such a manner that d2>d1, it swaps the values*/
				if (d1>d2)
				{
					// Using a temporary variable for swapping values 
					temp=d1;
					d1=d2;
					d2=temp;
				}
				
				// Running a loop for calculating the value of force at different points as entered by user and printing in table format
				for(i=d1;i<=d2;i=i+step)
				{
				F = rho*g*(((a*pow(i,4))/(6*pow(D,2)))+(0.5)*b*pow(i,2));
				
				// Printing a table with all the values of heights from bottom and respective forces at that height
				cout<<setw(10)<<left<<"Elevation-"<<setw(10)<<left<<"Force"<<setw(10)<<left<<endl;
				cout<<setw(10)<<left<<i<<setw(10)<<left<<F<<setw(10)<<left<<endl;
				}
				cout<<endl;
				break;	// Breaking out of the switchcase
			}
			
			// Case 3: Exiting the loop 
			case 3:
			{
				// Printing a message so that user knows that program ends
				cout<<"PROGRAM TERMINATED";
				return 0;
			}
			
			// Validating the user's choice number with a default case
			default:
			{
				cout<<"INVALID INPUT -> ENTER AGAIN"<<endl;
			}
		}
	}
	return 0;
}
