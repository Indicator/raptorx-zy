#!/bin/bash
install_path=$(pwd)
for i in MatrixLib bioh5 pnn1v2 feature_util; do
#for i in feature_util; do
    sed -s "s|INSTALL_DIR|${install_path}|" $i/CMakeLists.template > $i/CMakeLists.txt
( cd $i ; mkdir -p build; cd build; cmake ../ ; make ; make install ; )
done

for i in epmi ; do
    ( cd $i
      ./setup.sh ${install_path} || echo "$i setup error"
      )
done
