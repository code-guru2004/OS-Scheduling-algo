array=()
echo "Enter the length: "
read n

for (( i=0; i<$n; i++)) do
read ele
array+=("$ele")
done
max=-99999
min=99999
for (( i=0; i<$n; i++)) do
if (( ${array[i]} > max )) then
max=${array[i]}
fi
if (( ${array[i]} < min )) then
min=${array[i]}
fi
done

echo "MAX: $max"
echo "MIN: $min"