package main

import "fmt"

func main() {
	var scale = []string{
		"c", "d", "e", "f", "g", "a", "b", "C"}
	var ascending string
	for i := 0; i < len(scale); i++ {
		ascending += scale[i]
	}
	var descending string
	for i := len(scale) - 1; i >= 0; i-- {
		descending += scale[i]
	}

	var array [8]int
	var result string
	for i := 0; i < len(scale); i++ {
		fmt.Scanf("%d", &array[i])
		result += scale[array[i]-1]
	}
	if result == ascending {
		fmt.Println("ascending")
	} else if result == descending {
		fmt.Println("descending")
	} else {
		fmt.Println("mixed")
	}
}
