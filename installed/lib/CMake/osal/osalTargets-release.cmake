#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "osal" for configuration "Release"
set_property(TARGET osal APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(osal PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "/home/share/lworkspace/project/components/osal/installed/lib/libosal.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS osal )
list(APPEND _IMPORT_CHECK_FILES_FOR_osal "/home/share/lworkspace/project/components/osal/installed/lib/libosal.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
