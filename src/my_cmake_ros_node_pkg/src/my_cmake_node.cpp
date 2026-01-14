#include <cstdio>

#include "my_cmake_ros_library_pkg/my_cmake_library.hpp"

int main(int argc, char ** argv)
{
  (void) argc;
  (void) argv;

  printf("hello world my_cmake_ros_node_pkg package\n");

  int sock = my_cmake_ros_library_pkg::MyCmakeLibrary::create_raw_socket();
  if (sock >= 0) {
    printf("Raw socket created successfully (fd=%d)\n", sock);
  } else {
    perror("Failed to create raw socket (requires CAP_NET_RAW)");
  }

  return 0;
}
