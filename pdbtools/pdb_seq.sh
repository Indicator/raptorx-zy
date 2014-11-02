#!/bin/bash 
awk '{if(/^ATOM/){print substr($0,18,3)," ",substr($0,23,4)," "}if(/^MODEL/){m=m+1;if(m==2){exit}}}' $1|uniq| awk '{printf $1" "}END{print ""}'
