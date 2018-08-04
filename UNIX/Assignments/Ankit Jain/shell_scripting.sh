#!/bin/bash	#telling OS that we are using bash interpreter
read a	#reading 3 numbers
read b
read c
echo Sum of numbers is `expr $a + $b + $c`	#printing their sum
if [ $a -gt $b -a $a -gt $c ]  	#finding maximum
then
 echo Max is $a
elif [ $b -gt $a -a $b -gt $c ]
then
 echo Max is $b
else
 echo Max is $c
fi