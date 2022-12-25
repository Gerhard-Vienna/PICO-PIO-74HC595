cmake_minimum_required(VERSION 3.13)
include(pico_sdk_import.cmake)
project(test_project)
pico_sdk_init()

add_executable(test
    main.cpp
    )

pico_generate_pio_header(test ${CMAKE_CURRENT_LIST_DIR}/sn74595.pio)

pico_enable_stdio_usb(test 1)
pico_enable_stdio_uart(test 1)
target_link_libraries(test pico_stdlib pico_multicore hardware_pio hardware_dma)
pico_add_extra_outputs(test)
target_link_libraries(test pico_stdlib)

