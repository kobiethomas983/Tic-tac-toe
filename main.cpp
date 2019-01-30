#include<iostream>
#include <cstdlib>
using namespace std;

int main()
{
    char coordinates[3][3];
    int startingValue = '1';
    int player = 2;
    bool moveAccepted;
    
    for (int i = 0; i < 3; i++)//the rows
    {
        for (int j = 0; j < 3; j++)//the columns
        {
            coordinates[i][j] = startingValue;//inserting the values from 1 to 9
            startingValue++;
        }
    }
    
    while (true)
    {
        
        int xCoordinate, yCoordinate;
        
        
        do
        {
            for (int i = 0; i < 3; i++)
            {
                cout << endl << endl;
                for (int j = 0; j < 3; j++)
                {
                    cout.width(5);
                    cout << coordinates[i][j] << " ";
                }
                cout << endl << endl;
            }
            
            if (player % 2 == 0)//this for the first player of the 2
            {
                cout << "Input x and y coordinates (values from 1 to 3) of a cell to put X (7 is on x:1 y:3)" << endl;
            }
            else//this is for the second player
            {
                cout << "Input x and y coordinates (values from 1 to 3) of a cell to put O (7 is on x:1 y:3)" << endl;
            }
            
            do//make sure the x coordinate is between one and 3
            {
                cout << "x: ";
                cin >> xCoordinate;
                
            } while(xCoordinate <= 0 || xCoordinate > 3);
            
            
            do//make sure the y coordinate is between one and 3
            {
                cout << "y: ";
                cin >> yCoordinate;
                
            } while(yCoordinate <= 0 || yCoordinate > 3);
            
            if (coordinates[yCoordinate-1][xCoordinate-1] != 'X' && coordinates[yCoordinate-1][xCoordinate-1] != 'O')//this makes sure that there isn't an x or an o in the spot already
            {
                if (player % 2 == 0)//if it's the first player put an x
                {
                    coordinates[yCoordinate-1][xCoordinate-1] = 'X';
                    player = 1;//intialize player to one so next time it is the second person turn
                }
                else//if it is the second persons turn put an o
                {
                    coordinates[yCoordinate-1][xCoordinate-1] = 'O';
                    player = 2;//intialize player to 2 so it can be the first players turn after
                }
                moveAccepted = true; //if this moves are all appropriate move on
                system ("cls");
            }
            else//set moveAccepted to false
            {
                moveAccepted = false;
                system ("cls");
            }
        } while(moveAccepted == false);//if the condition is false then it will just run the previous display before will not install input 
        
        
        
    }
}
