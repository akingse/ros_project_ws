cmake_minimum_required(VERSION 2.8.3)

project(snake)
find_package(catkin REQUIRED COMPONENTS roscpp rospy std_msgs sensor_msgs)

catkin_package()

find_package(roslaunch)

foreach(dir config launch meshes urdf)
	install(DIRECTORY ${dir}/
		DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}/${dir})
endforeach(dir)


include_directories(
  include ${catkin_INCLUDE_DIRS}
)

add_executable(snake_node_1_pub
  src/snake_node_1_pub.cpp
)
add_dependencies(snake_node_1_pub ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(snake_node_1_pub
  ${catkin_LIBRARIES}
)

add_executable(snake_node_1_sub
  src/snake_node_1_sub.cpp
)
add_dependencies(snake_node_1_sub ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(snake_node_1_sub
  ${catkin_LIBRARIES}
)

add_executable(snake_node_2_pub
  src/snake_node_2_pub.cpp
)
add_dependencies(snake_node_2_pub ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(snake_node_2_pub
  ${catkin_LIBRARIES}
)

add_executable(snake_node_2_sub
  src/snake_node_2_sub.cpp
)
add_dependencies(snake_node_2_sub ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(snake_node_2_sub
  ${catkin_LIBRARIES}
)