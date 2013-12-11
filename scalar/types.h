/*  This file is part of the Vc library.

    Copyright (C) 2009-2011 Matthias Kretz <kretz@kde.org>

    Vc is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as
    published by the Free Software Foundation, either version 3 of
    the License, or (at your option) any later version.

    Vc is distributed in the hope that it will be useful, but
    WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with Vc.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef VC_SCALAR_TYPES_H
#define VC_SCALAR_TYPES_H

#ifndef VC_DOUBLE_V_SIZE
#define VC_DOUBLE_V_SIZE 1
#define VC_FLOAT_V_SIZE 1
#define VC_SFLOAT_V_SIZE 1
#define VC_INT_V_SIZE 1
#define VC_UINT_V_SIZE 1
#define VC_SHORT_V_SIZE 1
#define VC_USHORT_V_SIZE 1
#endif

#include "../common/type_traits.h"
#include "../common/types.h"

Vc_NAMESPACE_BEGIN(Scalar)
        template<typename V = float> class VectorAlignedBaseT {};
        template<typename T> class Vector;
        template<typename T> class Mask;
Vc_NAMESPACE_END

Vc_NAMESPACE_BEGIN(Common)
template<typename T> struct is_simd_mask_internal<Scalar::Mask<T>> : public std::true_type {};
template<typename T> struct is_simd_vector_internal<Scalar::Vector<T>> : public std::true_type {};
Vc_NAMESPACE_END

#endif // VC_SCALAR_TYPES_H
