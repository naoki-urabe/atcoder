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
	h, w, n := inputI(), inputI(), inputI()
	sum := [2000][2000]int{{}}
	for i := 1; i <= n; i++ {
		a, b, c, d := inputI(), inputI(), inputI(), inputI()
		sum[a][b] += 1
		sum[a][d+1] += -1
		sum[c+1][b] += -1
		sum[c+1][d+1] += 1
	}
	for i := 1; i <= h; i++ {
		tmp := 0
		for j := 1; j <= w; j++ {
			tmp += sum[i][j]
			sum[i][j] = tmp
		}
	}
	for i := 1; i <= w; i++ {
		tmp := 0
		for j := 1; j <= h; j++ {
			tmp += sum[j][i]
			sum[j][i] = tmp
		}
	}
	for i := 1; i <= h; i++ {
		for j := 1; j <= w; j++ {
			fmt.Printf("%d ", sum[i][j])
		}
		fmt.Println()
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
