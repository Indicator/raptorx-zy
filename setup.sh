#!/bin/bash
for i in MatrixLib bioh5 pnn1v2 ; do 
( cd $i ; mkdir build; cd build; cmake ../ ; make ; make install ; )
done

