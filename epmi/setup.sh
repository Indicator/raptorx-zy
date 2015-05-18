#!/bin/bash
if [ $# -gt 0 ] ; then
    sed -s "s|INSTALL_DIR|$1|" bin/run-epadmi-general.sh.template > bin/run-epadmi-general.sh
else
    exit -1
fi
