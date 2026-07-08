// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#ifndef __GMATH_TYPES_H__
#define __GMATH_TYPES_H__

#include <inttypes.h>
#include <stdint.h>
#include <tgmath.h>

#define ___GMATH_EVAL(...) __VA_ARGS__

#define ___GMATH_VECTOR_TYPE_LIST(VEC, SEP)                      \
    VEC(Vec, float) SEP VEC(DVec, double) SEP VEC(I8Vec, int8_t) \
    SEP VEC(U8Vec, uint8_t)                                      \
    SEP VEC(I16Vec, int16_t)                                     \
    SEP VEC(U16Vec, uint16_t)                                    \
    SEP VEC(I32Vec, int32_t)                                     \
    SEP VEC(U32Vec, uint32_t)                                    \
    SEP VEC(I64Vec, int64_t)                                     \
    SEP VEC(U64Vec, uint64_t)

#define GMATH_VEC2_DECLARER(name, T) \
    typedef struct Gmath##name##2 {  \
        union {                      \
            struct {                 \
                union {              \
                    T x;             \
                    T r;             \
                    T s;             \
                };                   \
                union {              \
                    T y;             \
                    T g;             \
                    T t;             \
                };                   \
            };                       \
            T v[2];                  \
        };                           \
    }                                \
    Gmath##name##2;

#define GMATH_VEC3_DECLARER(name, T) \
    typedef struct Gmath##name##3 {  \
        union {                      \
            struct {                 \
                union {              \
                    T x;             \
                    T r;             \
                    T s;             \
                };                   \
                union {              \
                    T y;             \
                    T g;             \
                    T t;             \
                };                   \
                union {              \
                    T z;             \
                    T b;             \
                    T p;             \
                };                   \
            };                       \
            T v[3];                  \
        };                           \
    }                                \
    Gmath##name##3;

#define GMATH_VEC4_DECLARER(name, T) \
    typedef struct Gmath##name##4 {  \
        union {                      \
            struct {                 \
                union {              \
                    T x;             \
                    T r;             \
                    T s;             \
                };                   \
                union {              \
                    T y;             \
                    T g;             \
                    T t;             \
                };                   \
                union {              \
                    T z;             \
                    T b;             \
                    T p;             \
                };                   \
                union {              \
                    T w;             \
                    T a;             \
                    T q;             \
                };                   \
            };                       \
            T v[4];                  \
        };                           \
    }                                \
    Gmath##name##4;

___GMATH_VECTOR_TYPE_LIST(GMATH_VEC2_DECLARER, )
___GMATH_VECTOR_TYPE_LIST(GMATH_VEC3_DECLARER, )
___GMATH_VECTOR_TYPE_LIST(GMATH_VEC4_DECLARER, )

#undef GMATH_VEC2_DECLARER
#undef GMATH_VEC3_DECLARER
#undef GMATH_VEC4_DECLARER

#define ___GMATH_VECTOR_TYPES(VEC, SEP)                                                                              \
    VEC(Vec, float, 2)                                                                                               \
    SEP VEC(DVec, double, 2) SEP VEC(I8Vec, int8_t, 2) SEP VEC(U8Vec, uint8_t, 2) SEP VEC(I16Vec, int16_t, 2)        \
        SEP VEC(U16Vec, uint16_t, 2) SEP VEC(I32Vec, int32_t, 2) SEP VEC(U32Vec, uint32_t, 2)                        \
            SEP VEC(I64Vec, int64_t, 2) SEP VEC(U64Vec, uint64_t, 2) SEP VEC(Vec, float, 3) SEP VEC(DVec, double, 3) \
                SEP VEC(I8Vec, int8_t, 3) SEP VEC(U8Vec, uint8_t, 3) SEP VEC(I16Vec, int16_t, 3)                     \
                    SEP VEC(U16Vec, uint16_t, 3) SEP VEC(I32Vec, int32_t, 3) SEP VEC(U32Vec, uint32_t, 3)            \
                        SEP VEC(I64Vec, int64_t, 3) SEP VEC(U64Vec, uint64_t, 3) SEP VEC(Vec, float, 4)              \
                            SEP VEC(DVec, double, 4) SEP VEC(I8Vec, int8_t, 4) SEP VEC(U8Vec, uint8_t, 4)            \
                                SEP VEC(I16Vec, int16_t, 4) SEP VEC(U16Vec, uint16_t, 4) SEP VEC(I32Vec, int32_t, 4) \
                                    SEP VEC(U32Vec, uint32_t, 4) SEP VEC(I64Vec, int64_t, 4)                         \
                                        SEP VEC(U64Vec, uint64_t, 4)

#define ___GMATH_VECTOR2_TYPES(VEC, SEP)                                                                      \
    VEC(Vec, float, 2)                                                                                        \
    SEP VEC(DVec, double, 2) SEP VEC(I8Vec, int8_t, 2) SEP VEC(U8Vec, uint8_t, 2) SEP VEC(I16Vec, int16_t, 2) \
        SEP VEC(U16Vec, uint16_t, 2) SEP VEC(I32Vec, int32_t, 2) SEP VEC(U32Vec, uint32_t, 2)                 \
            SEP VEC(I64Vec, int64_t, 2) SEP VEC(U64Vec, uint64_t, 2)

