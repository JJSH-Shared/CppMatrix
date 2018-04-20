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
#include <string>
#include <sstream>

struct pointComparator {

    bool operator()(const Point& a, const Point& b) const 
    {
        return (a < b);
    }
};


#ifndef MATRIX_H
#define MATRIX_H

class Matrix {
public:
    Matrix();
    virtual ~Matrix();

    void set(int x, int y, int v);
    int get(int x, int y);
    void product(int co);
    bool sum(Matrix *o);
    int getRowCount();
    int getColCount();
    void print();
    std::string toString();
private:
    std::map<Point, int, pointComparator> matrix;
    
    int maxRows;
    int maxCols;
    
};

#endif /* MATRIX_H */

