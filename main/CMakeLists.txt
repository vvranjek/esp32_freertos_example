# Register the component
idf_component_register(SRCS "hello_world_main.cpp"
                       PRIV_REQUIRES spi_flash
                       INCLUDE_DIRS "")


# Specify the C++ source files
target_sources(${COMPONENT_LIB}
               PRIVATE
               freertostask.cpp
               worker.cpp
           )

# Set the C++ language standard
target_compile_options(${COMPONENT_LIB} PRIVATE -std=gnu++11)
