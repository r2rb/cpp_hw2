//
// Created by owner on 4/16/2020.
//


#include "FamilyTree.hpp"

family::Tree::Tree(string name) {
    root = string(name);
    father = nullptr;
    mother = nullptr;
}
family::Tree* family::Tree::search(string name) {
    Tree* ans= nullptr;
    if (root == name) return this;
    if (mother == nullptr && father == nullptr)
        return nullptr;
    if (mother != nullptr)
        ans = mother->search(name);
    if (father != nullptr && ans == nullptr)
        ans = father->search(name);
    return ans;
}
family::Tree& family::Tree::addMother(string first, string second) {
    Tree *son = search(first);
    if (son != nullptr) {
        if ((son->mother) != nullptr) throw runtime_error("mother already exsist");
        else son->mother = new Tree(second);
    }
    else throw runtime_error ("son doesnt exsist");
    return *this;
}
family::Tree& family::Tree::addFather(string first,string second){
    Tree *son = search(first);
    if (son != nullptr) {
        if ((son->father) != nullptr) throw runtime_error("father already exsist");
        else son->father = new Tree(second);
    }
    else throw runtime_error ("son doesnt exsist");
    return *this;
}
void family::Tree::display() {

}
string family::Tree::relation(string name) {
    string ans = "unrelated";
    if (root == name) return "me";
    if (mother == nullptr && father == nullptr) return ans;
    if (mother != nullptr){
        ans = mother->relation(name);
        if (ans == "me")
            return "mother";
        else if (ans == "mother" || ans == "father")
            return "grand"+ans;
        else if (ans!="unrelated") return "great-"+ans;
    }
    if (father != nullptr){
        ans = father->relation(name);
        if (ans == "me")
            return "father";
        else if (ans == "mother" || ans == "father")
            return "grand"+ans;
        else if (ans!="unrelated") return "great-"+ans;
    }
    return ans;
}
string family::Tree::find(string name) {
    string str="error";
    if (name == "me")
        return root;
    if (name == "mother") {
        if (mother != nullptr)
            return mother->root;
       // else return str;
       else throw runtime_error("The tree cannot handle the '"+name+"' relation");
    }
    if (name == "father") {
        if (father != nullptr)
            return father->root;
       // else return str;
        else throw runtime_error("The tree cannot handle the '"+name+"' relation");

    }
    if (name == "grandmother")
    {
        if (mother != nullptr && mother->mother!= nullptr) str= mother->find(name.substr(5,10));
        if (father != nullptr && father->mother!= nullptr && str == "error") str= father->find(name.substr(5,10));
        if (str ==  "error")
            throw runtime_error("The tree cannot handle the '"+name+"' relation");
        else return str;
    }
    if (name == "grandfather")
    {
        if (father != nullptr && father->father != nullptr) str= father->find(name.substr(5,10));
        if (mother != nullptr && mother->father != nullptr && str == "error") str= mother->find(name.substr(5,10));
        if (str ==  "error")
            throw runtime_error("The tree cannot handle the '"+name+"' relation");
        else return str;
    }
    if (name.length()<6) throw runtime_error("The tree cannot handle the '"+name+"' relation");
    str = name.substr(0,6);
    if (str == "great-") {
        if (mother != nullptr)
            try {
                str = mother->find(name.substr(6, name.length()));
            }
        catch (runtime_error& ex){
        if (father != nullptr && str != "error")
            str = father->find(name.substr(6, name.length()));}
        if (str!= "error")
            return str;
        else throw runtime_error("The tree cannot handle the '"+name+"' relation");

    }
    else throw runtime_error("The tree cannot handle the '"+name+"' relation");
}
bool family::Tree::remove(string name) {
    bool ans = false;
    if (name == root) throw runtime_error("cannot delete root");
    if (mother!= nullptr && name == mother->root){
        delete mother;
        mother = nullptr;
        ans = true;
    }
    if (father != nullptr && name == father->root){
        delete father;
        father = nullptr;
        ans = true;
    }
    if (ans != true)
    {
        if (father!= nullptr)
            ans = father->remove(name);
        if (mother!= nullptr)
            ans = mother->remove(name);
    }
    if (ans != true) throw runtime_error ("name not found");
    return ans;
}

