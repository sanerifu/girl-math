// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#ifndef __GMATH_TYPES_H__
#define __GMATH_TYPES_H__

#include <inttypes.h>
#include <stdint.h>

#define ___GMATH_EVAL(...) __VA_ARGS__
#define ___GMATH_VECTOR_TYPES(VEC, SEP, ALS)                                                                       \
    VEC(Vec, float, (ALS(vec)))                                                                                    \
    SEP VEC(DVec, double, (ALS(dvec))) SEP VEC(I8Vec, int8_t, (ALS(i8vec))) SEP VEC(U8Vec, uint8_t, (ALS(u8vec)))  \
        SEP VEC(I16Vec, int16_t, (ALS(i16vec))) SEP VEC(U16Vec, uint16_t, (ALS(u16vec)))                           \
            SEP VEC(I32Vec, int32_t, (ALS(i32vec), ALS(ivec))) SEP VEC(U32Vec, uint32_t, (ALS(u32vec), ALS(uvec))) \
                SEP VEC(I64Vec, int64_t, (ALS(i64vec))) SEP VEC(U64Vec, uint64_t, (ALS(u64vec)))

#define GMATH_VEC2_DECLARER(name, T, _) \
    typedef struct Gmath##name##2 {     \
        union {                         \
            struct {                    \
                union {                 \
                    T x;                \
                    T r;                \
                    T s;                \
                };                      \
                union {                 \
                    T y;                \
                    T g;                \
                    T t;                \
                };                      \
            };                          \
            T v[2];                     \
        };                              \
    }                                   \
    Gmath##name##2;

#define GMATH_VEC2_METHODS_DECLARER(name, T, _)                                              \
    static inline Gmath##name##2 gmathBroadcast##name##2(T value) {                          \
        return (Gmath##name##2){.x = value, .y = value};                                     \
    }                                                                                        \
    static inline Gmath##name##2 gmathAdd##name##2(Gmath##name##2 lhs, Gmath##name##2 rhs) { \
        return (Gmath##name##2){.x = lhs.x + rhs.x, .y = lhs.y + rhs.y};                     \
    }                                                                                        \
    static inline Gmath##name##2 gmathSub##name##2(Gmath##name##2 lhs, Gmath##name##2 rhs) { \
        return (Gmath##name##2){.x = lhs.x - rhs.x, .y = lhs.y - rhs.y};                     \
    }                                                                                        \
    static inline Gmath##name##2 gmathMul##name##2(Gmath##name##2 lhs, Gmath##name##2 rhs) { \
        return (Gmath##name##2){.x = lhs.x * rhs.x, .y = lhs.y * rhs.y};                     \
    }                                                                                        \
    static inline Gmath##name##2 gmathDiv##name##2(Gmath##name##2 lhs, Gmath##name##2 rhs) { \
        return (Gmath##name##2){.x = lhs.x / rhs.x, .y = lhs.y / rhs.y};                     \
    }                                                                                        \
    static inline GmathVec2 gmath##name##2##To##Vec2(Gmath##name##2 value) {                 \
        return (GmathVec2){.x = (float)value.x, .y = (float)value.y};                        \
    }                                                                                        \
    static inline GmathDVec2 gmath##name##2##To##DVec2(Gmath##name##2 value) {               \
        return (GmathDVec2){.x = (double)value.x, .y = (double)value.y};                     \
    }                                                                                        \
    static inline GmathI8Vec2 gmath##name##2##To##I8Vec2(Gmath##name##2 value) {             \
        return (GmathI8Vec2){.x = (int8_t)value.x, .y = (int8_t)value.y};                    \
    }                                                                                        \
    static inline GmathU8Vec2 gmath##name##2##To##U8Vec2(Gmath##name##2 value) {             \
        return (GmathU8Vec2){.x = (uint8_t)value.x, .y = (uint8_t)value.y};                  \
    }                                                                                        \
    static inline GmathI16Vec2 gmath##name##2##To##I16Vec2(Gmath##name##2 value) {           \
        return (GmathI16Vec2){.x = (int16_t)value.x, .y = (int16_t)value.y};                 \
    }                                                                                        \
    static inline GmathU16Vec2 gmath##name##2##To##U16Vec2(Gmath##name##2 value) {           \
        return (GmathU16Vec2){.x = (uint16_t)value.x, .y = (uint16_t)value.y};               \
    }                                                                                        \
    static inline GmathI32Vec2 gmath##name##2##To##I32Vec2(Gmath##name##2 value) {           \
        return (GmathI32Vec2){.x = (int32_t)value.x, .y = (int32_t)value.y};                 \
    }                                                                                        \
    static inline GmathU32Vec2 gmath##name##2##To##U32Vec2(Gmath##name##2 value) {           \
        return (GmathU32Vec2){.x = (uint32_t)value.x, .y = (uint32_t)value.y};               \
    }                                                                                        \
    static inline GmathI64Vec2 gmath##name##2##To##I64Vec2(Gmath##name##2 value) {           \
        return (GmathI64Vec2){.x = (int64_t)value.x, .y = (int64_t)value.y};                 \
    }                                                                                        \
    static inline GmathU64Vec2 gmath##name##2##To##U64Vec2(Gmath##name##2 value) {           \
        return (GmathU64Vec2){.x = (uint64_t)value.x, .y = (uint64_t)value.y};               \
    }

