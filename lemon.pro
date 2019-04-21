TEMPLATE = subdirs
 
SUBDIRS += \
    core.pro \
    judge/judge.pro
unix:SUBDIRS+=watcher/watcher_unix.pro
