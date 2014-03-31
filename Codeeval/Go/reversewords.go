package main

import "fmt"
import "log"
import "bufio"
import "os"
import "strings"

func main() {
    file, err := os.Open(os.Args[1])
    if err != nil {
        log.Fatal(err)
    }   
    defer file.Close()
    scanner := bufio.NewScanner(file)
    for scanner.Scan() {
        //'scanner.Text()' represents the test case, do something with it
	//str := strings.Replace(scanner.Text(), "\n", "", -1)
	str1 := strings.Split(scanner.Text(), " ") 
	for i := len(str1)-1; i > -1; i-- {
	    fmt.Printf("%s ", str1[i])
	}
	fmt.Printf("\n")
    }   
}