#define GMATH_VEC3_DECLARER(name, T, _) \
    typedef struct Gmath##name##3 {     \
        union {                         \
            struct {                    \
                union {                 \
                    T x;                \
                    T r;                \
                    T s;                \
                };                      \
                union {                 \
                    T y;                \
                    T g;                \
                    T t;                \
                };                      \
                union {                 \
                    T z;                \
                    T b;                \
                    T p;                \
                };                      \
            };                          \
            T v[3];                     \
        };                              \
    }                                   \
    Gmath##name##3;

#define GMATH_VEC3_METHODS_DECLARER(name, T, _)                                                        \
    static inline Gmath##name##3 gmathBroadcast##name##3(T value) {                                    \
        return (Gmath##name##3){.x = value, .y = value, .z = value};                                   \
    }                                                                                                  \
    static inline Gmath##name##3 gmathAdd##name##3(Gmath##name##3 lhs, Gmath##name##3 rhs) {           \
        return (Gmath##name##3){.x = lhs.x + rhs.x, .y = lhs.y + rhs.y, .z = lhs.z + rhs.z};           \
    }                                                                                                  \
    static inline Gmath##name##3 gmathSub##name##3(Gmath##name##3 lhs, Gmath##name##3 rhs) {           \
        return (Gmath##name##3){.x = lhs.x - rhs.x, .y = lhs.y - rhs.y, .z = lhs.z - rhs.z};           \
    }                                                                                                  \
    static inline Gmath##name##3 gmathMul##name##3(Gmath##name##3 lhs, Gmath##name##3 rhs) {           \
        return (Gmath##name##3){.x = lhs.x * rhs.x, .y = lhs.y * rhs.y, .z = lhs.z * rhs.z};           \
    }                                                                                                  \
    static inline Gmath##name##3 gmathDiv##name##3(Gmath##name##3 lhs, Gmath##name##3 rhs) {           \
        return (Gmath##name##3){.x = lhs.x / rhs.x, .y = lhs.y / rhs.y, .z = lhs.z / rhs.z};           \
    }                                                                                                  \
    static inline GmathVec3 gmath##name##3##To##Vec3(Gmath##name##3 value) {                           \
        return (GmathVec3){.x = (float)value.x, .y = (float)value.y, .z = (float)value.z};             \
    }                                                                                                  \
    static inline GmathDVec3 gmath##name##3##To##DVec3(Gmath##name##3 value) {                         \
        return (GmathDVec3){.x = (double)value.x, .y = (double)value.y, .z = (double)value.z};         \
    }                                                                                                  \
    static inline GmathI8Vec3 gmath##name##3##To##I8Vec3(Gmath##name##3 value) {                       \
        return (GmathI8Vec3){.x = (int8_t)value.x, .y = (int8_t)value.y, .z = (int8_t)value.z};        \
    }                                                                                                  \
    static inline GmathU8Vec3 gmath##name##3##To##U8Vec3(Gmath##name##3 value) {                       \
        return (GmathU8Vec3){.x = (uint8_t)value.x, .y = (uint8_t)value.y, .z = (uint8_t)value.z};     \
    }                                                                                                  \
    static inline GmathI16Vec3 gmath##name##3##To##I16Vec3(Gmath##name##3 value) {                     \
        return (GmathI16Vec3){.x = (int16_t)value.x, .y = (int16_t)value.y, .z = (int16_t)value.z};    \
    }                                                                                                  \
    static inline GmathU16Vec3 gmath##name##3##To##U16Vec3(Gmath##name##3 value) {                     \
        return (GmathU16Vec3){.x = (uint16_t)value.x, .y = (uint16_t)value.y, .z = (uint16_t)value.z}; \
    }                                                                                                  \
    static inline GmathI32Vec3 gmath##name##3##To##I32Vec3(Gmath##name##3 value) {                     \
        return (GmathI32Vec3){.x = (int32_t)value.x, .y = (int32_t)value.y, .z = (int32_t)value.z};    \
    }                                                                                                  \
    static inline GmathU32Vec3 gmath##name##3##To##U32Vec3(Gmath##name##3 value) {                     \
        return (GmathU32Vec3){.x = (uint32_t)value.x, .y = (uint32_t)value.y, .z = (uint32_t)value.z}; \
    }                                                                                                  \
    static inline GmathI64Vec3 gmath##name##3##To##I64Vec3(Gmath##name##3 value) {                     \
        return (GmathI64Vec3){.x = (int64_t)value.x, .y = (int64_t)value.y, .z = (int64_t)value.z};    \
    }                                                                                                  \
    static inline GmathU64Vec3 gmath##name##3##To##U64Vec3(Gmath##name##3 value) {                     \
        return (GmathU64Vec3){.x = (uint64_t)value.x, .y = (uint64_t)value.y, .z = (uint64_t)value.z}; \
    }

