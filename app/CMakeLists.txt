set(SOURCES
    taaj.cpp
    )

set(HEADERS
    ../include/command.hpp
    ../include/flock.hpp
    ../include/history.hpp
    ../include/malware_detection.hpp
    ../include/pipeline.hpp
    ../include/signal_handler.hpp
    ../include/utils.hpp
    )

add_executable(taajsh ${SOURCES} ${HEADERS})
target_link_libraries(taajsh util)
target_link_options(taajsh PUBLIC -Wl,-rpath=/usr/local/lib)
install(TARGETS taajsh DESTINATION bin)
