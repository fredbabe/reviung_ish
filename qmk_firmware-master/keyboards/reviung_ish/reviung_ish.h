#pragma once

#include "quantum.h"

// readability
#define XXX KC_NO

#define LAYOUT( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, k2C, \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B, \
              k42, k43,      k45, k46, k47, k48, k49  \
) \
{ \
    {k00, k01, k02, k03, k04, k05, XXX, k06, k07, k08, k09, k0A, k0B}, \
    {k10, k11, k12, k13, k14, k15, XXX, k16, k17, k18, k19, k1A, k1B}, \
    {k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, k2C}, \
    {k30, k31, k32, k33, k34, k35, XXX, k36, k37, k38, k39, k3A, k3B}, \
    {XXX, XXX, k42, k43, XXX, k45, k46, k47, k48, k49, XXX, XXX, XXX}  \
}