#define GMATH_VEC4_DECLARER(name, T, _) \
    typedef struct Gmath##name##4 {     \
        union {                         \
            struct {                    \
                union {                 \
                    T x;                \
                    T r;                \
                    T s;                \
                };                      \
                union {                 \
                    T y;                \
                    T g;                \
                    T t;                \
                };                      \
                union {                 \
                    T z;                \
                    T b;                \
                    T p;                \
                };                      \
                union {                 \
                    T w;                \
                    T a;                \
                    T q;                \
                };                      \
            };                          \
            T v[4];                     \
        };                              \
    }                                   \
    Gmath##name##4;

#define GMATH_VEC4_METHODS_DECLARER(name, T, _)                                                                       \
    static inline Gmath##name##4 gmathBroadcast##name##4(T value) {                                                   \
        return (Gmath##name##4){.x = value, .y = value, .z = value, .w = value};                                      \
    }                                                                                                                 \
    static inline Gmath##name##4 gmathAdd##name##4(Gmath##name##4 lhs, Gmath##name##4 rhs) {                          \
        return (Gmath##name##4){.x = lhs.x + rhs.x, .y = lhs.y + rhs.y, .z = lhs.z + rhs.z, .w = lhs.w + rhs.w};      \
    }                                                                                                                 \
    static inline Gmath##name##4 gmathSub##name##4(Gmath##name##4 lhs, Gmath##name##4 rhs) {                          \
        return (Gmath##name##4){.x = lhs.x - rhs.x, .y = lhs.y - rhs.y, .z = lhs.z - rhs.z, .w = lhs.w - rhs.w};      \
    }                                                                                                                 \
    static inline Gmath##name##4 gmathMul##name##4(Gmath##name##4 lhs, Gmath##name##4 rhs) {                          \
        return (Gmath##name##4){.x = lhs.x * rhs.x, .y = lhs.y * rhs.y, .z = lhs.z * rhs.z, .w = lhs.w * rhs.w};      \
    }                                                                                                                 \
    static inline Gmath##name##4 gmathDiv##name##4(Gmath##name##4 lhs, Gmath##name##4 rhs) {                          \
        return (Gmath##name##4){.x = lhs.x / rhs.x, .y = lhs.y / rhs.y, .z = lhs.z / rhs.z, .w = lhs.w / rhs.w};      \
    }                                                                                                                 \
    static inline GmathVec4 gmath##name##4##To##Vec4(Gmath##name##4 value) {                                          \
        return (GmathVec4){.x = (float)value.x, .y = (float)value.y, .z = (float)value.z, .w = (float)value.w};       \
    }                                                                                                                 \
    static inline GmathDVec4 gmath##name##4##To##DVec4(Gmath##name##4 value) {                                        \
        return (GmathDVec4){.x = (double)value.x, .y = (double)value.y, .z = (double)value.z, .w = (double)value.w};  \
    }                                                                                                                 \
    static inline GmathI8Vec4 gmath##name##4##To##I8Vec4(Gmath##name##4 value) {                                      \
        return (GmathI8Vec4){.x = (int8_t)value.x, .y = (int8_t)value.y, .z = (int8_t)value.z, .w = (int8_t)value.w}; \
    }                                                                                                                 \
    static inline GmathU8Vec4 gmath##name##4##To##U8Vec4(Gmath##name##4 value) {                                      \
        return (                                                                                                      \
            GmathU8Vec4                                                                                               \
        ){.x = (uint8_t)value.x, .y = (uint8_t)value.y, .z = (uint8_t)value.z, .w = (uint8_t)value.w};                \
    }                                                                                                                 \
    static inline GmathI16Vec4 gmath##name##4##To##I16Vec4(Gmath##name##4 value) {                                    \
        return (                                                                                                      \
            GmathI16Vec4                                                                                              \
        ){.x = (int16_t)value.x, .y = (int16_t)value.y, .z = (int16_t)value.z, .w = (int16_t)value.w};                \
    }                                                                                                                 \
    static inline GmathU16Vec4 gmath##name##4##To##U16Vec4(Gmath##name##4 value) {                                    \
        return (                                                                                                      \
            GmathU16Vec4                                                                                              \
        ){.x = (uint16_t)value.x, .y = (uint16_t)value.y, .z = (uint16_t)value.z, .w = (uint16_t)value.w};            \
    }                                                                                                                 \
    static inline GmathI32Vec4 gmath##name##4##To##I32Vec4(Gmath##name##4 value) {                                    \
        return (                                                                                                      \
            GmathI32Vec4                                                                                              \
        ){.x = (int32_t)value.x, .y = (int32_t)value.y, .z = (int32_t)value.z, .w = (int32_t)value.w};                \
    }                                                                                                                 \
    static inline GmathU32Vec4 gmath##name##4##To##U32Vec4(Gmath##name##4 value) {                                    \
        return (                                                                                                      \
            GmathU32Vec4                                                                                              \
        ){.x = (uint32_t)value.x, .y = (uint32_t)value.y, .z = (uint32_t)value.z, .w = (uint32_t)value.w};            \
    }                                                                                                                 \
    static inline GmathI64Vec4 gmath##name##4##To##I64Vec4(Gmath##name##4 value) {                                    \
        return (                                                                                                      \
            GmathI64Vec4                                                                                              \
        ){.x = (int64_t)value.x, .y = (int64_t)value.y, .z = (int64_t)value.z, .w = (int64_t)value.w};                \
    }                                                                                                                 \
    static inline GmathU64Vec4 gmath##name##4##To##U64Vec4(Gmath##name##4 value) {                                    \
        return (                                                                                                      \
            GmathU64Vec4                                                                                              \
        ){.x = (uint64_t)value.x, .y = (uint64_t)value.y, .z = (uint64_t)value.z, .w = (uint64_t)value.w};            \
    }

