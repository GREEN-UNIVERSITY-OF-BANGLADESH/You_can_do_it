// Written by: Md. Maruf Sarker
// Platform: Codechef
// Problem: https://www.codechef.com/problems/MATCHES?tab=statement
// Language: cpp / go / c / python
// Date: 2023-05-17
// Difficulty Rating: 986

package main

import "fmt"

func main() {
	var t int
	fmt.Scan(&t)

	for i := 1; i <= t; i++ {
		var a, b int
		fmt.Scan(&a, &b)

		var sum = a + b

		var matches = 0
		for sum > 0 {
			var rem = sum % 10
			if rem == 0 || rem == 6 || rem == 9 {
				matches += 6
			} else if rem == 1 {
				matches += 2
			} else if rem == 2 || rem == 3 || rem == 5 {
				matches += 5
			} else if rem == 4 {
				matches += 4
			} else if rem == 7 {
				matches += 3
			} else if rem == 8 {
				matches += 7
			}
			sum /= 10
		}

		fmt.Println(matches)
	}
}