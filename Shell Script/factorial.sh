fact() {
    local -i res=1
    if (( $1 == 0 || $1 == 1)) then
    echo $res
    return
    fi
    for (( i=1; i<=$1; i++ )) do
    res=$(( ${res} * i))
    done
    echo $res
}

echo "Enter a number: "
read num

fact $num
