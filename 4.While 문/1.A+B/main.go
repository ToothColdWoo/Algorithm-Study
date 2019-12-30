package main

import "fmt"

func main() {
	var a int
	var b int

	for true {
		fmt.Scanln(&a, &b)
		if a == 0 && b == 0 {
			break
		} else {
			fmt.Printf("%d\n", a+b)
		}
	}
}
