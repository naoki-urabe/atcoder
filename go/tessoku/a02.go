package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

var sc = bufio.NewScanner(os.Stdin)

func solve() {
	sc.Split(bufio.ScanWords)
	n := inputI()
	x := inputI()
	a := make([]int, n)
	for i := 0; i < n; i++ {
		a[i] = inputI()
	}
	for i := 0; i < n; i++ {
		if a[i] == x {
			fmt.Println("Yes")
			os.Exit(0)
		}
	}
	fmt.Println("No")
}

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

func Max(x, y int) int {
	if x > y {
		return x
	}
	return y
}

func Min(x, y int) int {
	if x > y {
		return y
	}
	return x
}

func main() {
	solve()
}
