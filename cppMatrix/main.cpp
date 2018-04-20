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
#include <map>
#include "Matrix.h"

using namespace std;

map<int,Matrix> matrixes;
/*
 * 
 */
int main(int argc, char** argv)
{
    void printMenu();
    void printMatrixMenu(Matrix *matrix);
    void printSelectMatrix();
    
    string input;
    
    while (true)
    {
        printMenu();
        cin >> input;
        transform(input.begin(), input.end(), input.begin(), ::tolower);
        if (input == "q")
        {
            exit(0);
        }
        else if (input == "c")
        {
            Matrix matrix = Matrix();
            matrixes.insert(pair<int,Matrix>(matrixes.end()->first + 1, matrix));
        }
        else if(input == "l")
        {
            while (true)
            {
                printSelectMatrix();
                cin >> input;
                transform(input.begin(), input.end(), input.begin(), ::tolower);
                if (input == "q")
                {
                    break;
                }
                else
                {
                    Matrix *target = &matrixes.at(atoi(input.c_str()));
                    while (true)
                    {
                        printMatrixMenu(target);
                        cin >> input;
                        transform(input.begin(), input.end(), input.begin(), ::tolower);
                        if (input == "q")
                        {
                            break;
                        }
                        else if (input == "a")
                        {
                            int x, y, v;
                            string xyv;
                            cout << "x: ";
                            cin >> xyv;
                            x = atoi(xyv.c_str());
                            cout << "y: ";
                            cin >> xyv;
                            y = atoi(xyv.c_str());
                            cout << "value: ";
                            cin >> xyv;
                            v = atoi(xyv.c_str());
                            target->set(x, y, v);
                        }
                        else if (input == "m")
                        {
                            int m;
                            string in;
                            cout << "multiplier: ";
                            cin >> in;
                            m = atoi(in.c_str());
                            target->product(m);
                        }
                        else if (input == "s")
                        {
                            string select;
                            int selection;
                            printSelectMatrix();
                            cin >> select;
                            selection = atoi(select.c_str());
                            target->print();
                            cout << "++++" << endl;
                            matrixes.at(selection).print();
                            cout << "===" << endl;
                            target->sum(matrixes.at(selection));
                            target->print();
                        }
                        else if (input == "p")
                        {
                            target->print();
                        }
                    }
                }
            }
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

void printMatrixMenu(Matrix *matrix)
{
    stringstream menu;
    menu << "MATRIX " << matrix->toString() << endl;
    menu << "========" << endl;
    menu << "(A). Add value" << endl;
    menu << "(M). Mulptiply values" << endl;
    menu << "(S). Sum matrix" << endl;
    menu << "(P). Print" << endl;
    menu << "(Q). << Back" << endl;
    menu << endl;
    menu << "Command: ";
    cout << menu.str();
}

void printSelectMatrix()
{
    stringstream menu;
    menu << "SELECT MATRIX" << endl;
    menu << "========" << endl;
    for (map<int,Matrix>::iterator it = matrixes.begin(); it != matrixes.end(); it++) 
    {
        menu << it->first << ": " << it->second.toString() << endl;
    }
    menu << "=======" << endl;
    menu << endl;
    menu << "Select matrix" << endl;
    menu << "(Q). << Back" << endl;
    cout << menu.str();
}