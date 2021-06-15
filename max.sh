#!/bin/sh

echo "enter the first number"
read numA
echo "enter the second number"
read numB

echo "Maximum Number is :-"

if [ $numA -gt $numB ] ;
then
echo "$numA "
elif [ $numB -gt $numA ] ;
then
echo "$numB "
else
echo "$numA and $numB are equal"
fi
