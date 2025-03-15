#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "mrpt_pf_localization::mrpt_pf_localization_component" for configuration ""
set_property(TARGET mrpt_pf_localization::mrpt_pf_localization_component APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(mrpt_pf_localization::mrpt_pf_localization_component PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libmrpt_pf_localization_component.so"
  IMPORTED_SONAME_NOCONFIG "libmrpt_pf_localization_component.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS mrpt_pf_localization::mrpt_pf_localization_component )
list(APPEND _IMPORT_CHECK_FILES_FOR_mrpt_pf_localization::mrpt_pf_localization_component "${_IMPORT_PREFIX}/lib/libmrpt_pf_localization_component.so" )

# Import target "mrpt_pf_localization::mrpt_pf_localization_core" for configuration ""
set_property(TARGET mrpt_pf_localization::mrpt_pf_localization_core APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(mrpt_pf_localization::mrpt_pf_localization_core PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libmrpt_pf_localization_core.so"
  IMPORTED_SONAME_NOCONFIG "libmrpt_pf_localization_core.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS mrpt_pf_localization::mrpt_pf_localization_core )
list(APPEND _IMPORT_CHECK_FILES_FOR_mrpt_pf_localization::mrpt_pf_localization_core "${_IMPORT_PREFIX}/lib/libmrpt_pf_localization_core.so" )

# Import target "mrpt_pf_localization::mrpt_pf_localization_node" for configuration ""
set_property(TARGET mrpt_pf_localization::mrpt_pf_localization_node APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(mrpt_pf_localization::mrpt_pf_localization_node PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/mrpt_pf_localization/mrpt_pf_localization_node"
  )

list(APPEND _IMPORT_CHECK_TARGETS mrpt_pf_localization::mrpt_pf_localization_node )
list(APPEND _IMPORT_CHECK_FILES_FOR_mrpt_pf_localization::mrpt_pf_localization_node "${_IMPORT_PREFIX}/lib/mrpt_pf_localization/mrpt_pf_localization_node" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