#define ___GMATH_VECTOR3_TYPES(VEC, SEP)                                                                      \
    VEC(Vec, float, 3)                                                                                        \
    SEP VEC(DVec, double, 3) SEP VEC(I8Vec, int8_t, 3) SEP VEC(U8Vec, uint8_t, 3) SEP VEC(I16Vec, int16_t, 3) \
        SEP VEC(U16Vec, uint16_t, 3) SEP VEC(I32Vec, int32_t, 3) SEP VEC(U32Vec, uint32_t, 3)                 \
            SEP VEC(I64Vec, int64_t, 3) SEP VEC(U64Vec, uint64_t, 3)

#define ___GMATH_VECTOR4_TYPES(VEC, SEP)                                                                      \
    VEC(Vec, float, 4)                                                                                        \
    SEP VEC(DVec, double, 4) SEP VEC(I8Vec, int8_t, 4) SEP VEC(U8Vec, uint8_t, 4) SEP VEC(I16Vec, int16_t, 4) \
        SEP VEC(U16Vec, uint16_t, 4) SEP VEC(I32Vec, int32_t, 4) SEP VEC(U32Vec, uint32_t, 4)                 \
            SEP VEC(I64Vec, int64_t, 4) SEP VEC(U64Vec, uint64_t, 4)

#define ___GMATH_FLOATING_VECTOR_TYPES(VEC, SEP)                                                    \
    VEC(Vec, float, 2)                                                                              \
    SEP VEC(DVec, double, 2) SEP VEC(Vec, float, 3) SEP VEC(DVec, double, 3) SEP VEC(Vec, float, 4) \
        SEP VEC(DVec, double, 4)

