#!/bin/bash 
awk '{if(/^ATOM/ && substr($0,22,1)==CHAIN){print substr($0,18,3)," ",substr($0,23,4)," "}if(/^MODEL/){m=m+1;if(m==2){exit}}}' CHAIN=$2 $1|uniq| awk '{printf $1" "}END{print ""}'
