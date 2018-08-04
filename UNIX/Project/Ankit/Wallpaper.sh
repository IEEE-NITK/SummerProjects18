#!/bin/bash

# Script to randomly set Background from files in a directory

# Directory Containing Pictures
DIR="/home/anki2jain/Pictures"

# Command to Select a random jpg file from directory
PIC=$(ls $DIR | shuf -n1)

# Command to set Background Image
gsettings set org.gnome.desktop.background picture-uri "file://$DIR/$PIC"