___GMATH_VECTOR_TYPES(GMATH_VEC2_DECLARER, , ___GMATH_EVAL)
#undef GMATH_VEC2_DECLARER
___GMATH_VECTOR_TYPES(GMATH_VEC3_DECLARER, , ___GMATH_EVAL)
#undef GMATH_VEC3_DECLARER
___GMATH_VECTOR_TYPES(GMATH_VEC4_DECLARER, , ___GMATH_EVAL)
#undef GMATH_VEC4_DECLARER

___GMATH_VECTOR_TYPES(GMATH_VEC2_METHODS_DECLARER, , ___GMATH_EVAL)
#undef GMATH_VEC2_METHODS_DECLARER
___GMATH_VECTOR_TYPES(GMATH_VEC3_METHODS_DECLARER, , ___GMATH_EVAL)
#undef GMATH_VEC3_METHODS_DECLARER
___GMATH_VECTOR_TYPES(GMATH_VEC4_METHODS_DECLARER, , ___GMATH_EVAL)
#undef GMATH_VEC4_METHODS_DECLARER

#define ___GMATH_COMMA ,

#define ___GMATH_BROADCAST2_GENERICER(name, T, _) \
    T:                                            \
    gmathBroadcast##name##2
#define gmathBroadcast2(value) \
    _Generic((value), ___GMATH_VECTOR_TYPES(___GMATH_BROADCAST2_GENERICER, ___GMATH_COMMA, ___GMATH_EVAL))(value)

#define ___GMATH_BROADCAST3_GENERICER(name, T, _) \
    T:                                            \
    gmathBroadcast##name##3
#define gmathBroadcast3(value) \
    _Generic((value), ___GMATH_VECTOR_TYPES(___GMATH_BROADCAST3_GENERICER, ___GMATH_COMMA, ___GMATH_EVAL))(value)

