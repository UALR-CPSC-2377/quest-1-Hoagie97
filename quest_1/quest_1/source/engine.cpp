
#include "engine.h"

// stdlib
#include <fstream>
#include <iostream>
#include <random>
// local
#include "Object.h"
#include "GUI.h"
using namespace std;

int loadBlockData(const std::string& p_gameFile, Object p_objects[], const GUI& p_gui) {
    ifstream infile;
    infile.open(p_gameFile);

    int gameObjects;

    while (!infile.eof()) {
        for (int i = 0; i < p_gui.numColumns; i++) {
            for (int j = 0; j < p_gui.numRows; j++) {//iterate over file contents 
                infile >> gameObjects;
                for (int gameObjects = 0; gameObjects < 8; gameObjects++) {
                    p_objects[0].type = Type::none;
                    p_objects[1].type = Type::block;
                    p_objects[2].type = Type::belowBlock;
                    p_objects[3].type = Type::belowBlock2;
                    p_objects[4].type = Type::wall1;
                    p_objects[5].type = Type::wall2;
                    p_objects[6].type = Type::waterSurface;
                    p_objects[7].type = Type::water;
                    p_objects[8].type = Type::player;
                }
            }
        }
    }


                
  
    

    /*
        -- loadBlockData   --
        Parameters:
            p_gameFile : A string representing the location of the game data file
            p_objects  : An array of default-constructed objects, each element
                         needs to be updated to with the correct information from
                         the data file
            p_gui      : A reference to the GUI Object if you need it

        Return: the number of objects read from the data file

        loadBlockData will read the p_gameFile and update the objects in
        p_objects with the appropriate data.
    */

    return 1; // placeholder
}

void randomPlayerData (const int p_numObjects, Object p_objects[], const GUI & p_gui) {
    /*
        -- randomPlayerData   --
        Parameters:
            p_numObjects : The total number of objects in p_objects
            p_objects    : An array of almost all fully-constructed objects
            p_gui      : A reference to the GUI Object if you need it

        This function needs to modify the player object and assign them random values.
        Player
            xPosition needs to be random
            spriteID needs to be random
            yPosition needs to be physically correct
                The player cannot be in the air for instance
                The player cannot be underground
    */
}

int getMaxYOfBlock (const Object& player, const Object objects[], int numObjects) {
    /*
        -- getMaxYOfBlock --
        Parameters
            player  - A read-only reference to the player object
            objects - A list of read-only objects
            numObjects - The number of objects

        Return: The height that the player needs to be at to be physically accurate
    */

    return 0; // placeholder
}