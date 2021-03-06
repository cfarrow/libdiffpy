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
* class ConstantPeakWidth -- constant peak width
*
*****************************************************************************/

#ifndef CONSTANTPEAKWIDTH_HPP_INCLUDED
#define CONSTANTPEAKWIDTH_HPP_INCLUDED

#include <diffpy/srreal/PeakWidthModel.hpp>

namespace diffpy {
namespace srreal {


class ConstantPeakWidth : public PeakWidthModel
{
    public:

        // constructors
        ConstantPeakWidth();
        virtual PeakWidthModelPtr create() const;
        virtual PeakWidthModelPtr clone() const;

        // methods
        virtual const std::string& type() const;
        virtual double calculate(const BaseBondGenerator&) const;
        virtual double maxWidth(StructureAdapterConstPtr,
                double rmin, double rmax) const;

        // data access
        const double& getWidth() const;
        void setWidth(double);

    private:

        // data
        double mwidth;
};


}   // namespace srreal
}   // namespace diffpy

#endif  // CONSTANTPEAKWIDTH_HPP_INCLUDED