#define ___GMATH_BROADCAST4_GENERICER(name, T, _) \
    T:                                            \
    gmathBroadcast##name##4
#define gmathBroadcast4(value) \
    _Generic((value), ___GMATH_VECTOR_TYPES(___GMATH_BROADCAST4_GENERICER, ___GMATH_COMMA, ___GMATH_EVAL))(value)

#define ___GMATH_ADD_GENERICER(name, _1, _2) \
    Gmath##name##2 : gmathAdd##name##2, Gmath##name##3 : gmathAdd##name##3, Gmath##name##4 : gmathAdd##name##4
#define gmathAdd(lhs, rhs) \
    _Generic((lhs), ___GMATH_VECTOR_TYPES(___GMATH_ADD_GENERICER, ___GMATH_COMMA, ___GMATH_EVAL))(lhs, rhs)

#define ___GMATH_SUB_GENERICER(name, _1, _2) \
    Gmath##name##2 : gmathSub##name##2, Gmath##name##3 : gmathSub##name##3, Gmath##name##4 : gmathSub##name##4
#define gmathSub(lhs, rhs) \
    _Generic((lhs), ___GMATH_VECTOR_TYPES(___GMATH_SUB_GENERICER, ___GMATH_COMMA, ___GMATH_EVAL))(lhs, rhs)

#define ___GMATH_MUL_GENERICER(name, _1, _2) \
    Gmath##name##2 : gmathMul##name##2, Gmath##name##3 : gmathMul##name##3, Gmath##name##4 : gmathMul##name##4
#define gmathMul(lhs, rhs) \
    _Generic((lhs), ___GMATH_VECTOR_TYPES(___GMATH_MUL_GENERICER, ___GMATH_COMMA, ___GMATH_EVAL))(lhs, rhs)

#define ___GMATH_DIV_GENERICER(name, _1, _2) \
    Gmath##name##2 : gmathDiv##name##2, Gmath##name##3 : gmathDiv##name##3, Gmath##name##4 : gmathDiv##name##4
#define gmathDiv(lhs, rhs) \
    _Generic((lhs), ___GMATH_VECTOR_TYPES(___GMATH_DIV_GENERICER, ___GMATH_COMMA, ___GMATH_EVAL))(lhs, rhs)

#define ___GMATH_TO_FLOAT_GENERICER(name, _1, _2)             \
    Gmath##name##2 : gmath##name##2##ToVec2,                  \
                     Gmath##name##3 : gmath##name##3##ToVec3, \
                                      Gmath##name##4 : gmath##name##4##ToVec4
#define gmathToVec(value) \
    _Generic((value), ___GMATH_VECTOR_TYPES(___GMATH_TO_FLOAT_GENERICER, ___GMATH_COMMA, ___GMATH_EVAL))(value)

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

#define GMATH_PRI2(v) v.x, v.y
#define GMATH_PRI3(v) v.x, v.y, v.z
#define GMATH_PRI4(v) v.x, v.y, v.z, v.w

#define GMATH_SCN2(v) &v.x, &v.y
#define GMATH_SCN3(v) &v.x, &v.y, &v.z
#define GMATH_SCN4(v) &v.x, &v.y, &v.z, &v.w

#ifndef GMATH_NAMESPACED_ONLY

#define GMATH_VEC2_ALIASER(name, _, aliases) typedef Gmath##name##2 ___GMATH_EVAL aliases;
#define GMATH_VEC2_APPENDER(name) name##2
___GMATH_VECTOR_TYPES(GMATH_VEC2_ALIASER, , GMATH_VEC2_APPENDER)
#undef GMATH_VEC2_ALIASER
#undef GMATH_VEC2_APPENDER

#define GMATH_VEC3_ALIASER(name, _, aliases) typedef Gmath##name##3 ___GMATH_EVAL aliases;
#define GMATH_VEC3_APPENDER(name) name##3
___GMATH_VECTOR_TYPES(GMATH_VEC3_ALIASER, , GMATH_VEC3_APPENDER)
#undef GMATH_VEC3_ALIASER
#undef GMATH_VEC3_APPENDER

#define GMATH_VEC4_ALIASER(name, _, aliases) typedef Gmath##name##4 ___GMATH_EVAL aliases;
#define GMATH_VEC4_APPENDER(name) name##4
___GMATH_VECTOR_TYPES(GMATH_VEC4_ALIASER, , GMATH_VEC4_APPENDER)
#undef GMATH_VEC4_ALIASER
#undef GMATH_VEC4_APPENDER

#endif

#endif
