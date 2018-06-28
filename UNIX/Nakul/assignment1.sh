#!/bin/bash
echo enter 3 nos
read a b c
if [ $a -gt $b ]
 then
  if [ $a -gt $c ]
   then
    echo $a is the greatest
   else
    echo $c is the greatest
  fi
elif [ $b -gt $c ]
 then
   echo $b is the greatest
 else
   echo $c is the greatest
fi
d=$((a+b+c))
echo sum= $d
