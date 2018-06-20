#!/bin/bash
echo enter 3 nos
read a b c
if [ $a -gt $b ]    #checks a & b, then compares the bigger one with c and prints output
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
d=$((a+b+c))  #calculates sum of the three inputted values
echo sum= $d
