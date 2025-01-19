array=()
echo "Enter the length of the array"
read n

for (( i=0; i<$n; i++ )) do
read elememt
array+=("$elememt")
done

# All Elements print
echo ${array[@]}


# Sort
for (( i=0; i<$n; i++ )) do
for (( j=0; j<$(( $n - $i - 1 )); j++ )) do

if (( ${array[$j]} > ${array[$(( j+1 ))]} ))
then

temp=${array[j]}
array[$j]=${array[$(( j+1 ))]}
array[$(( j + 1))]=$temp

fi

done 
done

echo "After Sort"
echo ${array[@]}