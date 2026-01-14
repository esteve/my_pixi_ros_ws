#ifndef MY_CMAKE_ROS_LIBRARY_PKG__VISIBILITY_CONTROL_H_
#define MY_CMAKE_ROS_LIBRARY_PKG__VISIBILITY_CONTROL_H_

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define MY_CMAKE_ROS_LIBRARY_PKG_EXPORT __attribute__ ((dllexport))
    #define MY_CMAKE_ROS_LIBRARY_PKG_IMPORT __attribute__ ((dllimport))
  #else
    #define MY_CMAKE_ROS_LIBRARY_PKG_EXPORT __declspec(dllexport)
    #define MY_CMAKE_ROS_LIBRARY_PKG_IMPORT __declspec(dllimport)
  #endif
  #ifdef MY_CMAKE_ROS_LIBRARY_PKG_BUILDING_LIBRARY
    #define MY_CMAKE_ROS_LIBRARY_PKG_PUBLIC MY_CMAKE_ROS_LIBRARY_PKG_EXPORT
  #else
    #define MY_CMAKE_ROS_LIBRARY_PKG_PUBLIC MY_CMAKE_ROS_LIBRARY_PKG_IMPORT
  #endif
  #define MY_CMAKE_ROS_LIBRARY_PKG_PUBLIC_TYPE MY_CMAKE_ROS_LIBRARY_PKG_PUBLIC
  #define MY_CMAKE_ROS_LIBRARY_PKG_LOCAL
#else
  #define MY_CMAKE_ROS_LIBRARY_PKG_EXPORT __attribute__ ((visibility("default")))
  #define MY_CMAKE_ROS_LIBRARY_PKG_IMPORT
  #if __GNUC__ >= 4
    #define MY_CMAKE_ROS_LIBRARY_PKG_PUBLIC __attribute__ ((visibility("default")))
    #define MY_CMAKE_ROS_LIBRARY_PKG_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define MY_CMAKE_ROS_LIBRARY_PKG_PUBLIC
    #define MY_CMAKE_ROS_LIBRARY_PKG_LOCAL
  #endif
  #define MY_CMAKE_ROS_LIBRARY_PKG_PUBLIC_TYPE
#endif

#endif  // MY_CMAKE_ROS_LIBRARY_PKG__VISIBILITY_CONTROL_H_
