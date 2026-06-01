# SquareLine 导出的 ui 源文件：优先使用 ui/filelist.txt（与导出一致），避免 GLOB ui/**/*.c 在部分环境下漏掉 ui/ui.c 导致链接缺 ui_init。
set(_squareline_filelist "${CMAKE_CURRENT_LIST_DIR}/ui/filelist.txt")
if(EXISTS "${_squareline_filelist}")
    file(STRINGS "${_squareline_filelist}" _squareline_lines)
    set(squareline_ui_srcs "")
    foreach(_line IN LISTS _squareline_lines)
        string(REGEX REPLACE "\r$" "" _line "${_line}")
        string(STRIP "${_line}" _line)
        if(_line)
            list(APPEND squareline_ui_srcs "${CMAKE_CURRENT_LIST_DIR}/ui/${_line}")
        endif()
    endforeach()
else()
    file(GLOB squareline_ui_top "${CMAKE_CURRENT_LIST_DIR}/ui/*.c")
    file(GLOB_RECURSE squareline_ui_nested LIST_DIRECTORIES false
         "${CMAKE_CURRENT_LIST_DIR}/ui/*/*.c")
    set(squareline_ui_srcs ${squareline_ui_top} ${squareline_ui_nested})
endif()

set(srcs "main.c" "color_test.c" ${squareline_ui_srcs})
set(include_dirs "." "ui" "ui/custom" "ui/generated")

idf_component_register(
    SRCS ${srcs}
    INCLUDE_DIRS ${include_dirs}
    REQUIRES driver espressif__button esp_lvgl_adapter hw_init
)

# 可选：idf.py build -DAPP_ENABLE_COLOR_TEST=1
if(DEFINED APP_ENABLE_COLOR_TEST)
    target_compile_definitions(${COMPONENT_LIB} PRIVATE APP_ENABLE_COLOR_TEST=${APP_ENABLE_COLOR_TEST})
endif()
