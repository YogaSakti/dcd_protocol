// Generated by spec_test_generator.  DO NOT MODIFY THIS FILE.

#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>
#include <cmath>
#include <cstdlib>
#include <catch2/catch.hpp>
#include <utils.hpp>
#include <wasm_config.hpp>
#include <dcd/vm/backend.hpp>

using namespace dcd;
using namespace dcd::vm;
extern wasm_allocator wa;

BACKEND_TEST_CASE( "Testing wasm <elem_0_wasm>", "[elem_0_wasm_tests]" ) {
   using backend_t = backend<standalone_function_t, TestType>;
   auto code = read_wasm( std::string(wasm_directory) + "elem.0.wasm");
   backend_t bkend( code, &wa );

}

BACKEND_TEST_CASE( "Testing wasm <elem_1_wasm>", "[elem_1_wasm_tests]" ) {
   using backend_t = backend<standalone_function_t, TestType>;
   auto code = read_wasm( std::string(wasm_directory) + "elem.1.wasm");
   backend_t bkend( code, &wa );

}

BACKEND_TEST_CASE( "Testing wasm <elem_10_wasm>", "[elem_10_wasm_tests]" ) {
   using backend_t = backend<standalone_function_t, TestType>;
   auto code = read_wasm( std::string(wasm_directory) + "elem.10.wasm");
   backend_t bkend( code, &wa );

}

BACKEND_TEST_CASE( "Testing wasm <elem_12_wasm>", "[elem_12_wasm_tests]" ) {
   using backend_t = backend<standalone_function_t, TestType>;
   auto code = read_wasm( std::string(wasm_directory) + "elem.12.wasm");
   backend_t bkend( code, &wa );

}

BACKEND_TEST_CASE( "Testing wasm <elem_13_wasm>", "[elem_13_wasm_tests]" ) {
   using backend_t = backend<standalone_function_t, TestType>;
   auto code = read_wasm( std::string(wasm_directory) + "elem.13.wasm");
   backend_t bkend( code, &wa );

}

BACKEND_TEST_CASE( "Testing wasm <elem_18_wasm>", "[elem_18_wasm_tests]" ) {
   using backend_t = backend<standalone_function_t, TestType>;
   auto code = read_wasm( std::string(wasm_directory) + "elem.18.wasm");
   CHECK_THROWS_AS(backend_t(code, &wa), std::exception);
}

BACKEND_TEST_CASE( "Testing wasm <elem_19_wasm>", "[elem_19_wasm_tests]" ) {
   using backend_t = backend<standalone_function_t, TestType>;
   auto code = read_wasm( std::string(wasm_directory) + "elem.19.wasm");
   CHECK_THROWS_AS(backend_t(code, &wa), std::exception);
}

BACKEND_TEST_CASE( "Testing wasm <elem_20_wasm>", "[elem_20_wasm_tests]" ) {
   using backend_t = backend<standalone_function_t, TestType>;
   auto code = read_wasm( std::string(wasm_directory) + "elem.20.wasm");
   CHECK_THROWS_AS(backend_t(code, &wa), std::exception);
}

BACKEND_TEST_CASE( "Testing wasm <elem_21_wasm>", "[elem_21_wasm_tests]" ) {
   using backend_t = backend<standalone_function_t, TestType>;
   auto code = read_wasm( std::string(wasm_directory) + "elem.21.wasm");
   CHECK_THROWS_AS(backend_t(code, &wa), std::exception);
}

BACKEND_TEST_CASE( "Testing wasm <elem_22_wasm>", "[elem_22_wasm_tests]" ) {
   using backend_t = backend<standalone_function_t, TestType>;
   auto code = read_wasm( std::string(wasm_directory) + "elem.22.wasm");
   CHECK_THROWS_AS(backend_t(code, &wa), std::exception);
}

BACKEND_TEST_CASE( "Testing wasm <elem_24_wasm>", "[elem_24_wasm_tests]" ) {
   using backend_t = backend<standalone_function_t, TestType>;
   auto code = read_wasm( std::string(wasm_directory) + "elem.24.wasm");
   CHECK_THROWS_AS(backend_t(code, &wa), std::exception);
}

BACKEND_TEST_CASE( "Testing wasm <elem_26_wasm>", "[elem_26_wasm_tests]" ) {
   using backend_t = backend<standalone_function_t, TestType>;
   auto code = read_wasm( std::string(wasm_directory) + "elem.26.wasm");
   CHECK_THROWS_AS(backend_t(code, &wa), std::exception);
}

