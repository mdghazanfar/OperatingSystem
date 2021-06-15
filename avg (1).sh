#!/bin/sh
a=5;
sum=0;
while [ $a -ge 1 ]
do
read var1
sum=`expr $sum + $var1`
a=`expr $a - 1`
done
echo "The average is" `expr $sum / 5`