#!/bin/sh

echo "enter the 1st number"
read numA
echo "enter 2nd number"
read numB
echo "`expr $numA \* $numB`"
