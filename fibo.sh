#!/bin/sh
echo Enter the range
read n
a=3
b=5
echo "The fibonacci series is: "
for((i=0; i<n; i++))
do
echo -n "$a "
temp=$((a+b))
a=$b
b=$temp
done