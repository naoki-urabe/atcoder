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
	q := inputI()
	a := make([]int, n+1)
	sum := make([]int, n+1)
	tmp := 0
	for i := 1; i <= n; i++ {
		a[i] = inputI()
		tmp += a[i]
		sum[i] = tmp
	}
	for i := 1; i <= q; i++ {
		l := inputI()
		r := inputI()
		fmt.Println(sum[r] - sum[l-1])
	}
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
