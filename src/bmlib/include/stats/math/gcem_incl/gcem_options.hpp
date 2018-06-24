/*################################################################################
  ##
  ##   Copyright (C) 2016-2018 Keith O'Hara
  ##
  ##   This file is part of the GCE-Math C++ library.
  ##
  ##   Licensed under the Apache License, Version 2.0 (the "License");
  ##   you may not use this file except in compliance with the License.
  ##   You may obtain a copy of the License at
  ##
  ##       http://www.apache.org/licenses/LICENSE-2.0
  ##
  ##   Unless required by applicable law or agreed to in writing, software
  ##   distributed under the License is distributed on an "AS IS" BASIS,
  ##   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  ##   See the License for the specific language governing permissions and
  ##   limitations under the License.
  ##
  ################################################################################*/

#include <limits>
#include <type_traits>  // for is_integral
#include <cstddef>      // size_t

//
// version

#ifndef GCEM_VERSION_MAJOR
    #define GCEM_VERSION_MAJOR 1
#endif

#ifndef GCEM_VERSION_MINOR
    #define GCEM_VERSION_MINOR 4
#endif

#ifndef GCEM_VERSION_PATCH
    #define GCEM_VERSION_PATCH 0
#endif

//
// constants

namespace gcem {
    using uint_t = unsigned int;

    template<class T>
    using GCLIM = std::numeric_limits<T>;

    template<typename T>
    using return_t = typename std::conditional<std::is_integral<T>::value,double,T>::type;
}

#ifndef GCEM_LOG_2
    #define GCEM_LOG_2 0.6931471805599453094172321214581765680755L
#endif

#ifndef GCEM_LOG_10
    #define GCEM_LOG_10 2.3025850929940456840179914546843642076011L
#endif

#ifndef GCEM_PI
    #define GCEM_PI 3.1415926535897932384626433832795028841972L
#endif

#ifndef GCEM_LOG_PI
    #define GCEM_LOG_PI 1.1447298858494001741434273513530587116473L
#endif

#ifndef GCEM_LOG_2PI
    #define GCEM_LOG_2PI 1.8378770664093454835606594728112352797228L
#endif

#ifndef GCEM_LOG_SQRT_2PI
    #define GCEM_LOG_SQRT_2PI 0.9189385332046727417803297364056176398614L
#endif

#ifndef GCEM_SQRT_2
    #define GCEM_SQRT_2 1.4142135623730950488016887242096980785697L
#endif

#ifndef GCEM_HALF_PI
    #define GCEM_HALF_PI 1.5707963267948966192313216916397514420986L
#endif

#ifndef GCEM_SQRT_PI
    #define GCEM_SQRT_PI 1.7724538509055160272981674833411451827975L
#endif

#ifndef GCEM_SQRT_HALF_PI
    #define GCEM_SQRT_HALF_PI 1.2533141373155002512078826424055226265035L
#endif

#ifndef GCEM_E
    #define GCEM_E 2.7182818284590452353602874713526624977572L
#endif

//
// convergence settings

// #ifndef GCEM_ATAN_MAX_ITER
//     #define GCEM_ATAN_MAX_ITER 25
// #endif

#ifndef GCEM_ERF_MAX_ITER
    #define GCEM_ERF_MAX_ITER 60
#endif

#ifndef GCEM_ERF_INV_MAX_ITER
    #define GCEM_ERF_INV_MAX_ITER 55
#endif

#ifndef GCEM_EXP_MAX_ITER_SMALL
    #define GCEM_EXP_MAX_ITER_SMALL 25
#endif

// #ifndef GCEM_LOG_TOL
//     #define GCEM_LOG_TOL 1E-14
// #endif

#ifndef GCEM_LOG_MAX_ITER_SMALL
    #define GCEM_LOG_MAX_ITER_SMALL 25
#endif

#ifndef GCEM_LOG_MAX_ITER_BIG
    #define GCEM_LOG_MAX_ITER_BIG 255
#endif

#ifndef GCEM_INCML_BETA_TOL
    #define GCEM_INCML_BETA_TOL 1E-15
#endif

#ifndef GCEM_INCML_BETA_MAX_ITER
    #define GCEM_INCML_BETA_MAX_ITER 205
#endif

#ifndef GCEM_INCML_BETA_INV_MAX_ITER
    #define GCEM_INCML_BETA_INV_MAX_ITER 35
#endif

#ifndef GCEM_INCML_GAMMA_MAX_ITER
    #define GCEM_INCML_GAMMA_MAX_ITER 55
#endif

#ifndef GCEM_INCML_GAMMA_INV_MAX_ITER
    #define GCEM_INCML_GAMMA_INV_MAX_ITER 35
#endif

#ifndef GCEM_SQRT_TOL
    #define GCEM_SQRT_TOL 1E-15
#endif

#ifndef GCEM_SQRT_MAX_ITER
    #define GCEM_SQRT_MAX_ITER 100
#endif

#ifndef GCEM_TAN_MAX_ITER
    #define GCEM_TAN_MAX_ITER 35
#endif

#ifndef GCEM_TANH_MAX_ITER
    #define GCEM_TANH_MAX_ITER 35
#endif
