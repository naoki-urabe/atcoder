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

func Max(x, y int) int {
	if x > y {
		return x
	}
	return y
}

func main() {
	sc.Split(bufio.ScanWords)
	n, k := inputI(), inputI()
	a := make([]int, n+1)
	max := 0
	for i := 1; i <= n; i++ {
		a[i] = inputI()
		max = Max(max, a[i])
	}
	for i := 1; i <= k; i++ {
		b := inputI()
		if a[b] == max {
			fmt.Println("Yes")
			return
		}
	}
	fmt.Println("No")
}