#define GMATH_VECTOR_METHODS_DECLARER(name, T, length)                                                                \
    static inline Gmath##name##length gmathBroadcast##name##length(T value) {                                         \
        Gmath##name##length ret;                                                                                      \
        for (int i = 0; i < length; i++) {                                                                            \
            ret.v[i] = value;                                                                                         \
        }                                                                                                             \
        return ret;                                                                                                   \
    }                                                                                                                 \
    static inline Gmath##name##length gmathAdd##name##length(Gmath##name##length lhs, Gmath##name##length rhs) {      \
        Gmath##name##length ret;                                                                                      \
        for (int i = 0; i < length; i++) {                                                                            \
            ret.v[i] = lhs.v[i] + rhs.v[i];                                                                           \
        }                                                                                                             \
        return ret;                                                                                                   \
    }                                                                                                                 \
    static inline Gmath##name##length gmathSub##name##length(Gmath##name##length lhs, Gmath##name##length rhs) {      \
        Gmath##name##length ret;                                                                                      \
        for (int i = 0; i < length; i++) {                                                                            \
            ret.v[i] = lhs.v[i] - rhs.v[i];                                                                           \
        }                                                                                                             \
        return ret;                                                                                                   \
    }                                                                                                                 \
    static inline Gmath##name##length gmathMul##name##length(Gmath##name##length lhs, Gmath##name##length rhs) {      \
        Gmath##name##length ret;                                                                                      \
        for (int i = 0; i < length; i++) {                                                                            \
            ret.v[i] = lhs.v[i] * rhs.v[i];                                                                           \
        }                                                                                                             \
        return ret;                                                                                                   \
    }                                                                                                                 \
    static inline Gmath##name##length gmathDiv##name##length(Gmath##name##length lhs, Gmath##name##length rhs) {      \
        Gmath##name##length ret;                                                                                      \
        for (int i = 0; i < length; i++) {                                                                            \
            ret.v[i] = lhs.v[i] / rhs.v[i];                                                                           \
        }                                                                                                             \
        return ret;                                                                                                   \
    }                                                                                                                 \
    static inline T gmathSum##name##length(Gmath##name##length value) {                                               \
        T ret = (T)0;                                                                                                 \
        for (int i = 0; i < length; i++) {                                                                            \
            ret += value.v[i];                                                                                        \
        }                                                                                                             \
        return ret;                                                                                                   \
    }                                                                                                                 \
    static inline T gmathDot##name##length(Gmath##name##length lhs, Gmath##name##length rhs) {                        \
        return gmathSum##name##length(gmathMul##name##length(lhs, rhs));                                              \
    }                                                                                                                 \
    static inline T gmathLength2##name##length(Gmath##name##length value) {                                           \
        return gmathDot##name##length(value, value);                                                                  \
    }                                                                                                                 \
    static inline Gmath##name##length gmathReflect##name##length(Gmath##name##length I_, Gmath##name##length N_) {    \
        return gmathSub##name##length(                                                                                \
            I_,                                                                                                       \
            gmathMul##name##length(gmathBroadcast##name##length((T)2 * gmathDot##name##length(N_, I_)), N_)           \
        );                                                                                                            \
    }                                                                                                                 \
    static inline GmathVec##length gmathVec##length##From##name##length(Gmath##name##length value) {                  \
        GmathVec##length ret;                                                                                         \
        for (int i = 0; i < length; i++) {                                                                            \
            ret.v[i] = (float)value.v[i];                                                                             \
        }                                                                                                             \
        return ret;                                                                                                   \
    }                                                                                                                 \
    static inline GmathDVec##length gmathDVec##length##From##name##length(Gmath##name##length value) {                \
        GmathDVec##length ret;                                                                                        \
        for (int i = 0; i < length; i++) {                                                                            \
            ret.v[i] = (double)value.v[i];                                                                            \
        }                                                                                                             \
        return ret;                                                                                                   \
    }                                                                                                                 \
    static inline GmathI8Vec##length gmathI8Vec##length##From##name##length(Gmath##name##length value) {              \
        GmathI8Vec##length ret;                                                                                       \
        for (int i = 0; i < length; i++) {                                                                            \
            ret.v[i] = (int8_t)value.v[i];                                                                            \
        }                                                                                                             \
        return ret;                                                                                                   \
    }                                                                                                                 \
    static inline GmathU8Vec##length gmathU8Vec##length##From##name##length(Gmath##name##length value) {              \
        GmathU8Vec##length ret;                                                                                       \
        for (int i = 0; i < length; i++) {                                                                            \
            ret.v[i] = (uint8_t)value.v[i];                                                                           \
        }                                                                                                             \
        return ret;                                                                                                   \
    }                                                                                                                 \
    static inline GmathI16Vec##length gmathI16Vec##length##From##name##length(Gmath##name##length value) {            \
        GmathI16Vec##length ret;                                                                                      \
        for (int i = 0; i < length; i++) {                                                                            \
            ret.v[i] = (int16_t)value.v[i];                                                                           \
        }                                                                                                             \
        return ret;                                                                                                   \
    }                                                                                                                 \
    static inline GmathU16Vec##length gmathU16Vec##length##From##name##length(Gmath##name##length value) {            \
        GmathU16Vec##length ret;                                                                                      \
        for (int i = 0; i < length; i++) {                                                                            \
            ret.v[i] = (uint16_t)value.v[i];                                                                          \
        }                                                                                                             \
        return ret;                                                                                                   \
    }                                                                                                                 \
    static inline GmathI32Vec##length gmathI32Vec##length##From##name##length(Gmath##name##length value) {            \
        GmathI32Vec##length ret;                                                                                      \
        for (int i = 0; i < length; i++) {                                                                            \
            ret.v[i] = (int32_t)value.v[i];                                                                           \
        }                                                                                                             \
        return ret;                                                                                                   \
    }                                                                                                                 \
    static inline GmathU32Vec##length gmathU32Vec##length##From##name##length(Gmath##name##length value) {            \
        GmathU32Vec##length ret;                                                                                      \
        for (int i = 0; i < length; i++) {                                                                            \
            ret.v[i] = (uint32_t)value.v[i];                                                                          \
        }                                                                                                             \
        return ret;                                                                                                   \
    }                                                                                                                 \
    static inline GmathI64Vec##length gmathI64Vec##length##From##name##length(Gmath##name##length value) {            \
        GmathI64Vec##length ret;                                                                                      \
        for (int i = 0; i < length; i++) {                                                                            \
            ret.v[i] = (int64_t)value.v[i];                                                                           \
        }                                                                                                             \
        return ret;                                                                                                   \
    }                                                                                                                 \
    static inline GmathU64Vec##length gmathU64Vec##length##From##name##length(Gmath##name##length value) {            \
        GmathU64Vec##length ret;                                                                                      \
        for (int i = 0; i < length; i++) {                                                                            \
            ret.v[i] = (uint64_t)value.v[i];                                                                          \
        }                                                                                                             \
        return ret;                                                                                                   \
    }                                                                                                                 \
    static inline Gmath##name##length gmathClamp##name##length(                                                       \
        Gmath##name##length x,                                                                                        \
        Gmath##name##length min_val,                                                                                  \
        Gmath##name##length max_val                                                                                   \
    ) {                                                                                                               \
        Gmath##name##length ret;                                                                                      \
        for (int i = 0; i < length; i++) {                                                                            \
            ret.v[i] = x.v[i] < min_val.v[i] ? min_val.v[i] : (x.v[i] > max_val.v[i] ? max_val.v[i] : x.v[i]);        \
        }                                                                                                             \
        return ret;                                                                                                   \
    }                                                                                                                 \
    static inline Gmath##name##length gmathMix##name##length(                                                         \
        Gmath##name##length x,                                                                                        \
        Gmath##name##length y,                                                                                        \
        Gmath##name##length a                                                                                         \
    ) {                                                                                                               \
        Gmath##name##length ret;                                                                                      \
        for (int i = 0; i < length; i++) {                                                                            \
            ret.v[i] = x.v[i] * ((T)1 - a.v[i]) + y.v[i] * a.v[i];                                                    \
        }                                                                                                             \
        return ret;                                                                                                   \
    }                                                                                                                 \
    static inline Gmath##name##length gmathLessThan##name##length(Gmath##name##length lhs, Gmath##name##length rhs) { \
        Gmath##name##length ret;                                                                                      \
        for (int i = 0; i < length; i++) {                                                                            \
            ret.v[i] = (T)(lhs.v[i] < rhs.v[i]);                                                                      \
        }                                                                                                             \
        return ret;                                                                                                   \
    }                                                                                                                 \
    static inline Gmath##name##length gmathGreaterThan##name##length(                                                 \
        Gmath##name##length lhs,                                                                                      \
        Gmath##name##length rhs                                                                                       \
    ) {                                                                                                               \
        Gmath##name##length ret;                                                                                      \
        for (int i = 0; i < length; i++) {                                                                            \
            ret.v[i] = (T)(lhs.v[i] > rhs.v[i]);                                                                      \
        }                                                                                                             \
        return ret;                                                                                                   \
    }                                                                                                                 \
    static inline Gmath##name##length gmathLessThanEqual##name##length(                                               \
        Gmath##name##length lhs,                                                                                      \
        Gmath##name##length rhs                                                                                       \
    ) {                                                                                                               \
        Gmath##name##length ret;                                                                                      \
        for (int i = 0; i < length; i++) {                                                                            \
            ret.v[i] = (T)(lhs.v[i] <= rhs.v[i]);                                                                     \
        }                                                                                                             \
        return ret;                                                                                                   \
    }                                                                                                                 \
    static inline Gmath##name##length gmathGreaterThanEqual##name##length(                                            \
        Gmath##name##length lhs,                                                                                      \
        Gmath##name##length rhs                                                                                       \
    ) {                                                                                                               \
        Gmath##name##length ret;                                                                                      \
        for (int i = 0; i < length; i++) {                                                                            \
            ret.v[i] = (T)(lhs.v[i] >= rhs.v[i]);                                                                     \
        }                                                                                                             \
        return ret;                                                                                                   \
    }                                                                                                                 \
    static inline Gmath##name##length gmathEqual##name##length(Gmath##name##length lhs, Gmath##name##length rhs) {    \
        Gmath##name##length ret;                                                                                      \
        for (int i = 0; i < length; i++) {                                                                            \
            ret.v[i] = (T)(lhs.v[i] == rhs.v[i]);                                                                     \
        }                                                                                                             \
        return ret;                                                                                                   \
    }                                                                                                                 \
    static inline Gmath##name##length gmathNotEqual##name##length(Gmath##name##length lhs, Gmath##name##length rhs) { \
        Gmath##name##length ret;                                                                                      \
        for (int i = 0; i < length; i++) {                                                                            \
            ret.v[i] = (T)(lhs.v[i] != rhs.v[i]);                                                                     \
        }                                                                                                             \
        return ret;                                                                                                   \
    }

