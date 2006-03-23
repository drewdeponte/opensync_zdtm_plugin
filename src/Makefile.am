plugindir=@OPENSYNC_PLUGINDIR@
configdir=@OPENSYNC_CONFIGDIR@
formatsdir=@OPENSYNC_FORMATSDIR@
opensyncheaderdir=@OPENSYNC_HEADERDIR@

INCLUDES = @PACKAGE_CFLAGS@

AM_CFLAGS = -Wall -Werror @PACKAGE_CFLAGS@

EXTRA_DIST = \
            zdtm_sync.h \
            zdtm-sync

config_DATA = zdtm-sync

opensyncheader_HEADER = zdtm_sync.h

plugin_LTLIBRARIES = zdtm_sync.la

zdtm_sync_la_SOURCES = zdtm_sync.c
zdtm_sync_la_LDFLAGS = -avoid-version -export-dynamic -module
zdtm_sync_la_LIBADD = @PACKAGE_LIBS@ @LIBS@

## if you plan to install format libraries: ##
formats_LTLIBRARIES = format.la

format_la_SOURCES = format.c
format_la_LDFLAGS = -avoid-version -export-dynamic -module
format_la_LIBADD = @PACKAGE_LIBS@ @LIBS@
