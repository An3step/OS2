# CMake generated Testfile for 
# Source directory: C:/Users/Антон/source/repos/OS2_WithTests
# Build directory: C:/Users/Антон/source/repos/OS2_WithTests/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(MyTests "C:/Users/Антон/source/repos/OS2_WithTests/build/Debug/test_main.exe")
  set_tests_properties(MyTests PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Антон/source/repos/OS2_WithTests/CMakeLists.txt;9;add_test;C:/Users/Антон/source/repos/OS2_WithTests/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(MyTests "C:/Users/Антон/source/repos/OS2_WithTests/build/Release/test_main.exe")
  set_tests_properties(MyTests PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Антон/source/repos/OS2_WithTests/CMakeLists.txt;9;add_test;C:/Users/Антон/source/repos/OS2_WithTests/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(MyTests "C:/Users/Антон/source/repos/OS2_WithTests/build/MinSizeRel/test_main.exe")
  set_tests_properties(MyTests PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Антон/source/repos/OS2_WithTests/CMakeLists.txt;9;add_test;C:/Users/Антон/source/repos/OS2_WithTests/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(MyTests "C:/Users/Антон/source/repos/OS2_WithTests/build/RelWithDebInfo/test_main.exe")
  set_tests_properties(MyTests PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Антон/source/repos/OS2_WithTests/CMakeLists.txt;9;add_test;C:/Users/Антон/source/repos/OS2_WithTests/CMakeLists.txt;0;")
else()
  add_test(MyTests NOT_AVAILABLE)
endif()
