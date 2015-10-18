#pragma once

#include <iostream>
#include <memory>
#include <vector>
#include <algorithm>
#include <cassert>
#include <limits>
#include <cmath>
#include <array>

#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"
#include "glm/gtc/quaternion.hpp"
#include "glm/gtx/quaternion.hpp"
#include "glm/gtx/string_cast.hpp"

using SceneDataPtr = std::vector<std::shared_ptr<class SceneObject>>*;

const float PI = 3.14159265359f;


#define STRINGIFY_HELPER(x) #x
#define STRINGIFY(x) STRINGIFY_HELPER(x)


#ifdef _WIN32
#define make_unique std::make_unique
#else
template<typename T, typename... Ts>
std::unique_ptr<T> make_unique(Ts&&... params)
{
    return std::unique_ptr<T>(new T(std::forward<Ts>(params)...));
}
#endif