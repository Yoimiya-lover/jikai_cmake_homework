add_executable(simple_editor
            WIN32 MACOSX_BUNDLE
            simple_editor/simple_editor.cc
            )
            
target_link_libraries(simple_editor PRIVATE editor)

target_compile_features(simple_editor PRIVATE CXX_std_11)