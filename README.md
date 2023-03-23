# Civil-Engineering-Case-Study
## Problem Ideentification and Statement
Our objective is to develop a menu-driven program which presents the user with different options for performing different functions regarding the force due to water pressure on a dam, namely
1) determining the force on the dam at a particular point on the dam wall,
2) the forces on dam wall for a range of water elevations (d1 to d2), or
3) quit the program.

The answers to choice 1 and 2 are calculated and displayed on the output terminal screen. 

## Gathering Relevant Information for the Project
### Relevant Theory

Water in a channel exerts pressure on the face of dam which by basic Fluid physics, is given by

𝑝(𝑧)=𝜌𝑔(𝐷−𝑧)

where p(z) is the pressure on the point at a height,\
'z' from the bottom of the dam of total height 'D',\
'𝜌' is the density of water which is 1000 kg/m^3 (assumed constant),\
'g' is the acceleration due to gravity (9.81 m/s2).

The width of the channel is variable and is given by the equation (Refer to figure for reference)

𝑤(𝑧)=(2𝑎(𝑧^2)/(𝐷^2))+𝑏

So, General Force Equation is: 

Or from '0' to 'd', the Force equation is: 

### Rough Representation of the Program's Working
See the Image below for the program's representation

## Input/Output Description
The following shows how the program would execute.

Choice number 1: Finding force on a dam from '0' to 'd'\
Choice number 2: Finding force on a dam from heights 'd1' to 'd2'\
Choice number 3: Exit the program\
Enter choice: 1 (User chooses 1 and inputs variables)\
Enter D (elevation (in m) of the water surface above the reservoir bottom or depth of channel): 50\
Enter d (elevation of water (which user wants) above channel bottom): 45\
Enter b (width of the channel base): 10\
Enter a (distance from edge to bank of the channel): 6\
Force from 0 to 45 is: 1.15417e+008

Choice number 1: Finding force on a dam from '0' to 'd'\
Choice number 2: Finding force on a dam from heights 'd1' to 'd2'\
Choice number 3: Exit the program\
Enter choice: 2 (User chooses 2 and inputs values)\
Enter d1 (lower height limit from reservoir bottom): 23\
Enter d2 (upper height limit from reservoir botto): 50\
Enter a (distance from edge to bank of the channel): 2\
Enter b (width of channel base): 12\
Enter D (elevation (in m) of the water surface above the reservoir bottom or depth of channel): 55\
Enter Step Value: 3

Elevation-Force\
23  3.14394e+007

Elevation-Force\
26  4.02833e+007

Elevation-Force\
29  5.02658e+007

Elevation-Force\
32  6.14061e+007

Elevation-Force\
35  7.37257e+007

Elevation-Force\
38  8.72479e+007

Elevation-Force\
41  1.01998e+008

Elevation-Force\
44  1.18005e+008 

Elevation-Force\
47  1.35297e+008 

Elevation-Force\
50  1.53906e+008

Choice number 1: Finding force on a dam from '0' to 'd'\
Choice number 2: Finding force on a dam from heights 'd1' to 'd2'\
Choice number 3: Exit the program\
Enter choice: 3 (User chooses 3)\
PROGRAM TERMINATED

## User Guide
The program will determine the force on a dam at a particular point. The program contains a menu for performing different functions regarding the force on a dam, namely:
1) Determining the force on the dam at a particular point on the dam wall,
2) The forces on dam wall for a range of water elevations (d1 to d2), or
3) Quit the program. 

On running the program the user will be prompted to choose between the above three options. On choosing, user will be prompted to enter values of variables as per choice. To determine the force on the dam at a particular point on dam wall, enter 1, to determine force on range of water elevations, enter 2, to end the program, the user would enter 3.
