#生成库,定义名为editor的静态库
add_library(editor STATIC
            src/editor.cc
            src/buffer.h
            include/editor/editor.h
            include/editor/text.h
)



#生成头文件目录
target_include_directories(editor
            PUBLIC include
            PRIVATE src
)

#使用c++11
target_compile_features(editor PUBLIC CXX_std_11)

target_compile_features(editor PUBLIC_UNICODE UNICODE EDITOR_ID = 1)
target_compile_definitions(editor PUBLIC -O3 -Wall)

#依赖库,可直接使用find_package中的第三方的target
target_link_libraries(editor PUBLIC opencv_core ffmpeg)