#define GMATH_FLOATING_VECTOR_METHODS_DECLARER(name, T, length)                                      \
    static inline T gmathLength##name##length(Gmath##name##length value) {                           \
        return sqrt(gmathLength2##name##length(value));                                              \
    }                                                                                                \
    static inline T gmathDistance##name##length(Gmath##name##length lhs, Gmath##name##length rhs) {  \
        return gmathLength##name##length(gmathSub##name##length(rhs, lhs));                          \
    }                                                                                                \
    static inline Gmath##name##length gmathNormalize##name##length(Gmath##name##length value) {      \
        T l = gmathLength##name##length(value);                                                      \
        if (l == (T)0) {                                                                             \
            return value;                                                                            \
        }                                                                                            \
        return gmathDiv##name##length(value, gmathBroadcast##name##length(l));                       \
    }                                                                                                \
    static inline Gmath##name##length gmathRefract##name##length(                                    \
        Gmath##name##length I_,                                                                      \
        Gmath##name##length N_,                                                                      \
        T eta                                                                                        \
    ) {                                                                                              \
        T NdotI = gmathDot##name##length(N_, I_);                                                    \
        T k = (T)1 - eta * eta * ((T)1 - NdotI * NdotI);                                             \
        if (k < (T)0) {                                                                              \
            return gmathBroadcast##name##length((T)0);                                               \
        } else {                                                                                     \
            return gmathSub##name##length(                                                           \
                gmathMul##name##length(gmathBroadcast##name##length(eta), I_),                       \
                gmathMul##name##length(gmathBroadcast##name##length((T)(eta * NdotI + sqrt(k))), N_) \
            );                                                                                       \
        }                                                                                            \
    }

___GMATH_VECTOR_TYPES(GMATH_VECTOR_METHODS_DECLARER, )
___GMATH_FLOATING_VECTOR_TYPES(GMATH_FLOATING_VECTOR_METHODS_DECLARER, )
#undef GMATH_VECTOR_METHODS_DECLARER
#undef GMATH_FLOATING_VECTOR_METHODS_DECLARER

#define ___GMATH_COMMA ,

#define ___GMATH_BROADCAST2_GENERICER(name, T) \
    T:                                         \
    gmathBroadcast##name##2
#define gmathBroadcast2(value) \
    _Generic((value), ___GMATH_VECTOR_TYPE_LIST(___GMATH_BROADCAST2_GENERICER, ___GMATH_COMMA))(value)

#define ___GMATH_BROADCAST3_GENERICER(name, T, _) \
    T:                                            \
    gmathBroadcast##name##3
#define gmathBroadcast3(value) \
    _Generic((value), ___GMATH_VECTOR_TYPE_LIST(___GMATH_BROADCAST3_GENERICER, ___GMATH_COMMA))(value)

#define ___GMATH_BROADCAST4_GENERICER(name, T, _) \
    T:                                            \
    gmathBroadcast##name##4
