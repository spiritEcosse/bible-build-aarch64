#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "QuaZip::QuaZip" for configuration "RelWithDebInfo"
set_property(TARGET QuaZip::QuaZip APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(QuaZip::QuaZip PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib64/libquazip1-qt5.so.1.1"
  IMPORTED_SONAME_RELWITHDEBINFO "libquazip1-qt5.so.1.0.0"
  )

list(APPEND _IMPORT_CHECK_TARGETS QuaZip::QuaZip )
list(APPEND _IMPORT_CHECK_FILES_FOR_QuaZip::QuaZip "${_IMPORT_PREFIX}/lib64/libquazip1-qt5.so.1.1" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
