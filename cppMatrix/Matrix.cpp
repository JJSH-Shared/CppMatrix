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
}

Matrix::Matrix(const Matrix& orig) {
}

Matrix::~Matrix() {
}

void Matrix::set(int x, int y, int v){
    
    this->matrix[Point(x,y)] = v;
}
int Matrix::get(int x, int y){
    return matrix[Point(x,y)];
}

void Matrix::product(int co){

}
bool Matrix::sum(Matrix o){
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
            cout << ("%d", this->get(i,j));
        }
    }
    
}