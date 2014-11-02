#!/bin/sh
#getPDBlist.sh [a list contains pdb ids to be downloaded]
pid=$$
awk '{c="wget \"http://www.pdb.org/pdb/files/"$1".pdb\" ";print(c)}' $1 > run.$pid.sh
batch.local.pl run.$pid.sh wget
rm run.$pid.sh
