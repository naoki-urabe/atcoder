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
	h, w := inputI(), inputI()
	x := [2000][2000]int{{}}
	sum := [2000][2000]int{{}}
	for i := 1; i <= h; i++ {
		tmp := 0
		for j := 1; j <= w; j++ {
			x[i][j] = inputI()
			tmp += x[i][j]
			sum[i][j] += tmp
		}

	}
	q := inputI()
	for i := 1; i <= q; i++ {
		a, b, c, d := inputI(), inputI(), inputI(), inputI()
		ans := 0
		for j := a; j <= c; j++ {
			ans += sum[j][d] - sum[j][b-1]
		}
		fmt.Println(ans)
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