#define gmathBroadcast4(value) \
    _Generic((value), ___GMATH_VECTOR_TYPE_LIST(___GMATH_BROADCAST4_GENERICER, ___GMATH_COMMA))(value)

#define ___GMATH_ADD_GENERICER(name, _, length) Gmath##name##length : gmathAdd##name##length
#define gmathAdd(lhs, rhs) _Generic((lhs), ___GMATH_VECTOR_TYPES(___GMATH_ADD_GENERICER, ___GMATH_COMMA))(lhs, rhs)

#define ___GMATH_SUB_GENERICER(name, _, length) Gmath##name##length : gmathSub##name##length
#define gmathSub(lhs, rhs) _Generic((lhs), ___GMATH_VECTOR_TYPES(___GMATH_SUB_GENERICER, ___GMATH_COMMA))(lhs, rhs)

#define ___GMATH_MUL_GENERICER(name, _, length) Gmath##name##length : gmathMul##name##length
#define gmathMul(lhs, rhs) _Generic((lhs), ___GMATH_VECTOR_TYPES(___GMATH_MUL_GENERICER, ___GMATH_COMMA))(lhs, rhs)

#define ___GMATH_DIV_GENERICER(name, _, length) Gmath##name##length : gmathDiv##name##length
#define gmathDiv(lhs, rhs) _Generic((lhs), ___GMATH_VECTOR_TYPES(___GMATH_DIV_GENERICER, ___GMATH_COMMA))(lhs, rhs)

#define ___GMATH_SUM_GENERICER(name, _, length) Gmath##name##length : gmathSum##name##length
#define gmathSum(value) _Generic((value), ___GMATH_VECTOR_TYPES(___GMATH_SUM_GENERICER, ___GMATH_COMMA))(value)

#define ___GMATH_DOT_GENERICER(name, _, length) Gmath##name##length : gmathDot##name##length
#define gmathDot(value) _Generic((value), ___GMATH_VECTOR_TYPES(___GMATH_DOT_GENERICER, ___GMATH_COMMA))(value)

#define ___GMATH_LENGTH2_GENERICER(name, _, length) Gmath##name##length : gmathLength2##name##length
#define gmathLength2(value) _Generic((value), ___GMATH_VECTOR_TYPES(___GMATH_LENGTH2_GENERICER, ___GMATH_COMMA))(value)

#define ___GMATH_REFLECT_GENERICER(name, _, length) Gmath##name##length : gmathReflect##name##length
#define gmathReflect(I_, N_) _Generic((I_), ___GMATH_VECTOR_TYPES(___GMATH_REFLECT_GENERICER, ___GMATH_COMMA))(I_, N_)

#define ___GMATH_VEC_FROM_GENERICER(name, _, length) Gmath##name##length : gmathVec##length##From##name##length
#define gmathVecFrom(value) _Generic((value), ___GMATH_VECTOR_TYPES(___GMATH_VEC_FROM_GENERICER, ___GMATH_COMMA))(value)

#define ___GMATH_DVEC_FROM_GENERICER(name, _, length) Gmath##name##length : gmathDVec##length##From##name##length
#define gmathDVecFrom(value) \
    _Generic((value), ___GMATH_VECTOR_TYPES(___GMATH_DVEC_FROM_GENERICER, ___GMATH_COMMA))(value)

#define ___GMATH_I8VEC_FROM_GENERICER(name, _, length) Gmath##name##length : gmathI8Vec##length##From##name##length
#define gmathI8VecFrom(value) \
    _Generic((value), ___GMATH_VECTOR_TYPES(___GMATH_I8VEC_FROM_GENERICER, ___GMATH_COMMA))(value)

#define ___GMATH_U8VEC_FROM_GENERICER(name, _, length) Gmath##name##length : gmathU8Vec##length##From##name##length
#define gmathU8VecFrom(value) \
    _Generic((value), ___GMATH_VECTOR_TYPES(___GMATH_U8VEC_FROM_GENERICER, ___GMATH_COMMA))(value)

#define ___GMATH_I16VEC_FROM_GENERICER(name, _, length) Gmath##name##length : gmathI16Vec##length##From##name##length
#define gmathI16VecFrom(value) \
    _Generic((value), ___GMATH_VECTOR_TYPES(___GMATH_I16VEC_FROM_GENERICER, ___GMATH_COMMA))(value)

#define ___GMATH_U16VEC_FROM_GENERICER(name, _, length) Gmath##name##length : gmathU16Vec##length##From##name##length
#define gmathU16VecFrom(value) \
    _Generic((value), ___GMATH_VECTOR_TYPES(___GMATH_U16VEC_FROM_GENERICER, ___GMATH_COMMA))(value)

#define ___GMATH_I32VEC_FROM_GENERICER(name, _, length) Gmath##name##length : gmathI32Vec##length##From##name##length
#define gmathI32VecFrom(value) \
    _Generic((value), ___GMATH_VECTOR_TYPES(___GMATH_I32VEC_FROM_GENERICER, ___GMATH_COMMA))(value)

#define ___GMATH_U32VEC_FROM_GENERICER(name, _, length) Gmath##name##length : gmathU32Vec##length##From##name##length
#define gmathU32VecFrom(value) \
    _Generic((value), ___GMATH_VECTOR_TYPES(___GMATH_U32VEC_FROM_GENERICER, ___GMATH_COMMA))(value)

