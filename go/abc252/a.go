package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

var sc = bufio.NewScanner(os.Stdin)

func inputI() int {
	sc.Scan()
	i, e := strconv.Atoi(sc.Text())
	if e != nil {
		fmt.Println(e)
	}
	return i
}

func inputF() float64 {
	sc.Scan()
	i, e := strconv.ParseFloat(sc.Text(), 64)
	if e != nil {
		fmt.Println(e)
	}
	return i
}

func inputS() string {
	sc.Scan()
	return sc.Text()
}

func main() {
	n := inputI()
	fmt.Println(string(n))
}
