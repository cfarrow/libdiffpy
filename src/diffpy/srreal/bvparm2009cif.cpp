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
* bvparm2009cif_lines    -- selected line records from bvparm2009.cif
*       maintained by I. D. Brown.  In the case of duplicate entries
*       the preference was given to the data from references 'b', 'a', then
*       entries with parameter b == 0.37 and after that entries that were not
*       'unchecked'.  If this was still not enough one of the remaining
*       entries was selected more less randomly.
*
*       The original bvparm2009.cif file was retrieved on 2010-01-27 from
*        http://www.ccp14.ac.uk/ccp/web-mirrors/i_d_brown/bond_valence_param/bvparm2009.cif
*
* $Id$
*
*****************************************************************************/

#include <cstdlib>

namespace diffpy {
namespace srreal {

const char* bvparm2009cif_lines[] = {
/*
# ACCUMULATED TABLE OF BOND VALENCE PARAMETERS

Data_BOND_VALENCE_PARAMETERS_2009-08-20

# BVPARM.CIF
_audit_conform_dict_name        cif_core.dic
_audit_conform_dict_version     2.2


#***************************************************************
# COPYRIGHT NOTICE
# This table may be used and distributed without fee for
# non-profit purposes providing
# 1) that this copyright notice is included and
# 2) no fee is charged for the table and
# 3) details of any changes made in this list by anyone other than
# the copyright owner are suitably noted in the _audit_update record
# Please consult the copyright owner regarding any other uses.
#
# The copyright is owned by I. David Brown, Brockhouse Institute for
# Materials Research, McMaster University, Hamilton, Ontario Canada.
# idbrown@mcmaster.ca
#
#*****************************DISCLAIMER************************
#
# The values reported here are taken from the literature and
# other sources and the author does not warrant their correctness
# nor accept any responsibility for errors.  Users are advised to
# consult the primary sources.
#
#***************************************************************
#
# The parameters given in the main table are the values of Ro and
# B used in the equation:
#
#     bond valence = exp((Ro-R)/B)
#
# where R is the bond length.  All values are in Angstrom units.
# Where significantly different values have been reported in the
# literature, they are listed in decreasing order of reliability.
#
#     Bond valence parameters for atoms whose oxidation state is
# given as 9 do not have an oxidation state
# specified in the original paper.  They may apply to a
# particular, but unspecified, oxidation state or they may be
# intended to apply to all oxidation states.
#
# The ammonium ion is listed under the symbol NH.
#
#     The list below is formatted and is designed to be read
# either as a crystallographic information file (CIF) or as a
# fixed format file once the text has been stripped off.
####################################################################3

_audit_creation_date         2001-02-21
_audit_update_record
;2001-03-13 Ref m deleted.
 2001-06-01
 2001-06-21 new ref c and d added.
 2002-03-22 new ref q added
 2003-02-17 refs m, z and aa added
 2003-02-19 corrected CIF errors
 2004-08-12 correction of errors
 2006-05-02 refs ag to ai added
 2007-01-20 refs ag to am added
 2009-08-20 refs an to bd added
;
_audit_author_name           'I. David Brown'
_audit_author_address
;                            Brockhouse Institute for Materials Research
                             McMaster University
                             Hamilton, Ontario, Canada L8S 4M1
;
_audit_contact_author_name   'I. David Brown'
_audit_contact_author_email  idbrown@mcmaster.ca

loop_
     _valence_ref_id
     _valence_ref_reference

  a 'Brown and Altermatt, (1985), Acta Cryst. B41, 244-247 (empirical)'
  b 'Brese and O'Keeffe, (1991), Acta Cryst. B47, 192-197 (extrapolated)'
  c 'Adams, 2001, Acta Cryst. B57, 278-287 (includes second neighbours)'
  d 'Hu et al. (1995) Inorg. Chim. Acta, 232, 161-165. '
  e 'I.D.Brown Private communication'
  f 'Brown et al. (1984) Inorg. Chem. 23, 4506-4508'
  g 'Palenik (1997) Inorg. Chem. 36 4888-4890'
  h 'Kanowitz and Palenik (1998) Inorg. Chem. 37 2086-2088'
  i 'Wood and Palenik (1998) Inorg. Chem. 37 4149-4151'
  j 'Liu and Thorp (1993) Inorg. Chem. 32 4102-4105'
  k 'Palenik (1997) Inorg. Chem. 36 3394-3397'
  l 'Shields, Raithby, Allen and Motherwell (2000) Acta Cryst.B56, 455-465'
  m 'Chen, Zhou and Hu (2002) Chinese Sci. Bul. 47, 978-980.'
  n 'Kihlbourg (1963) Ark. Kemi 21 471; Schroeder 1975 Acta Cryst. B31, 2294'
  o 'Allmann (1975) Monatshefte Chem. 106, 779'
  p 'Zachariasen (1978) J.Less Common Metals 62, 1'
  q 'Krivovichev and Brown (2001) Z. Krist. 216, 245'
  r 'Burns, Ewing and Hawthorne (1997) Can. Miner. 35,1551-1570'
  s 'Garcia-Rodriguez, et al. (2000) Acta Cryst. B56, 565-569'
  t 'Mahapatra et al. (1996) J. Amer.Chem. Soc. 118, 11555'
  u 'Wood and Palenik (1999) Inorg. Chem. 38, 1031-1034'
  v 'Wood and Palenik (1999) Inorg. Chem. 38, 3926-3930'
  w 'Wood, Abboud, Palenik and Palenik (2000) Inorg. Chem. 39, 2065-2068'
  x 'Tytko, Mehnike and Kurad (1999) Structure and Bonding 93, 1-66'
  y 'Gundemann, et al.(1999) J. Phys. Chem. A 103, 4752-4754'
  z 'Zocchi (2000) Solid State Sci. 2 383-387'
 aa 'Jensen, Palenik and Tiekiak (2001) Polyhedron 20, 2137'
 ab 'Roulhac and Palenik (2003) Inorg. Chem. 42, 118-121'
 ac 'Holsa et al.(2002) J.Solid State Chem 165, 48-55'
 ae 'Trzesowska, Kruszynski &amp; Bartezak (2004) Acta Cryst. B60, 174-178'
 af 'Locock &amp; Burns (2004) Z.Krist. 219, 267-271'
 ag 'Hu &amp; Zhou (2004) Z. Krist. 219 614-620'
 ah 'Trzesowska, Kruszynski &amp; Bartczak (2005) Acta Cryst. B61 429-434'
 ai 'Palenik (2003) Inorg. Chem. 42, 2725-2728'
 aj 'Hong, Zhou &amp; Hu (2004) Acta Chimica Sinica 62, 1733-1737'
 ak 'Sidey (3006) Acta Cryst. B62, 949-951'
 al 'Trzeowska, Kruszynski &amp; Bartczak (2006) Acta Cryst. B62, 745-753'
 am 'Malcherek &amp; Schlueter (2007) Acta Cryst. B63, 157-160'
 an 'Palenik, Abboud &amp; Palenik (2005) Inorg. Chim. Acta 358, 1034'
 ao 'Palenik (2006) Can. J. Chem. 84, 99'
 ap 'Urusov (2006) Dokl. Phys. Chem.408, 152'
 aq 'Hu (2007) Acta Phys-chem. Sin 23, 786'
 ar 'Krivovichev &amp; Brown (2001) Z. Krist. 216, 245'
 as 'Wester &amp; Hess (2005) Inorg. Chim. Acta 358, 865-874'
 at 'Urusov (2006) Dokl. Phys-Chem. 405, 169-174'
 au 'Yu &amp; Xue (2006) Acta Cryst. B62, 702'
 av 'Henke (2007) Z. Krist. 222, 477-486'
 aw 'Sydey, Milyan &amp; Semrad (2008) J. Alloys Compds. 457, 480'
 ax 'Adams, Moretsky &amp; Canadell (2004) Solid State Ionics, 168, 281'
 ay 'Cabana et al. (2004) Inorg. Chem. 43, 7050'
 az 'Grabowski (2000) J. Mol. Struct. 552, 153'
 ba 'Yu, Xue &amp; Ratajczak (2006) Physica B371, 170'
 bb 'Majerz &amp; Olovsson (2007) Acta Cryst. B63, 650'
 bc 'Brown (2002) The Chemical Bond in Inorganic Chemistry, OUP, p.230'
 bd 'Sidey (2009) Acta Cryst, B65, 96-98'
 be 'Mills, Christy, Chen &amp; Raudsepp, (2009) Z. Krist. 224, 423-431'

loop_
   _valence_param_atom_1
   _valence_param_atom_1_valence
   _valence_param_atom_2
   _valence_param_atom_2_valence
   _valence_param_Ro
   _valence_param_B
   _valence_param_ref_id
   _valence_param_details
*/
    "Ac 3   O  -2    2.24     0.37     b   ?",
    // Ac 3   O  -2    2.29     0.35     p   ?
    "Ac 3   F  -1    2.13     0.37     b   ?",
    // Ac 3   F  -1    2.10     0.40     p   ?
    "Ac 3   Cl -1    2.63     0.37     b   ?",
    // Ac 3   Cl -1    2.60     0.40     p   ?
    "Ac 3   Br -1    2.75     0.40     p   ?",
    // Ag 1   O  -2    1.842    0.37     a   ?
    "Ag 1   O  -2    1.805    0.37     b   ?",
    "Ag 1   S  -2    2.119    0.37     a   ?",
    "Ag 1   F  -1    1.80     0.37     b   ?",
    "Ag 1   Cl -1    2.09     0.37     b   ?",
    "Ag 2   F  -1    1.79     0.37     e   unchecked",
    "Ag 3   F  -1    1.83     0.37     e   unchecked",
    "Ag 9   Br -1    2.22     0.37     b   ?",
    "Ag 9   I  -1    2.38     0.37     b   ?",
    "Ag 9   Se -2    2.26     0.37     b   ?",
    "Ag 9   Te -2    2.51     0.37     b   ?",
    "Ag 9   N  -3    1.85     0.37     b   ?",
    "Ag 9   P  -3    2.22     0.37     b   ?",
    "Ag 9   As -3    2.30     0.37     b   ?",
    "Ag 9   H  -1    1.50     0.37     b   ?",
    "Al 3   O  -2    1.620    0.37     e   ?",
    // Al 3   O  -2    1.644    0.38     o   ?
    // Al 3   S  -2    2.21     0.37     e   unchecked
    "Al 3   S  -2    2.13     0.37     b   ?",
    "Al 3   Se -2    2.27     0.37     b   ?",
    "Al 3   Te -2    2.48     0.37     b   ?",
    "Al 3   F  -1    1.545    0.37     a   ?",
    "Al 3   Cl -1    2.032    0.37     a   ?",
    "Al 3   Br -1    2.20     0.37     b   ?",
    "Al 3   I  -1    2.41     0.37     b   ?",
    "Al 3   N  -3    1.79     0.37     b   ?",
    "Al 3   P  -3    2.24     0.37     b   ?",
    "Al 3   As -3    2.30     0.37     b   ?",
    "Al 3   H  -1    1.45     0.37     b   ?",
    "Am 3   O  -2    2.11     0.37     b   ?",
    // Am 3   O  -2    2.13     0.35     p   ?
    "Am 3   F  -1    2.00     0.37     b   ?",
    // Am 3   F  -1    1.98     0.40     p   ?
    "Am 3   Cl -1    2.48     0.37     b   ?",
    // Am 3   Cl -1    2.45     0.40     p   ?
    "Am 3   Br -1    2.59     0.40     p   ?",
    "Am 4   O  -2    2.08     0.37     p   ?",
    // Am 4   O  -2    2.12     0.37     e   unchecked
    "Am 4   F  -1    1.96     0.40     p   ?",
    "Am 5   O  -2    2.07     0.35     p   ?",
    // Am 5   O  -2    2.12     0.37     e   unchecked
    "Am 5   F  -1    1.95     0.40     p   ?",
    "Am 6   O  -2    2.05     0.35     p   ?",
    "Am 6   F  -1    1.95     0.40     p   ?",
    "As 2   S  -2    2.24     0.37     e   unchecked",
    "As 2   Se -2    2.38     0.37     e   unchecked",
    "As 3   O  -2    1.789    0.37     a   ?",
    "As 3   S  -2    2.272    0.37     a   ?",
    "As 3   Se -2    2.40     0.37     e   unchecked",
    "As 3   Te -2    2.65     0.37     e   unchecked",
    "As 3   F  -1    1.70     0.37     b   ?",
    "As 3   Cl -1    2.16     0.37     b   ?",
    "As 3   Br -1    2.35     0.37     e   unchecked",
    "As 3   I  -1    2.58     0.37     e   unchecked",
    "As 3   C  -4    1.93     0.37     b   ?",
    "As 5   O  -2    1.767    0.37     a   ?",
    "As 5   S  -2    2.28     0.37     e   unchecked",
    "As 5   F  -1    1.620    0.37     a   ?",
    "As 5   Cl -2    2.14     0.37     b   ?",
    "Au 1   Cl -1    2.02     0.37     e   unchecked",
    "Au 1   I  -1    2.35     0.37     e   unchecked",
    // Au 3   O  -2    1.89     0.37     e   ?
    "Au 3   O  -2    1.833    0.37     b   ?",
    "Au 3   S  -2    2.39     0.35     e   unchecked",
    // Au 3   F  -1    1.89     0.37     e   unchecked
    "Au 3   F  -1    1.81     0.37     b   ?",
    "Au 3   Cl -1    2.17     0.37     b   ?",
    "Au 3   Br -1    2.32     0.37     e   unchecked",
    "Au 3   I  -1    2.54     0.37     e   unchecked",
    "Au 3   N  -3    1.94     0.35     e   unchecked",
    "Au 5   F  -1    1.80     0.37     e   unchecked",
    "Au 9   S  -2    2.03     0.37     b   ?",
    "Au 9   Se -2    2.18     0.37     b   ?",
    "Au 9   Te -2    2.41     0.37     b   ?",
    "Au 9   Br -1    2.12     0.37     b   ?",
    "Au 9   I  -1    2.34     0.37     b   ?",
    "Au 9   N  -3    1.72     0.37     b   ?",
    "Au 9   P  -3    2.14     0.37     b   ?",
    "Au 9   As -3    2.22     0.37     b   ?",
    "Au 9   H  -1    1.37     0.37     b   ?",
    "B  3   O  -2    1.371    0.37     a   ?",
    // B  3	 S  -2    1.815    0.37     au  ?
    "B  3   S  -2    1.82     0.37     b   ?",
    "B  3   Se -2    1.95     0.37     b   ?",
    "B  3   Te -2    2.20     0.37     b   ?",
    // B  3   F  -1    1.281    0.37     a   ?
    // B  3	 F  -1    1.289    0.37     au  ?
    "B  3   F  -1    1.31     0.37     b   ?",
    "B  3   Cl -1    1.74     0.37     b   ?",
    "B  3   Br -1    1.88     0.37     b   ?",
    "B  3   I  -1    2.10     0.37     b   ?",
    // B  3	 N  -3    1.482    0.37     au  ?
    "B  3   N  -3    1.47     0.37     b   ?",
    // B  3	 P  -3    1.920    0.37     au  ?
    "B  3   P  -3    1.88     0.37     b   ?",
    "B  3   As -3    1.97     0.37     b   ?",
    "B  3   H  -1    1.14     0.37     b   ?",
    // "B  3   B   3    1.402    0.37     e   unchecked",
    "Ba 2   O  -2    2.285    0.37     a   ?",
    "Ba 2   S  -2    2.769    0.37     a   ?",
    "Ba 2   Se -2    2.88     0.37     b   ?",
    "Ba 2   Te -2    3.08     0.37     b   ?",
    "Ba 2   F  -1    2.188    0.37     a   ?",
    "Ba 2   Cl -1    2.69     0.37     b   ?",
    "Ba 2   Br -1    2.88     0.37     b   ?",
    "Ba 2   I  -1    3.13     0.37     b   ?",
    "Ba 2   N  -3    2.47     0.37     b   ?",
    "Ba 2   P  -3    2.88     0.37     b   ?",
    "Ba 2   As -3    2.96     0.37     b   ?",
    "Ba 2   H  -1    2.22     0.37     b   ?",
    "Be 2   O  -2    1.381    0.37     a   ?",
    "Be 2   S  -2    1.83     0.37     b   ?",
    "Be 2   Se -2    1.97     0.37     b   ?",
    "Be 2   Te -2    2.21     0.37     b   ?",
    "Be 2   F  -1    1.281    0.37     a   ?",
    "Be 2   Cl -1    1.76     0.37     b   ?",
    "Be 2   Br -1    1.90     0.37     b   ?",
    "Be 2   I  -1    2.10     0.37     b   ?",
    "Be 2   N  -3    1.50     0.37     b   ?",
    "Be 2   P  -3    1.95     0.37     b   ?",
    "Be 2   As -3    2.00     0.37     b   ?",
    "Be 2   H  -1    1.11     0.37     b   ?",
    "Bi 3   O  -2    2.094    0.37     a   ?",
    "Bi 3   S  -2    2.570    0.37     a   ?",
    "Bi 3   Se -2    2.70     0.35     e   unchecked",
    "Bi 3   F  -1    1.99     0.37     b   ?",
    "Bi 3   Cl -1    2.48     0.37     b   ?",
    // Bi 3   Cl -1    2.40     0.37     e   unchecked
    "Bi 3   Br -1    2.597    0.37     ak  ?",
    // Bi 3   Br -1    2.567    0.421    ak  ?
    "Bi 3   I  -1    2.82     0.37     e   unchecked",
    "Bi 3   N  -3    2.02     0.35     e   unchecked",
    "Bi 5   O  -2    2.06     0.37     b   ?",
    "Bi 5   F  -1    1.97     0.37     b   ?",
    "Bi 5   Cl -1    2.44     0.37     b   ?",
    "Bi 9   Br -1    2.62     0.37     b   ?",
    "Bi 9   I  -1    2.84     0.37     b   ?",
    "Bi 9   S  -2    2.55     0.37     b   ?",
    "Bi 9   Se -2    2.72     0.37     b   ?",
    "Bi 9   Te -2    2.87     0.37     b   ?",
    "Bi 9   N  -3    2.24     0.37     b   ?",
    "Bi 9   P  -3    2.63     0.37     b   ?",
    "Bi 9   As -3    2.72     0.37     b   ?",
    "Bi 9   H  -1    1.97     0.37     b   ?",
    "Bk 3   O  -2    2.08     0.37     b   ?",
    // Bk 3   O  -2    2.10     0.35     p   ?
    "Bk 3   F  -1    1.96     0.37     b   ?",
    // Bk 3   F  -1    1.95     0.40     p   ?
    // Bk 3   Cl -1    2.35     0.37     e   unchecked
    "Bk 3   Cl -1    2.46     0.37     b   ?",
    // Bk 3   Cl -1    2.42     0.40     p   ?
    "Bk 3   Br -1    2.56     0.40     p   ?",
    "Bk 4   O  -2    2.07     0.35     p   ?",
    "Bk 4   F  -1    1.93     0.40     p   ?",
    "Br 3   O  -2    1.90     0.37     e   unchecked",
    "Br 3   F  -1    1.75     0.37     e   unchecked",
    "Br 5   O  -2    1.84     0.37     e   unchecked",
    "Br 5   F  -1    1.76     0.37     e   unchecked",
    "Br 7   O  -2    1.81     0.37     b   ?",
    "Br 7   F  -1    1.72     0.37     b   ?",
    "Br 7   Cl -1    2.19     0.37     b   ?",
    "C  2   O  -2    1.366    0.37     e   unchecked",
    "C  2   Cl -1    1.410    0.37     e   unchecked",
    "C  4   O  -2    1.390    0.37     a   ?",
    // C  4	 O  -2    1.407    0.37     au  small sample
    // C  4   O  -2    1.40     0.26     o   ?
    "C  4   C   4    1.54     0.37     e   ?",
    "C  4   S  -2    1.80     0.37     e   unchecked",
    "C  4   F  -1    1.32     0.37     b   ?",
    // C  4   F  -1    1.41     0.37     e   unchecked
    "C  4   Cl -1    1.76     0.37     b   ?",
    "C  4   Br -1    1.91     0.37     e   unchecked",
    "C  4   N  -3    1.442    0.37     a   ?",
    "C  9   Se -2    1.97     0.37     b   ?",
    "C  9   I  -1    2.12     0.37     b   ?",
    "C  9   Br -1    1.90     0.37     b   ?",
    "C  9   S  -2    1.82     0.37     b   ?",
    "C  9   Te -2    2.21     0.37     b   ?",
    "C  9   N  -3    1.47     0.37     b   ?",
    "C  9   P  -3    1.89     0.37     b   ?",
    "C  9   As -3    1.99     0.37     b   ?",
    "C  9   H  -1    1.10     0.37     b   ?",
    "Ca 2   O  -2    1.967    0.37     a   ?",
    // Ca 2   O  -2    1.896    0.41     o   ?
    "Ca 2   S  -2    2.45     0.37     b   ?",
    "Ca 2   Se -2    2.56     0.37     b   ?",
    "Ca 2   Te -2    2.76     0.37     b   ?",
    "Ca 2   F  -1    1.842    0.37     a   ?",
    "Ca 2   Cl -1    2.37     0.37     b   ?",
    // Ca 2   Br -1    2.507    0.37     e   unchecked
    "Ca 2   Br -1    2.49     0.37     b   ?",
    "Ca 2   I  -1    2.72     0.37     b   ?",
    "Ca 2   N  -3    2.14     0.37     b   ?",
    "Ca 2   P  -3    2.55     0.37     b   ?",
    "Ca 2   As -3    2.62     0.37     b   ?",
    "Ca 2   H  -1    1.83     0.37     b   ?",
    "Cd 2   O  -2    1.904    0.37     a   ?",
    // Cd 2	 O  -2    1.875    0.37     ao  ?
    "Cd 2   S  -2    2.304    0.37     a   ?",
    // Cd 2	 S  -2    2.279    0.37     ao  ?
    "Cd 2   Se -2    2.40     0.37     b   ?",
    "Cd 2   Te -2    2.59     0.37     b   ?",
    "Cd 2   F  -1    1.811    0.37     b   ?",
    // Cd 2   Cl -1    2.212    0.37     a   ?
    "Cd 2   Cl -1    2.23     0.37     b   ?",
    // Cd 2	 Cl -1    2.22     0.37     ao  ?
    // Cd 2	 Br -1    2.334    0.37     ao  ?
    "Cd 2   Br -1    2.35     0.37     b   ?",
    // Cd 2	 I  -1    2.525    0.37     ao  ?
    "Cd 2   I  -1    2.57     0.37     b   ?",
    // Cd 2   I  -1    2.60     0.37     e   unchecked
    "Cd 2   N  -3    1.96     0.37     b   ?",
    // Cd 2	 N  -3    1.951    0.37     ao  ?
    "Cd 2   P  -3    2.34     0.37     b   ?",
    "Cd 2   As -3    2.43     0.37     b   ?",
    "Cd 2   H  -1    1.66     0.37     b   ?",
    "Ce 3   O  -2    2.151    0.37     b   ?",
    // Ce 3   O  -2    2.121    0.37     ab  'in trans-metal complexes'
    // Ce 3   O  -2    2.116    0.37     ae  'in trans-metal complexes'
    "Ce 3   S  -2    2.602    0.37     al  ?",
    // Ce 3   S  -2    2.65     0.37     e   unchecked
    "Ce 3   F  -1    2.036    0.37     b   ?",
    // Ce 3   F  -1    2.00     0.40     p   ?
    "Ce 3   Cl -1    2.52     0.37     b   ?",
    // Ce 3   Cl -1    2.49     0.40     p   ?
    // Ce 3   Cl -1    2.54     0.37     al  ?
    "Ce 3   Br -1    2.65     0.35     e   ?",
    // Ce 3   Br -1    2.65     0.40     p   ?
    "Ce 3   I  -1    2.87     0.40     p   ?",
    "Ce 4   O  -2    2.028    0.37     b   ?",
    // Ce 4   O  -2    2.068    0.37     ab  'in organic compounds'
    // Ce 4   O  -2    2.074    0.37     al  ?
    "Ce 4   S  -2    2.65     0.35     e   unchecked",
    "Ce 4   F  -1    1.995    0.37     b   ?",
    // Ce 4   F  -1    1.97     0.40     p   ?
    "Ce 4   N  -3    2.179    0.37     al  ?",
    "Ce 9   Cl -1    2.41     0.37     b   ?",
    "Ce 9   Br -1    2.69     0.37     b   ?",
    "Ce 9   I  -1    2.92     0.37     b   ?",
    "Ce 9   S  -2    2.62     0.37     b   ?",
    "Ce 9   Se -2    2.74     0.37     b   ?",
    "Ce 9   Te -2    2.92     0.37     b   ?",
    // Ce 9   N  -3    2.254    0.37     ah  ?
    "Ce 9   N  -3    2.34     0.37     b   ?",
    "Ce 9   P  -3    2.70     0.37     b   ?",
    "Ce 9   As -3    2.78     0.37     b   ?",
    "Ce 9   H  -1    2.04     0.37     b   ?",
    "Cf 3   O  -2    2.07     0.37     b   ?",
    "Cf 3   F  -1    1.95     0.37     b   ?",
    // Cf 3   F  -1    1.94     0.40     p   ?
    "Cf 3   Cl -1    2.45     0.37     b   ?",
    // Cf 3   Cl -1    2.41     0.40     p   ?
    // Cf 3   Cl -1    2.45     0.37     b   ?
    "Cf 3   Br -1    2.55     0.40     p   ?",
    "Cf 4   O  -2    2.06     0.35     p   ?",
    "Cf 4   F  -1    1.92     0.40     p   ?",
    "Cl 3   O  -2    1.71     0.37     e   unchecked",
    "Cl 3   F  -1    1.69     0.37     e   unchecked",
    "Cl 5   O  -2    1.67     0.37     e   unchecked",
    "Cl 7   O  -2    1.632    0.37     a   ?",
    "Cl 7   F  -1    1.55     0.37     b   ?",
    "Cl 7   Cl -1    2.00     0.37     b   ?",
    "Cm 3   O  -2    2.23     0.37     b   ?",
    // Cm 3   O  -2    2.12     0.35     p   ?
    "Cm 3   F  -1    2.12     0.37     b   ?",
    // Cm 3   F  -1    1.96     0.40     p   ?
    "Cm 3   Cl -1    2.62     0.37     b   ?",
    // Cm 3   Cl -1    2.44     0.40     p   ?
    "Cm 4   O  -2    2.08     0.35     p   ?",
    "Cm 4   F  -1    1.94     0.40     p   ?",
    "Co 1   H  -1    1.000    0.35     e   unchecked",
    "Co 2   O  -2    1.692    0.37     a   ?",
    // Co 2   O  -2    1.685    0.37     i   'from transition metal complexes'
    "Co 2   S  -2    1.94     0.37     e   unchecked",
    "Co 2   F  -1    1.64     0.37     b   ?",
    // Co 2   Cl -1    2.033    0.37     a   ?
    "Co 2   Cl -1    2.01     0.37     b   ?",
    "Co 2   N  -3    1.65     0.37     e   unchecked",
    // Co 3   O  -2    1.637    0.37     i   'from transition metal complexes'
    "Co 3   O  -2    1.70     0.37     b   ?",
    "Co 3   S  -2    2.02     0.37     e   unchecked",
    "Co 3   F  -1    1.62     0.37     b   ?",
    "Co 3   Cl -1    2.05     0.37     b   ?",
    "Co 3   N  -3    1.75     0.37     e   unchecked",
    "Co 3   C   2    1.634    0.37     b   ?",
    "Co 4   O  -2    1.72     0.37     e   unchecked",
    "Co 4   F  -1    1.55     0.37     e   unchecked",
    "Co 9   O  -2    1.655    0.42     o   ?",
    "Co 9   Br -1    2.18     0.37     b   ?",
    "Co 9   I  -1    2.37     0.35     b   ?",
    "Co 9   S  -2    2.06     0.37     b   ?",
    "Co 9   Se -2    2.24     0.37     b   ?",
    "Co 9   Te -2    2.46     0.37     b   ?",
    "Co 9   N  -3    1.84     0.37     b   ?",
    "Co 9   P  -3    2.21     0.37     b   ?",
    "Co 9   As -3    2.28     0.37     b   ?",
    "Co 9   H  -1    1.44     0.37     b   ?",
    "Cr 2   O  -2    1.73     0.37     b   ?",
    "Cr 2   F  -1    1.67     0.37     b   ?",
    // Cr 2   F  -1    1.74     0.37     e   unchecked
    "Cr 2   Cl -1    2.09     0.37     b   ?",
    "Cr 2   Br -1    2.26     0.37     e   unchecked",
    "Cr 2   I  -1    2.48     0.37     e   unchecked",
    "Cr 2   N  -3    1.83     0.35     e   unchecked",
    "Cr 3   O  -2    1.724    0.37     a   ?",
    // Cr 3   O  -2    1.708    0.37     w   'from transition metal complexes'
    "Cr 3   S  -2    2.162    0.37     e   unchecked",
    // Cr 3   F  -1    1.657    0.37     a   ?
    "Cr 3   F  -1    1.64     0.37     b   ?",
    "Cr 3   Cl -1    2.08     0.37     b   ?",
    "Cr 3   Br -1    2.28     0.37     e   unchecked",
    "Cr 3   N  -3    1.81     0.37     e   unchecked",
    "Cr 4   O  -2    1.81     0.37     e   unchecked",
    "Cr 4   F  -1    1.56     0.37     e   unchecked",
    "Cr 5   O  -2    1.76     0.37     w   'from transition metal complexes'",
    // Cr 5   O  -2    1.78     0.37     e   unchecked
    "Cr 6   O  -2    1.794    0.37     a   ?",
    "Cr 6   F  -1    1.74     0.37     b   ?",
    "Cr 6   Cl -1    2.12     0.37     b   ?",
    // Cr 9   O  -2    1.79     0.34     o   ?
    "Cr 9   O  -2    1.724    0.37     w   'from transition metal complexes'",
    "Cr 9   Br -1    2.26     0.37     b   ?",
    "Cr 9   I  -1    2.45     0.37     b   ?",
    "Cr 9   S  -2    2.18     0.37     b   ?",
    "Cr 9   Se -2    2.29     0.37     b   ?",
    "Cr 9   Te -2    2.52     0.37     b   ?",
    "Cr 9   N  -3    1.85     0.37     b   ?",
    "Cr 9   P  -3    2.27     0.37     b   ?",
    "Cr 9   As -3    2.34     0.37     b   ?",
    "Cr 9   H  -1    1.52     0.37     b   ?",
    "Cs 1   O  -2    2.417    0.37     a   ?",
    // Cs 1   O  -2    2.2862   0.408    c   '7 A cut-off'
    "Cs 1   S  -2    2.89     0.37     b   ?",
    // Cs 1   S  -2    2.5253   0.517    c   '7 A cut-off'
    // Cs 1   S  -2    2.93     0.37     e   unchecked
    "Cs 1   Se -2    2.98     0.37     b   ?",
    // Cs 1   Se -2    2.6424   0.553    c   '7 A cut-off'
    "Cs 1   Te -2    3.16     0.37     b   ?",
    // Cs 1   Te -2    2.7647   0.603    c   '8 A cut-off'
    "Cs 1   F  -1    2.33     0.37     b   ?",
    // Cs 1   F  -1    2.1980   0.410    c   '7 A cut-off'
    // Cs 1   F  -1    2.38     0.37     e   unchecked
    "Cs 1   Cl -1    2.791    0.37     a   ?",
    // Cs 1   Cl -1    2.4715   0.495    c   '7 A cut-off'
    "Cs 1   Br -1    2.95     0.37     b   ?",
    // Cs 1   Br -1    2.5035   0.543    c   '7 A cut-off'
    "Cs 1   I  -1    3.18     0.37     b   ?",
    // Cs 1   I  -1    2.6926   0.609    c   '8 A cut-off'
    // Cs 1   I  -1    3.29     0.37     e   unchecked
    // Cs 1   N  -3    2.83     0.37     e   unchecked
    "Cs 1   N  -3    2.53     0.37     b   ?",
    "Cs 1   P  -3    2.93     0.37     b   ?",
    "Cs 1   As -3    3.04     0.37     b   ?",
    "Cs 1   H  -1    2.44     0.37     b   ?",
    "Cu 1   O  -2    1.610    0.37     e   unchecked",
    // Cu 1   O  -2    1.504    0.37     l   'from transition metal complexes'
    "Cu 1   S  -2    1.898    0.37     a   ?",
    // Cu 1   S  -2    1.811    0.37     l   'from transition metal complexes'
    "Cu 1   Se -2    1.900    0.37     l   'from transition metal complexes'",
    "Cu 1   F  -1    1.6      0.37     b   ?",
    "Cu 1   Cl -1    1.858    0.37     l   'from transition metal complexes'",
    // Cu 1   Cl -1    1.89     0.37     e   unchecked
    "Cu 1   Br -1    2.03     0.37     e   unchecked",
    "Cu 1   I  -1    2.108    0.37     a   ?",
    // Cu 1   I  -1    2.155    0.37     l   'from transition metal complexes'
    "Cu 1   N  -3    1.520    0.37     l   '3-coordinate N'",
    // "Cu 1   N  -3    1.480    0.37     l   '2-coordinate N'",
    // "Cu 1   N  -3    1.630    0.37     l   '4-coordinate N'",
    "Cu 1   P  -3    1.774    0.37     l   'from transition metal complexes'",
    "Cu 1   As -3    1.856    0.37     l   'from transition metal complexes'",
    "Cu 1   C  -4    1.446    0.37     l   'from transition metal complexes'",
    "Cu 2   O  -2    1.679    0.37     a   ?",
    // Cu 2   O  -2    1.649    0.37     j   'from transition metal complexes'
    // Cu 2   O  -2    1.655    0.37     l   'from transition metal complexes'
    // Cu 2   S  -2    2.054    0.37     a   ?
    // Cu 2   S  -2    2.060    0.37     j   'from transition metal complexes'
    // Cu 2   S  -2    2.024    0.37     l   'from transition metal complexes'
    "Cu 2   S  -2    1.86     0.37     b   ?",
    "Cu 2   Se -2    2.02     0.37     b   ?",
    // Cu 2   Se -2    2.124    0.37     l   ?
    "Cu 2   Te -2    2.27     0.37     b   ?",
    "Cu 2   F  -1    1.594    0.37     a   ?",
    "Cu 2   Cl -1    2.00     0.37     b   ?",
    "Cu 2   Br -1    1.99     0.37     b   ?",
    // Cu 2   Br -1    2.134    0.37     l   'from transition metal complexes'
    "Cu 2   I  -1    2.16     0.37     b   ?",
    // Cu 2   I  -1    2.36     0.37     l   'from transition metal complexes'
    // Cu 2   N  -3    1.751    0.37     j   'from transition metal complexes'
    // Cu 2   N  -3    1.713    0.37     l   'from transition metal complexes'
    "Cu 2   N  -3    1.61     0.37     b   ?",
    // Cu 2   N  -3    1.709    0.37     l   '2-coordinate N'
    // Cu 2   N  -3    1.704    0.37     l   '3-coordinate N'
    // Cu 2   N  -3    1.763    0.37     l   '4-coordinate N'
    "Cu 2   P  -3    1.97     0.37     b   ?",
    // Cu 2   P  -3    2.05     0.37     l   'from transition metal complexes'
    "Cu 2   As -3    2.08     0.37     b   ?",
    "Cu 2   C  -4    1.72     0.37     l   'from transition metal complexes'",
    "Cu 2   H  -1    1.21     0.37     b   ?",
    "Cu 3   O  -2    1.735    0.37     t   ?",
    // Cu 3   O  -2    1.739    0.37     e   unchecked
    "Cu 3   F  -1    1.58     0.37     e   unchecked",
    "Cu 3   Cl -1    2.078    0.37     l   'from transition metal complexes'",
    "Cu 3   N  -3    1.768    0.37     l   'from transition metal complexes'",
    // Cu 3   N  -3    1.753    0.37     t   ?
    "Cu 3   C  -4    1.84     0.37     l   'from transition metal complexes'",
    "Dy 2   O  -2    1.90     0.37     e   unchecked",
    "Dy 3   O  -2    2.001    0.37     a   ?",
    // Dy 3   O  -2    2.005    0.37     ae  'from transition metal complexes'
    "Dy 3   F  -1    1.922    0.37     b   ?",
    // Dy 3   F  -1    1.89     0.40     p   ?
    "Dy 3   Cl -1    2.410    0.37     b   ?",
    // Dy 3   Cl -1    2.38     0.40     p   ?
    // Dy 3   Cl -1    2.407    0.37     al  ?
    "Dy 3   Br -1    2.53     0.40     p   ?",
    "Dy 3   I  -1    2.76     0.40     p   ?",
    "Dy 9   Br -1    2.56     0.37     b   ?",
    "Dy 9   I  -1    2.77     0.37     b   ?",
    "Dy 9   S  -2    2.47     0.37     b   ?",
    // Dy 9   S  -2    2.473    0.37     al  ?
    "Dy 9   Se -2    2.61     0.37     b   ?",
    "Dy 9   Te -2    2.80     0.37     b   ?",
    // Dy 9   N  -3    2.124    0.37     ah  ?
    "Dy 9   N  -3    2.18     0.37     b   ?",
    "Dy 9   P  -3    2.57     0.37     b   ?",
    "Dy 9   As -3    2.64     0.37     b   ?",
    "Dy 9   H  -1    1.89     0.37     b   ?",
    "Er 2   O  -2    1.88     0.37     e   unchecked",
    "Er 2   S  -2    2.52     0.37     e   unchecked",
    // Er 3   O  -2    1.988    0.37     a   ?
    "Er 3   O  -2    2.010    0.37     b   ?",
    // Er 3   O  -2    1.979    0.37     ae  'from transition metal complexes'
    "Er 3   S  -2    2.475    0.37     al  ?",
    "Er 3   Se -2    2.58     0.37     e   unchecked",
    "Er 3   F  -1    1.904    0.37     a   ?",
    // Er 3   F  -1    1.87     0.40     p   ?
    "Er 3   Cl -1    2.390    0.37     b   ?",
    // Er 3   Cl -1    2.385    0.37     al  ?
    // Er 3   Cl -1    2.36     0.40     p   ?
    "Er 3   Br -1    2.51     0.40     p   ?",
    "Er 3   I  -1    2.75     0.40     p   ?",
    "Er 9   Br -1    2.54     0.37     b   ?",
    "Er 9   I  -1    2.75     0.37     b   ?",
    "Er 9   S  -2    2.46     0.37     b   ?",
    "Er 9   Se -2    2.59     0.37     b   ?",
    "Er 9   Te -2    2.78     0.37     b   ?",
    // Er 9   N  -3    2.086    0.37     ah  ?
    "Er 9   N  -3    2.16     0.37     b   ?",
    "Er 9   P  -3    2.55     0.37     b   ?",
    "Er 9   As -3    2.63     0.37     b   ?",
    "Er 9   H  -1    1.86     0.37     b   ?",
    "Es 3   O  -2    2.08     0.35     p   ?",
    "Eu 2   O  -2    2.147    0.37     b   ?",
    // Eu 2   O  -2    2.102    0.37     al  ?
    "Eu 2   S  -2    2.584    0.37     a   ?",
    "Eu 2   F  -1    2.04     0.37     b   ?",
    "Eu 2   Cl -1    2.53     0.37     b   ?",
    "Eu 2   Br -1    2.67     0.37     e   unchecked",
    "Eu 2   I  -1    2.90     0.37     e   unchecked",
    "Eu 2   N  -3    2.16     0.37     al  ?",
    "Eu 3   O  -2    2.074    0.37     a   ?",
    // Eu 3   O  -2    2.038    0.37     ae  'from transition metal complexes'
    "Eu 3   S  -2    2.509    0.37     al  ?",
    "Eu 3   F  -1    1.961    0.37     b   ?",
    // Eu 3   F  -1    1.93     0.40     p   ?
    "Eu 3   Cl -1    2.455    0.37     b   ?",
    // Eu 3   Cl -1    2.468    0.37     al  ?
    // Eu 3   Cl -1    2.42     0.40     p   ?
    "Eu 3   Br -1    2.57     0.40     p   ?",
    "Eu 3   I  -1    2.79     0.40     p   ?",
    "Eu 9   Br -1    2.61     0.37     b   ?",
    "Eu 9   I  -1    2.83     0.37     b   ?",
    "Eu 9   S  -2    2.53     0.37     b   ?",
    "Eu 9   Se -2    2.66     0.37     b   ?",
    "Eu 9   Te -2    2.85     0.37     b   ?",
    // Eu 9   N  -3    2.161    0.37     ah  ?
    "Eu 9   N  -3    2.24     0.37     b   ?",
    "Eu 9   P  -3    2.62     0.37     b   ?",
    "Eu 9   As -3    2.70     0.37     b   ?",
    "Eu 9   H  -1    1.95     0.37     b   ?",
    "Fe 2   O  -2    1.734    0.37     a   ?",
    // Fe 2   O  -2    1.713    0.37     h   ?
    // Fe 2   O  -2    1.700    0.37     j   ?
    // Fe 2   S  -2    2.12     0.37     e   unchecked
    "Fe 2   S  -2    2.125    0.37     j   'from transition metal complexes'",
    "Fe 2   F  -1    1.65     0.37     b   ?",
    "Fe 2   Cl -1    2.06     0.37     b   ?",
    // Fe 2   Cl -1    2.15     0.37     e   unchecked
    "Fe 2   Br -1    2.21     0.35     e   unchecked",
    "Fe 2   I  -1    2.47     0.35     e   ?",
    "Fe 2   N  -3    1.769    0.37     j   'from transition metal complexes'",
    "Fe 3   O  -2    1.759    0.37     a   ?",
    // Fe 3   O  -2    1.751    0.37     h   'from transition metal complexes'
    // Fe 3   O  -2    1.765    0.37     j   'from transition metal complexes'
    "Fe 3   S  -2    2.149    0.37     a   ?",
    // Fe 3   S  -2    2.134    0.37     j   ?
    "Fe 3   F  -1    1.679    0.37     a   ?",
    "Fe 3   Cl -1    2.09     0.37     b   ?",
    // Fe 3   Cl -1    2.15     0.37     e   unchecked
    "Fe 3   N  -3    1.815    0.37     j   'from transition metal complexes'",
    "Fe 3   C   2    1.689    0.37     a   ?",
    "Fe 4   S  -2    2.23     0.35     e   unchecked",
    "Fe 6   O  -2    1.76     0.35     e   unchecked",
    "Fe 9   O  -2    1.795    0.30     ag  'for all oxidation states'",
    // Fe 9   O  -2    1.74     0.38     o   ?
    "Fe 9   Br -1    2.26     0.37     b   ?",
    "Fe 9   I  -1    2.47     0.37     b   ?",
    "Fe 9   S  -2    2.16     0.37     b   ?",
    "Fe 9   Se -2    2.28     0.37     b   ?",
    "Fe 9   Te -2    2.53     0.37     b   ?",
    "Fe 9   N  -3    1.86     0.37     b   ?",
    "Fe 9   P  -3    2.27     0.37     b   ?",
    "Fe 9   As -3    2.35     0.37     b   ?",
    "Fe 9   H  -1    1.53     0.37     b   ?",
    "Ga 1   Se -1    2.55     0.37     e   unchecked",
    "Ga 3   O  -2    1.730    0.37     a   ?",
    "Ga 3   S  -2    2.163    0.37     a   ?",
    "Ga 3   F  -1    1.62     0.37     b   ?",
    // Ga 3   F  -1    1.69     0.37     e   unchecked
    "Ga 3   Cl -1    2.07     0.37     b   ?",
    "Ga 3   Br -1    2.20     0.35     e   ?",
    "Ga 3   I  -1    2.46     0.37     e   unchecked",
    "Ga 9   Br -1    2.24     0.37     b   ?",
    "Ga 9   I  -1    2.45     0.37     b   ?",
    "Ga 9   S  -2    2.17     0.37     b   ?",
    "Ga 9   Se -2    2.30     0.37     b   ?",
    "Ga 9   Te -2    2.54     0.37     b   ?",
    "Ga 9   N  -3    1.84     0.37     b   ?",
    "Ga 9   P  -3    2.26     0.37     b   ?",
    "Ga 9   As -3    2.34     0.37     b   ?",
    "Ga 9   H  -1    1.51     0.37     b   ?",
    "Gd 2   O  -2    2.01     0.37     e   unchecked",
    "Gd 2   F  -1    2.40     0.37     e   unchecked",
    "Gd 3   O  -2    2.065    0.37     b   ?",
    // Gd 3   O  -2    2.031    0.37     ae  'from transition metal complexes'
    "Gd 3   S  -2    2.53     0.37     e   unchecked",
    "Gd 3   F  -1    1.95     0.37     b   ?",
    // Gd 3   F  -1    1.92     0.40     p   ?
    "Gd 3   Cl -1    2.445    0.37     b   ?",
    // Gd 3   Cl -1    2.41     0.40     p   ?
    // Gd 3   Cl -1    2.457    0.37     al  ?
    "Gd 3   Br -1    2.56     0.40     p   ?",
    "Gd 3   I  -1    2.78     0.40     p   ?",
    "Gd 9   Br -1    2.60     0.37     b   ?",
    "Gd 9   I  -1    2.82     0.37     b   ?",
    "Gd 9   S  -2    2.53     0.37     b   ?",
    // Gd 9   S  -2    2.518    0.37     al  ?
    "Gd 9   Se -2    2.65     0.37     b   ?",
    "Gd 9   Te -2    2.84     0.37     b   ?",
    // Gd 9   N  -3    2.146    0.37     ah  ?
    "Gd 9   N  -3    2.22     0.37     b   ?",
    // Gd 9   N  -3    2.10     0.37     e   ?
    "Gd 9   P  -3    2.61     0.37     b   ?",
    "Gd 9   As -3    2.68     0.37     b   ?",
    "Gd 9   H  -1    1.93     0.37     b   ?",
    "Ge 4   O  -2    1.748    0.37     a   ?",
    "Ge 4   S  -2    2.217    0.37     a   ?",
    "Ge 4   Se -2    2.35     0.37     e   unchecked",
    "Ge 4   F  -1    1.66     0.37     b   ?",
    "Ge 4   Cl -1    2.14     0.37     b   ?",
    "Ge 9   Br -1    2.30     0.37     b   ?",
    "Ge 9   I  -1    2.50     0.37     b   ?",
    "Ge 9   S  -2    2.23     0.37     b   ?",
    "Ge 9   Se -2    2.35     0.37     b   ?",
    "Ge 9   Te -2    2.56     0.37     b   ?",
    "Ge 9   N  -3    1.88     0.37     b   ?",
    "Ge 9   P  -3    2.32     0.37     b   ?",
    "Ge 9   As -3    2.43     0.37     b   ?",
    "Ge 9   H  -1    1.55     0.37     b   ?",
    "H  1   O  -2    0.569    0.94     bc  '1.05<O-H<1.70 A, best general value'",
    // H  1   O  -2    0.907    0.28     bc  'O-H < 1.05 A'
    // H  1   O  -2    0.990    0.59     bc  '1.70 A < O-H'
    // H  1   O  -2    0.925    0.40     az  ?
    // H  1   O  -2    0.957    0.35     az  'From gas and symmetrical bond length'
    // H  1   O  -2    0.870    0.457    ax  '4.0 Å cut-off, b determined from softness'
    // H  1   O  -2    0.790    0.37     ba  'For s > 0.5 vu'
    // H  1   O  -2    1.409    0.37     ba  'For s < 0.5 vu'
    "H  1   S  -2    1.192    0.591    ax  '5.5 Å cut-off, b determined from softness'",
    "H  1   F  -1    0.708    0.558    ax  '4.5 Å cut-off, b determined from softness'",
    "H  1   Cl -1    1.336    0.53     am  ?",
    "H  1   N  -3    1.014    0.413    bb  'From gas and symmetrical bond length'",
    "Hf 3   F  -1    2.62     0.37     e   unchecked",
    "Hf 4   O  -2    1.923    0.37     b   ?",
    "Hf 4   F  -1    1.85     0.37     b   ?",
    // Hf 4   F  -1    1.82     0.40     p   ?
    // Hf 4   Cl -1    2.24     0.37     e   unchecked
    "Hf 4   Cl -1    2.30     0.37     b   ?",
    "Hf 9   Br -1    2.47     0.37     b   ?",
    "Hf 9   S  -2    2.39     0.37     b   ?",
    "Hf 9   Se -2    2.52     0.37     b   ?",
    "Hf 9   Te -2    2.72     0.37     b   ?",
    "Hf 9   I  -1    2.68     0.37     b   ?",
    "Hf 9   N  -3    2.09     0.37     b   ?",
    "Hf 9   P  -3    2.48     0.37     b   ?",
    "Hf 9   As -3    2.56     0.37     b   ?",
    "Hf 9   H  -1    1.78     0.37     b   ?",
    "Hg 1   O  -2    1.90     0.37     b   ?",
    "Hg 1   F  -1    1.81     0.37     b   ?",
    "Hg 1   Cl -1    2.28     0.37     b   ?",
    // Hg 2   O  -2    1.972    0.37     a   ?
    "Hg 2   O  -2    1.93     0.37     b   ?",
    "Hg 2   S  -2    2.308    0.37     a   ?",
    // Hg 2   F  -1    2.17     0.37     e   unchecked
    "Hg 2   F  -1    1.90     0.37     b   ?",
    // Hg 2   Cl -1    2.28     0.37     e   ?
    "Hg 2   Cl -1    2.25     0.37     b   ?",
    "Hg 2   Br -1    2.38     0.37     e   unchecked",
    "Hg 2   I  -1    2.62     0.37     e   unchecked",
    "Hg 9   Br -1    2.40     0.37     b   ?",
    "Hg 9   I  -1    2.59     0.37     b   ?",
    "Hg 9   S  -2    2.32     0.37     b   ?",
    "Hg 9   Se -2    2.47     0.37     b   ?",
    "Hg 9   Te -2    2.61     0.37     b   ?",
    "Hg 9   N  -3    2.02     0.37     b   ?",
    "Hg 9   P  -3    2.42     0.37     b   ?",
    "Hg 9   As -3    2.50     0.37     b   ?",
    "Hg 9   H  -1    1.71     0.37     b   ?",
    "Hg 2   Hg  2    2.51     0.35     f   ?",
    "Ho 3   O  -2    2.025    0.37     a   ?",
    // Ho 3   O  -2    1.992    0.37     ae  'from transition metal complexes'
    "Ho 3   S  -2    2.49     0.37     e   unchecked",
    "Ho 3   F  -1    1.908    0.37     b   ?",
    // Ho 3   F  -1    1.88     0.40     p   ?
    "Ho 3   Cl -1    2.401    0.37     b   ?",
    // Ho 3   Cl -1    2.37     0.40     p   ?
    // Ho 3   Cl -1    2.399    0.37     al  ?
    "Ho 3   Br -1    2.52     0.40     p   ?",
    "Ho 3   I  -1    2.76     0.40     p   ?",
    "Ho 9   Br -1    2.55     0.37     b   ?",
    "Ho 9   I  -1    2.77     0.37     b   ?",
    "Ho 9   S  -2    2.48     0.37     b   ?",
    "Ho 9   Se -2    2.61     0.37     b   ?",
    "Ho 9   Te -2    2.80     0.37     b   ?",
    // Ho 9   N  -3    2.118    0.37     ah  ?
    "Ho 9   N  -3    2.18     0.37     b   ?",
    "Ho 9   P  -3    2.56     0.37     b   ?",
    "Ho 9   As -3    2.64     0.37     b   ?",
    "Ho 9   H  -1    1.88     0.37     b   ?",
    // I  0   I   0    2.195    0.35     e   unchecked,
    "I  1   F  -1    2.32     0.37     e   unchecked",
    "I  1   Cl -1    2.47     0.37     e   unchecked",
    "I  3   O  -2    2.02     0.37     e   unchecked",
    "I  3   F  -1    1.90     0.37     b   ?",
    "I  3   Cl -1    2.39     0.37     e   unchecked",
    "I  5   O  -2    1.990    0.44     bd  ?",
    // I  5   O  -2    2.003    0.37     a   ?
    // I  5   F  -1    1.84     0.37     e   unchecked
    "I  5   F  -1    1.90     0.37     b   ?",
    "I  5   Cl -1    2.38     0.37     b   ?",
    "I  7   O  -2    1.93     0.37     b   ?",
    "I  7   F  -1    1.83     0.37     b   ?",
    "I  7   Cl -1    2.31     0.37     b   ?",
    "In 1   Cl -1    2.56     0.37     e   unchecked",
    "In 3   O  -2    1.902    0.37     a   ?",
    "In 3   S  -2    2.370    0.37     a   ?",
    "In 3   F  -1    1.792    0.37     a   ?",
    "In 3   Cl -1    2.28     0.37     b   ?",
    "In 3   Br -1    2.51     0.35     e   unchecked",
    "In 3   I  -1    2.63     0.37     e   unchecked",
    "In 3   Co -1    2.593    0.35     e   unchecked",
    "In 3   Mn -2    2.604    0.35     e   unchecked",
    "In 9   Br -1    2.41     0.37     b   ?",
    "In 9   I  -1    2.63     0.37     b   ?",
    "In 9   S  -2    2.36     0.37     b   ?",
    "In 9   Se -2    2.47     0.37     b   ?",
    "In 9   Te -2    2.69     0.37     b   ?",
    "In 9   N  -3    2.03     0.37     b   ?",
    "In 9   P  -3    2.43     0.37     b   ?",
    "In 9   As -3    2.51     0.37     b   ?",
    "In 9   H  -1    1.72     0.37     b   ?",
    "Ir 4   O  -2    1.87     0.37     e   unchecked",
    "Ir 4   F  -1    1.80     0.37     e   unchecked",
    "Ir 5   O  -2    1.916    0.37     b   ?",
    // Ir 5   O  -2    2.01     0.37     e   unchecked
    "Ir 5   F  -1    1.82     0.37     b   ?",
    "Ir 5   Cl -1    2.30     0.37     b   ?",
    "Ir 9   S  -2    2.38     0.37     b   ?",
    "Ir 9   Se -2    2.51     0.37     b   ?",
    "Ir 9   Te -2    2.71     0.37     b   ?",
    "Ir 9   Br -1    2.45     0.37     b   ?",
    "Ir 9   I  -1    2.66     0.37     b   ?",
    "Ir 9   N  -3    2.06     0.37     b   ?",
    "Ir 9   P  -3    2.46     0.37     b   ?",
    "Ir 9   As -3    2.54     0.37     b   ?",
    "Ir 9   H  -1    1.76     0.37     b   ?",
    "K  1   O  -2    2.132    0.37     a   ?",
    // K  1   O  -2    2.113    0.37     u   ?
    // K  1   O  -2    1.9548   0.430    c   '6 A cut-off'
    // K  1   O  -2    1.84     0.48     o   ?
    "K  1   S  -2    2.59     0.37     b   ?",
    // K  1   S  -2    2.1516   0.580    c   '7 A cut-off'
    // K  1   S  -2    2.63     0.37     e   unchecked
    "K  1   Se -2    2.72     0.37     b   ?",
    // K  1   Se -2    2.2811   0.612    c   '7 A cut-off'
    "K  1   Te -2    2.93     0.37     b   ?",
    // K  1   Te -2    2.4102   0.653    c   '7 A cut-off'
    "K  1   F  -1    1.992    0.37     a   ?",
    // K  1   F  -1    1.8307   0.429    c   '6 A cut-off'
    "K  1   Cl -1    2.519    0.37     a   ?",
    // K  1   Cl -1    2.0707   0.559    c   '6 A cut-off'
    "K  1   Br -1    2.66     0.37     b   ?",
    // K  1   Br -1    2.1529   0.603    c   '7 A cut-off'
    "K  1   I  -1    2.88     0.37     b   ?",
    // K  1   I  -1    2.2821   0.658    c   '7 A cut-off'
    // K  1   I  -1    2.92     0.37     e   unchecked
    "K  1   N  -3    2.26     0.37     b   ?",
    // K  1   N  -3    2.30     0.37     e   unchecked
    "K  1   P  -3    2.64     0.37     b   ?",
    "K  1   As -3    2.83     0.37     b   ?",
    "K  1   H  -1    2.10     0.37     b   ?",
    "Kr 2   F  -1    1.88     0.37     e   ?",
    "La 3   O  -2    2.172    0.37     a   ?",
    // La 3   O  -2    2.172    0.33     ac  ?
    // La 3   O  -2    2.148    0.37     ae  'from transition metal complexes'
    "La 3   S  -2    2.643    0.37     a   ?",
    // La 3   S  -2    2.632    0.37     al  ?
    "La 3   Se -2    2.74     0.37     b   ?",
    "La 3   Te -2    2.94     0.37     b   ?",
    // La 3   F  -1    2.02     0.40     p   ?
    "La 3   F  -1    2.08     0.37     e   unchecked",
    "La 3   Cl -1    2.545    0.37     b   ?",
    // La 3   Cl -1    2.57     0.37     e   unchecked
    // La 3   Cl -1    2.58     0.40     p   ?
    "La 3   Br -1    2.72     0.37     b   ?",
    // La 3   Br -1    2.66     0.40     p   ?
    "La 3   I  -1    2.93     0.37     b   ?",
    // La 3   I  -1    2.88     0.40     p   ?
    // La 3   N  -3    2.261    0.37     ah  ?
    "La 3   N  -3    2.34     0.37     b   ?",
    "La 3   P  -3    2.73     0.37     b   ?",
    "La 3   As -3    2.80     0.37     b   ?",
    "La 3   H  -1    2.06     0.37     b   ?",
    "Li 1   O  -2    1.466    0.37     a   ?",
    // Li 1   O  -2    1.1745   0.514    c   '6 A cut-off'
    // Li 1	 O  -2    1.174    0.590    ay  '6.0 Å cut-off'
    // Li 1   O  -2    1.29     0.48     o   ?
    "Li 1   S  -2    1.94     0.37     b   ?",
    // Li 1   S  -2    1.4607   0.656    c   '6 A cut-off'
    "Li 1   Se -2    2.09     0.37     b   ?",
    // Li 1   Se -2    1.6272   0.681    c   '7 A cut-off'
    "Li 1   Te -2    2.30     0.37     b   ?",
    // Li 1   Te -2    1.7340   0.717    c   '7 A cut-off'
    "Li 1   F  -1    1.360    0.37     a   ?",
    // Li 1   F  -1    1.0968   0.503    c   '6 A cut-off'
    "Li 1   Cl -1    1.91     0.37     b   ?",
    // Li 1   Cl -1    1.3873   0.640    c   '6 A cut-off'
    // Li 1   Cl -1    1.94     0.37     e   unchecked
    "Li 1   Br -1    2.02     0.37     b   ?",
    // Li 1   Br -1    1.5150   0.674    c   '7 A cut-off'
    "Li 1   I  -1    2.22     0.37     b   ?",
    // Li 1   I  -1    1.6754   0.722    c   '7 A cut-off'
    "Li 1   N  -3    1.61     0.37     b   ?",
    // Li 1	 N  -3    1.15     0.631    ay  '6.5 Å cut-off'
    "Lu 3   O  -2    1.971    0.37     b   ?",
    // Lu 3   O  -2    1.947    0.37     ae  'from transition metal complex'
    "Lu 3   S  -2    2.43     0.37     b   ?",
    "Lu 3   Se -2    2.56     0.37     b   ?",
    "Lu 3   Te -2    2.75     0.37     b   ?",
    "Lu 3   F  -1    1.876    0.37     b   ?",
    // Lu 3   F  -1    1.84     0.40     p   ?
    "Lu 3   Cl -1    2.361    0.37     b   ?",
    // Lu 3   Cl -1    2.361    0.37     al  ?
    // Lu 3   Cl -1    2.33     0.40     p   ?
    "Lu 3   Br -1    2.50     0.37     b   ?",
    // Lu 3   Br -1    2.48     0.40     p   ?
    "Lu 3   I  -1    2.73     0.37     b   ?",
    // Lu 3   I  -1    2.73     0.40     p   ?
    // Lu 3   N  -3    2.046    0.37     ah  ?
    "Lu 3   N  -3    2.11     0.37     b   ?",
    "Lu 3   P  -3    2.51     0.37     b   ?",
    "Lu 3   As -3    2.59     0.37     b   ?",
    "Lu 3   H  -1    1.82     0.37     b   ?",
    "Mg 2   O  -2    1.693    0.37     a   ?",
    // Mg 2   O  -2    1.636    0.42     o   ?
    "Mg 2   S  -2    2.18     0.37     b   ?",
    "Mg 2   Se -2    2.32     0.37     b   ?",
    "Mg 2   Te -2    2.53     0.37     b   ?",
    "Mg 2   F  -1    1.578    0.37     a   ?",
    "Mg 2   Cl -1    2.08     0.37     b   ?",
    "Mg 2   Br -1    2.28     0.37     b   ?",
    "Mg 2   I  -1    2.46     0.37     b   ?",
    "Mg 2   N  -3    1.85     0.37     b   ?",
    "Mg 2   P  -3    2.29     0.37     b   ?",
    "Mg 2   As -3    2.38     0.37     b   ?",
    "Mg 2   H  -1    1.53     0.37     b   ?",
    "Mn 2   O  -2    1.790    0.37     a   ?",
    // Mn 2   O  -2    1.765    0.37     j   ?
    "Mn 2   S  -2    2.22     0.37     e   unchecked",
    "Mn 2   F  -1    1.698    0.37     a   ?",
    "Mn 2   Cl -1    2.133    0.37     a   ?",
    "Mn 2   Br -1    2.34     0.37     e   unchecked",
    "Mn 2   I  -2    2.52     0.37     e   unchecked",
    "Mn 2   N  -3    1.849    0.37     j   'from transition metal complexes'",
    // Mn 2   N  -3    1.65     0.35     e   unchecked
    "Mn 3   O  -2    1.760    0.37     a   ?",
    // Mn 3   O  -2    1.732    0.37     j   'from transition metal complexes'
    "Mn 3   F  -1    1.66     0.37     b   ?",
    // Mn 3	 F  -1    1.666    0.36     at  ?
    "Mn 3   Cl -1    2.14     0.37     b   ?",
    "Mn 3   N  -3    1.837    0.37     j   'from transition metal complexes'",
    "Mn 4   O  -2    1.753    0.37     a   ?",
    // Mn 4   O  -2    1.750    0.37     j   'from transition metal complexes'
    "Mn 4   F  -1    1.71     0.37     b   ?",
    // Mn 4   F  -1    1.63     0.37     e   unchecked
    "Mn 4   Cl -1    2.13     0.37     b   ?",
    "Mn 4   N  -3    1.822    0.37     j   'from transition metal complexes'",
    "Mn 6   O  -2    1.79     0.37     e   ?",
    // Mn 7   O  -2    1.827    0.37     e   unchecked
    "Mn 7   O  -2    1.79     0.37     b   ?",
    "Mn 7   F  -1    1.72     0.37     b   ?",
    "Mn 7   Cl -1    2.17     0.37     b   ?",
    "Mn 9   O  -2    1.754    0.37     g   'from transition metal complexes'",
    "Mn 9   Br -1    2.26     0.37     b   ?",
    "Mn 9   I  -1    2.49     0.37     b   ?",
    "Mn 9   S  -2    2.20     0.37     b   ?",
    "Mn 9   Se -1    2.32     0.37     b   ?",
    "Mn 9   Te -2    2.55     0.37     b   ?",
    "Mn 9   N  -3    1.87     0.37     b   ?",
    "Mn 9   P  -3    2.24     0.37     b   ?",
    "Mn 9   As -3    2.36     0.37     b   ?",
    "Mn 9   H  -1    1.55     0.37     b   ?",
    "Mo 2	 O  -2    1.762    0.40     ap  'R0 fixed by Mo2O7'",
    "Mo 2	 S  -2    2.072    0.422    ax  '5.5 Å cut-off'",
    "Mo 2	 Cl -1    2.052    0.441    ax  '5.5 Å cut-off'",
    // Mo 3   O  -2    1.834    0.37     m   ?
    "Mo 3	 O  -2    1.762    0.35     ap  'R0 fixed by Mo2O7'",
    // Mo 3	 O  -2    1.789    0.418    ax  '5.5 Å cut-off'
    "Mo 3	 S  -2    2.062    0.519    ax  '6.0 Å cut-off'",
    // Mo 3   F  -1    1.76     0.35     e   unchecked
    "Mo 3	 F  -1    1.738    0.427    ax  '5.5 Å cut-off'",
    // Mo 3   Cl -1    2.22     0.37     e   unchecked
    "Mo 3	 Cl -1    2.089    0.501    ax  '6.0 Å cut-off'",
    // Mo 3   Br -1    2.34     0.37     e   unchecked
    "Mo 3	 Br -1    2.191    0.541    ax  '6.0 Å cut-off'",
    "Mo 3   N  -3    1.96     0.37     e   unchecked",
    // Mo 4   O  -2    1.886    0.37     j   'from transition metal complexes'
    // Mo 4   O  -2    1.856    0.37     m   ?
    "Mo 4	 O  -2    1.762    0.34     ap  'R0 fixed by Mo2O7 Small sample'",
    // Mo 4	 O  -2    1.724    0.562    ax  '6.5 Å cut-off'
    "Mo 4   S  -2    2.235    0.37     j   'from transition metal complexes'",
    "Mo 4   F  -1    1.80     0.37     e   unchecked",
    "Mo 4	 Cl -1    2.128    0.558    ax  '6.5 Å cut-off'",
    "Mo 4   N  -3    2.043    0.37     j   'from transition metal complexes'",
    // Mo 5   O  -2    1.907    0.37     j   'from transition metal complexes'
    // Mo 5   O  -2    1.878    0.37     m   ?
    "Mo 5	 O  -2    1.762    0.30     ap  'R0 fixed by Mo2O7'",
    // Mo 5	 O  -2    1.848    0.482    ax  '5.5 Å cut-off
    "Mo 5   S  -2    2.288    0.37     j   'from transition metal complexes'",
    "Mo 5   Cl -1    2.26     0.37     e   unchecked",
    "Mo 5   N  -3    2.009    0.37     j   'from transition metal complexes'",
    "Mo 6   O  -2    1.907    0.37     a   ?",
    // Mo 6   O  -2    1.915    0.41     x   ?
    // Mo 6   O  -2    1.87     0.26     n   ?
    // Mo 6   O  -2    1.900    0.37     m   ?
    // Mo 6	 O  -2    1.762    0.27     ap  'R0 fixed by Mo2O7'
    // Mo 6	 O  -2    1.912    0.405    ax  '5.0 Å cut-off'
    "Mo 6   S  -2    2.331    0.37     j   'from transition metal complexes'",
    "Mo 6   F  -1    1.81     0.37     b   ?",
    "Mo 6   Cl -1    2.28     0.37     b   ?",
    "Mo 6   N  -3    2.009    0.37     j   'from transition metal complexes'",
    "Mo 7	 O  -2    1.762    0.26     ap  'R0 fixed by Mo2O7'",
    "Mo 9   O  -2    1.879    0.30     z   'applies to all oxidation states'",
    "Mo 9   Br -1    2.43     0.37     b   ?",
    "Mo 9   I  -1    2.64     0.37     b   ?",
    "Mo 9   S  -2    2.35     0.37     b   ?",
    "Mo 9   Se -2    2.49     0.37     b   ?",
    "Mo 9   Te -2    2.69     0.37     b   ?",
    "Mo 9   N  -3    2.04     0.37     b   ?",
    "Mo 9   P  -3    2.44     0.37     b   ?",
    "Mo 9   As -3    2.52     0.37     b   ?",
    "Mo 9   H  -1    1.73     0.37     b   ?",
    "N  3   O  -2    1.361    0.37     a   ?",
    "N  3   S  -2    1.73     0.37     e   unchecked",
    "N  3   F  -1    1.37     0.37     b   ?",
    "N  3   Cl -1    1.75     0.37     b   ?",
    // "N -3   N  -3    1.44     0.35     e   unchecked",
    "N  5   O  -2    1.432    0.37     a   ?",
    // N  5   O  -2    1.41     0.43     o   ?
    "N  5   F  -1    1.36     0.37     b   ?",
    "N  5   Cl -1    1.80     0.37     b   ?",
    "Na 1   O  -2    1.803    0.37     a   ?",
    // Na 1   O  -2    1.756    0.37     v   ?
    // Na 1   O  -2    1.5766   0.475    c   '6 A cut-off'
    // Na 1   O  -2    1.661    0.44     o   ?
    // Na 1   S  -2    2.300    0.37     a   ?
    "Na 1   S  -2    2.28     0.37     b   ?",
    // Na 1   S  -2    1.8213   0.626    c   '6 A cut-off'
    "Na 1   Se -2    2.41     0.37     b   ?",
    // Na 1   Se -2    1.8908   0.654    c   '7 A cut-off'
    "Na 1   Te -2    2.64     0.37     b   ?",
    // Na 1   Te -2    2.0400   0.690    c   '7 A cut-off'
    "Na 1   F  -1    1.677    0.37     a   ?",
    // Na 1   F  -1    1.4485   0.465    c   '6 A cut-off'
    "Na 1   Cl -1    2.15     0.37     b   ?",
    // Na 1   Cl -1    1.6833   0.608    c   '6 A cut-off'
    // Na 1   Cl -1    2.22     0.37     e   unchecked
    "Na 1   Br -1    2.33     0.37     b   ?",
    // Na 1   Br -1    1.7719   0.646    c   '7 A cut-off'
    "Na 1   I  -1    2.56     0.37     b   ?",
    // Na 1   I  -1    1.9555   0.695    c   '7 A cut-off'
    "Na 1   N  -3    1.93     0.37     b   ?",
    // Na 1   N  -3    2.01     0.37     e   unchecked
    "Na 1   P  -3    2.36     0.37     b   ?",
    "Na 1   As -3    2.53     0.37     b   ?",
    "Na 1   H  -1    1.68     0.37     b   ?",
    "Nb 3   O  -2    1.91     0.35     e   unchecked",
    "Nb 3   F  -1    1.71     0.37     e   unchecked",
    "Nb 3   Cl -1    2.20     0.37     e   unchecked",
    "Nb 3   Br -1    2.35     0.37     e   unchecked",
    "Nb 4   O  -2    1.88     0.37     e   unchecked",
    "Nb 4   F  -1    1.90     0.37     e   unchecked",
    // Nb 4   Cl -1    2.26     0.35     e   unchecked
    "Nb 4	 Cl -1    2.236    0.37     av  'Based on eq. 5 in ref. a, small sample'",
    "Nb 4   Br -1    2.62     0.37     e   unchecked",
    "Nb 4	 N  -3    2.004    0.37     av  'Based on eq. 5 in ref. a, small sample'",
    "Nb 5   O  -2    1.911    0.37     a   ?",
    // Nb 5   O  -2    1.916    0.37     x   ?
    "Nb 5   F  -1    1.87     0.37     b   ?",
    "Nb 5   Cl -1    2.27     0.37     b   ?",
    "Nb 5   I  -1    2.77     0.37     e   unchecked",
    "Nb 5   N  -3    2.01     0.35     e   unchecked",
    "Nb 9   Br -1    2.45     0.37     b   ?",
    "Nb 9   I  -1    2.68     0.37     b   ?",
    "Nb 9   S  -2    2.37     0.37     b   ?",
    "Nb 9   Se -2    2.51     0.37     b   ?",
    "Nb 9   Te -2    2.70     0.37     b   ?",
    "Nb 9   N  -3    2.06     0.37     b   ?",
    "Nb 9   P  -3    2.46     0.37     b   ?",
    "Nb 9   As -3    2.54     0.37     b   ?",
    "Nb 9   H  -1    1.75     0.37     b   ?",
    "Nd 2   O  -2    1.95     0.37     e   unchecked",
    "Nd 2   S  -2    2.60     0.35     e   unchecked",
    // Nd 3   O  -2    2.105    0.37     a   ?
    "Nd 3   O  -2    2.117    0.37     b   ?",
    // Nd 3   O  -2    2.086    0.37     ae  'from transition metal complexes'
    "Nd 3   S  -2    2.59     0.37     b   ?",
    // Nd 3   S  -2    2.559    0.37     al  ?
    "Nd 3   Se -2    2.71     0.37     b   ?",
    "Nd 3   Te -2    2.89     0.37     b   ?",
    "Nd 3   F  -1    2.008    0.37     b   ?",
    // Nd 3   F  -1    1.98     0.40     p   ?
    "Nd 3   Cl -1    2.492    0.37     b   ?",
    // Nd 3   Cl -1    2.512    0.37     al  ?
    // Nd 3   Cl -1    2.46     0.40     p   ?
    "Nd 3   Br -1    2.66     0.37     b   ?",
    // Nd 3   Br -1    2.61     0.40     p   ?
    "Nd 3   I  -1    2.87     0.37     b   ?",
    // Nd 3   I  -1    2.84     0.40     p   ?
    // Nd 3   N  -3    2.201    0.37     ah  ?
    "Nd 3   N  -3    2.30     0.37     b   ?",
    "NH 1   O  -2    2.226    0.37     s   ?",
    "NH 1   F  -1    2.129    0.37     s   ?",
    "NH 1   Cl -1    2.619    0.37     s   ?",
    // Ni 2   O  -2    1.675    0.37     e   'better value than ref. a'
    // Ni 2   O  -2    1.670    0.37     j   'from transition metal complexes'
    "Ni 2   O  -2    1.654    0.37     a   ?",
    // Ni 2   S  -2    1.98     0.37     e   unchecked
    "Ni 2   S  -2    1.937    0.37     j   'from transition metal complexes'",
    "Ni 2   F  -1    1.596    0.37     a   ?",
    "Ni 2   Cl -1    2.02     0.37     b   ?",
    "Ni 2   Br -1    2.20     0.37     e   unchecked",
    "Ni 2   I  -1    2.40     0.37     e   unchecked",
    // Ni 2   N  -3    1.70     0.37     e   unchecked
    "Ni 2   N  -3    1.647    0.37     j   'from transition metal complexes'",
    "Ni 3   O  -2    1.75     0.37     e   ?",
    "Ni 3   S  -2    2.040    0.37     j   'from transition metal complexes'",
    "Ni 3   F  -1    1.58     0.37     e   unchecked",
    "Ni 3   N  -3    1.731    0.37     j   'from transition metal complexes'",
    "Ni 4   O  -2    1.78     0.35     e   unchecked",
    "Ni 4   F  -1    1.61     0.37     e   unchecked",
    "Ni 9   Br -1    2.16     0.37     b   ?",
    "Ni 9   I  -1    2.34     0.37     b   ?",
    "Ni 9   S  -2    2.04     0.37     b   ?",
    "Ni 9   Se -2    2.14     0.37     b   ?",
    "Ni 9   Te -2    2.43     0.37     b   ?",
    "Ni 9   N  -3    1.75     0.37     b   ?",
    "Ni 9   P  -3    2.17     0.37     b   ?",
    "Ni 9   As -3    2.24     0.37     b   ?",
    "Ni 9   H  -1    1.40     0.37     b   ?",
    "Np 3   F  -1    2.00     0.40     p   ?",
    "Np 3   Cl -1    2.48     0.40     p   ?",
    "Np 3   Br -1    2.62     0.40     p   ?",
    "Np 3   I  -1    2.85     0.40     p   ?",
    "Np 4   O  -2    2.18     0.37     e   unchecked",
    // Np 4   O  -2    2.11     0.35     p   ?
    "Np 4   F  -1    2.02     0.37     e   unchecked",
    // Np 4   F  -1    1.98     0.40     p   ?
    "Np 4   Cl -1    2.46     0.40     p   ?",
    "Np 5   O  -2    2.09     0.35     p   ?",
    "Np 5   F  -1    1.97     0.40     p   ?",
    "Np 5   Cl -1    2.42     0.40     p   ?",
    "Np 6   O  -2    2.07     0.35     p   ?",
    "Np 6   F  -1    1.97     0.40     p   ?",
    "Np 7   O  -2    2.06     0.35     p   ?",
    // "O -2   O  -2    1.500    0.35     e   unchecked",
    "Os 4   O  -2    1.811    0.37     b   ?",
    "Os 4   S  -2    2.21     0.37     e   unchecked",
    "Os 4   F  -1    1.72     0.37     b   ?",
    "Os 4   Cl -1    2.19     0.37     b   ?",
    "Os 4   Br -1    2.37     0.37     e   unchecked",
    "Os 5   F  -1    1.81     0.37     e   unchecked",
    "Os 6   O  -2    2.03     0.37     e   unchecked",
    "Os 6   F  -1    1.80     0.35     e   unchecked",
    "Os 8   O  -2    1.92     0.37     e   unchecked",
    "P  3   O  -2    1.63     0.37     e   unchecked",
    "P  3   S  -2    2.12     0.37     e   unchecked",
    "P  3   Se -2    2.24     0.37     e   unchecked",
    "P  3   F  -1    1.53     0.35     e   unchecked",
    "P  4   O  -2    1.64     0.37     e   unchecked",
    "P  4   S  -2    2.13     0.35     e   unchecked",
    "P  4   F  -1    1.66     0.37     e   unchecked",
    // P  5   O  -2    1.617    0.37     a   ?
    // P  5	 O  -2    1.615    0.37     au  ?
    "P  5   O  -2    1.604    0.37     b   ?",
    "P  5   S  -2    2.145    0.37     a   ?",
    "P  5   F  -1    1.54     0.37     e   unchecked",
    "P  5   Cl -1    2.02     0.37     e   ?",
    "P  5   Br -1    2.17     0.40     e   unchecked",
    "P  5   N  -3    1.704    0.37     a   ?",
    "P  9   Br -1    2.15     0.37     b   ?",
    "P  9   I  -1    2.40     0.37     b   ?",
    "P  9   S  -2    2.11     0.37     b   ?",
    "P  9   Se -2    2.26     0.37     b   ?",
    "P  9   Te -2    2.44     0.37     b   ?",
    "P  9   N  -3    1.73     0.37     b   ?",
    "P  9   P  -3    2.19     0.37     b   ?",
    "P  9   As -3    2.25     0.37     b   ?",
    "P  9   H  -1    1.41     0.37     b   ?",
    // "P  5   P   5    2.22     0.35     e   unchecked",
    "Pa 4   O  -2    2.15     0.35     p   ?",
    "Pa 4   F  -1    2.02     0.40     p   ?",
    "Pa 4   Cl -1    2.49     0.40     p   ?",
    "Pa 4   Br -1    2.66     0.40     p   ?",
    // Pa 5   O  -2    2.09     0.35     e   unchecked
    "Pa 5   O  -2    2.11     0.35     p   ?",
    "Pa 5   F  -1    2.04     0.37     e   unchecked",
    // Pa 5   F  -1    2.01     0.40     p   ?
    "Pa 5   Cl -1    2.45     0.40     p   ?",
    "Pa 5   Br -1    2.58     0.40     p   ?",
    // Pb 2   O  -2    1.963    0.49     q   ?
    "Pb 2   O  -2    2.112    0.37     a   ?",
    // Pb 2	 O  -2    1.963    0.49     ar  ?
    "Pb 2   S  -2    2.541    0.37     a   ?",
    "Pb 2   Se -2    2.69     0.37     e   unchecked",
    "Pb 2   F  -1    2.03     0.37     b   ?",
    // Pb 2	 F  -1    2.036    0.382    aq  'R0 from gas phase'
    "Pb 2   Cl -1    2.53     0.37     b   ?",
    // Pb 2	 Cl -1    2.447    0.40     aq  'R0 from gas phase, small sample'
    "Pb 2	 Br -1    2.598    0.40     aq  'R0 from gas phase, small sample'",
    // Pb 2   Br -1    2.68     0.37     e   unchecked
    // Pb 2   I  -1    2.83     0.37     e   unchecked
    "Pb 2	 I  -1    2.804    0.386    aq  'R0 from gas phase, small sample'",
    "Pb 2   N  -3    2.18     0.40     e   unchecked",
    "Pb 4   O  -2    2.042    0.37     a   ?",
    "Pb 4   F  -1    1.94     0.37     b   ?",
    "Pb 4   Cl -1    2.43     0.37     b   ?",
    // Pb 4   Cl -1    2.36     0.37     e   unchecked
    "Pb 4   Br -1    3.04     0.35     e   unchecked",
    "Pb 9   Br -1    2.64     0.37     b   ?",
    "Pb 9   I  -1    2.78     0.37     b   ?",
    "Pb 9   S  -2    2.55     0.37     b   ?",
    "Pb 9   Se -2    2.67     0.37     b   ?",
    "Pb 9   Te -2    2.84     0.37     b   ?",
    "Pb 9   N  -3    2.22     0.37     b   ?",
    "Pb 9   P  -3    2.64     0.37     b   ?",
    "Pb 9   As -3    2.72     0.37     b   ?",
    "Pb 9   H  -1    1.97     0.37     b   ?",
    "Pd 2   O  -2    1.792    0.37     b   ?",
    "Pd 2   S  -2    2.09     0.37     e   unchecked",
    "Pd 2   F  -1    1.74     0.37     b   ?",
    "Pd 2   Cl -1    2.05     0.37     b   ?",
    "Pd 2   Br -1    2.20     0.37     e   unchecked",
    "Pd 2   I  -1    2.36     0.37     e   unchecked",
    "Pd 2   N  -3    1.82     0.35     e   unchecked",
    "Pd 2   C  -4    1.73     0.37     e   unchecked",
    "Pd 4   S  -2    2.30     0.37     e   unchecked",
    "Pd 4   F  -1    1.66     0.37     e   unchecked",
    "Pd 9   Br -1    2.19     0.37     b   ?",
    "Pd 9   I  -1    2.38     0.37     b   ?",
    "Pd 9   S  -2    2.10     0.37     b   ?",
    "Pd 9   Se -2    2.22     0.37     b   ?",
    "Pd 9   Te -2    2.48     0.37     b   ?",
    "Pd 9   N  -3    1.81     0.37     b   ?",
    "Pd 9   P  -3    2.22     0.37     b   ?",
    "Pd 9   As -3    2.30     0.37     b   ?",
    "Pd 9   H  -1    1.47     0.37     b   ?",
    "Pm 3   F  -1    1.96     0.40     p   ?",
    "Pm 3   Cl -1    2.45     0.40     p   ?",
    // Pm 3   Cl -1    2.82     0.40     p   ?
    "Pm 3   Br -1    2.59     0.40     p   ?",
    "Po 4   O  -2    2.19     0.37     e   unchecked",
    "Po 4   F  -1    2.38     0.37     e   unchecked",
    "Pr 3   O  -2    2.138    0.37     a   ?",
    // Pr 3   O  -2    2.098    0.37     ae  'from transition metal complexes'
    "Pr 3   S  -2    2.60     0.37     b   ?",
    // Pr 3   S  -2    2.594    0.37     al  ?
    "Pr 3   Se -1    2.72     0.37     b   ?",
    "Pr 3   Te -2    2.90     0.37     b   ?",
    "Pr 3   F  -1    2.022    0.37     b   ?",
    // Pr 3   F  -1    1.99     0.40     p   ?
    "Pr 3   Cl -1    2.50     0.37     b   ?",
    // Pr 3   Cl -1    2.521    0.37     al  ?
    // Pr 3   Cl -1    2.47     0.40     p   ?
    "Pr 3   Br -1    2.67     0.37     b   ?",
    // Pr 3   Br -1    2.63     0.40     p   ?
    "Pr 3   I  -1    2.89     0.37     b   ?",
    // Pr 3   I  -1    2.85     0.40     p   ?
    // Pr 3   N  -3    2.215    0.37     ah  ?
    "Pr 3   N  -3    2.30     0.37     b   ?",
    "Pr 3   P  -3    2.68     0.37     b   ?",
    "Pr 3   As -3    2.75     0.37     b   ?",
    "Pr 3   H  -1    2.02     0.37     b   ?",
    "Pt 2   O  -2    1.768    0.37     b   ?",
    // Pt 2   O  -2    1.80     0.37     e   unchecked
    "Pt 2   S  -2    2.16     0.37     e   unchecked",
    "Pt 2   F  -1    1.68     0.37     b   ?",
    "Pt 2   Cl -1    2.05     0.37     b   ?",
    "Pt 2   Br -1    2.20     0.37     e   unchecked",
    "Pt 2   C   2    1.760    0.37     a   ?",
    "Pt 2   N  -3    1.81     0.37     e   unchecked",
    "Pt 3   O  -2    1.87     0.37     e   unchecked",
    "Pt 3   Cl -1    2.30     0.37     e   unchecked",
    "Pt 3   Br -1    2.47     0.35     e   unchecked",
    "Pt 4   O  -2    1.879    0.37     a   ?",
    "Pt 4   F  -1    1.759    0.37     b   ?",
    // Pt 4   F  -1    2.19     0.37     e   unchecked
    "Pt 4   Cl -1    2.17     0.37     b   ?",
    // Pt 4   Cl -1    2.32     0.37     e   unchecked
    "Pt 4   Br -1    2.6      0.35     e   unchecked",
    "Pt 9   Br -1    2.18     0.37     b   ?",
    "Pt 9   I  -1    2.37     0.37     b   ?",
    "Pt 9   S  -2    2.08     0.37     b   ?",
    "Pt 9   Se -2    2.19     0.37     b   ?",
    "Pt 9   Te -2    2.45     0.37     b   ?",
    "Pt 9   N  -3    1.77     0.37     b   ?",
    "Pt 9   P  -3    2.19     0.37     b   ?",
    "Pt 9   As -3    2.26     0.37     b   ?",
    "Pt 9   H  -1    1.40     0.37     b   ?",
    "Pu 3   O  -2    2.11     0.37     b   ?",
    // Pu 3   O  -2    2.14     0.35     p   ?
    "Pu 3   F  -1    2.00     0.37     b   ?",
    // Pu 3   F  -1    1.99     0.40     p   ?
    "Pu 3   Cl -1    2.48     0.37     b   ?",
    // Pu 3   Cl -1    2.46     0.40     p   ?
    "Pu 3   Br -1    2.60     0.40     p   ?",
    "Pu 3   I  -1    2.84     0.40     p   ?",
    "Pu 4   O  -2    2.09     0.35     p   ?",
    "Pu 4   F  -1    1.97     0.40     p   ?",
    "Pu 4   Cl -1    2.44     0.40     p   ?",
    "Pu 5   O  -2    2.11     0.37     e   ?",
    // Pu 5   O  -2    2.08     0.35     p   ?
    "Pu 5   F  -1    1.96     0.40     p   ?",
    "Pu 6   O  -2    2.06     0.35     p   ?",
    "Pu 6   F  -1    1.96     0.40     p   ?",
    "Pu 7   O  -2    2.05     0.35     p   ?",
    "Rb 1   O  -2    2.263    0.37     a   ?",
    // Rb 1   O  -2    2.0812   0.415    c   '7 A cut-off'
    "Rb 1   S  -2    2.70     0.37     b   ?",
    // Rb 1   S  -2    2.2991   0.553    c   '7 A cut-off'
    // Rb 1   S  -2    2.80     0.37     e   unchecked
    "Rb 1   Se -2    2.81     0.37     b   ?",
    // Rb 1   Se -2    2.3886   0.587    c   '7 A cut-off'
    "Rb 1   Te -2    3.00     0.37     b   ?",
    // Rb 1   Te -2    2.4175   0.633    c   '8 A cut-off'
    "Rb 1   F  -1    2.16     0.37     b   ?",
    // Rb 1   F  -1    1.9718   0.412    c   '6 A cut-off'
    // Rb 1   F  -1    2.20     0.37     e   unchecked
    "Rb 1   Cl -1    2.652    0.37     a   ?",
    // Rb 1   Cl -1    2.2653   0.531    c   '7 A cut-off'
    "Rb 1   Br -1    2.78     0.37     b   ?",
    // Rb 1   Br -1    2.3296   0.578    c   '7 A cut-off'
    // Rb 1   Br -1    2.86     0.37     e   unchecked
    "Rb 1   I  -1    3.01     0.37     b   ?",
    // Rb 1   I  -1    2.4509   0.638    c   '7 A cut-off'
    // Rb 1   I  -1    3.12     0.37     e   unchecked
    // Rb 1   N  -3    2.62     0.37     e   unchecked
    "Rb 1   N  -3    2.37     0.37     b   ?",
    "Rb 1   P  -3    2.76     0.37     b   ?",
    "Rb 1   As -3    2.87     0.37     b   ?",
    "Rb 1   H  -1    2.26     0.37     b   ?",
    "Re 1   Cl -1    2.62     0.35     e   unchecked",
    "Re 3   O  -2    1.9      0.35     e   unchecked",
    "Re 3   Cl -1    2.23     0.37     e   unchecked",
    "Re 4   F  -1    1.81     0.37     e   unchecked",
    "Re 4   Cl -1    2.23     0.37     e   unchecked",
    "Re 4   Br -1    2.35     0.37     e   unchecked",
    "Re 5   O  -2    1.86     0.37     e   ?",
    "Re 5   Cl -1    2.24     0.37     e   unchecked",
    "Re 6   F  -1    1.79     0.37     e   unchecked",
    "Re 7   O  -2    1.97     0.37     e   unchecked",
    "Re 7   F  -1    1.86     0.37     b   ?",
    "Re 7   Cl -1    2.23     0.37     b   ?",
    "Re 9   Br -1    2.45     0.37     b   ?",
    "Re 9   I  -1    2.61     0.37     b   ?",
    "Re 9   S  -2    2.37     0.37     b   ?",
    "Re 9   Se -2    2.50     0.37     b   ?",
    "Re 9   Te -2    2.70     0.37     b   ?",
    "Re 9   N  -3    2.06     0.37     b   ?",
    "Re 9   P  -3    2.46     0.37     b   ?",
    "Re 9   As -3    2.54     0.37     b   ?",
    "Re 9   H  -1    1.75     0.37     b   ?",
    "Rh 3   O  -2    1.793    0.37     b   ?",
    "Rh 3   F  -1    1.71     0.37     b   ?",
    // Rh 3   Cl -1    2.08     0.37     e   unchecked
    "Rh 3   Cl -1    2.17     0.37     b   ?",
    "Rh 3   Br -1    2.27     0.35     e   unchecked",
    "Rh 3   N  -3    1.82     0.35     e   unchecked",
    "Rh 4   F  -1    1.59     0.37     e   unchecked",
    "Rh 5   F  -1    1.80     0.37     e   unchecked",
    "Rh 9   Br -1    2.25     0.37     b   ?",
    "Rh 9   I  -1    2.48     0.37     b   ?",
    "Rh 9   S  -2    2.15     0.37     b   ?",
    "Rh 9   Se -1    2.33     0.37     b   ?",
    "Rh 9   Te -2    2.55     0.37     b   ?",
    "Rh 9   N  -3    1.88     0.37     b   ?",
    "Rh 9   P  -3    2.29     0.37     b   ?",
    "Rh 9   As -3    2.37     0.37     b   ?",
    "Rh 9   H  -1    1.55     0.37     b   ?",
    "Ru 2   Se -2    2.11     0.35     e   unchecked",
    "Ru 2   F  -1    1.84     0.35     e   unchecked",
    "Ru 3   O  -2    1.77     0.37     o   ?",
    "Ru 3   S  -2    2.20     0.35     e   unchecked",
    "Ru 3   F  -1    2.12     0.37     e   unchecked",
    "Ru 3   Cl -1    2.25     0.37     e   unchecked",
    "Ru 3   N  -3    1.82     0.35     e   unchecked",
    "Ru 4   O  -2    1.834    0.37     b   ?",
    "Ru 4   S  -2    2.21     0.37     e   unchecked",
    "Ru 4   F  -1    1.74     0.37     b   ?",
    "Ru 4   Cl -1    2.21     0.37     b   ?",
    "Ru 5   O  -2    1.90     0.37     o   ?",
    "Ru 5   F  -1    1.82     0.37     e   unchecked",
    "Ru 5   Cl -1    2.23     0.35     e   unchecked",
    "Ru 6   O  -2    1.87     0.35     e   unchecked",
    "Ru 7   O  -2    1.99     0.37     e   unchecked",
    "Ru 9   Br -1    2.26     0.37     b   ?",
    "Ru 9   I  -1    2.48     0.37     b   ?",
    "Ru 9   S  -2    2.16     0.37     b   ?",
    "Ru 9   Se -2    2.33     0.37     b   ?",
    "Ru 9   Te -2    2.54     0.37     b   ?",
    "Ru 9   N  -3    1.88     0.37     b   ?",
    "Ru 9   P  -3    2.29     0.37     b   ?",
    "Ru 9   As -3    2.36     0.37     b   ?",
    "Ru 9   H  -1    1.61     0.37     b   ?",
    "S  2   O  -2    1.74     0.37     e   unchecked",
    "S  2   S  -2    2.03     0.37     e   unchecked",
    "S  2   N  -2    1.597    0.37     a   ?",
    "S  2   N  -3    1.682    0.37     a   ?",
    // "S  2   S   2    2.10     0.35     e   unchecked",
    "S  4   O  -2    1.644    0.37     a   ?",
    "S  4   S  -4    2.35     0.37     e   unchecked",
    "S  4   F  -1    1.60     0.37     b   ?",
    "S  4   Cl -1    2.02     0.37     b   ?",
    "S  4   N  -3    1.762    0.37     a   ?",
    "S  6   O  -2    1.624    0.37     a   ?",
    "S  6   F  -1    1.56     0.37     b   ?",
    "S  6   Cl -1    2.03     0.37     b   ?",
    "S  6   N  -3    1.72     0.37     e   unchecked",
    "S  9   Br -1    2.17     0.37     b   ?",
    "S  9   I  -1    2.36     0.37     b   ?",
    "S  9   S  -2    2.07     0.37     b   ?",
    "S  9   Se -2    2.21     0.37     b   ?",
    "S  9   Te -2    2.45     0.37     b   ?",
    "S  9   N  -3    1.74     0.37     b   ?",
    "S  9   P  -3    2.15     0.37     b   ?",
    "S  9   As -3    2.25     0.37     b   ?",
    "S  9   H  -1    1.38     0.37     b   ?",
    "Sb 3   O  -2    1.925    0.455    be  ?",
    // Sb 3   O  -2    1.924    0.47     bd  ?
    // Sb 3	 O  -2    1.955    0.37     an  ?
    "Sb 3   S  -2    2.474    0.37     a   ?",
    "Sb 3   Se -2    2.60     0.37     e   unchecked",
    // Sb 3   F  -1    1.883    0.37     a   ?
    "Sb 3   F  -1    1.90     0.37     b   ?",
    "Sb 3   Cl -1    2.35     0.37     b   ?",
    "Sb 3   Br -1    2.51     0.37     e   unchecked",
    "Sb 3   I  -1    2.76     0.37     e   unchecked",
    "Sb 3   N  -3    2.108    0.37     d   ?",
    "Sb 5   O  -2    1.904    0.430    be  ?",
    // Sb 5   O  -2    1.942    0.37     a   ?
    // Sb 5	 O  -2    1.912    0.37     an  ?
    // Sb 5	 O  -2    1.908    0.409    aw  'Small sample'
    "Sb 5   F  -1    1.797    0.37     a   ?",
    "Sb 5   Cl -1    2.30     0.37     b   ?",
    "Sb 5   Br -1    2.48     0.37     e   unchecked",
    "Sb 5   N  -3    1.99     0.35     e   unchecked",
    "Sb 9	 O  -2    1.934    0.37     an  'Use for unknown oxidation state'",
    "Sb 9   S  -2    2.45     0.37     b   ?",
    "Sb 9   Se -2    2.57     0.37     b   ?",
    "Sb 9   Te -2    2.78     0.37     b   ?",
    "Sb 9   Br -1    2.50     0.37     b   ?",
    "Sb 9   I  -1    2.72     0.37     b   ?",
    "Sb 9   N  -3    2.12     0.37     b   ?",
    "Sb 9   P  -3    2.52     0.37     b   ?",
    "Sb 9   As -3    2.60     0.37     b   ?",
    "Sb 9   H  -1    2.77     0.37     b   ?",
    "Sc 3   O  -2    1.849    0.37     a   ?",
    // Sc 3   O  -2    1.877    0.35     o   ?
    "Sc 3   S  -2    2.321    0.37     a   ?",
    "Sc 3   Se -2    2.44     0.37     b   ?",
    "Sc 3   Te -2    2.64     0.37     b   ?",
    "Sc 3   F  -1    1.76     0.37     b   ?",
    // Sc 3   Cl -1    2.36     0.37     e   unchecked
    "Sc 3   Cl -1    2.23     0.37     b   ?",
    "Sc 3   Br -1    2.38     0.37     b   ?",
    "Sc 3   I  -1    2.59     0.37     b   ?",
    "Sc 3   N  -3    1.98     0.37     b   ?",
    "Sc 3   P  -3    2.40     0.37     b   ?",
    "Sc 3   As -3    2.48     0.37     b   ?",
    "Sc 3   H  -1    1.68     0.37     b   ?",
    "Se 2   S  -2    2.21     0.37     e   unchecked",
    "Se 2   Se -2    2.33     0.37     e   unchecked",
    "Se 4   O  -2    1.811    0.37     a   ?",
    "Se 4   F  -1    1.73     0.37     b   ?",
    "Se 4   Cl -1    2.22     0.37     b   ?",
    "Se 4   Br -1    2.43     0.37     e   unchecked",
    "Se 6   O  -2    1.788    0.37     a   ?",
    "Se 6   F  -1    1.69     0.37     b   ?",
    "Se 6   Cl -1    2.16     0.37     b   ?",
    "Se 6   N  -3    1.90     0.35     e   unchecked",
    "Se 9   Br -1    2.33     0.37     b   ?",
    "Se 9   I  -1    2.54     0.37     b   ?",
    "Se 9   S  -2    2.25     0.37     b   ?",
    "Se 9   Se -2    2.36     0.37     b   ?",
    "Se 9   Te -2    2.55     0.37     b   ?",
    "Se 9   P  -3    2.34     0.37     b   ?",
    "Se 9   As -3    2.42     0.37     b   ?",
    "Se 9   H  -1    1.54     0.37     b   ?",
    "Si 4   O  -2    1.624    0.37     b   ?",
    // Si 4	 O  -2    1.622    0.37     au  ?
    // Si 4   O  -2    1.640    0.37     a   ?
    "Si 4   S  -2    2.126    0.37     a   ?",
    "Si 4   Se -2    2.26     0.37     b   ?",
    "Si 4   Te -2    2.49     0.37     b   ?",
    "Si 4   F  -1    1.58     0.37     b   ?",
    "Si 4   Cl -1    2.03     0.37     b   ?",
    "Si 4   Br -1    2.20     0.37     b   ?",
    "Si 4   I  -1    2.41     0.37     b   ?",
    "Si 4   C  -4    1.883    0.37     a   ?",
    // Si 4   N  -3    1.724    0.37     a   ?
    "Si 4   N  -3    1.77     0.37     b   ?",
    "Si 4   P  -3    2.23     0.37     b   ?",
    "Si 4   As -3    2.31     0.37     b   ?",
    "Si 4   H  -1    1.47     0.37     b   ?",
    "Sm 2   O  -2    2.116    0.37     ai  ?",
    // Sm 2   O  -2    2.126    0.37     al  ?
    "Sm 2   N  -3    2.267    0.37     al  ?",
    "Sm 3   O  -2    2.088    0.37     b   ?",
    // Sm 3   O  -2    2.063    0.37     ae  'from transition metal complexes'
    // Sm 3   O  -2    2.055    0.37     ai  'from transition metal complexes'
    "Sm 3   S  -2    2.55     0.37     b   ?",
    // Sm 3   S  -2    2.538    0.37     al  ?
    "Sm 3   Se -2    2.67     0.37     b   ?",
    "Sm 3   Te -2    2.86     0.37     b   ?",
    // Sm 3   F  -1    1.94     0.40     p   ?
    "Sm 3   F  -1    2.00     0.37     e   unchecked",
    "Sm 3   Cl -1    2.466    0.37     b   ?",
    // Sm 3   Cl -1    2.481    0.37     al  ?
    // Sm 3   Cl -1    2.43     0.40     p   ?
    "Sm 3   Br -1    2.66     0.37     b   ?",
    // Sm 3   Br -1    2.58     0.40     p   ?
    "Sm 3   I  -1    2.84     0.37     b   ?",
    // Sm 3   I  -1    2.80     0.40     p   ?
    // Sm 3   N  -3    2.171    0.37     ah  ?
    "Sm 3   N  -3    2.24     0.37     b   ?",
    "Sm 3   P  -3    2.63     0.37     b   ?",
    "Sm 3   As -3    2.70     0.37     b   ?",
    "Sm 3   H  -1    1.96     0.37     b   ?",
    "Sn 2   O  -2    1.849    0.50     bd  ?",
    // Sn 2   O  -2    1.984    0.37     b   ?
    "Sn 2   S  -2    2.44     0.37     e   unchecked",
    "Sn 2   F  -1    1.925    0.37     a   ?",
    // Sn 2   Cl -1    2.41     0.37     e   unchecked
    "Sn 2   Cl -1    2.36     0.37     b   ?",
    "Sn 2   Br -1    2.53     0.35     d   unchecked",
    "Sn 2   I  -1    2.81     0.37     e   unchecked",
    "Sn 2   N  -3    2.03     0.35     e   unchecked",
    "Sn 4   O  -2    1.905    0.37     a   ?",
    "Sn 4   S  -2    2.399    0.37     a   ?",
    "Sn 4   Se -2    2.51     0.37     e   unchecked",
    "Sn 4   F  -1    1.843    0.37     a   ?",
    "Sn 4   Cl -1    2.276    0.37     a   ?",
    "Sn 4   Br -1    2.40     0.37     e   unchecked",
    "Sn 4   N  -3    2.03     0.35     e   unchecked",
    "Sn 9   Br -1    2.55     0.37     b   ?",
    "Sn 9   I  -1    2.76     0.37     b   ?",
    // Sn 9   S  -2    2.39     0.37     aa  ?
    "Sn 9   S  -2    2.45     0.37     b   ?",
    "Sn 9   Se -2    2.59     0.37     b   ?",
    "Sn 9   Te -2    2.76     0.37     b   ?",
    // Sn 9   N  -3    2.06     0.37     aa  ?
    "Sn 9   N  -3    2.14     0.37     b   ?",
    "Sn 9   P  -3    2.45     0.37     b   ?",
    "Sn 9   As -3    2.62     0.37     b   ?",
    "Sn 9   H  -1    1.85     0.37     b   ?",
    "Sr 2   O  -2    2.118    0.37     a   ?",
    "Sr 2   S  -2    2.59     0.37     b   ?",
    // Sr 2   S  -2    2.65     0.37     e   unchecked
    "Sr 2   Se -2    2.72     0.37     b   ?",
    "Sr 2   Te -2    2.87     0.37     b   ?",
    // Sr 2   Te -2    2.06     0.37     e   unchecked
    "Sr 2   F  -1    2.019    0.37     b   ?",
    "Sr 2   Cl -1    2.51     0.37     b   ?",
    "Sr 2   Br -1    2.68     0.37     b   ?",
    "Sr 2   I  -1    2.88     0.37     b   ?",
    "Sr 2   N  -3    2.23     0.37     b   ?",
    "Sr 2   P  -3    2.67     0.37     b   ?",
    "Sr 2   As -3    2.76     0.37     b   ?",
    "Sr 2   H  -1    2.01     0.37     b   ?",
    "Ta 4   O  -2    2.29     0.37     e   unchecked",
    "Ta 5   O  -2    1.920    0.37     a   ?",
    "Ta 5   S  -2    2.47     0.37     e   unchecked",
    "Ta 5   F  -1    1.88     0.37     b   ?",
    "Ta 5   Cl -1    2.30     0.37     b   ?",
    "Ta 9   Br -1    2.45     0.37     b   ?",
    "Ta 9   I  -1    2.66     0.37     b   ?",
    "Ta 9   S  -2    2.39     0.37     b   ?",
    "Ta 9   Se -2    2.51     0.37     b   ?",
    "Ta 9   Te -2    2.70     0.37     b   ?",
    "Ta 9   N  -3    2.01     0.37     b   ?",
    "Ta 9   P  -3    2.47     0.37     b   ?",
    "Ta 9   As -3    2.55     0.37     b   ?",
    "Ta 9   H  -1    1.76     0.37     b   ?",
    // Tb 3   O  -2    2.032    0.37     a   ?
    "Tb 3   O  -2    2.049    0.37     b   ?",
    // Tb 3   O  -2    2.013    0.37     ae  'from transition metal complexes'
    "Tb 3   S  -2    2.51     0.37     b   ?",
    // Tb 3   S  -2    2.498    0.37     al  ?
    "Tb 3   Se -2    2.63     0.37     b   ?",
    "Tb 3   Te -2    2.82     0.37     b   ?",
    "Tb 3   F  -1    1.936    0.37     b   ?",
    // Tb 3   F  -1    1.90     0.40     p   ?
    "Tb 3   Cl -1    2.427    0.37     b   ?",
    // Tb 3   Cl -1    2.437    0.37     al  ?
    // Tb 3   Cl -1    2.39     0.40     p   ?
    "Tb 3   Br -1    2.58     0.37     b   ?",
    // Tb 3   Br -1    2.54     0.40     p   ?
    "Tb 3   I  -1    2.80     0.37     b   ?",
    // Tb 3   I  -1    2.77     0.40     p   ?
    // Tb 3   N  -3    2.130    0.37     ah  ?
    "Tb 3   N  -3    2.20     0.37     b   ?",
    "Tb 3   P  -3    2.59     0.37     b   ?",
    "Tb 3   As -3    2.66     0.37     b   ?",
    "Tb 3   H  -1    1.91     0.37     b   ?",
    "Tc 3	 O  -2    1.768    0.37     as  'small sample'",
    "Tc 4	 O  -2    1.841 	 0.37     as  'small sample'",
    "Tc 4   F  -1    1.88     0.40     p   ?",
    "Tc 4   Cl -1    2.21     0.37     e   unchecked",
    "Tc 5	 O  -2    1.859    0.37     as  '6-coordination, small sample'",
    // Tc 5	 O  -2    1.870    0.37     as  '5-coordination, small sample'
    "Tc 6	 O  -2    1.955    0.37     as  'small sample'",
    "Tc 7	 O  -2    1.909    0.37     as  ?",
    "Te 4   O  -2    1.955    0.44     bd  ?",
    // Te 4   O  -2    1.977    0.37     a   ?
    "Te 4   S  -2    2.44     0.37     e   unchecked",
    "Te 4   F  -1    1.87     0.37     b   ?",
    "Te 4   Cl -1    2.37     0.37     b   ?",
    "Te 4   Br -1    2.55     0.37     e   unchecked",
    "Te 4   I  -1    2.787    0.37     e   unchecked",
    "Te 6   O  -2    1.917    0.37     a   ?",
    "Te 6   F  -1    1.82     0.37     b   ?",
    "Te 6   Cl -1    2.30     0.37     b   ?",
    "Te 9   Br -1    2.53     0.37     b   ?",
    "Te 9   I  -1    2.76     0.37     b   ?",
    "Te 9   S  -2    2.45     0.37     b   ?",
    "Te 9   Se -2    2.53     0.37     b   ?",
    "Te 9   Te -2    2.76     0.37     b   ?",
    "Te 9   N  -3    2.12     0.37     b   ?",
    "Te 9   P  -3    2.52     0.37     b   ?",
    "Te 9   As -3    2.60     0.37     b   ?",
    "Te 9   H  -1    1.83     0.37     b   ?",
    "Th 4   O  -2    2.167    0.37     b   ?",
    // Th 4   O  -2    2.18     0.35     p   ?
    "Th 4   S  -2    2.64     0.37     b   ?",
    "Th 4   Se -2    2.76     0.37     b   ?",
    "Th 4   Te -2    2.94     0.37     b   ?",
    "Th 4   F  -1    2.068    0.37     a   ?",
    // Th 4   F  -1    2.05     0.40     p   ?
    "Th 4   Cl -1    2.55     0.37     b   ?",
    // Th 4   Cl -1    2.52     0.40     p   ?
    "Th 4   Br -1    2.71     0.37     b   ?",
    // Th 4   Br -1    2.68     0.40     p   ?
    "Th 4   I  -1    2.93     0.37     b   ?",
    // Th 4   I  -1    2.92     0.40     p   ?
    // Th 4   I  -1    2.96     0.37     e   unchecked
    "Th 4   N  -3    2.34     0.37     b   ?",
    "Th 4   P  -3    2.73     0.37     b   ?",
    "Th 4   As -3    2.80     0.37     b   ?",
    "Th 4   H  -1    2.07     0.37     b   ?",
    "Ti 2   F  -1    2.15     0.37     e   unchecked",
    "Ti 2   Cl -1    2.31     0.37     e   unchecked",
    "Ti 2   Br -1    2.49     0.37     e   unchecked",
    "Ti 3   O  -2    1.791    0.37     b   ?",
    "Ti 3   S  -2    2.11     0.37     e   unchecked",
    "Ti 3   F  -1    1.723    0.37     b   ?",
    // Ti 3   Cl -1    2.22     0.37     e   unchecked
    "Ti 3   Cl -1    2.17     0.37     b   ?",
    "Ti 3   I  -1    2.52     0.37     e   unchecked",
    "Ti 4   O  -2    1.815    0.37     a   ?",
    // Ti 4   O  -2    1.78     0.43     o   ?
    "Ti 4   S  -2    2.29     0.37     e   unchecked",
    "Ti 4   F  -1    1.76     0.37     b   ?",
    "Ti 4   Cl -1    2.19     0.37     b   ?",
    "Ti 4   Br -1    2.36     0.37     e   unchecked",
    "Ti 9   O  -2    1.790    0.37     k   'from transition metal complexes'",
    "Ti 9   Cl -1    2.184    0.37     k   'from transition metal complexes'",
    "Ti 9   Br -1    2.32     0.37     b   ?",
    "Ti 9   I  -1    2.54     0.37     b   ?",
    "Ti 9   S  -2    2.24     0.37     b   ?",
    "Ti 9   Se -2    2.38     0.37     b   ?",
    "Ti 9   Te -2    2.60     0.37     b   ?",
    "Ti 9   N  -3    1.93     0.37     b   ?",
    // Ti 9   N  -3    1.906    0.37     k   'from transition metal complexes'
    "Ti 9   P  -3    2.36     0.37     b   ?",
    "Ti 9   As -3    2.42     0.37     b   ?",
    "Ti 9   H  -1    1.61     0.37     b   ?",
    // Tl 1   O  -2    2.124    0.37     a   ?
    "Tl 1   O  -2    2.172    0.37     b   ?",
    // Tl 1   O  -2    1.927    0.50     af  'inorganic and organic compounds'
    "Tl 1   S  -2    2.545    0.37     a   ?",
    "Tl 1   F  -1    2.15     0.37     b   ?",
    "Tl 1   Cl -1    2.56     0.37     b   ?",
    // Tl 1   Cl -1    2.61     0.37     e   unchecked
    "Tl 1   Br -1    2.69     0.37     e   unchecked",
    "Tl 1   I  -1    2.822    0.37     a   ?",
    "Tl 3   O  -2    2.003    0.37     b   ?",
    "Tl 3   F  -1    1.88     0.37     b   ?",
    "Tl 3   Cl -1    2.32     0.37     b   ?",
    "Tl 3   Br -1    2.65     0.35     e   unchecked",
    "Tl 9   Br -1    2.70     0.37     b   ?",
    "Tl 9   I  -1    2.91     0.37     b   ?",
    "Tl 9   S  -2    2.63     0.37     b   ?",
    "Tl 9   Se -2    2.70     0.37     b   ?",
    "Tl 9   Te -2    2.93     0.37     b   ?",
    "Tl 9   N  -3    2.29     0.37     b   ?",
    "Tl 9   P  -3    2.71     0.37     b   ?",
    "Tl 9   As -3    2.79     0.37     b   ?",
    "Tl 9   H  -1    2.05     0.37     b   ?",
    "Tm 3   O  -2    2.000    0.37     b   ?",
    // Tm 3   O  -2    1.968    0.37     ae  'from transition metal complexes'
    // Tm 3   O  -2    1.93     0.37     e   unchecked
    "Tm 3   S  -2    2.45     0.37     b   ?",
    "Tm 3   Se -2    2.58     0.37     b   ?",
    "Tm 3   Te -2    2.77     0.37     b   ?",
    "Tm 3   F  -1    1.842    0.37     b   ?",
    // Tm 3   F  -1    1.86     0.40     p   ?
    // Tm 3   F  -1    1.91     0.37     e   unchecked
    "Tm 3   Cl -1    2.38     0.37     b   ?",
    // Tm 3   Cl -1    2.381    0.37     al  ?
    // Tm 3   Cl -1    2.35     0.40     p   ?
    "Tm 3   Br -1    2.53     0.37     b   ?",
    // Tm 3   Br -1    2.50     0.40     p   ?
    "Tm 3   I  -1    2.74     0.37     b   ?",
    // Tm 3   I  -1    2.74     0.40     p   ?
    "Tm 3   N  -3    2.14     0.37     b   ?",
    "Tm 3   P  -3    2.53     0.37     b   ?",
    "Tm 3   As -3    2.62     0.37     b   ?",
    "Tm 3   H  -1    1.85     0.37     b   ?",
    "U  2   O  -1    2.08     0.37     e   unchecked",
    "U  3   S  -2    2.54     0.37     e   unchecked",
    // U  3   F  -1    2.02     0.40     p   ?
    "U  3   F  -1    2.09     0.37     e   unchecked",
    "U  3   Cl -1    2.49     0.40     p   ?",
    "U  3   Br -1    2.64     0.40     p   ?",
    "U  3   I  -1    2.87     0.40     p   ?",
    "U  4   O  -2    2.112    0.37     b   ?",
    // U  4   O  -2    2.13     0.35     p   ?
    "U  4   S  -2    2.55     0.37     e   unchecked",
    // U  4   F  -1    2.038    0.37     a   ?
    "U  4   F  -1    2.034    0.37     b   ?",
    // U  4   F  -1    2.00     0.40     p   ?
    "U  4   Cl -1    2.47     0.40     p   ?",
    // U  4   Br -1    2.60     0.40     p   ?
    "U  4   Br -1    2.61     0.37     e   unchecked",
    "U  4   I  -1    2.88     0.37     e   unchecked",
    "U  4   N  -3    2.18     0.37     e   unchecked",
    "U  5   O  -2    2.075    0.37     b   ?",
    // U  5   O  -2    2.10     0.35     p   ?
    "U  5   F  -1    1.966    0.37     b   ?",
    // U  5   F  -1    1.99     0.40     p   ?
    "U  5   Cl -1    2.46     0.37     b   ?",
    // U  5   Cl -1    2.43     0.40     p   ?
    "U  5   Br -1    2.7      0.35     e   unchecked",
    // U  6   O  -2    2.051    0.519    r   ?
    "U  6   O  -2    2.075    0.37     a   ?",
    // U  6   O  -2    2.08     0.35     p   ?
    "U  6   F  -1    1.98     0.40     p   ?",
    "U  6   Cl -1    2.42     0.40     p   ?",
    "U  6   N  -3    1.93     0.35     e   unchecked",
    "U  9   Br -1    2.63     0.37     b   ?",
    "U  9   I  -1    2.84     0.37     b   ?",
    "U  9   S  -2    2.56     0.37     b   ?",
    "U  9   Se -2    2.70     0.37     b   ?",
    "U  9   Te -2    2.86     0.37     b   ?",
    "U  9   N  -3    2.24     0.37     b   ?",
    "U  9   P  -3    2.64     0.37     b   ?",
    "U  9   As -3    2.72     0.37     b   ?",
    "U  9   H  -1    1.97     0.37     b   ?",
    "V  1   O  -2    1.88     0.37     e   unchecked",
    "V  1   Cl -1    2.00     0.35     e   unchecked",
    "V  2   O  -2    1.70     0.37     e   unchecked",
    "V  2   S  -2    2.11     0.37     e   unchecked",
    "V  2   F  -1    2.16     0.37     e   unchecked",
    "V  2   Cl -1    2.44     0.37     e   unchecked",
    "V  3   O  -2    1.743    0.37     a   ?",
    // V  3   O  -2    1.749    0.37     j   'from transition metal complexes'
    // V  3   S  -2    2.17     0.37     e   unchecked
    "V  3   S  -2    2.185    0.37     j   ?",
    "V  3   F  -1    1.702    0.37     b   ?",
    "V  3   Cl -1    2.19     0.37     b   ?",
    "V  3   Br -1    2.33     0.35     e   unchecked",
    "V  3   N  -3    1.813    0.37     j   'from transition metal complexes'",
    // V  3   N  -3    1.84     0.35     e   unchecked
    "V  4   O  -2    1.784    0.37     a   ?",
    // V  4   O  -2    1.780    0.37     j   'from transition metal complexes'
    // V  4   O  -2    1.735    0.37     j   'vanadyl bond only'
    "V  4   S  -2    2.226    0.37     j   'from transition metal complexes'",
    // V  4   S  -2    2.181    0.37     j   'vanadyl bond only'
    // V  4   S  -2    2.24     0.37     e   unchecked
    "V  4   F  -1    1.70     0.37     b   ?",
    "V  4   Cl -1    2.16     0.37     b   ?",
    "V  4   N  -3    1.875    0.37     j   'from transition metal complexes'",
    "V  5   O  -2    1.803    0.37     a   ?",
    // V  5   O  -2    1.799    0.37     x   ?
    "V  5   S  -2    2.25     0.37     e   unchecked",
    "V  5   F  -1    1.70     0.37     e   unchecked",
    "V  5   Cl -1    2.16     0.37     b   ?",
    "V  9   O  -2    1.788    0.32     ag  'All oxidation states'",
    // V  9   O  -2    1.81     0.34     o   ?
    "V  9   Br -1    2.30     0.37     b   ?",
    "V  9   I  -1    2.51     0.37     b   ?",
    "V  9   S  -2    2.23     0.37     b   ?",
    "V  9   Se -2    2.33     0.37     b   ?",
    "V  9   Te -2    2.57     0.37     b   ?",
    "V  9   N  -3    1.86     0.37     b   ?",
    "V  9   P  -3    2.31     0.37     b   ?",
    "V  9   As -3    2.39     0.37     b   ?",
    "V  9   H  -1    1.58     0.37     b   ?",
    "W  4   O  -2    1.851    0.37     aj  ?",
    "W  5   O  -2    1.881    0.37     aj  ?",
    // W  6   O  -2    1.917    0.37     a   ?
    // W  6   O  -2    1.916    0.41     x   ?
    "W  6   O  -2    1.921    0.37     b   ?",
    // W  6   O  -2    1.906    0.37     aj  ?
    "W  6   F  -1    1.83     0.37     b   ?",
    "W  6   Cl -1    2.27     0.37     b   ?",
    "W  9   O  -2    1.896    0.28     aj  'fitted to all oxidation states'",
    "W  9   Br -1    2.45     0.37     b   ?",
    "W  9   I  -1    2.66     0.37     b   ?",
    "W  9   S  -2    2.39     0.37     b   ?",
    "W  9   Se -2    2.51     0.37     b   ?",
    "W  9   Te -2    2.71     0.37     b   ?",
    "W  9   N  -3    2.06     0.37     b   ?",
    "W  9   P  -3    2.46     0.37     b   ?",
    "W  9   As -3    2.54     0.37     b   ?",
    "W  9   H  -1    1.76     0.37     b   ?",
    "Xe 2   O  -2    2.05     0.35     e   unchecked",
    "Xe 2   F  -1    2.02     0.37     e   unchecked",
    "Xe 4   F  -1    1.93     0.37     e   unchecked",
    "Xe 6   O  -2    2.00     0.37     e   unchecked",
    "Xe 6   F  -1    1.89     0.37     e   unchecked",
    "Xe 8   O  -2    1.94     0.37     e   unchecked",
    // Y  3   O  -2    2.019    0.37     a   ?
    "Y  3   O  -2    2.014    0.37     b   ?",
    "Y  3   S  -2    2.48     0.37     b   ?",
    "Y  3   Se -2    2.61     0.37     b   ?",
    "Y  3   Te -2    2.80     0.37     b   ?",
    "Y  3   F  -1    1.904    0.37     b   ?",
    // Y  3   F  -1    1.87     0.37     e   unchecked
    "Y  3   Cl -1    2.40     0.37     b   ?",
    "Y  3   Br -1    2.55     0.37     b   ?",
    "Y  3   I  -1    2.77     0.37     b   ?",
    "Y  3   N  -3    2.17     0.37     b   ?",
    "Y  3   P  -3    2.57     0.37     b   ?",
    "Y  3   As -3    2.64     0.37     b   ?",
    "Y  3   H  -1    1.86     0.37     b   ?",
    "Yb 2   O  -2    1.989    0.37     al  ?",
    "Yb 2   N  -3    2.092    0.37     al  ?",
    // Yb 3   O  -2    1.965    0.37     a   ?
    "Yb 3   O  -2    1.985    0.37     b   ?",
    // Yb 3   O  -2    1.954    0.37     ae  'from transition metal complexes'
    "Yb 3   S  -2    2.43     0.37     b   ?",
    "Yb 3   Se -2    2.56     0.37     b   ?",
    "Yb 3   Te -2    2.76     0.37     b   ?",
    "Yb 3   F  -1    1.875    0.37     b   ?",
    // Yb 3   F  -1    1.85     0.40     p   ?
    // Yb 3   F  -1    1.90     0.37     e   unchecked
    "Yb 3   Cl -1    2.371    0.37     b   ?",
    // Yb 3   Cl -1    2.376    0.37     al  ?
    // Yb 3   Cl -1    2.34     0.40     p   ?
    "Yb 3   Br -1    2.451    0.37     b   ?",
    // Yb 3   Br -1    2.49     0.40     p   ?
    "Yb 3   I  -1    2.72     0.37     b   ?",
    // Yb 3   I  -1    2.74     0.40     p   ?
    // Yb 3   N  -3    2.064    0.37     ah  ?
    "Yb 3   N  -3    2.12     0.37     b   ?",
    "Yb 3   P  -3    2.53     0.37     b   ?",
    "Yb 3   As -3    2.59     0.37     b   ?",
    "Yb 3   H  -1    1.82     0.37     b   ?",
    "Zn 2   O  -2    1.704    0.37     a   ?",
    // Zn 2   O  -2    1.675    0.39     o   ?
    "Zn 2   S  -2    2.09     0.37     b   ?",
    "Zn 2   Se -2    2.22     0.37     b   ?",
    "Zn 2   Te -2    2.45     0.37     b   ?",
    "Zn 2   F  -1    1.62     0.37     b   ?",
    // Zn 2   F  -1    1.67     0.37     e   unchecked
    "Zn 2   Cl -1    2.01     0.37     b   ?",
    "Zn 2   Br -1    2.15     0.37     b   ?",
    "Zn 2   I  -1    2.36     0.37     b   ?",
    "Zn 2   N  -3    1.72     0.37     e   unchecked",
    "Zn 2   P  -3    2.15     0.37     b   ?",
    "Zn 2   As -3    2.24     0.37     b   ?",
    "Zn 2   H  -1    1.42     0.37     b   ?",
    "Zr 2   O  -2    2.34     0.37     e   unchecked",
    "Zr 2   F  -1    2.24     0.37     e   unchecked",
    "Zr 2   Cl -1    2.58     0.37     e   unchecked",
    // Zr 4   O  -2    1.928    0.37     a   ?
    "Zr 4   O  -2    1.937    0.37     b   ?",
    "Zr 4   S  -2    2.41     0.37     b   ?",
    "Zr 4   Se -2    2.53     0.37     b   ?",
    "Zr 4   Te -2    2.67     0.37     b   ?",
    // Zr 4   F  -1    1.846    0.37     a   ?
    "Zr 4   F  -1    1.854    0.37     b   ?",
    "Zr 4   Cl -1    2.33     0.37     b   ?",
    "Zr 4   Br -1    2.48     0.37     b   ?",
    "Zr 4   I  -1    2.69     0.37     b   ?",
    "Zr 4   N  -3    2.11     0.37     b   ?",
    // Zr 4   N  -3    2.15     0.37     e   unchecked
    "Zr 4   P  -3    2.52     0.37     b   ?",
    "Zr 4   As -3    2.57     0.37     b   ?",
    "Zr 4   H  -1    1.79     0.37     b   ?",
    NULL,
/*
#### EOF #### EOF #### EOF #### EOF #### EOF #### EOF #### EOF #### EOF ###
*/
};

}   // namespace srreal
}   // namespace diffpy

// End of file