#define ___GMATH_I64VEC_FROM_GENERICER(name, _, length) Gmath##name##length : gmathI64Vec##length##From##name##length
#define gmathI64VecFrom(value) \
    _Generic((value), __Vec2_GMATH_VECTOR_TYPES(___GMATH_I64VEC_FROM_GENERICER, ___GMATH_COMMA))(value)

#define ___GMATH_U64VEC_FROM_GENERICER(name, _, length) Gmath##name##length : gmathU64Vec##length##From##name##length
#define gmathU64VecFrom(value) \
    _Generic((value), ___GMATH_VECTOR_TYPES(___GMATH_U64VEC_FROM_GENERICER, ___GMATH_COMMA))(value)

#define ___GMATH_CLAMP_GENERICER(name, _, length) Gmath##name##length : gmathClamp##name##length
#define gmathClamp(x, min_val, max_val) \
    _Generic((x), ___GMATH_VECTOR_TYPES(___GMATH_CLAMP_GENERICER, ___GMATH_COMMA))(x, min_val, max_val)

#define ___GMATH_MIX_GENERICER(name, _, length) Gmath##name##length : gmathMix##name##length
#define gmathMix(x, y, a) _Generic((x), ___GMATH_VECTOR_TYPES(___GMATH_MIX_GENERICER, ___GMATH_COMMA))(x, y, a)

#define ___GMATH_LESS_THAN_GENERICER(name, _, length) Gmath##name##length : gmathLessThan##name##length
#define gmathLessThan(lhs, rhs) \
    _Generic((lhs), ___GMATH_VECTOR_TYPES(___GMATH_LESS_THAN_GENERICER, ___GMATH_COMMA))(lhs, rhs)

#define ___GMATH_GREATER_THAN_GENERICER(name, _, length) Gmath##name##length : gmathGreaterThan##name##length
#define gmathGreaterThan(lhs, rhs) \
    _Generic((lhs), ___GMATH_VECTOR_TYPES(___GMATH_GREATER_THAN_GENERICER, ___GMATH_COMMA))(lhs, rhs)

#define ___GMATH_LESS_THAN_EQUAL_GENERICER(name, _, length) Gmath##name##length : gmathLessThanEqual##name##length
#define gmathLessThanEqual(lhs, rhs) \
    _Generic((lhs), ___GMATH_VECTOR_TYPES(___GMATH_LESS_THAN_EQUAL_GENERICER, ___GMATH_COMMA))(lhs, rhs)

#define ___GMATH_GREATER_THAN_EQUAL_GENERICER(name, _, length) Gmath##name##length : gmathGreaterThanEqual##name##length
#define gmathGreaterThanEqual(lhs, rhs) \
    _Generic((lhs), ___GMATH_VECTOR_TYPES(___GMATH_GREATER_THAN_EQUAL_GENERICER, ___GMATH_COMMA))(lhs, rhs)

#define ___GMATH_EQUAL_GENERICER(name, _, length) Gmath##name##length : gmathEqual##name##length
#define gmathEqual(lhs, rhs) _Generic((lhs), ___GMATH_VECTOR_TYPES(___GMATH_EQUAL_GENERICER, ___GMATH_COMMA))(lhs, rhs)

#define ___GMATH_NOT_EQUAL_GENERICER(name, _, length) Gmath##name##length : gmathNotEqual##name##length
#define gmathNotEqual(lhs, rhs) \
    _Generic((lhs), ___GMATH_VECTOR_TYPES(___GMATH_NOT_EQUAL_GENERICER, ___GMATH_COMMA))(lhs, rhs)

static inline GmathVec2 gmathUintBitsToFloat2(GmathU32Vec2 value) {
    union {
        GmathU32Vec2 i;
        GmathVec2 o;
    } caster = {.i = value};
    return caster.o;
}
static inline GmathVec3 gmathUintBitsToFloat3(GmathU32Vec3 value) {
    union {
        GmathU32Vec3 i;
        GmathVec3 o;
    } caster = {.i = value};
    return caster.o;
}
static inline GmathVec4 gmathUintBitsToFloat4(GmathU32Vec4 value) {
    union {
        GmathU32Vec4 i;
        GmathVec4 o;
    } caster = {.i = value};
    return caster.o;
}
#define gmathUintBitsToFloat(value)                                                                                                   \
    _Generic((value), GmathU32Vec2: gmathUintBitsToFloat2, GmathU32Vec3: gmathUintBitsToFloat3, GmathU32Vec4: gmathUintBitsToFloat4)( \
        value                                                                                                                         \
    )

static inline GmathVec2 gmathIntBitsToFloat2(GmathI32Vec2 value) {
    union {
        GmathI32Vec2 i;
        GmathVec2 o;
    } caster = {.i = value};
    return caster.o;
}
static inline GmathVec3 gmathIntBitsToFloat3(GmathI32Vec3 value) {
    union {
        GmathI32Vec3 i;
        GmathVec3 o;
    } caster = {.i = value};
    return caster.o;
}
static inline GmathVec4 gmathIntBitsToFloat4(GmathI32Vec4 value) {
    union {
        GmathI32Vec4 i;
        GmathVec4 o;
    } caster = {.i = value};
    return caster.o;
}
#define gmathIntBitsToFloat(value)                                                                                                 \
    _Generic((value), GmathI32Vec2: gmathIntBitsToFloat2, GmathI32Vec3: gmathIntBitsToFloat3, GmathI32Vec4: gmathIntBitsToFloat4)( \
        value                                                                                                                      \
    )

