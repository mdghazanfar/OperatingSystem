#!/bin/sh

read x
if [ $x -lt 0 ]
then
    echo "The number is -ve"
fi
if [ $x -eq 0 ]
then
    echo "The number is zero"
fi
if [ $x -gt 0 ]
then
    echo "The number is +ve"
fi