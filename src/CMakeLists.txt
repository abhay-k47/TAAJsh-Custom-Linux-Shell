set(SOURCES
    command.cpp
    flock.cpp
    history.cpp
    malware_detection.cpp
    pipeline.cpp
    signal_handler.cpp
    utils.cpp
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

add_library(util SHARED ${SOURCES} ${HEADERS})
target_link_libraries(util readline)
install(TARGETS util DESTINATION lib)