/*****************************************************************************
*
* diffpy.srreal     by DANSE Diffraction group
*                   Simon J. L. Billinge
*                   (c) 2012 Trustees of the Columbia University
*                   in the City of New York.  All rights reserved.
*
* File coded by:    Pavol Juhas
*
* See AUTHORS.txt for a list of people who contributed.
* See LICENSE.txt for license information.
*
******************************************************************************
*
* class AtomicStructureAdapter -- universal structure adapter for
*     a non-periodic set of atoms.
*
*****************************************************************************/

#ifndef ATOMICSTRUCTUREADAPTER_HPP_INCLUDED
#define ATOMICSTRUCTUREADAPTER_HPP_INCLUDED

#include <boost/serialization/vector.hpp>

#include <diffpy/srreal/StructureAdapter.hpp>

namespace diffpy {
namespace srreal {

class Atom
{
    public:

        // constructor
        Atom() :
            cartesianposition(0.0, 0.0, 0.0),
            occupancy(1.0),
            anisotropy(false),
            cartesianuij(R3::zeromatrix())
        { };

        // data
        std::string atomtype;
        R3::Vector cartesianposition;
        double occupancy;
        bool anisotropy;
        R3::Matrix cartesianuij;

    private:

        // serialization
        friend class boost::serialization::access;
        template<class Archive>
            void serialize(Archive& ar, const unsigned int version)
        {
            ar & atomtype;
            ar & cartesianposition;
            ar & occupancy;
            ar & anisotropy;
            ar & cartesianuij;
        }

};

// Functions related to class Atom

bool operator<(const Atom&, const Atom&);
bool operator==(const Atom&, const Atom&);
bool operator!=(const Atom&, const Atom&);
size_t hash_value(const Atom&);


class AtomicStructureAdapter : public StructureAdapter
{
    public:

        typedef std::vector<Atom> AtomVector;

        // methods - overloaded
        virtual BaseBondGeneratorPtr createBondGenerator() const;
        virtual int countSites() const;
        virtual const std::string& siteAtomType(int idx) const;
        virtual const R3::Vector& siteCartesianPosition(int idx) const;
        virtual double siteOccupancy(int idx) const;
        virtual bool siteAnisotropy(int idx) const;
        virtual const R3::Matrix& siteCartesianUij(int idx) const;
        virtual StructureDifference diff(StructureAdapterConstPtr other) const;

        // methods - own
        void insert(int, const Atom&);
        void append(const Atom&);
        void remove(int);
        void reserve(size_t sz)  { matoms.reserve(sz); }
        Atom& operator[](int);
        const Atom& operator[](int) const;
        Atom& at(int idx)  { return (*this)[idx]; }
        const Atom& at(int idx) const  { return (*this)[idx]; }
        template <class Iter>
            void assign (Iter first, Iter last)  { matoms.assign(first, last); }
        void assign (size_t n, const Atom& a)  { matoms.assign(n, a); }
        // iterator forwarding
        typedef AtomVector::iterator iterator;
        typedef AtomVector::const_iterator const_iterator;
        typedef AtomVector::reverse_iterator reverse_iterator;
        typedef AtomVector::const_reverse_iterator const_reverse_iterator;
        iterator begin()  { return matoms.begin(); }
        iterator end()  { return matoms.end(); }
        const_iterator begin() const  { return matoms.begin(); }
        const_iterator end() const  { return matoms.end(); }
        reverse_iterator rbegin()  { return matoms.rbegin(); }
        reverse_iterator rend()  { return matoms.rend(); }
        const_reverse_iterator rbegin() const  { return matoms.rbegin(); }
        const_reverse_iterator rend() const  { return matoms.rend(); }

    private:

        // data
        AtomVector matoms;

        // comparison
        friend bool operator==(
                const AtomicStructureAdapter& stru0,
                const AtomicStructureAdapter& stru1)
        {
            return (stru0.matoms == stru1.matoms);
        }

        // serialization
        friend class boost::serialization::access;
        template<class Archive>
            void serialize(Archive& ar, const unsigned int version)
        {
            ar & boost::serialization::base_object<StructureAdapter>(*this);
            ar & matoms;
        }

};

typedef boost::shared_ptr<AtomicStructureAdapter> AtomicStructureAdapterPtr;

// Complementary comparison function

inline
bool operator!=(
        const AtomicStructureAdapter& stru0,
        const AtomicStructureAdapter& stru1)
{
    return !(stru0 == stru1);
}

}   // namespace srreal
}   // namespace diffpy

// Serialization -------------------------------------------------------------

BOOST_CLASS_EXPORT_KEY(diffpy::srreal::AtomicStructureAdapter)

#endif  // ATOMICSTRUCTUREADAPTER_HPP_INCLUDED
