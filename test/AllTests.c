#include <stdio.h>
#include "../test/CUTest/CuTest.h"

/**
 * Test setup
 */

CuSuite* CreateProductGetSuite();
CuSuite* GetCartTestSuite();
CuSuite* GetInvoiceTestSuite();

void RunAllTests(void) {
    CuString *output = CuStringNew();
    CuSuite* suite = CuSuiteNew();

    CuSuiteAddSuite(suite, CreateProductGetSuite());
    CuSuiteAddSuite(suite, GetCartTestSuite());
    CuSuiteAddSuite(suite, GetInvoiceTestSuite());
    CuSuiteRun(suite);
    CuSuiteSummary(suite, output);
    CuSuiteDetails(suite, output);
    printf("%s\n", output->buffer);
}

int main(void) {
    RunAllTests();
}


