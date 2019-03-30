#flagi dla rozdzielenia kodu
# WINDOWS w przypadku budowania pod win32
# LINUX w przypadku bodowania pod unix
if (WIN32)
    add_definitions (-DWINDOWS=IMSAD)
    MESSAGE("WINDOWS build mode\nWINDOWS flag is set.")

elseif (UNIX)
    add_definitions (-DLINUX=OK)
    MESSAGE("UNIX build mode\nLINUX is set.")

else ()
    MESSAGE(FATAL_ERROR "PLATFORM NOT SUPPORTED")

endif()
