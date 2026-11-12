cmake_minimum_required(VERSION 3.19)
project(Projet_LAOA23_Qt LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets LinguistTools)

qt_standard_project_setup()

qt_add_executable(Projet_LAOA23_Qt
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    user.cpp
    database.cpp
    database.cpp
    user.h
    user.h
    database.h
)

qt_add_translations(
    TARGETS Projet_LAOA23_Qt
    TS_FILES Projet_LAOA23_Qt_fr_FR.ts
)

target_link_libraries(Projet_LAOA23_Qt
    PRIVATE
        Qt::Core
        Qt::Widgets
)

include(GNUInstallDirs)

install(TARGETS Projet_LAOA23_Qt
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET Projet_LAOA23_Qt
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
