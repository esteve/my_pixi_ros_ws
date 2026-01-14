#ifndef MY_CMAKE_ROS_LIBRARY_PKG__MY_CMAKE_LIBRARY_HPP_
#define MY_CMAKE_ROS_LIBRARY_PKG__MY_CMAKE_LIBRARY_HPP_

#include "my_cmake_ros_library_pkg/visibility_control.h"

namespace my_cmake_ros_library_pkg
{

class MyCmakeLibrary
{
public:
  MyCmakeLibrary();

  virtual ~MyCmakeLibrary();

  /**
   * @brief Creates a raw socket (requires CAP_NET_RAW capability)
   * @return Socket file descriptor on success, -1 on failure
   */
  MY_CMAKE_ROS_LIBRARY_PKG_PUBLIC
  static int create_raw_socket();
};

}  // namespace my_cmake_ros_library_pkg

#endif  // MY_CMAKE_ROS_LIBRARY_PKG__MY_CMAKE_LIBRARY_HPP_
