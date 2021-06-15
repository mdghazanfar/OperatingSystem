#!/bin/sh
echo "enter 10 numbers"
read -a array
count=0
echo "enter number to find"
read value
for i in ${array[@]}
do
if [ $i -eq $value ];
then
echo 'index is '$count
fi
count=$((count+1))
done
