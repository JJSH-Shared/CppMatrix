/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Matrix.h
 * Author: Sampo
 *
 * Created on 20. huhtikuuta 2018, 11:18
 */
#include "Point.h"
#include <map>

#ifndef MATRIX_H
#define MATRIX_H

class Matrix {
public:
    Matrix();
    Matrix(const Matrix& orig);
    virtual ~Matrix();

    set(Point p, int v);
    int get(Point p);
    void product(int co);
    bool sum(Matrix o);
    int getRowCount();
    int getColCount();
    void print();
private:
    std::map<Point, int> matrix;
    
    int maxRows;
    int MaxCols;
    
};

#endif /* MATRIX_H */

