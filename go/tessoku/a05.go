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
	k := inputI()
	ans := 0
	for i := 1; i <= n; i++ {
		for j := 1; j <= n; j++ {
			l := k - i - j
			if l > 0 && l <= n {
				// fmt.Println(i, j, l)
				ans++
			}
		}
	}
	fmt.Println(ans)
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
