AC_INIT([Cebook], [1,0], [admin@labseni.com])
AM_INIT_AUTOMAKE([-Wall -Werror foreign])
AC_PROG_CC
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([
Makefile
src/Makefile
])



AC_SEARCH_LIBS([curl_easy_setopt], [curl], [], [
  AC_MSG_ERROR([libcurlnya belum diinstall])
])

AC_SEARCH_LIBS([pthread_join], [pthread], [], [
  AC_MSG_ERROR([pthread belum diinstall])
])

AC_SEARCH_LIBS([sqlite3_libversion], [sqlite3], [], [
  AC_MSG_ERROR([sqlite3 belum diinstall])
])

AC_SEARCH_LIBS([gps_stream], [gps], [], [
  AC_MSG_ERROR([GPS belum diinstall])
])

AC_OUTPUT
