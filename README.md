# ROS 2 Workspace

A ROS 2 Jazzy workspace containing CMake-based packages.

## Project Structure

- `src/my_cmake_ros_library_pkg/` - A shared library package
- `src/my_cmake_ros_node_pkg/` - A ROS 2 node that depends on the library package

## Prerequisites

This project uses [Pixi](https://prefix.dev) for dependency management and environment setup.

- Install [Pixi](https://prefix.dev/docs/getting_started/installation)

## Building

Build the workspace using Pixi:

```bash
pixi run build
```

This runs the `colcon build` command in the Pixi environment. The build will compile all packages and set up the `install/` directory with the necessary setup scripts.

## Setting Network Capabilities

Before running the node executable, grant it the necessary network capabilities:

```bash
sudo setcap cap_net_raw=ep ./install/lib/my_cmake_ros_node_pkg/my_cmake_node
```

This allows the executable to use raw sockets without requiring root privileges when executed.

## Running

After building and setting the network capabilities, run the ROS 2 node using Pixi:

```bash
pixi run ros2 run my_cmake_ros_node_pkg my_cmake_node
```

## License

Apache License 2.0
