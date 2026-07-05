#ifndef __GMATH_TYPES_H__
#define __GMATH_TYPES_H__

#include <stdint.h>

#define ___GMATH_EVAL(...) __VA_ARGS__
#define ___GMATH_VECTOR_TYPES(VEC, SEP, ALS)                                                                       \
    VEC(Vec, float, (ALS(vec)))                                                                                    \
    SEP VEC(DVec, double, (ALS(dvec))) SEP VEC(I8Vec, int8_t, (ALS(i8vec))) SEP VEC(U8Vec, uint8_t, (ALS(u8vec)))  \
        SEP VEC(I16Vec, int16_t, (ALS(i16vec))) SEP VEC(U16Vec, uint16_t, (ALS(u16vec)))                           \
            SEP VEC(I32Vec, int32_t, (ALS(i32vec), ALS(ivec))) SEP VEC(U32Vec, uint32_t, (ALS(u32vec), ALS(uvec))) \
                SEP VEC(I64Vec, int64_t, (ALS(i64vec))) SEP VEC(U64Vec, uint64_t, (ALS(u64vec)))

#define GMATH_VEC2_DECLARER(name, T, _)                                                      \
    typedef struct Gmath##name##2 {                                                          \
        union {                                                                              \
            struct {                                                                         \
                union {                                                                      \
                    T x;                                                                     \
                    T r;                                                                     \
                    T s;                                                                     \
                };                                                                           \
                union {                                                                      \
                    T y;                                                                     \
                    T g;                                                                     \
                    T t;                                                                     \
                };                                                                           \
            };                                                                               \
            T v[2];                                                                          \
        };                                                                                   \
    }                                                                                        \
    Gmath##name##2;                                                                          \
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
    }

#define GMATH_VEC3_DECLARER(name, T, _)                                                      \
    typedef struct Gmath##name##3 {                                                          \
        union {                                                                              \
            struct {                                                                         \
                union {                                                                      \
                    T x;                                                                     \
                    T r;                                                                     \
                    T s;                                                                     \
                };                                                                           \
                union {                                                                      \
                    T y;                                                                     \
                    T g;                                                                     \
                    T t;                                                                     \
                };                                                                           \
                union {                                                                      \
                    T z;                                                                     \
                    T b;                                                                     \
                    T p;                                                                     \
                };                                                                           \
            };                                                                               \
            T v[3];                                                                          \
        };                                                                                   \
    }                                                                                        \
    Gmath##name##3;                                                                          \
    static inline Gmath##name##3 gmathAdd##name##3(Gmath##name##3 lhs, Gmath##name##3 rhs) { \
        return (Gmath##name##3){.x = lhs.x + rhs.x, .y = lhs.y + rhs.y, .z = lhs.z + rhs.z}; \
    }                                                                                        \
    static inline Gmath##name##3 gmathSub##name##3(Gmath##name##3 lhs, Gmath##name##3 rhs) { \
        return (Gmath##name##3){.x = lhs.x - rhs.x, .y = lhs.y - rhs.y, .z = lhs.z - rhs.z}; \
    }                                                                                        \
    static inline Gmath##name##3 gmathMul##name##3(Gmath##name##3 lhs, Gmath##name##3 rhs) { \
        return (Gmath##name##3){.x = lhs.x * rhs.x, .y = lhs.y * rhs.y, .z = lhs.z * rhs.z}; \
    }                                                                                        \
    static inline Gmath##name##3 gmathDiv##name##3(Gmath##name##3 lhs, Gmath##name##3 rhs) { \
        return (Gmath##name##3){.x = lhs.x / rhs.x, .y = lhs.y / rhs.y, .z = lhs.z / rhs.z}; \
    }

