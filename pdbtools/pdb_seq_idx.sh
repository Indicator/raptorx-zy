#!/bin/bash 
awk '/^ATOM/{print substr($0,18,3)," ",substr($0,23,4)}' $1|uniq| awk '{printf $2" "}'
