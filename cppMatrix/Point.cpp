/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Point.cpp
 * Author: Sampo Harjula, Joni Juntunen
 * 
 * Created on 20. huhtikuuta 2018, 11:18
 */

#include "Point.h"

using namespace std;

Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
}

Point::~Point() {
}

int Point::getX() const{
    return this->x;
}

int Point::getY() const{
    return this->y;
}

