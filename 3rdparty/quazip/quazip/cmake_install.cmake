# Install script for directory: /home/mersdk/src/3rdparty/quazip/quazip

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libquazip1-qt5.so.1.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libquazip1-qt5.so.1.0.0"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64" TYPE SHARED_LIBRARY FILES
    "/home/mersdk/src/3rdparty/quazip/quazip/libquazip1-qt5.so.1.1"
    "/home/mersdk/src/3rdparty/quazip/quazip/libquazip1-qt5.so.1.0.0"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libquazip1-qt5.so.1.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libquazip1-qt5.so.1.0.0"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libquazip1-qt5.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libquazip1-qt5.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libquazip1-qt5.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64" TYPE SHARED_LIBRARY FILES "/home/mersdk/src/3rdparty/quazip/quazip/libquazip1-qt5.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libquazip1-qt5.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libquazip1-qt5.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/libquazip1-qt5.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/QuaZip-Qt5-1.1/quazip" TYPE FILE FILES
    "/home/mersdk/src/3rdparty/quazip/quazip/JlCompress.h"
    "/home/mersdk/src/3rdparty/quazip/quazip/ioapi.h"
    "/home/mersdk/src/3rdparty/quazip/quazip/minizip_crypt.h"
    "/home/mersdk/src/3rdparty/quazip/quazip/quaadler32.h"
    "/home/mersdk/src/3rdparty/quazip/quazip/quachecksum32.h"
    "/home/mersdk/src/3rdparty/quazip/quazip/quacrc32.h"
    "/home/mersdk/src/3rdparty/quazip/quazip/quagzipfile.h"
    "/home/mersdk/src/3rdparty/quazip/quazip/quaziodevice.h"
    "/home/mersdk/src/3rdparty/quazip/quazip/quazip.h"
    "/home/mersdk/src/3rdparty/quazip/quazip/quazip_global.h"
    "/home/mersdk/src/3rdparty/quazip/quazip/quazip_qt_compat.h"
    "/home/mersdk/src/3rdparty/quazip/quazip/quazipdir.h"
    "/home/mersdk/src/3rdparty/quazip/quazip/quazipfile.h"
    "/home/mersdk/src/3rdparty/quazip/quazip/quazipfileinfo.h"
    "/home/mersdk/src/3rdparty/quazip/quazip/quazipnewinfo.h"
    "/home/mersdk/src/3rdparty/quazip/quazip/unzip.h"
    "/home/mersdk/src/3rdparty/quazip/quazip/zip.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/cmake/QuaZip-Qt5-1.1/QuaZip-Qt5_SharedTargets.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/cmake/QuaZip-Qt5-1.1/QuaZip-Qt5_SharedTargets.cmake"
         "/home/mersdk/src/3rdparty/quazip/quazip/CMakeFiles/Export/lib64/cmake/QuaZip-Qt5-1.1/QuaZip-Qt5_SharedTargets.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/cmake/QuaZip-Qt5-1.1/QuaZip-Qt5_SharedTargets-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib64/cmake/QuaZip-Qt5-1.1/QuaZip-Qt5_SharedTargets.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64/cmake/QuaZip-Qt5-1.1" TYPE FILE FILES "/home/mersdk/src/3rdparty/quazip/quazip/CMakeFiles/Export/lib64/cmake/QuaZip-Qt5-1.1/QuaZip-Qt5_SharedTargets.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64/cmake/QuaZip-Qt5-1.1" TYPE FILE FILES "/home/mersdk/src/3rdparty/quazip/quazip/CMakeFiles/Export/lib64/cmake/QuaZip-Qt5-1.1/QuaZip-Qt5_SharedTargets-relwithdebinfo.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64/cmake/QuaZip-Qt5-1.1" TYPE FILE FILES
    "/home/mersdk/src/3rdparty/quazip/quazip/QuaZip-Qt5Config.cmake"
    "/home/mersdk/src/3rdparty/quazip/quazip/QuaZip-Qt5ConfigVersion.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib64/pkgconfig" TYPE FILE FILES "/home/mersdk/src/3rdparty/quazip/quazip/quazip1-qt5.pc")
endif()

