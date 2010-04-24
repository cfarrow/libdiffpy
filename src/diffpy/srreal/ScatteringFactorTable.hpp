/*****************************************************************************
*
* diffpy.srreal     by DANSE Diffraction group
*                   Simon J. L. Billinge
*                   (c) 2009 Trustees of the Columbia University
*                   in the City of New York.  All rights reserved.
*
* File coded by:    Pavol Juhas
*
* See AUTHORS.txt for a list of people who contributed.
* See LICENSE.txt for license information.
*
******************************************************************************
*
* class ScatteringFactorTable -- base class for looking up scattering factors

* class ScatteringFactorTableOwner -- to be used as a base class for classes
*     that own ScatteringFactorTable
*
* $Id$
*
*****************************************************************************/

#ifndef SCATTERINGFACTORTABLE_HPP_INCLUDED
#define SCATTERINGFACTORTABLE_HPP_INCLUDED

#include <string>
#include <map>
#include <set>
#include <boost/shared_ptr.hpp>

namespace diffpy {
namespace srreal {

class ScatteringFactorTable
{
    public:

        // constructors
        virtual boost::shared_ptr<ScatteringFactorTable> create() const = 0;
        virtual boost::shared_ptr<ScatteringFactorTable> clone() const = 0;
        ~ScatteringFactorTable()  { }

        // methods
        virtual const std::string& type() const = 0;
        virtual const std::string& radiationType() const = 0;
        const double& lookup(const std::string& smbl) const;
        void setCustom(const std::string& smbl, double value);
        void resetCustom(const std::string& smbl);
        void resetAll();

    protected:

        virtual double fetch(const std::string& smbl) const = 0;
        mutable std::map<std::string,double> mtable;
};


class ScatteringFactorTableOwner
{
    public:

        // access and configuration of scattering factors
        void setScatteringFactorTable(const ScatteringFactorTable&);
        void setScatteringFactorTable(const std::string& tp);
        ScatteringFactorTable& getScatteringFactorTable();
        const ScatteringFactorTable& getScatteringFactorTable() const;
        const std::string& getRadiationType() const;


    private:

        // data
        boost::shared_ptr<ScatteringFactorTable> msftable;
};


// Factory functions for Scattering Factor Tables ----------------------------

boost::shared_ptr<ScatteringFactorTable>
createScatteringFactorTable(const std::string& tp);
bool registerScatteringFactorTable(const ScatteringFactorTable&);
bool aliasScatteringFactorTable(const std::string& tp, const std::string& al);
std::set<std::string> getScatteringFactorTableTypes();

}   // namespace srreal
}   // namespace diffpy

#endif  // SCATTERINGFACTORTABLE_HPP_INCLUDED
