#!/bin/bash
for i in optimizer  Sequence ; do 
awk '{if(/MPI|mpi.h/){print "//"$0}else{print $0}}' $i.cpp > $i.nompi.cpp
done
