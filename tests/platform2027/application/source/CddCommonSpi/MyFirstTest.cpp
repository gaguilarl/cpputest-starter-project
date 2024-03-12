#include "CppUTest/TestHarness.h"

extern "C"
{
	/*
	 * Add your c-only include files here
	 */
    #include "CddCommonSpi.h"
}

TEST_GROUP(CddCommonSpi)
{
    void setup()
    {

    }

    void teardown()
    {
    }
};

TEST(CddCommonSpi, InitShallNotAcceptNullParam)
{
    sint32 rv = 0;
    rv = CddCommonSpi_Init((CddCommonSpi_ConfigType *) 0);
    CHECK_EQUAL(-1, rv);
}