#define GMATH_VEC4_DECLARER(name, T, _)                                                                          \
    typedef struct Gmath##name##4 {                                                                              \
        union {                                                                                                  \
            struct {                                                                                             \
                union {                                                                                          \
                    T x;                                                                                         \
                    T r;                                                                                         \
                    T s;                                                                                         \
                };                                                                                               \
                union {                                                                                          \
                    T y;                                                                                         \
                    T g;                                                                                         \
                    T t;                                                                                         \
                };                                                                                               \
                union {                                                                                          \
                    T z;                                                                                         \
                    T b;                                                                                         \
                    T p;                                                                                         \
                };                                                                                               \
                union {                                                                                          \
                    T w;                                                                                         \
                    T a;                                                                                         \
                    T q;                                                                                         \
                };                                                                                               \
            };                                                                                                   \
            T v[4];                                                                                              \
        };                                                                                                       \
    }                                                                                                            \
    Gmath##name##4;                                                                                              \
    static inline Gmath##name##4 gmathAdd##name##4(Gmath##name##4 lhs, Gmath##name##4 rhs) {                     \
        return (Gmath##name##4){.x = lhs.x + rhs.x, .y = lhs.y + rhs.y, .z = lhs.z + rhs.z, .w = lhs.w + rhs.w}; \
    }                                                                                                            \
    static inline Gmath##name##4 gmathSub##name##4(Gmath##name##4 lhs, Gmath##name##4 rhs) {                     \
        return (Gmath##name##4){.x = lhs.x - rhs.x, .y = lhs.y - rhs.y, .z = lhs.z - rhs.z, .w = lhs.w - rhs.w}; \
    }                                                                                                            \
    static inline Gmath##name##4 gmathMul##name##4(Gmath##name##4 lhs, Gmath##name##4 rhs) {                     \
        return (Gmath##name##4){.x = lhs.x * rhs.x, .y = lhs.y * rhs.y, .z = lhs.z * rhs.z, .w = lhs.w * rhs.w}; \
    }                                                                                                            \
    static inline Gmath##name##4 gmathDiv##name##4(Gmath##name##4 lhs, Gmath##name##4 rhs) {                     \
        return (Gmath##name##4){.x = lhs.x / rhs.x, .y = lhs.y / rhs.y, .z = lhs.z / rhs.z, .w = lhs.w / rhs.w}; \
    }

___GMATH_VECTOR_TYPES(GMATH_VEC2_DECLARER, , ___GMATH_EVAL);
#undef GMATH_VEC2_DECLARER
___GMATH_VECTOR_TYPES(GMATH_VEC3_DECLARER, , ___GMATH_EVAL);
#undef GMATH_VEC3_DECLARER
___GMATH_VECTOR_TYPES(GMATH_VEC4_DECLARER, , ___GMATH_EVAL);
#undef GMATH_VEC4_DECLARER

#define ___GMATH_COMMA ,

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

#ifndef GMATH_NAMESPACED_ONLY

#define GMATH_VEC2_ALIASER(name, _, aliases) typedef Gmath##name##2 ___GMATH_EVAL aliases;
#define GMATH_VEC2_APPENDER(name) name##2
___GMATH_VECTOR_TYPES(GMATH_VEC2_ALIASER, , GMATH_VEC2_APPENDER);
#undef GMATH_VEC2_ALIASER
#undef GMATH_VEC2_APPENDER

#define GMATH_VEC3_ALIASER(name, _, aliases) typedef Gmath##name##3 ___GMATH_EVAL aliases;
#define GMATH_VEC3_APPENDER(name) name##3
___GMATH_VECTOR_TYPES(GMATH_VEC3_ALIASER, , GMATH_VEC3_APPENDER);
#undef GMATH_VEC3_ALIASER
#undef GMATH_VEC3_APPENDER

#define GMATH_VEC4_ALIASER(name, _, aliases) typedef Gmath##name##4 ___GMATH_EVAL aliases;
#define GMATH_VEC4_APPENDER(name) name##4
___GMATH_VECTOR_TYPES(GMATH_VEC4_ALIASER, , GMATH_VEC4_APPENDER);
#undef GMATH_VEC4_ALIASER
#undef GMATH_VEC4_APPENDER

#endif

#endif
