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

func Min(x, y int) int {
	if x > y {
		return y
	}
	return x
}

func main() {
	n:=inputI()
	count := make([][]int, 10)
	for i:=0;i<10;i++ {
		count[i]=make([]int, 10)
	}
	for i:=0;i<n;i++ {
		s := inputS()
		for j:=0;j<len(s);j++ {
			count[s[j]-'0'][j]++
		}
	}
	ans := 1000000000
	for k:=0;k<10;k++ {
		max :=0
		for j:=0;j<10;j++ {
			max=Max(max, 10*(count[k][j]-1)+j)	
		}
		ans=Min(ans,max)
	}
	fmt.Println(ans)
}
