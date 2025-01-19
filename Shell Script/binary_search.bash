binary_search() {
    local -i low=0
    local -i high=$(( ${#array[@]} - 1 ))
    local -i mid
    while (( low <= high )) do
    mid=$(( (high+low) / 2 ))

    if (( ${array[$mid]} == $1 ))
    then
        echo "Element fount"
        return 0;
    fi

    if (( ${array[$mid]} < $1 ))
    then
        low=$((mid+1))
    else
        high=$((mid-1))
    fi
    done

    echo "Element not found"
  return -1
}



array=()
echo "Enter the length of the array"
read n

for (( i=0; i<n; i++ ))do
read ele
array+=("$ele")
done
echo "Enter the key to find"
read key

binary_search $key