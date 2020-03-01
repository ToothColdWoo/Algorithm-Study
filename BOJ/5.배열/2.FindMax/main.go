package main

import (
	"fmt"
)

func main() {
	var arr [10]int
	var max int = 0
	var n int
	for i := 0; i < 9; i++ {
		fmt.Scanln(&arr[i])
		if max < arr[i] {
			max = arr[i]
			n = i + 1
		}
	}
	fmt.Printf("%d\n%d", max, n)
}
