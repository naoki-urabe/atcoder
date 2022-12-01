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
	bin := []int{}
	for n != 0 {
		bin = append(bin, n%2)
		n /= 2
	}
	ans := [10]int{}
	for i, idx := 0, 9; i < len(bin); i, idx = i+1, idx-1 {
		ans[idx] = bin[i]
	}
	for i := 0; i < 10; i++ {
		fmt.Print(ans[i])
	}
	fmt.Println()
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
