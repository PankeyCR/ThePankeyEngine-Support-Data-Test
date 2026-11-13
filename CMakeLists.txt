cmake_minimum_required(VERSION 3.15)

project(ThePankeyEngine_Support_Data_Test)

if(NOT TARGET ThePankeyEngine_Support_Data_Test)

    add_library(ThePankeyEngine_Support_Data_Test INTERFACE)

    target_include_directories(
        ThePankeyEngine_Support_Data_Test
          INTERFACE
            ${CMAKE_CURRENT_SOURCE_DIR}
    )

endif()

