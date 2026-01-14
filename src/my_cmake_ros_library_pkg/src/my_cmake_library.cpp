#include "my_cmake_ros_library_pkg/my_cmake_library.hpp"

#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

namespace my_cmake_ros_library_pkg
{

MyCmakeLibrary::MyCmakeLibrary()
{
}

MyCmakeLibrary::~MyCmakeLibrary()
{
}

int MyCmakeLibrary::create_raw_socket()
{
  // Creating a raw socket requires CAP_NET_RAW capability
  int sock = socket(AF_INET, SOCK_RAW, IPPROTO_ICMP);
  return sock;
}

}  // namespace my_cmake_ros_library_pkg
