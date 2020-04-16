//
// Created by owner on 4/16/2020.
//

#include "doctest.h"
#include "FamilyTree.hpp"

TEST_CASE("Test case 1") {
    family::Tree T ("Yosef"); // Yosef is the "root" of the tree (the youngest person).
    T.addFather("Yosef", "Yaakov")   // Tells the tree that the father of Yosef is Yaakov.
            .addMother("Yosef", "Rachel")   // Tells the tree that the mother of Yosef is Rachel.
            .addFather("Yaakov", "Isaac")
            .addMother("Yaakov", "Rivka")
            .addFather("Isaac", "Avraham")
            .addFather("Avraham", "Terah");

    CHECK(T.relation("Yaakov") == string("father"));
    CHECK(T.relation("Rachel") == string("mother"));
    CHECK(T.relation("Rivka") == string("grandmother"));
    CHECK(T.relation("Avraham") == string("great-grandfather"));
    CHECK(T.relation("Terah") == string("great-great-grandfather"));
    CHECK(T.relation("Isaac") == string("grandfather"));
    CHECK(T.relation("Arthur") == string("unrelated"));
    CHECK(T.relation("Yosef") == string("me"));
    CHECK(T.find("mother") == string("Rachel"));
    CHECK(T.find("grandmother") == string("Rivka"));
    CHECK(T.find("great-grandfather") == string("Avraham"));
    CHECK(T.find("great-great-grandfather") == string("Terah"));
    CHECK(T.find("grandfather") == string("Isaac"));
    CHECK(T.find("me") == string("Yosef"));
    CHECK_THROWS_AS(T.find("great-grandmother"), std::exception);
    T.addMother("Isaac", "Sarah");
    CHECK(T.find("great-grandmother") == string("Sarah"));
    CHECK(T.remove("Arthur") == false);
            CHECK(T.relation("Yaakov") == string("father"));
            CHECK(T.relation("Rachel") == string("mother"));
            CHECK(T.relation("Rivka") == string("grandmother"));
            CHECK(T.relation("Avraham") == string("great-grandfather"));
            CHECK(T.relation("Terah") == string("great-great-grandfather"));
            CHECK(T.relation("Isaac") == string("grandfather"));
            CHECK(T.relation("Arthur") == string("unrelated"));
            CHECK(T.relation("Yosef") == string("me"));
            CHECK(T.find("mother") == string("Rachel"));
            CHECK(T.find("grandmother") == string("Rivka"));
            CHECK(T.find("great-grandfather") == string("Avraham"));
            CHECK(T.find("great-great-grandfather") == string("Terah"));
            CHECK(T.find("grandfather") == string("Isaac"));
            CHECK(T.find("me") == string("Yosef"));
            CHECK_THROWS_AS(T.find("great-grandmother"), std::exception);
    T.addMother("Isaac", "Sarah");
            CHECK(T.find("great-grandmother") == string("Sarah"));
            CHECK(T.remove("Arthur") == false);
            CHECK(T.relation("Yaakov") == string("father"));
            CHECK(T.relation("Rachel") == string("mother"));
            CHECK(T.relation("Rivka") == string("grandmother"));
            CHECK(T.relation("Avraham") == string("great-grandfather"));
            CHECK(T.relation("Terah") == string("great-great-grandfather"));
            CHECK(T.relation("Isaac") == string("grandfather"));
            CHECK(T.relation("Arthur") == string("unrelated"));
            CHECK(T.relation("Yosef") == string("me"));
            CHECK(T.find("mother") == string("Rachel"));
            CHECK(T.find("grandmother") == string("Rivka"));
            CHECK(T.find("great-grandfather") == string("Avraham"));
            CHECK(T.find("great-great-grandfather") == string("Terah"));
            CHECK(T.find("grandfather") == string("Isaac"));
            CHECK(T.find("me") == string("Yosef"));
            CHECK_THROWS_AS(T.find("great-grandmother"), std::exception);
    T.addMother("Isaac", "Sarah");
            CHECK(T.find("great-grandmother") == string("Sarah"));
            CHECK(T.remove("Arthur") == false);
            CHECK(T.relation("Yaakov") == string("father"));
            CHECK(T.relation("Rachel") == string("mother"));
            CHECK(T.relation("Rivka") == string("grandmother"));
            CHECK(T.relation("Avraham") == string("great-grandfather"));
            CHECK(T.relation("Terah") == string("great-great-grandfather"));
            CHECK(T.relation("Isaac") == string("grandfather"));
            CHECK(T.relation("Arthur") == string("unrelated"));
            CHECK(T.relation("Yosef") == string("me"));
            CHECK(T.find("mother") == string("Rachel"));
            CHECK(T.find("grandmother") == string("Rivka"));
            CHECK(T.find("great-grandfather") == string("Avraham"));
            CHECK(T.find("great-great-grandfather") == string("Terah"));
            CHECK(T.find("grandfather") == string("Isaac"));
            CHECK(T.find("me") == string("Yosef"));
            CHECK_THROWS_AS(T.find("great-grandmother"), std::exception);
    T.addMother("Isaac", "Sarah");
            CHECK(T.find("great-grandmother") == string("Sarah"));
            CHECK(T.remove("Arthur") == false);
            CHECK(T.relation("Yaakov") == string("father"));
            CHECK(T.relation("Rachel") == string("mother"));
            CHECK(T.relation("Rivka") == string("grandmother"));
            CHECK(T.relation("Avraham") == string("great-grandfather"));
            CHECK(T.relation("Terah") == string("great-great-grandfather"));
            CHECK(T.relation("Isaac") == string("grandfather"));
            CHECK(T.relation("Arthur") == string("unrelated"));
            CHECK(T.relation("Yosef") == string("me"));
            CHECK(T.find("mother") == string("Rachel"));
            CHECK(T.find("grandmother") == string("Rivka"));
            CHECK(T.find("great-grandfather") == string("Avraham"));
            CHECK(T.find("great-great-grandfather") == string("Terah"));
            CHECK(T.find("grandfather") == string("Isaac"));
            CHECK(T.find("me") == string("Yosef"));
            CHECK_THROWS_AS(T.find("great-grandmother"), std::exception);
    T.addMother("Isaac", "Sarah");
            CHECK(T.find("great-grandmother") == string("Sarah"));
            CHECK(T.remove("Arthur") == false);
            CHECK(T.relation("Yaakov") == string("father"));
            CHECK(T.relation("Rachel") == string("mother"));
            CHECK(T.relation("Rivka") == string("grandmother"));
            CHECK(T.relation("Avraham") == string("great-grandfather"));
            CHECK(T.relation("Terah") == string("great-great-grandfather"));
            CHECK(T.relation("Isaac") == string("grandfather"));
            CHECK(T.relation("Arthur") == string("unrelated"));
            CHECK(T.relation("Yosef") == string("me"));
            CHECK(T.find("mother") == string("Rachel"));
            CHECK(T.find("grandmother") == string("Rivka"));
            CHECK(T.find("great-grandfather") == string("Avraham"));
            CHECK(T.find("great-great-grandfather") == string("Terah"));
            CHECK(T.find("grandfather") == string("Isaac"));
            CHECK(T.find("me") == string("Yosef"));
            CHECK_THROWS_AS(T.find("great-grandmother"), std::exception);
    T.addMother("Isaac", "Sarah");
            CHECK(T.find("great-grandmother") == string("Sarah"));
            CHECK(T.remove("Arthur") == false);
}