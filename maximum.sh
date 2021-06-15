#!/bin/bash
x=3
arr=()
while [ $x -gt 0 ]
do
read tmp
arr+=($tmp)
x=`expr $x - 1`
done
if [ ${arr[0]} -ge ${arr[1]} -a ${arr[0]} -ge ${arr[2]} ]
then
echo "The max is : ${arr[0]}"
exit 0
fi
if [ ${arr[1]} -ge ${arr[0]} -a ${arr[1]} -ge ${arr[2]} ]
then
echo "The max is : ${arr[1]}"
exit 0
fi
echo "The max is : ${arr[2]}"