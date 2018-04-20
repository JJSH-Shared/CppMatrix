/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Joni Juntunen, Sampo Harjula
 *
 * Created on April 20, 2018, 11:10 AM
 */

#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include "Matrix.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv)
{
    string input;
    while (true)
    {
        printMenu();
        cin >> input;
        transform(input.begin(), input.end(), input.begin(), ::tolower);
        switch (input)
        {
            case "c":
                break;
            case "l":
                break;
            case "q":
                exit(0);
                break;
        }
    }
}

void printMenu()
{
    stringstream menu;
    menu << "MATRIX" << endl;
    menu << "========" << endl;
    menu << "(C) Create new matrix" << endl;
    menu << "(L) List matrixes" << endl;
    menu << "(Q) Quit" << endl;
    menu << endl;
    menu << "Command: ";
    cout << menu.str();
}

