#!/bin/bash

#This is the project for the IEEE UNIX SMP 18


#Black        0;30     Dark Gray     1;30
#Red          0;31     Light Red     1;31
#Green        0;32     Light Green   1;32
#Brown/Orange 0;33     Yellow        1;33
#Blue         0;34     Light Blue    1;34
#Purple       0;35     Light Purple  1;35
#Cyan         0;36     Light Cyan    1;36
#Light Gray   0;37     White         1;37

clear
exitprogram=0
RED='\033[0;31m'
GREEN='\033[0;32m'
BLUE='\033[0;34m'
NC='\033[0m'

echo -e "Welcome to ${BLUE}FileHandler${NC}."
echo "FileHandler lets you search for files and directories on your computer, go ahead and give it a try!"


while [ $exitprogram -eq 0 ] 
do

  clear
  echo -e "Welcome to ${BLUE}FileHandler${NC}."
  echo "FileHandler lets you search for files and directories on your computer, go ahead and give it a try!"

  #The program starts from the home directory on a new screen.
  cd ~
  presentdir=$HOME
  echo
  exitprogram=0

  #User enters the directory or filename that he wants to perform operations on or search for
  echo -e "You are in ${RED}$presentdir${NC}"
  echo -e "${RED}$presentdir${NC} contains:"
  echo
  ls -1
  echo
  echo -e "Enter the ${RED}directory name${NC} or ${RED}file name${NC} you want to search for in ${RED}$presentdir${NC}"
  echo
  read text

  #In a new window the following happens
  clear
  echo -e "You entered ${RED} $text ${NC}"

  #Now we start checking the text that the user entered


  #If the text that the user entered exists and is a directory
  if [ -d $text ]
  then
    echo -e "The ${RED} $text ${NC}directory exists."
    echo
    echo -e "Enter ${GREEN}A${NC} to enter the directory"
    echo -e "Enter ${GREEN}B${NC} to delete the directory (Note: Non-empty directories will not be deleted.)"
    echo -e "Enter ${GREEN}C${NC} to rename the directory"
    echo -e "Enter ${GREEN}D${NC} to go back to the start."
    echo -e "Enter ${GREEN}E${NC} to get a short description of the file."
    echo -e "Enter ${RED}anything${NC} else to exit."

    read diropen

    case $diropen in
    "A")
      cd $text
      presentdir=$HOME/$text
      echo "You are inside $presentdir and it consists of the following files:"
      ls -1;;
    "B")
      rmdir $text
      echo -e "$text directory ${GREEN}removed succesfully${NC}."
      #  echo -e "$test directory ${GREEN}cannot be deleted${NC}."
      ;;
    "C") 
      echo "Enter the name rename."
      read newname
      mv $text $newname
      echo -e "The file has been ${GREEN}renamed succesfully${NC}, see for yourself:"
      ls ;;
    "D")
      echo "Going back to the Home directory ...."
      echo
      continue;;
    "E")
      file $text;;
    *)
      break;;
    esac


  #If the text that the user entered exists and is a file
  elif [ -f $text ]
  then
    echo "The $text file exists."
  
    echo -e "Enter ${GREEN}1${NC} to create a open or edit file"
    echo -e "Enter ${GREEN}2${NC} to rename file."
    echo -e "Enter ${GREEN}3${NC} to delete file."
    echo -e "Enter ${GREEN}4${NC} to go to the beginning."
    echo -e "Enter ${GREEN}5${NC} to get a short description of the file."
    echo -e "Enter ${RED}anything${NC} else to exit."
    read openfile
    case $openfile in
    1)
      vi $text;;
    2)
      echo "Enter the new name:"
      read newnamef
      mv $text $newnamef
      echo -e "File ${RED} $text ${NC} successfully renamed to ${GREEN} $newnamef ${NC}.";;
    3)
      rm $text
      echo -e "File ${RED} $text ${NC} deleted successfully.";;
    4)
      continue;;
    5)
      file $text;;
    *)
      echo
      break;;
    esac

  #If the text that the user entered does not exist
  else
    echo "The file name you requested for does not exist on this directory."
    echo
    echo "Do you want to create a new file or directory with this name \"$text\"?"
    echo -e "Enter ${GREEN}1${NC} to create a new file"
    echo -e "Enter ${GREEN}2${NC} to create a new directory"
    echo -e "Enter ${GREEN}3${NC} to go to the beginning."
    echo -e "Enter ${RED}anything${NC} else to exit."
    read create
    case $create in
    1)
      vi $text;;
    2)
      mkdir $text
      echo "A new directory with the name $text has been created."
      echo;; 
    3)
      continue;;
    *)
      echo
      break;;
    esac
  
  fi
  echo
  echo
  echo "Enter 1 to go to the start page."
  echo "Enter 0 to exit."
  
  read var
  if [ $var = "0" ]
  then
    exitprogram=1
    clear
  fi
done
