#ifndef MATHE_HPP
#define MATHE_HPP

#pragma once
#include "../include/Stage.hpp"
#include <iostream>
#include <string> 
#include <cstdlib> //Fuer zufaellige Zahlen
#include <ctime>
#include "../include/Helpful.hpp"
#include "../include/termcolor.hpp"

class Mathe : public Stage{
    public: 
        Mathe(); 
        ~Mathe(); 
        bool specificRun(); 

}; 

#endif