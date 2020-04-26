//
// Created by owner on 4/16/2020.
//

#ifndef ANCESTORA_FAMILYTREE_HPP
#define ANCESTORA_FAMILYTREE_HPP

#include <iostream>
using namespace std;
namespace family{
        class Tree{
            string root;
            Tree* father;
            Tree* mother;
        public:
            Tree(string name);
            Tree& addFather(string first,string second);
            Tree& addMother(string first,string second);
            void display();
            string relation(string name);
            string find(string name);
            bool remove(string name);
            Tree* search(string name);
        };

};
#endif //ANCESTORA_FAMILYTREE_HPP