static inline GmathU32Vec2 gmathFloatBitsToUint2(GmathVec2 value) {
    union {
        GmathVec2 i;
        GmathU32Vec2 o;
    } caster = {.i = value};
    return caster.o;
}
static inline GmathU32Vec3 gmathFloatBitsToUint3(GmathVec3 value) {
    union {
        GmathVec3 i;
        GmathU32Vec3 o;
    } caster = {.i = value};
    return caster.o;
}
static inline GmathU32Vec4 gmathFloatBitsToUint4(GmathVec4 value) {
    union {
        GmathVec4 i;
        GmathU32Vec4 o;
    } caster = {.i = value};
    return caster.o;
}
#define gmathFloatBitsToUint(value)                                                                                          \
    _Generic((value), GmathVec2: gmathFloatBitsToUint2, GmathVec3: gmathFloatBitsToUint3, GmathVec4: gmathFloatBitsToUint4)( \
        value                                                                                                                \
    )

static inline GmathI32Vec2 gmathFloatBitsToInt2(GmathVec2 value) {
    union {
        GmathVec2 i;
        GmathI32Vec2 o;
    } caster = {.i = value};
    return caster.o;
}
static inline GmathI32Vec3 gmathFloatBitsToInt3(GmathVec3 value) {
    union {
        GmathVec3 i;
        GmathI32Vec3 o;
    } caster = {.i = value};
    return caster.o;
}
static inline GmathI32Vec4 gmathFloatBitsToInt4(GmathVec4 value) {
    union {
        GmathVec4 i;
        GmathI32Vec4 o;
    } caster = {.i = value};
    return caster.o;
}
#define gmathFloatBitsToInt(value)                                                                                        \
    _Generic((value), GmathVec2: gmathFloatBitsToInt2, GmathVec3: gmathFloatBitsToInt3, GmathVec4: gmathFloatBitsToInt4)( \
        value                                                                                                             \
    )

#define GMATH_FMT_Vec2 "(%g, %g)"
#define GMATH_FMT_DVec2 "(%lg, %lg)"
#define GMATH_FMT_I8Vec2 "(%" SCNi8 ", %" SCNi8 ")"
#define GMATH_FMT_U8Vec2 "(%" SCNu8 ", %" SCNu8 ")"
#define GMATH_FMT_I16Vec2 "(%" SCNi16 ", %" SCNi16 ")"
#define GMATH_FMT_U16Vec2 "(%" SCNu16 ", %" SCNu16 ")"
#define GMATH_FMT_I32Vec2 "(%" SCNi32 ", %" SCNi32 ")"
#define GMATH_FMT_U32Vec2 "(%" SCNu32 ", %" SCNu32 ")"
#define GMATH_FMT_I64Vec2 "(%" SCNi64 ", %" SCNi64 ")"
#define GMATH_FMT_U64Vec2 "(%" SCNu64 ", %" SCNu64 ")"

#define GMATH_FMT_Vec3 "(%g, %g, %g)"
#define GMATH_FMT_DVec3 "(%lg, %lg, %lg)"
#define GMATH_FMT_I8Vec3 "(%" SCNi8 ", %" SCNi8 ", %" SCNi8 ")"
#define GMATH_FMT_U8Vec3 "(%" SCNu8 ", %" SCNu8 ", %" SCNu8 ")"
#define GMATH_FMT_I16Vec3 "(%" SCNi16 ", %" SCNi16 ", %" SCNi16 ")"
#define GMATH_FMT_U16Vec3 "(%" SCNu16 ", %" SCNu16 ", %" SCNu16 ")"
#define GMATH_FMT_I32Vec3 "(%" SCNi32 ", %" SCNi32 ", %" SCNi32 ")"
#define GMATH_FMT_U32Vec3 "(%" SCNu32 ", %" SCNu32 ", %" SCNu32 ")"
#define GMATH_FMT_I64Vec3 "(%" SCNi64 ", %" SCNi64 ", %" SCNi64 ")"
#define GMATH_FMT_U64Vec3 "(%" SCNu64 ", %" SCNu64 ", %" SCNu64 ")"

#define GMATH_FMT_Vec4 "(%g, %g, %g, %g)"
#define GMATH_FMT_DVec4 "(%lg, %lg, %lg, %lg)"
#define GMATH_FMT_I8Vec4 "(%" SCNi8 ", %" SCNi8 ", %" SCNi8 ", %" SCNi8 ")"
#define GMATH_FMT_U8Vec4 "(%" SCNu8 ", %" SCNu8 ", %" SCNu8 ", %" SCNu8 ")"
#define GMATH_FMT_I16Vec4 "(%" SCNi16 ", %" SCNi16 ", %" SCNi16 ", %" SCNi16 ")"
#define GMATH_FMT_U16Vec4 "(%" SCNu16 ", %" SCNu16 ", %" SCNu16 ", %" SCNu16 ")"
#define GMATH_FMT_I32Vec4 "(%" SCNi32 ", %" SCNi32 ", %" SCNi32 ", %" SCNi32 ")"
#define GMATH_FMT_U32Vec4 "(%" SCNu32 ", %" SCNu32 ", %" SCNu32 ", %" SCNu32 ")"
#define GMATH_FMT_I64Vec4 "(%" SCNi64 ", %" SCNi64 ", %" SCNi64 ", %" SCNi64 ")"
#define GMATH_FMT_U64Vec4 "(%" SCNu64 ", %" SCNu64 ", %" SCNu64 ", %" SCNu64 ")"

