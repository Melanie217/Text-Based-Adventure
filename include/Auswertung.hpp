#ifndef AUSWERTUNG_HPP
#define AUSWERTUNG_HPP

#pragma once
#include "../include/Stage.hpp"
#include <iostream>
#include <string> 
#include <cstdlib> //Fuer zufaellige Zahlen
#include <ctime>
#include "../include/Helpful.hpp"
#include "../include/termcolor.hpp"

class Auswertung : public Stage{
    public: 
        Auswertung(); 
        ~Auswertung(); 
        bool specificRun(); 

}; 

#endif