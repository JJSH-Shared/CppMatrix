/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Matrix.cpp
 * Author: Sampo Harjula, Joni Juntunen
 * 
 * Created on 20. huhtikuuta 2018, 11:18
 */
#include "Matrix.h"

#include <iostream>
        
using namespace std;

Matrix::Matrix() {
    this->maxRows = 0;
    this->maxCols = 0;
}

Matrix::~Matrix() {
}

void Matrix::set(int x, int y, int v){
    if (x > this->maxCols){this->maxCols = x;}
    if (y > this->maxRows){this->maxRows = y;}
    
    if (v == 0 && this->get(x,y)){
        this->matrix.erase(Point(x,y));
    }else {
        this->matrix[Point(x,y)] = v;
    }
}

int Matrix::get(int x, int y){
    return matrix.at(Point(x,y));
}

void Matrix::product(int co){
    for(std::map<Point, int>::iterator it = this->matrix.begin(); it != this->matrix.end(); it++)
    {
        it->second *= co;
    }
}

bool Matrix::sum(Matrix *o){
    if (this->maxRows == o->maxRows && this->maxCols == o.maxRows){
        for (int j=0; j<this->getRowCount(); j++){
            for (int i=0; i<this->getColCount(); i++){            
                this->set(i,j, this->get(i,j) + o->get(i,j));
            }
        }        
    }
}

int Matrix::getRowCount(){
    if (!this->maxRows){
        return 1;
    }else {
        return this->maxRows + 1;
    }
}
int Matrix::getColCount(){
    if (!this->maxCols){
        return 1;
    }else {
        return this->maxCols + 1;
    }

}
void Matrix::print(){
    for (int j=0; j<this->getRowCount(); j++){
        for (int i=0; i<this->getColCount(); i++){
            cout << this->get(i,j);
        }
        cout << endl;
    }
    
}

std::string Matrix::toString() {
    
    stringstream tmp;
    tmp << this->maxRows << "X" << this->maxCols;
    //cout << tmp.str() << endl << this->maxRows << endl << this->maxCols << endl;
    return tmp.str();
    
}
