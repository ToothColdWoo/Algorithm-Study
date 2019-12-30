package main

import (
	"fmt"
	"io"
)

func main() {
	var a int
	var b int

	for {
		_, err := fmt.Scanln(&a, &b)
		if err == io.EOF {
			break
		} else {
			fmt.Printf("%d\n", a+b)
		}
	}
}
