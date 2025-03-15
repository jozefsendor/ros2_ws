#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "mrpt_msgs_bridge::mrpt_msgs_bridge" for configuration ""
set_property(TARGET mrpt_msgs_bridge::mrpt_msgs_bridge APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(mrpt_msgs_bridge::mrpt_msgs_bridge PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libmrpt_msgs_bridge.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS mrpt_msgs_bridge::mrpt_msgs_bridge )
list(APPEND _IMPORT_CHECK_FILES_FOR_mrpt_msgs_bridge::mrpt_msgs_bridge "${_IMPORT_PREFIX}/lib/libmrpt_msgs_bridge.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