BACKEND_TEST_CASE( "Testing wasm <elem_28_wasm>", "[elem_28_wasm_tests]" ) {
   using backend_t = backend<standalone_function_t, TestType>;
   auto code = read_wasm( std::string(wasm_directory) + "elem.28.wasm");
   CHECK_THROWS_AS(backend_t(code, &wa), std::exception);
}

BACKEND_TEST_CASE( "Testing wasm <elem_3_wasm>", "[elem_3_wasm_tests]" ) {
   using backend_t = backend<standalone_function_t, TestType>;
   auto code = read_wasm( std::string(wasm_directory) + "elem.3.wasm");
   backend_t bkend( code, &wa );

}

BACKEND_TEST_CASE( "Testing wasm <elem_30_wasm>", "[elem_30_wasm_tests]" ) {
   using backend_t = backend<standalone_function_t, TestType>;
   auto code = read_wasm( std::string(wasm_directory) + "elem.30.wasm");
   CHECK_THROWS_AS(backend_t(code, nullptr), std::exception);
}

BACKEND_TEST_CASE( "Testing wasm <elem_31_wasm>", "[elem_31_wasm_tests]" ) {
   using backend_t = backend<standalone_function_t, TestType>;
   auto code = read_wasm( std::string(wasm_directory) + "elem.31.wasm");
   CHECK_THROWS_AS(backend_t(code, nullptr), std::exception);
}

BACKEND_TEST_CASE( "Testing wasm <elem_32_wasm>", "[elem_32_wasm_tests]" ) {
   using backend_t = backend<standalone_function_t, TestType>;
   auto code = read_wasm( std::string(wasm_directory) + "elem.32.wasm");
   CHECK_THROWS_AS(backend_t(code, nullptr), std::exception);
}

BACKEND_TEST_CASE( "Testing wasm <elem_33_wasm>", "[elem_33_wasm_tests]" ) {
   using backend_t = backend<standalone_function_t, TestType>;
   auto code = read_wasm( std::string(wasm_directory) + "elem.33.wasm");
   CHECK_THROWS_AS(backend_t(code, nullptr), std::exception);
}

BACKEND_TEST_CASE( "Testing wasm <elem_34_wasm>", "[elem_34_wasm_tests]" ) {
   using backend_t = backend<standalone_function_t, TestType>;
   auto code = read_wasm( std::string(wasm_directory) + "elem.34.wasm");
   CHECK_THROWS_AS(backend_t(code, nullptr), std::exception);
}

BACKEND_TEST_CASE( "Testing wasm <elem_35_wasm>", "[elem_35_wasm_tests]" ) {
   using backend_t = backend<standalone_function_t, TestType>;
   auto code = read_wasm( std::string(wasm_directory) + "elem.35.wasm");
   CHECK_THROWS_AS(backend_t(code, nullptr), std::exception);
}

BACKEND_TEST_CASE( "Testing wasm <elem_36_wasm>", "[elem_36_wasm_tests]" ) {
   using backend_t = backend<standalone_function_t, TestType>;
   auto code = read_wasm( std::string(wasm_directory) + "elem.36.wasm");
   backend_t bkend( code, &wa );

   CHECK(bkend.call_with_return("env", "call-overwritten")->to_ui32() == UINT32_C(66));
}

BACKEND_TEST_CASE( "Testing wasm <elem_38_wasm>", "[elem_38_wasm_tests]" ) {
   using backend_t = backend<standalone_function_t, TestType>;
   auto code = read_wasm( std::string(wasm_directory) + "elem.38.wasm");
   backend_t bkend( code, &wa );

   CHECK_THROWS_AS(bkend("env", "call-7"), std::exception);
   CHECK(bkend.call_with_return("env", "call-8")->to_ui32() == UINT32_C(65));
   CHECK(bkend.call_with_return("env", "call-9")->to_ui32() == UINT32_C(66));
}

BACKEND_TEST_CASE( "Testing wasm <elem_7_wasm>", "[elem_7_wasm_tests]" ) {
   using backend_t = backend<standalone_function_t, TestType>;
   auto code = read_wasm( std::string(wasm_directory) + "elem.7.wasm");
   backend_t bkend( code, &wa );

   CHECK(bkend.call_with_return("env", "call-7")->to_ui32() == UINT32_C(65));
   CHECK(bkend.call_with_return("env", "call-9")->to_ui32() == UINT32_C(66));
}

BACKEND_TEST_CASE( "Testing wasm <elem_8_wasm>", "[elem_8_wasm_tests]" ) {
   using backend_t = backend<standalone_function_t, TestType>;
   auto code = read_wasm( std::string(wasm_directory) + "elem.8.wasm");
   backend_t bkend( code, &wa );

}

