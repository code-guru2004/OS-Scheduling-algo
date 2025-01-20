largest() {
    if (( $1 > $2 && $1 > $3 )) then
    echo "Largest: " $1
    elif (( $2 > $1 && $2 > $3 )) then
    echo "Largest: " $2
    else
    echo "Largest: " $3
    fi
}

echo "Enter Num 1: "
read num1
echo "Enter Num 2: "
read num2
echo "Enter Num 3: "
read num3

largest $num1 $num2 $num3