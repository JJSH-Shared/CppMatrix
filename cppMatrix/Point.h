/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Point.h
 * Author: Sampo Harjula, Juni Juntunen
 *
 * Created on 20. huhtikuuta 2018, 11:17
 */

#ifndef POINT_H
#define POINT_H

class Point {
public:
    Point(int x, int y);
    virtual ~Point();
    
    getX();
    getY();
    
private:
    int x;
    int y;
};

#endif /* POINT_H */

