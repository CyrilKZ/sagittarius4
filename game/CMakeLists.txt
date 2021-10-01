# CMakeList.txt: game 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

project ("game")

find_package(EnTT CONFIG REQUIRED)

# 将源代码添加到此项目的可执行文件。
aux_source_directory(src/world DIR_COMMON_SRC)
aux_source_directory(src/network DIR_NETWORK_SRC)

add_executable (server "src/server.h" "src/server.cpp" ${DIR_COMMON_SRC} ${DIR_NETWORK_SRC})
target_link_libraries(server PRIVATE EnTT::EnTT)

add_executable (client "src/client.cpp" "src/client.h" ${DIR_COMMON_SRC} ${DIR_NETWORK_SRC})
target_link_libraries(client PRIVATE EnTT::EnTT)
# TODO: 如有需要，请添加测试并安装目标。
