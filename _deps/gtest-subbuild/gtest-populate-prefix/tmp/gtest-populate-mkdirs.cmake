# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "H:/appp1/appp1/_deps/gtest-src"
  "H:/appp1/appp1/_deps/gtest-build"
  "H:/appp1/appp1/_deps/gtest-subbuild/gtest-populate-prefix"
  "H:/appp1/appp1/_deps/gtest-subbuild/gtest-populate-prefix/tmp"
  "H:/appp1/appp1/_deps/gtest-subbuild/gtest-populate-prefix/src/gtest-populate-stamp"
  "H:/appp1/appp1/_deps/gtest-subbuild/gtest-populate-prefix/src"
  "H:/appp1/appp1/_deps/gtest-subbuild/gtest-populate-prefix/src/gtest-populate-stamp"
)

set(configSubDirs Debug)
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "H:/appp1/appp1/_deps/gtest-subbuild/gtest-populate-prefix/src/gtest-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "H:/appp1/appp1/_deps/gtest-subbuild/gtest-populate-prefix/src/gtest-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
