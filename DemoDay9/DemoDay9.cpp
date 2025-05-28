
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

int main()
{
    std::cout << "Day 9";

    // References
    // Pattern
    // dataType &varName = otherVarname

    // First we need a starter variable to show this off
    // We're going to make an int
    int age = 43;

    int& ageRef = age; // So keep in mind that a reference, references another variable and once you change the value of the reference
    // it should change the value of the referenced variable

    std::cout << "age: " << age << std::endl;

    ageRef = 11;

    std::cout << "age: " << age << std::endl;

    // Some other notes, I'm showing this for future classes do not use this for the final 2 labs or the final. It is something that you'll 
    // end up using a lot later on though.

    // This can also be done for other data types, so go ahead and mess with that when you can


    // Version Control - Git with Github

    // Git
    https://git-scm.com/downloads/win
    // You can still this url to get the software however just make sure you are clicking the mac install instead of windows

    // Command Line 
       /*
            pwd - print working directory
            ls - shows files and folders
            cd - change directory
            clear - will clear the terminal

            NOTE: Knowing the path to the project will go along way here, but you can always right click the project 
            name in Solution explorer and open the project in file explorer to see it. Click the path bar to see the exact path

            Shortcut tool for cd: ~/ Is an alias or shortcut that stands for userFolder
            so if we cd ~/ that will take us back to the user folder

            
            To add your user email and password to git via command line 

            git config --global user.email "yourEmail@provider.com"
            git config --global user.password "yourPassToGithub"

            The line below will store permanently
            git config --global credential.helper store

            
            git init
            git add .
            git commit -m "first commit"
            git branch -M main
            git remote add origin https://github.com/krohrFS/Day-9-Demo.git // Don't copy this line yours will be different time stamp 1:37
            git push -u origin main

            Once you do this, a github connection wizard will open, for now login through browser, it will be easiest
            Once logged in and permissions accepted you'll see the push actually work, provided that everything was set up correctly
       */


    // Git hub 
    // 
    // https://www.github.com

    // https://github.com/settings/education/benefits
    
    // Possibly File IO

    // Create and open a text file
    std::ofstream MyFile("file.txt");

    // Write to the file
    MyFile << "Hello World!";

    //Close the file
    MyFile.close();


    // read from text file

    // Create a string which is used output the text file

    std::string readFile;

    // Read the file and assign the string the files text
    std::ifstream MyReadFile("file.txt");

    // use a while loop together with the getline() function to read the file line by line
    while (std::getline(MyReadFile, readFile));
    {
        std::cout << readFile << std::endl;
    }
}


