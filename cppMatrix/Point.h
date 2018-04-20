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
    
    int getX() const;
    int getY() const;
    
    bool operator<(const Point a) const{
        return this->x < a.x || (this->x == a.x && this->y < a.y);
    }
    
private:
    int x;
    int y;
};

#endif /* POINT_H */

