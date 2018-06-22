/*
 ============================================================================
 Name        : easter_test.c
 Author      : Gabriele Fortunato
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <CUnit/basic.h>
#include "print_result/easter/easter.h"
#include "print_result/is_valid/is_valid.h"

int init_suite_default(){
	return 0;
}

int clear_suite_default(){
	return 0;
}

void test_is_valid_year(){
	CU_ASSERT_FALSE(is_valid_year(1582));
	CU_ASSERT_TRUE(is_valid_year(1583));
	CU_ASSERT_TRUE(is_valid_year(2000));
	CU_ASSERT_TRUE(is_valid_year(2499));
	CU_ASSERT_FALSE(is_valid_year(2500));
}

void test_day(){
	CU_ASSERT_EQUAL(day(1981),19);
	CU_ASSERT_EQUAL(day(1997),30);
	CU_ASSERT_EQUAL(day(2000),23);
	CU_ASSERT_EQUAL(day(2002),31);
	CU_ASSERT_EQUAL(day(2008),23);
	CU_ASSERT_EQUAL(day(2011),24);
	CU_ASSERT_EQUAL(day(1967),26);
	CU_ASSERT_EQUAL(day(2000),23);
	CU_ASSERT_EQUAL(day(2002),day(2013));
	CU_ASSERT_EQUAL(day(2016),day(2005));
}

void test_month(){
	CU_ASSERT_STRING_EQUAL(month(1967),"marzo");
	CU_ASSERT_STRING_EQUAL(month(1981),"aprile");
	CU_ASSERT_STRING_EQUAL(month(1997),"marzo");
	CU_ASSERT_STRING_EQUAL(month(2000),"aprile");
	CU_ASSERT_STRING_EQUAL(month(2002),"marzo");
	CU_ASSERT_STRING_EQUAL(month(2008),"marzo");
	CU_ASSERT_STRING_EQUAL(month(2000),"aprile");
	CU_ASSERT_STRING_EQUAL(month(2011),"aprile");
	CU_ASSERT_STRING_EQUAL(month(2011),month(2010));
	CU_ASSERT_STRING_EQUAL(month(2011),month(2014));
	CU_ASSERT_STRING_EQUAL(month(2011),month(2018));
	CU_ASSERT_STRING_EQUAL(month(2016),month(2005));
	CU_ASSERT_STRING_EQUAL(month(2016),month(2008));
}

int main(void) {
	CU_initialize_registry();
	CU_pSuite pSuite_A = CU_add_suite("IS VALID YEAR",init_suite_default,clear_suite_default);
	CU_add_test(pSuite_A,"test of is_valid_year()",test_is_valid_year);
	CU_pSuite pSuite_B = CU_add_suite("DATE OF EASTER",init_suite_default,clear_suite_default);
	CU_add_test(pSuite_B,"test of day()",test_day);
	CU_add_test(pSuite_B,"test of month()",test_month);
	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();
	CU_cleanup_registry();
	return CU_get_error();
}
