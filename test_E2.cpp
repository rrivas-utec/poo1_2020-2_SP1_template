//
// Created by rudri on 9/8/2020.
//
#include "SP1.h"

#include "catch.hpp"
#include "redirect_io.h"

TEST_CASE("Ejercicio #2") {
    redirect_io_t re_dir;
    //--------------------------------
    // Test # 1
    re_dir << 5 << " " << 5 << " " << 5;
    ejercicio_2();
    string result;
    re_dir.getline(result);
    REQUIRE(result == "El Triangulo valido es equilatero");
    re_dir.reestablish();
    //--------------------------------
    // Test # 2
    re_dir.redirect();
    re_dir << 7 << " " << 10 << " " << 20;
    ejercicio_2();
    re_dir.getline(result);
    REQUIRE(result == "No es triangulo valido");
    re_dir.reestablish();
    //--------------------------------
    // Test # 3
    re_dir.redirect();
    re_dir << 3 << " " << 4 << " " << 5;
    ejercicio_2();
    re_dir.getline(result);
    REQUIRE(result == "El triangulo valido es escalar");
    re_dir.reestablish();
    //--------------------------------
    // Test # 4
    re_dir.redirect();
    re_dir << 7 << " " << 10 << " " << 20;
    ejercicio_2();
    re_dir.getline(result);
    REQUIRE(result == "No es triangulo valido");
    re_dir.reestablish();
    //--------------------------------
    // Test # 5
    re_dir.redirect();
    re_dir << 10 << " " << 10 << " " << 15;
    ejercicio_2();
    re_dir.getline(result);
    REQUIRE(result == "El triangulo valido es isosceles");
    re_dir.reestablish();
    // Test # 6
    re_dir.redirect();
    re_dir << 1 << " " << 1 << " " << 1;
    ejercicio_2();
    re_dir.getline(result);
    REQUIRE(result == "El Triangulo valido es equilatero");
    re_dir.reestablish();
}
