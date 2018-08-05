#!/bin/bash

# This script uses the files in your current directory and 
# copies them into alpha directory based on the file extension

mkdir alpha -p;
mkdir alpha/text -p;
mkdir alpha/images -p;
mkdir alpha/pdf -p;
mkdir alpha/songs -p;

var=`ls`;

for file in $var
  do
    if [[ "$file" == *.txt ]] 
    then
         cp "$file" "alpha/text";

    elif [[ "$file" == *.jpg ]]
    then
         cp "$file" "alpha/images";

    elif [[ "$file" == *.pdf ]]
    then
         cp "$file" "alpha/pdf";

    elif [[ "$file" == *.mp3 ]]
    then
         cp "$file" "alpha/songs";

    fi
  done



