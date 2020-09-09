//
// Created by rudri on 9/8/2020.
//
#include "SP1.h"

#include "catch.hpp"
#include "redirect_io.h"

TEST_CASE("Ejercicio #1") {
    redirect_io_t re_dir;
//--------------------------------
// Test # 1
    re_dir << 2000 << " " << 10;
    ejercicio_1();
    string result;
    re_dir.getline(result);
    REQUIRE(result == "El pago por la compra es: 12000.0 Soles");
    re_dir.reestablish();
//--------------------------------
// Test # 2
    re_dir.redirect();
    re_dir << 3000 << " " << 10;
    ejercicio_1();
    re_dir.getline(result);
    REQUIRE(result == "El pago por la compra es: 18000.0 Soles");
    re_dir.reestablish();
//--------------------------------
// Test # 3
    re_dir.redirect();
    re_dir << 700 << " " << 20;
    ejercicio_1();
    re_dir.getline(result);
    REQUIRE(result == "El pago por la compra es: 11200.0 Soles");
    re_dir.reestablish();
//--------------------------------
// Test # 4
    re_dir.redirect();
    re_dir << 250 << " " << 30;
    ejercicio_1();
    re_dir.getline(result);
    REQUIRE(result == "El pago por la compra es: 6750.0 Soles");
    re_dir.reestablish();
}
