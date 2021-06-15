#!/bin/sh

echo enter 1st number to check nonprime number
read m
echo enter 2nd number to check nonprime number

read n

echo nonprime number is 
for a in $(seq $m $n)
do
k=0
for i in $(seq 2 $(expr $a - 1))
do
if [ $(expr $a % $i) -eq 0 ]
then
k=1
break
fi
done
if [ $k -eq 1 ]
then
echo $a
fi
done
