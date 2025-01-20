add() {
    local res
    echo -i "Result: " 
    res=$(( $1 + $2 ))
    echo $res
}

echo "Enter num 1: "
read num1
echo "Enter num 2: "
read num2

add $num1 $num2