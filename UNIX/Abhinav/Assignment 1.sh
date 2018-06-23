#!/bin/bash
# Program: Read in 3 values as user input.
# Display the sum of those three numbers as well as
# find out the maximum of the three. 
read -p "Enter three numbers : " num1 num2 num3
sum=$(($num1 + $num2 + $num3))
echo "The sum of the above three numbers are $sum"
if [ $num1 -gt $num2 -a $num1 -gt $num3 ]
then
    echo "$num1 is Greatest"
elif [ $num2 -gt $num3 -a $num2 -gt $num1 ]
then
    echo "$num2 is Greatest"
else
    echo "$num3 is Greatest!"
fi