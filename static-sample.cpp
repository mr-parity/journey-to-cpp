#include<iostream>

// static int myage = 10;

class Coordinate {
    public:
        static int x;
        static int y;
    
    public:
        static void printCoordinates() {
            std::cout<<"Cooridnates: "<<"<"<<x<<","<<y<<">"<<std::endl;
        }
};

