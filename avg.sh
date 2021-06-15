#!bin/sh

echo "enter the 1st number"
read numA
echo "enter the 2nd number"
read numB
echo "enter the 3rd number"
read numC
echo "enter the 4th number"
read numD
echo "enter the 5th number"
read numE
sum=`expr $numA + $numB + $numC + $numD + $numE`
avg=`expr $sum / 5`
echo "average of 5 number is $avg"