#define GMATH_PRIv2(v) v.x, v.y
#define GMATH_PRIv3(v) v.x, v.y, v.z
#define GMATH_PRIv4(v) v.x, v.y, v.z, v.w

#define GMATH_SCNv2(v) &v.x, &v.y
#define GMATH_SCNv3(v) &v.x, &v.y, &v.z
#define GMATH_SCNv4(v) &v.x, &v.y, &v.z, &v.w

#undef GMATH_VEC2_SIZE
#undef GMATH_VEC3_SIZE
#undef GMATH_VEC4_SIZE

#ifndef GMATH_NAMESPACED_ONLY

typedef GmathVec2 vec2;
typedef GmathVec3 vec3;
typedef GmathVec4 vec4;

typedef GmathDVec2 dvec2;
typedef GmathDVec3 dvec3;
typedef GmathDVec4 dvec4;

typedef GmathI8Vec2 i8vec2;
typedef GmathI8Vec3 i8vec3;
typedef GmathI8Vec4 i8vec4;

typedef GmathU8Vec2 u8vec2;
typedef GmathU8Vec3 u8vec3;
typedef GmathU8Vec4 u8vec4;

typedef GmathI16Vec2 i16vec2;
typedef GmathI16Vec3 i16vec3;
typedef GmathI16Vec4 i16vec4;

typedef GmathU16Vec2 u16vec2;
typedef GmathU16Vec3 u16vec3;
typedef GmathU16Vec4 u16vec4;

typedef GmathI32Vec2 i32vec2, ivec2;
typedef GmathI32Vec3 i32vec3, ivec3;
typedef GmathI32Vec4 i32vec4, ivec4;

typedef GmathU32Vec2 u32vec2, uvec2;
typedef GmathU32Vec3 u32vec3, uvec3;
typedef GmathU32Vec4 u32vec4, uvec4;

typedef GmathI64Vec2 i64vec2;
typedef GmathI64Vec3 i64vec3;
typedef GmathI64Vec4 i64vec4;

typedef GmathU64Vec2 u64vec2;
typedef GmathU64Vec3 u64vec3;
typedef GmathU64Vec4 u64vec4;

#define FMT_Vec2 GMATH_FMT_Vec2
#define FMT_DVec2 GMATH_FMT_DVec2
#define FMT_I8Vec2 GMATH_FMT_I8Vec2
#define FMT_U8Vec2 GMATH_FMT_U8Vec2
#define FMT_I16Vec2 GMATH_FMT_I16Vec2
#define FMT_U16Vec2 GMATH_FMT_U16Vec2
#define FMT_I32Vec2 GMATH_FMT_I32Vec2
#define FMT_U32Vec2 GMATH_FMT_U32Vec2
#define FMT_I64Vec2 GMATH_FMT_I64Vec2
#define FMT_U64Vec2 GMATH_FMT_U64Vec2

#define FMT_Vec3 GMATH_FMT_Vec3
#define FMT_DVec3 GMATH_FMT_DVec3
#define FMT_I8Vec3 GMATH_FMT_I8Vec3
#define FMT_U8Vec3 GMATH_FMT_U8Vec3
#define FMT_I16Vec3 GMATH_FMT_I16Vec3
#define FMT_U16Vec3 GMATH_FMT_U16Vec3
#define FMT_I32Vec3 GMATH_FMT_I32Vec3
#define FMT_U32Vec3 GMATH_FMT_U32Vec3
#define FMT_I64Vec3 GMATH_FMT_I64Vec3
#define FMT_U64Vec3 GMATH_FMT_U64Vec3

#define FMT_Vec4 GMATH_FMT_Vec4
#define FMT_DVec4 GMATH_FMT_DVec4
#define FMT_I8Vec4 GMATH_FMT_I8Vec4
#define FMT_U8Vec4 GMATH_FMT_U8Vec4
#define FMT_I16Vec4 GMATH_FMT_I16Vec4
#define FMT_U16Vec4 GMATH_FMT_U16Vec4
#define FMT_I32Vec4 GMATH_FMT_I32Vec4
#define FMT_U32Vec4 GMATH_FMT_U32Vec4
#define FMT_I64Vec4 GMATH_FMT_I64Vec4
#define FMT_U64Vec4 GMATH_FMT_U64Vec4

#define PRIv2(v) GMATH_PRIv2(v)
#define PRIv3(v) GMATH_PRIv3(v)
#define PRIv4(v) GMATH_PRIv4(v)

#define SCNv2(v) GMATH_SCNv2(v)
#define SCNv3(v) GMATH_SCNv3(v)
#define SCNv4(v) GMATH_SCNv4(v)

#endif

#endif
