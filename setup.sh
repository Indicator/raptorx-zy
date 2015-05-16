#!/bin/bash
install_path=$(pwd)
#for i in MatrixLib bioh5 pnn1v2 ; do
for i in MatrixLib  ; do
    sed -s "s|INSTALL_DIR|${install_path}|" $i/CMakeLists.template > $i/CMakeLists.txt
#for i in MatrixLib bioh5 pnn1v2 ; do 
( cd $i ; mkdir -p build; cd build; cmake ../ ; make ; make install ; )
done

