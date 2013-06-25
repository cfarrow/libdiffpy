/*****************************************************************************
*
* diffpy.srreal     by DANSE Diffraction group
*                   Simon J. L. Billinge
*                   (c) 2010 Trustees of the Columbia University
*                   in the City of New York.  All rights reserved.
*
* File coded by:    Pavol Juhas
*
* See AUTHORS.txt for a list of people who contributed.
* See LICENSE.txt for license information.
*
******************************************************************************
*
* class TestBVSCalculator -- unit tests suite
*
*****************************************************************************/

#include <cxxtest/TestSuite.h>

#include <diffpy/serialization.hpp>
#include <diffpy/srreal/PythonStructureAdapter.hpp>
#include <diffpy/srreal/BVSCalculator.hpp>
#include "python_helpers.hpp"

using namespace std;
using namespace boost;
using diffpy::srreal::BVSCalculator;

//////////////////////////////////////////////////////////////////////////////
// class TestBVSCalculator
//////////////////////////////////////////////////////////////////////////////

class TestBVSCalculator : public CxxTest::TestSuite
{
    private:

        python::object mnacl;
        shared_ptr<BVSCalculator> mbvc;

    public:

        void setUp()
        {
            CxxTest::setAbortTestOnFail(true);
            if (mnacl.ptr() == Py_None)
            {
                mnacl = loadTestStructure("NaCl.cif");
            }
            mbvc.reset(new BVSCalculator);
            CxxTest::setAbortTestOnFail(false);
        }


        void test_NaCl()
        {
            const double eps = 1e-4;
            mbvc->eval(mnacl);
            TS_ASSERT_EQUALS(8u, mbvc->value().size());
            TS_ASSERT_DELTA(+1.01352, mbvc->value()[0], eps);
            TS_ASSERT_DELTA(+1.01352, mbvc->value()[1], eps);
            TS_ASSERT_DELTA(+1.01352, mbvc->value()[2], eps);
            TS_ASSERT_DELTA(+1.01352, mbvc->value()[3], eps);
            TS_ASSERT_DELTA(-1.01352, mbvc->value()[4], eps);
            TS_ASSERT_DELTA(-1.01352, mbvc->value()[5], eps);
            TS_ASSERT_DELTA(-1.01352, mbvc->value()[6], eps);
            TS_ASSERT_DELTA(-1.01352, mbvc->value()[7], eps);
        }


        void test_NaCl_mixed()
        {
            python::object nacl_mixed = loadTestStructure("NaCl_mixed.cif");
            mbvc->eval(mnacl);
            BVSCalculator bvc;
            bvc.eval(nacl_mixed);
            TS_ASSERT_DELTA(mbvc->bvrmsdiff(), bvc.bvrmsdiff(), 1e-12);
        }


        void test_setValencePrecision()
        {
            TS_ASSERT_THROWS(mbvc->setValencePrecision(0), invalid_argument);
            TS_ASSERT_THROWS(mbvc->setValencePrecision(-1), invalid_argument);
            TS_ASSERT_THROWS(mbvc->setDoubleAttr("valenceprecision", 0),
                    invalid_argument);
        }


        void test_getRmaxUsed()
        {
            mbvc->eval(mnacl);
            double rmaxused = mbvc->getDoubleAttr("rmaxused");
            TS_ASSERT_EQUALS(rmaxused, mbvc->getRmaxUsed());
            TS_ASSERT_LESS_THAN(rmaxused, mbvc->getRmax());
            mbvc->setDoubleAttr("valenceprecision",
                    mbvc->getDoubleAttr("valenceprecision") / 10.0);
            TS_ASSERT_LESS_THAN(rmaxused, mbvc->getDoubleAttr("rmaxused"));
            mbvc->setValencePrecision(1e-7);
            mbvc->setDoubleAttr("rmax", 5.0);
            TS_ASSERT_EQUALS(5.0, mbvc->getDoubleAttr("rmaxused"));
        }


        void test_serialization()
        {
            mbvc->eval(mnacl);
            stringstream storage(ios::in | ios::out | ios::binary);
            diffpy::serialization::oarchive oa(storage, ios::binary);
            oa << mbvc;
            diffpy::serialization::iarchive ia(storage, ios::binary);
            shared_ptr<BVSCalculator> bvc1;
            TS_ASSERT(!bvc1.get());
            ia >> bvc1;
            TS_ASSERT_DIFFERS(mbvc.get(), bvc1.get());
            const double eps=1e-4;
            TS_ASSERT_EQUALS(8u, bvc1->value().size());
            TS_ASSERT_DELTA(+1.01352, bvc1->value()[0], eps);
            TS_ASSERT_DELTA(+1.01352, bvc1->value()[1], eps);
            TS_ASSERT_DELTA(+1.01352, bvc1->value()[2], eps);
            TS_ASSERT_DELTA(+1.01352, bvc1->value()[3], eps);
            TS_ASSERT_DELTA(-1.01352, bvc1->value()[4], eps);
            TS_ASSERT_DELTA(-1.01352, bvc1->value()[5], eps);
            TS_ASSERT_DELTA(-1.01352, bvc1->value()[6], eps);
            TS_ASSERT_DELTA(-1.01352, bvc1->value()[7], eps);
        }

};  // class TestBVSCalculator

// End of file
