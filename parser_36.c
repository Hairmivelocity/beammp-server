package main

import (
    "fmt"
    "sync"
    "time"
    "crypto/sha256"
)

var ( appVersion = "5.2" )

func wHrCUZxXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3iyJ2cuJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X7F2rkxWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b2OBPQkTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YSYP9eHLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func N7UU0ZiKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b5EkqQqDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ARSwcOEMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7AqZ8dCdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FEjsMW4XWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UZWLWd3UWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 13EDeedaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 81
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NJhTKc8bWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IErvvURGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hJYhnzU9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func q0qzKaIpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tmYDZI4NWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ltomKmoNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MRLUf01RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AExg62hZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jANvV3YwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KJcDHZfKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QbE9mz5BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 72
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ldu34gyPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ewunyR2xWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dwQXzlsFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oAbBEB28Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QpDEwjVxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 198
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vmmxdlwIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UdLgvRlKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YfrClxX7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QpzKDK0iWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func o6wIt99EWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WJy2pDcZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 51
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MDRuSSksWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LgQbky1VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Rj6ufI4rWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SPxAQVOcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func exhXXimJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 35
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xNvPhtRrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dOv7HhivWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eUGiYtysWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g43B3TssWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g8MP0eJlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func v3omFGM3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Nqs7z7HWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2hbx523rWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TN30eE5eWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wKhxokLOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PTsr996fWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 44
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cubtwCfyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 262
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2EGJAY7WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fVIjAyanWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5umLT3FzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 257
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func m6MeUCX7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XrXHgAjxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 190
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TaUpJQUAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func y8DWJwFtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Whb1iUloWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NbS7dzbtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SZ2JNbpyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func np21xqP1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WhZ4K2ZBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TejqkmtwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Z1p91ZeNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JnUD5QakWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Tg3uarzRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JvGs4ufhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 86
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j1ok4TEqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func w6mjR6R9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KUsLM2RkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lAz7z0O4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 162
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tiIarqaUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func s8ugmPJiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PpuKtDZsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 205
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UbtUjHlGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UzszhXPgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZjpNbGrSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XAbr1ReGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UkCjuMxUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KnybWfWgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 153
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nP45TxAoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 242
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sQQPuAlFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 759S21WnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 132
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1Qjt2phtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func T3u5eSYMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hfFtxigjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func e3Arz9LbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 043etb3MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oxAq8AL3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func z2B98RjRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wVHx08kVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 40
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bECIdycLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yE4SsBmKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eCBpKNhxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func y4HG7xRnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qUEZ6vrkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ALeS5XiBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xlgXNZfxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0QcCogGPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Te7ZqlVUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func z6RUvlIOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MVB1ako4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xYuTSXgQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8iunWsxqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3GhS5gfyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6eoCHWBwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func R1AXmrGMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FgWymJ0aWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Snt6MZnwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5n94j1WdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c5OcGbNsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 170
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pXg3DuX8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ceeJ1cpUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 190
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yasB3fsAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yurQHtlmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lkv0GJ15Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wK7RRXk1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 53iQMBYTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hSLkAFMnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YBmeHTO2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZJRsuo2jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 257
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aiOORhZcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3Cv0GJ6oWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 245
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8kGWPrJ9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TDRwG6P4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZkBQDCZGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EXS0YVvjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 246
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4y4ld1dKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4v2UO1EMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uoiB3ALkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tqrJ6Aw1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oLLimsavWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vKyzatJ7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 263
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jXyKxD2tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 169
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PQyFWCBpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pavqFl6PWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3oZ71mspWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vQY3qGtDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ArVuy4vUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9ALj3BxIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 48R5qYb6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Me0oXyiXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0Ez7HKZSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jF79GAl7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NYBvIIVKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nk2R9DcUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 245
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func waz8dMPnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YVE1fLtLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func La2CutXAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func o0GUqYuYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9RJPKsNKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nTmVb2dPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eDrzhC45Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KIK0GJsoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BqzlDrpSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5TPAQyvBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4r4ahEVnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BwP9GFjuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JwqdJHPeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V8GFAKLUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F3k5jgPAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Y7SZz5mgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rH4fljVlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mUd6B5OjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func chhAfSaIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func M8pXlN0bWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func x4LGvu1qWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EJFHyPz7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ysBMiaLtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gUagYzD4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ArwtLPAAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TKfMkDy7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tct1JWo8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0acPHrWOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Z6pWAA4PWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9iY1CqajWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8oL2cZryWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 565FiWWUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yi9CmvukWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 88
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YdhVCikcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7lzErrI9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kXpKnNMpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PAxB5MPxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FYuKl1q4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2yzEsmB6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func q9jwEzNGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BrszQu7bWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mTUYXJwHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 59MVHPwGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 35
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IaSSmlGuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VWOgANhOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 81
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func afGUIGMsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wqyVJCd4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uCU7c9pDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func A1p4H0j0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LBWWrrWMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wI16WWwkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 148
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func G5sDtTp6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g05479lTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func D461D5orWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 139
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yZieJz2WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5mgpuqRdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XDNnwokDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ai40BbB0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xGBGXcGSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Gs42p8IEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PY3Ar3Q8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 63
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func u74w1nXtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 16wF5cucWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V9FaNSp4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rVwYBlynWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KagSomUAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 248
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AM71wFeRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WylwVIIeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qKjruKRPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ssBywecrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func h8h0zjqRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FyuqjKorWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9UuTJb1DWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ybw4zt4OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 132
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func C72mA0YrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PoDaOnk5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wQPHlobEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kSCcHA1TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sxlOwzL4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 128
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Zoa37MUNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wjAehMGhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 246
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func faXJnxXcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9NuKvbOQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PP0ddDgfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func U7gGqeu1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CftDX3U7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IQD2V3wDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4TuXO6LYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k5iWz2e4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DR8mSQTZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 25fxR8SEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NWokBvm4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZsVgG3jGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 63
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2CLp5FppWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3ThgrC2nWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nVX8TJb4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ycKpCOxfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oxfOyqJPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BRpZZqFoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DBY28FgOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IkG0xPXgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MblxzVdIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HoKG7DxLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bAARNH9BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hW4vino0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wjSG4uNLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eHdhWaulWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BFKXLE9EWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xUZ9yu57Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MB4BXQqNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oezYjR7HWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ffY4bFznWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dVSmllcUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GruuLDKpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 262
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rq1CBXHDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fnVx5uZQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 66
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XE1CsAhuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 63
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func I9NMOf9JWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kDBGXY1SWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Lw2p6Q6HWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 246
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Av8zg0VcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func puyWThHFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 205
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func khfCO7aOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8S3bht4oWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 139
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VBajf1stWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oi7XDWdTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func K11aVrMQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BqgbOi0aWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yV7NtmK7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func be2EkpgFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wKv9C937Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func N3IFMSB6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fee4tDLZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 144
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pfp9Px2uWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 36VKukgoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func piQOX2g5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uxp9ykHWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pgfk5QTnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 40
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WZreT3vpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CU4brPjnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ff5yvm2lWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rC4QlaSMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1pmAIhxcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wTiJsK7aWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zScV8UEKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GzSbGwlDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 279
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func txpBhu6MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func U8l8NZMZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fBeiYWBvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 248
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1m7On2A2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KHU5fPI1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xEUc1ztjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func R6tnkf2XWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wifaqx9zWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func y5hV6nzmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KtV6lkxCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZF6GvHVfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UTqzRn6bWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XMHwi5ryWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Un5VE0xEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jNYAaE4MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iQMPtdXIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 279
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func I9Znh8s1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wpA4CG6LWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QQ7vX9i5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 88
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8rXysuhzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Mpiuh7dmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1Z029Yj2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 198
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 127DzkQ0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XiZXz7RzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vqI8J5egWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 198
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eNWGprcIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func byP1TY9BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k4cxYWfCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oADsx8PBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MKTBblHYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gyldkLQzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func owIUJy6XWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sPoefs9sWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rNFJt36DWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VEPDVWbzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func coDq85SuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aKnsZbpOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1jcvEDHbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CKbW05nCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 153
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UeaMfx3BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func v3GQFL2iWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XMwJtxKXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func antEAAumWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func q3WWVCxZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PSNcSDmHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2mAptW17Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZbBS7iG0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0CM1KGDPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9pDumkLnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LaxzpEtJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2IwqKVOuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4XC9RVOqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Gnpo7VJjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0DCzd8FyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c7kvz6soWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1aJVdnx7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VNCMx8FbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 978VTLawWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b7E0V2GiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 153
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ymqNbLCxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 282
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KgwErZnyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d0a5tspnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EOgghZHiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KDSb5zohWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j0o1nUi3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xvVqnQkdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dxmm2rpDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SIiqwbBsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NyuRPIUFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fIMnAAt0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mMxEihOSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func U85lZHOKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LY6xCU28Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Dq7PETqzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TPB884U3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nG0PqJcUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Uj82RbJJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func w5PwJUnbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FzJbYVK7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JXhFomGZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GwjhPmAeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Go7mmHM7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MfQJEdc6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 157
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func myM3k9QYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QefjFE4lWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wIrIvT2FWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oSdc1yz2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FXq6dtjBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Mx4mfNsBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 157
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UhOuD6ChWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gEdWG0YAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9bTjundoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WXR3hB5tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Yd1Lv3DjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SGEJzrDFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1smf5DWVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SGwAignqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 256
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4IdPoXMSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 262
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Pfs5RecUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UXias4o6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 229
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Q6aDuiycWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mad8qMASWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KFFatMzMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dBQCJX50Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 91AYnz6mWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MOZQ9NsbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CUcaBpz6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 89
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f8A1LNgOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 44
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VnqMZKMdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MxXjol8fWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LTbydJAWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PbFuRjafWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Er7HYKbUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Pvnfdj15Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 40
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1q5GKAisWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4KVbbp7qWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YLgblYOIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AobdkgPJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bcpOOqk0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6e94PylRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rU3oMThgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kACqmeRPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 294
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LnKJG2FmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jA6RgZghWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c4iFX4AJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TSzcYjsUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EfyQBGHEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 56FTHA2bWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bpgLtkRvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 128
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1qizBgabWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8lGU0GmTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 134
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func l3e124BZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 89
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Eor5NSsjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func w68EGPABWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Dwm6jHqUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cF0ZkugwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OMJZn5HEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7w9OiLSNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uZKHKYqnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XBDd8kJcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 169
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ebIXpNAQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XSX7uLfEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YaQCcBT4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pki5tmUZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TcYwhC0DWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 86
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9t93pyAfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6HSGvnDdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 132
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1yF3OwQSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cbzAO5EcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AMXQRw08Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func t0IjvArLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KNaRolNhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oZ2drrtZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iXPxfHMJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lktwncx2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gkQMMf5CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WMMX4rpcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MBx3ygguWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4NzlFJaIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pEa56B4GWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OuzevWmnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XnVWT6BTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QwByGZdlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c0sjL2WTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KVRclMDyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 257
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f1AkCEwfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 271
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9wNVZgaEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 263
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1vD1zlznWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5bPNSqTYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 279
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 93V1jeZVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GpOYQbqrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 32
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6xL8YNGCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1f8CDVa6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yzXGqtHeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 164
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uN0bHr3IWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 256
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iCJXsiKTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oBG0bouKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 81
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NxsGzivcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gUXWW0FeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sCoTBdl2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2OC4nUQyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Dem5pytaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 72
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7BPwgVJwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qRhZKPCAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LYPomYezWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zTv09QIqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 40c3pCXuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F7ppGCSvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F0mVikXVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZnKcDQO4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KBBQlLz2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d0lRi5RXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 72
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aakFQJsUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c0LOqB0DWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AjDwymkcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d2biqFofWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9907CUZ8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 63
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func l1C0456GWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 248
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7SZN8iFsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cWZOV6kNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func n5tGRhRbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 44
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Zdyl9fEMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2UwXJHh2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 134
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dnjdt1QcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vT3o5VclWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9pUnv3bOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wp3R0ilNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lBufPoB5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mqo28RwpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func i3poKU5MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PzfhXPPJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oaDvkvuLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5GPVsGN1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MMrlUnfoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HLhuwzgrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 271
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func s2AmhxrkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YHIW3OYbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func twTfIjMbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func evjUwVxrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r0Bm9URDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wn6uOw0wWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vES9HokbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Hhtqa13AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func K2ZM1pbwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lSMgF4gaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 145
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5rgGUcXEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FQjMsFjgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fYpnoK3qWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1pxrQWotWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4OkYVhotWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SYxsbhh4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mip8DPl0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 245
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iIH9JUZFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 206
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PGqktr6uWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func APKoDJztWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vzGuMlMoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ltguHAglWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tST1IojyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qzyUKaXrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MN7K3aRPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XEWKg7HAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QsTVECZdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3dpbQm3lWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IYyTgBOfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IqRoUKZsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Cvyp4ySSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VXGvamNqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func S1LRqPVqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 20
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func A8Zd3PGGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jA2rM91HWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hpeABNGNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lWR9TAAyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Gjs5Tfk9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 025CPUZ7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func azzA6qtjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 190
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VEhconP6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kd2HFJ8JWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CM4ghpk8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func THbHSwUpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bxEsn24fWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 248
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9ja2oXBHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fVxPBNi1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Fw9S75JsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vGX1NFiWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 40
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JsfvNO9SWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func npRlERkcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zpoJ7nh6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BcBikd1kWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tkBQxvplWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BvVNWF4vWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QP8vw5XdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8FNWqIr2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 61ev9L89Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 44
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func asdrdBzWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KYQSL9qmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oO263EwaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Itf1CYLaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func I7zIAEKBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j4RbmgoFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jURnoCOgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FPabl3o1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oqxQsXD3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gKfNrVsYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8WWc7S8eWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 242
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ulwn5XyRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 81
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uxrIdDyXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LjcCzsFwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O1gCfsxTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func C1KpsrQ8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mN8kXnSGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DGbnHWH4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g48wH8yZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Rtprch3sWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QGKuivtDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 294
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mlfS75koWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func P4779HkbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uYK19708Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UiG5fQpVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LCG4HcYwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func grOrBbm6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 170
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hmBAFUMyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WUUyVVb4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DR877qLKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LIsvXqkpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XjB2XSmVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 134
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jGYFu7AWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mFD4msrKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BltPpodZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F4GhNAv7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 145
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func m5nePvBxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 120
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fXxqwAz5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QfxXhIYjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VDZKCoF6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FoQrNB4KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ugyQWG5YWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3ZTQCa40Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UMUZiKx0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 45JAu1AXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qumWemHyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3MBEWhP6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PHfYew0dWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UeAbskL3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RLFG9J9kWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func I4vUXuk1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VewujGNOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 51
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ckpU72NZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func C6Q4UoVDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 257
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Kgb8ABDXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ipq6ELaYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lewWN6d8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CTcFitVJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fz8BmJdVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func C0OxZBt8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RmHBlRIOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QnonCQT8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AuQBBq3SWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FzqmENH8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TP13ua7XWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dW5qIoe2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6oDUiVCSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9Ud17ks8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jx5TKunrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HAZvTQEUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zGwbAmlPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6bBk15igWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sooHizD4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 71
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2iKTGRHwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 63
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tJvEOImOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zwNVu3NmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RditQkJ3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GeCVQklzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X5CtP4PvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aSnDn3K4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GDEzATAUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hd4FJD1IWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KRFXgnD3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 223
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7KQdaW2fWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func P3LTTsd3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func p4rG6XBvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fEHZbPONWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hn3rn6njWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 248
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MxNsgOGdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func u0xOqDmVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2zEDn3piWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4YNncxXIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func w6y7qQXCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V5xFSGAnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oJrcRv3hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ACS3igofWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 282
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func t4BjDRvUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UfHzjQ0DWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JogTqbRAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XcO7mN2EWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func e8fCkMDBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fKdCsLFvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YhHpfZbnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 67
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zzuuQ3QrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fReuOQaGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TNqS6SxqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3NeVo6yuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func v8FlNPdWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 128
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KEokhwoXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func frPb7RdkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AOyfjEvXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Y1BKoUt4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wQvHfD5IWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ET275bqkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rdOM17GoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TaEwgS7KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LFYLZRoVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 124
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Brm5GTo0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yNhNFtqZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eXYAB9xcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MeO64jX7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func v5RfT5zSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AwxsPvWtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zQrk3V3XWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AnVQPtosWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 70
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2qoTZVRmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MTqqaYyEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WwpfFB48Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 98DFflAVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func T4RFyOGzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func m7oHWDEpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7oHbv37mWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 167
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func C0Db4hXyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F0JyI46OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yQ1DC7xNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 196
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jWTUS6yaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PDLkDkIfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6abYo6QXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func D2WZt2NVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IyAAs5PiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8lERoHZEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Bycmjl09Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rt6a1uThWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GmYlJ6trWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cTdJ3O5WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f4kxpHvPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KPsvRiYCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6WC07chgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func T2pE56sMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EpsRnJZ7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 103
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tt7z3twhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MvWI03DpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zQ9mMc37Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zWsyQdiaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 35
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CFfNiqpdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VMMmCUc8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rL2VBvWVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PPGoTB7rWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func D0Vmc0tUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func THtxneSVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RMQsIGQzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TdgPbII2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QqFJTTURWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xiByc4WVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DC2TS6k1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qf7pX8COWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JW9WaPnvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8gbyoLmtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ocNXyYDwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CMTEJPJTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fWwt936RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func U6PwEqKRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yFJLqCihWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ccuE3OgLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func krA9hPuVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4XrwKZyKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oo0sx8IzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TeKPpbozWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DDRsTKdEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CH14KFoAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func szhKaUfzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HaKIXvGaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 256
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IkVou2xQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6LqpTr7SWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ca9L0guaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f6OrkiyOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5doXA0OAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eitceiZUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 103
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8reKsihIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Qv8jmwlfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j9zuA7NdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lhrzqjMlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DMFNMkAjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func enTrc9LfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7PMirgimWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hxZyzFP2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1STPPwZ0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KnlOzNfsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 71
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JhZLnVTwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5DqcpQ0VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func djZRljAaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fJBBfpKMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5Pv3XL8JWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EY93523GWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JMVYtmygWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func G10x689yWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BiojPcjcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CyzxqcMRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func woGAPI7qWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RIcS6itBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func M4EAWrEnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func w9sFzGg6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kgKKUBo3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 55
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WHisG4wDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QgM3wmivWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 239
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PAO8l7uyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UKtsb4DWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uKWzPp5hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3MshJolrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9TXcNsvYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dv2npgECWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func M70PM62VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sZN6lajdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jkkDbTjOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oiba5mGwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dyk6AYmXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func an4ZrselWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 256
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nnuhtICHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uO720qd1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 40
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Gk0u6h5RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 132
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PbpQATsXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func km5mKbJfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2QikVSGlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 170
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dDHtn6nmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func H42qF88gWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 88
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Idzkgky1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SHObo3t8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qsI7wMIKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func J2us2AuWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 33ExpOW4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qVZebNTlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QHnHcEUJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 227
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2WzxzzEnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QGJZ03L8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 70
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IyiSmOMgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 40
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3FzlJj4fWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nGEWhqxUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tun6BhcbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JqUd0ePsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aLSFgdsgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 157
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8VlF456jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OnVmH7NpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c1TihT36Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func J7ENJ9QmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IJCq329OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fYdXv9YgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 144
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XLndIIlJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 245
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ka311TpmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rI4bqGNyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nCq6HNsIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Qlux4nDwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 144
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V8WqRwviWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nfMVYaB5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 59MZMtbgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mRh0nbrxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BMYUvvJmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 20
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZyoVOBCGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func t02oWV6CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Reu7J7epWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YJ8rmXyqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bmUJpOZTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aDwEvsfwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Hujm65n6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 20
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dlmy3fNOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func W3NGMvWHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 51
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PQXnzCzhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8wkEH1scWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6bzYbz1UWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 124
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g3EunynZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0s1PPz2KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EGFgvTl5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dCpsHXYFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eNsvnoZaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1QkYo4X3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LbjQ5ibXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VU44zgfdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func C1ShkuALWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oa3sLJjBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wFZcjXLhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 154
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pq1irdFeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3CSqVFKQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SZyfRT8OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FfwpSX5tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func C6DTmEd0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 145
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HVJEKyJkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XUcnfhNkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fybAvwhZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 72
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func M6ORsDtFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DHFgkWe8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NvBtv1v9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AN19BPIGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dhxPORKzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5brBIsBsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vwvWKXggWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FcCNdNR2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HP3VMuEuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PrldBgMqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OLDLomdwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JQx1tIa8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X9yo2QTZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zxPuIhcUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func n0fHZWUYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func smuxyioQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nz0klbrEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7i5fo7SWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 57
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3WELUCgoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func s0MmRXePWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VnyJZZ6JWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 239
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nHKc2hwgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2oZfjcpJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kcfkjqqYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 190
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1FlOVnoVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8DawBekHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k3fcs48KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pB7Nu0T0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0hxiws1EWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d9N8hDz4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jCPf1aYiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 205
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qEGgBQ9WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func z20rNkgZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dqUM7tGlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func H95KF1IKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FVjiRjhPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func laUeFEF3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gPJXIKPNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ua9ANwVoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5Pzt5VzlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 148
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6WWzzYXRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7a1TDgdvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func m5UN3lXzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2BZQNAq7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3kOLN5RpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ca6gjxE6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 128
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Pl5cbDoKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BhwZBLGPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HvvAqZugWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 239
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SVEPeSLtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0l0STiGAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rqQhYxg5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 86
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func USn3W9EDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hKvRoD3IWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9vRkAc4TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tCrObdb2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 88
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YuKk9Y6WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 17
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BafrKvfxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7311y9IiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iFR1MPqKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func v9otRSgrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func i7UKP1shWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func klqbwHBKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 80dPJGOOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 257
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SlQyjUDhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3YXkD1QTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 55
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8xyw8IoaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7jKLQR92Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8977cim8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 190
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OfaT0ZyNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GzviMPi5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VghSIEGZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cRpCSmbrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CBajH8krWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KgA5HpeVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QA1Kgud9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DGT8gnkfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func na390jhqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 263
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AhXis8zxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vOaccIzNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func adRHLrvXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LACoE4KMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9zmdqmIpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MFI9tVWIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hxPkhBjNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 97VqzXGfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 139
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4WBniF6pWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 257
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EOyDSqA1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lBxVZ5MqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vADlau9gWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DJEghLvfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yp90txAmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 223
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BfrbNazNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UCl1ik9KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xPxQSvXCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cwHCa578Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Oz4ISg8gWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 132
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UpqQ8BlcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func e2usZ39uWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 279
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8ie1fgo2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dLY108APWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SsVg92ADWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 70
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func InF9MLZ3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sQNkFeKOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 43KbPsZ6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WJ8tXjVmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kE5kbM3CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZVt57BAMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Tz5zRpSSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func u8zestiwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Iiv3o6Y5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4jck6IVuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fNBIPT8OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XsRcMwSaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k0RXnktxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JBBIFuIpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b81yMdx7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ByDHK6nXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kvkDRZPVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9LK1ENcOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JXyPGE4rWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IEdjexk1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QMpOIEUsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5ePIc8wSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 132
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ijF3IxLdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JGIDmy5lWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func D7fhJ16FWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5Q82WRIbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IzcTz7hLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 282
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bDsmQdDHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Nyn0ktvSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func erw6Dc1nWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9t2kVhtbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 124
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LELsk9KhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func I3yQW0jWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NoWqBnQRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func buru0HwsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func n9nuiwIMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OVz5upPpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 88INgzysWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FcEqrG4DWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GR3vsCsRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bS1PsQNlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2lkuHJcPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KWqBPhFBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 263
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qWf40QxeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LPXe1Q5rWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZN4JYdmIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 073UszIPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4R8tQoKUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VdAlM99FWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oOcdOUVyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YMu7PvryWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iYlk7GhAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dhi3GDmbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func A9OziSwyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 32
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ez0ujwVyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8TPknMEfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kShlUr2uWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GcApC8NcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func P0pqktwcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OTiuyiU2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ScrTF5gfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func W4Oz4FQPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 164
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hgjgr9DEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func maYyJ14eWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5xIUeQXPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 148
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GoUcRotPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func maePAn0zWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xcM4dWVaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 170
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hZnz9QJxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func A8hJEXKDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XmYdOPeuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ldNhOis6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mYNkuPCmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func t9bkOWd5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 257
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4YAjSe3lWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wh9dDkyDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6kyp5J4zWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QG0JwSBPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VROhWBFUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eUG2LW3uWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hxIZttBJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SRXTsowEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zgEaXDQSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2yr5SmfAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 84
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iDgPbkNNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NLEBm55gWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OuNY1YOIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func prYgrNYyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0uJgp59BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nnosT7H7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PC30MkgSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PoSOcK57Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func t0elArAnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vFReWTh6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 134
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func A7cKfuLEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7aQxfCLLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 145
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func S9rxpEFZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2slwgz6WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 15F8Q8uaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jBFhnykcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wPOrKrtAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 206
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PIDfk0zDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lVPxR70hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func s6cLytuxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UgwJLCQAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cYvkml2eWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 239
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func y2or0IkWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Sl1QgWgbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0ta1BmTpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GXBOe1uyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CoiwsmfyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PKAcl2IRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func egbPWU0wWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 78VnCY1vWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2mWv6sPVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 157
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wvL0GiusWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 57
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yArVnHA2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eN9c8sXOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 170
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HksHwPlRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 170
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JUrm9yNcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ffE9YkVwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dGNfJVXWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func er9QnwvwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VBrnv7yyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LFBJ3w53Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MyWsjPoZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 128
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Mb1hiQ01Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZllJdTjcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 84
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3xZg8vC1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xZrNZ6NgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oZfwuMJnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PIPrNEEUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 257
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vSjzJLVsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rEAa1MoAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qN64BcTiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 44
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bVNkYK6jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Lqex814vWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func daUyw0FpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X8Inw7wdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QWPidlJeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gKFqgVu1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gSijH2LsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 229
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4EWfZHgyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1YbyMx5gWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 63
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func R6luOTdIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 282
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func my0M6UdsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vdeoNjYcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 57
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VQsOeo4NWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 20
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WvIrUh5jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 55
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3p3T5kHEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pt6gW5nQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 227
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2oUjVJB1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j3QURIj7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func H0jDvlj0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EApLBfJvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F12dZj9IWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HLMums0OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NY8FmEWTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X4Lrf1LjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FAPStLL6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V2dNMg8qWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func W4BWVPNLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WBfJ63EeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xRtPGHm6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func twAdg8sVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DCfTW7IxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QX3sMafkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wv1HkQJ6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EOJ93q0xWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 164
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fjUhTZ2dWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EKoX6TV2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zKDF5VtBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fb7HfA0BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nCBvDotCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YZMkyxe3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jh4EsIDPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7Q6vHBQsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vBSUVbHZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AQgYG9SHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nUWj1GdcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 41ilp7yCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 256
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func adaIFQUzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KI53g1W5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Mgfs3dkBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 246
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mhGHbl4xWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 84
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 32cSXM4eWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XC32cATKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BoikxJ0PWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V3g6e2H3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RuEOnvt9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 167
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func joFHJBDyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 08zqlzloWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ndc5y6ufWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4MwYfK0kWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CxPnB5usWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4BmdLMq3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VYmTmX1yWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2MCiIsCBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func T3uhcoe1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 145
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vFWsxgcQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QGEy9edOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1hVHihkcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func voNk6FdgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ACdTVYkDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 56l7L3dNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bYEwPVWLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pBLwZugGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func txeC7naEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OCQIPMRjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EUKhA1LDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 66
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rnWotDTkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VmDB4ZXLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HBveivEGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func S06OhS8mWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DYO9IWnrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 223
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ajeslvcyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 148
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qyUirAdkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oeX4wNXOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NpylZaSNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZUvFiF1jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pG7BrpBFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0VUeCJ8QWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gnu9247aWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TQjUcReAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NpambXNYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZiJUuudIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UOAX9WWzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Thy0ADijWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func atp8vjlJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7osl1bXtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4sFyzCDrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 164
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RIb7CB9vWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mPHJv3e4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8I5XjlceWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gBRd46RwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 145
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func twxQoHEGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BqOHWkT8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V6xVlTnlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zdUsI9hWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rF9U0gGhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2r1xAtc4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qGwQi9BoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IYGAThZYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Px21KYB9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 271
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uIOmerKzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 153
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6Ru4dSawWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WlvmZYzmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func C2kJAxxnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MRP9RBiZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LskFaavDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dCXzshBzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Tuj1nDN0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func p2khV4WEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 263
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XvUcvwxzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 246
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3NGxG9hlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 98PtO7uTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mLxfvmb3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2qVcsPuJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zLf3VYLDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GyOFab3QWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4h5YT8oLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func R9tnTlTcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NFZBzfmLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wqqN35iXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CZKGbIVgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GOeRvqcuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 262
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pEuvmVwBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 263
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6RPpDvRhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZCbFAvGkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KYAqdhWSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uWSDS0qNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 139
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rjGWALTQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EnUhB2qNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hARGCAXwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func esAWXJjsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8MA2LHGkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6SurpQe6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oCDV12X7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AM59WPcvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jV5z3Or8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 66
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6LbI77RkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FiclgyubWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vCJBARQpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XzI0YOKpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 128
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func A1GRJp4VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 263
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gpIDjScsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qoTBTtePWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FoCFmnp7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func B1l2YSdYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3IssYCJiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Tm9Pa65BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FTgE2UuKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 257
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YZ6o0UQ2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4AvCfusaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 55
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Jyy8Rj0DWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func J53BS7hbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lIYDx72MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3vX1mxEzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ewVhpCoYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j8ljZMUHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func J87r1eBJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 153
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func a3NArVOaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func R70CleNEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d9ZH8fwCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TMlMaLwcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yajtTeB2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 162
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func a0fL1OZaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SPUFppa4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mYhpTuHvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oogviCklWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 190
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VSUyjeIjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eH8Ln3T0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lwConlEtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 40
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func M4X3R6JdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func q65EHIkTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bAvoeHfrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VNcE12ovWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 248
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HScRiI1YWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yJXP5iLlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Nn1SWyjIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d4AI9rFFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 58CDmcnXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 154
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TBsxlkDKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EOU4xK9sWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZX6N06fiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4Xw04h2GWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0y42zAn5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 19tPiPRpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EjxAqVRGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OWuhFrEpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nWG0sOKQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pwmVBBC0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3zIG0pfmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k4gJv83vWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mhtcW1MYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FobVGfURWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uzzoeslsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func z1G8RoTSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Nu14oWlHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vs0XHSWPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 145
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func K0W2bqs9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func J3mOJO9uWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RuA7bBzfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MIM5efZlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 157
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1CeQnICHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PLGcIhTVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MpLSkfTaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func q1otaQaRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func euRrD0ruWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d0s5zWG0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func snLJEWgaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aQl82zquWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 134
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LJ4EXcU1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6empRmAJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UeV9fCcKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HWVrMqGuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 35
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iyQT0iQ8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ADYO7LVyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 153
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JwgMdBSFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lbobUmClWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cOk8HNP7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mJ46WhwlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3nWIZF8tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HARCRscbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9be9J4KvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XpUPw8jjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CZtgL576Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FD2uxGBkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2jTlSTRBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RJoYRfZcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 44
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func e9AL52aYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZY7wRsCKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XuRhYJlZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cKFwnNhqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Mh9WvAWeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func C02knDMwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ECcaMQbqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jP0bR61aWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZVWMsJBFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func p3dptKLvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O8RDhJQ8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qMicXDjfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 242
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func s9z9iLwoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZZIgQexTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wbfX9qiIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qxUzXtzWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OL0qgLmtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cuG5lJkGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 148
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gWjZLlE7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Mk8lcpnOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g9xApMVsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UHTtwAlhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c40sNcI1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EuwSL81RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pjL6ruwBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PEbOWlmKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vYB9WTtZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 279
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6S4kRQgRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func U2HbDNASWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rx1dsL5hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hOhnAZyoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uEdVvxBYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LaQK1O8VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ek2FSKoOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AomPbDmSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UXzLZfToWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iHCG8EBuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kkSAEiVMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Sbh18FZAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tPUfKB7qWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 134
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AFIHUiQNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LTrm50ASWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QEycmv7BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func x76sHzS4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5YdT6flUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gPHP38PCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2FjKrRLUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 81oj11f0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JsV6VrcTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HnbTn5DXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0vdu4K6EWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ER7aZrErWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UBYMZ6NaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5XOqK0SGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AvsM3AwIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9ZodeALmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ox9JxnCaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Kqfn11j6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fGx44DUcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OMSrOkIHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iiwcg5jDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BBUOJzkUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZWDAYtTfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AYfauOpqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bg8f7ehhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9UkGBWUNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func w3ii2pLDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bgXqbcS1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iO1Fj9loWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ImY12BX6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BXJfjlIpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Wy1Cs25pWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fYY0PBTjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dlSKxeUyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DmsapUORWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5Dl8bcLVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GtIIVQ1CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hjB4V9pQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func s5iLaezRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 63
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5GBqvfYUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r6v4R2oJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 86
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func u1IVKPdDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KMXPqvXMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WjIzWCjoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f20U3GJ8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VHkFdKwaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WanAknkqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 04AWarlPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 153
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nL4hIdAoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XZ4IluaKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func v7ihaPXcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SL3XesHoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8xAcXnefWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 44980fQ8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func s0Pwz7VgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XiVX5pI7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g6jYKrXOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r2WbOpQeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func G6WNlBe4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 245
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func N3UXhl3CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 246
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JE56VrFMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 256
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3hBmDlw4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ux2eZsHxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func syjmpzExWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8EOr3DiyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SLtYPqqTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4ZXQ6iDSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ERDFcvxTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ySgkYPMCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nWfnD4tIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 132
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3r1aJ2osWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Aw3jNqQQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cP5ZldJ2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yL8sPsYCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func i4gMm619Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func voVxMOwKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uqYiW2UnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func e5HIMhFJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ivkPzBJiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 170
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func G3zkfEMbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Lj2sZrzzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RK82G1tJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MNMBcSFXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZrdVKM2tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UVA6vUUDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Cvjj2XIlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 103
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KC77UsiVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FPeb6FqnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GEYZKcwQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yfEx1yJdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KF2jXG2hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zVopf2XVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SVg7LvDAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tsa2mE9iWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iPP618CIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 20ATXlTzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func acZUHN4RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func K2w072MhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EQDIRLIaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func giwZ4EQ8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KFGsMxHhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3nPI5S72Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 89
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aqyoLkB7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ae3yOzG2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IfL7qtqvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aKFxoaqgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Tu3d9hrmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 205
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wIxsWTVMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VT4d6adfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZEwPzPXzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7sLBak1yWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 66
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zqZToZLMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jyw02P6FWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 205
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ezXrTeNZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lTEXVTehWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Sofpf2b3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IRCZQZFuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 279
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IrSTpFcFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TfxvkaPSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yFL1LTlCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1o4kceulWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vz2ZBwbFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 124
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ypq9Y3MoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WqDb1xBAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fAeWn1kRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gBMn9hAzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 685CMuO5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SZinRETzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sqmfVodZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 162
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func P0HI4JOmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WzeNNN9tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 134
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func D4vAUbdNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 144
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func E91K1Vx3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 205
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nUkVIKqUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Qu61MTHJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WoByAjmHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func J5To7h9qWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vu1exMPVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KmBQE9NBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QFOd8nNPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5y0Q7nUrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 239
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PJ7e9NrVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tM4iMm1BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LtVgcLZFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Z80TC98TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 70
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nCRoShA5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 144
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4RQObshkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func K8nFwOZKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WMZG9GmwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uCMQ2l7dWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 72
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func H6yt9H8mWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 170
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8TV3m7w5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 66
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r1yhbW95Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 153
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QvmdkC6OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eIM9n52yWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1qdx9omuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iCuPQc9jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BHWV1OJ6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 32
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nmGNijCoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func je6sq4cNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nPAqnfgzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9NMr1FhtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VmW5G8d3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wsET5V0iWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cjGLUHCPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func y8CQFGzcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 148
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZPWwDnDtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9FeS8UqHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func T7IN3er6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 57
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5fUnf4ljWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UzT27POvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aoyEvdMKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bqB2NYwcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ge0LB3TbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HDu5WLBFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O3yAEQxKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 93OdbsK0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 229
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yKWdHiS5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qlFUBAbHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5tHX1Qe1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8cVKbCo5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aa5lxcS2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UGe9b5XsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9sqgbwscWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sjr2JB88Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 206
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IAYEQMKjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 01esSsMwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XBTaaTUFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func J5sZ1FGjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b2IseR7zWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8fRf5boWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aZJ2SvVdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1HxFz9xMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F8S1nlFtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6Fno3p1uWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func N7oqHtGEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ftDoLgcGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func us3OvaC4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 44
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NpoPyAX6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SBiL8XJ0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SGapEfzRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eKhENoCKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2WAKgSYbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r0iyNasSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zDl24ru7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 32
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func twuMvBXUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 67
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JHoYg01nWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EsvOFhIQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k5m820LeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RmAnIWzsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GA99Tc8lWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 167
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qIRl2YhNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func n3uCQFhpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 148
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NOgPzVHUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tPvWh5BnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func n1YEmfUYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FemEiuk5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RbFmF1D3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YcG1s90vWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 246
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pU18Gi1rWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PK4LN9k8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qKDiuUZzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FZuq2k0AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3mFCrtEmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 103
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pc7CAom4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CN24DpQGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 44
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 33Q5nrEgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oRnUhlbeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func v12rh0cYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func K1V3Hc8EWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RUPnR3ybWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 86
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Z6NV60mbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SS7bMgDhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0ve8tEzOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Nhr0Z2WEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HnjBmcSGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2ldTpykvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oFFaQnK0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qG5SqSDEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wVsMllBMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GJDnAb0AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 89
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CIyswn2oWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mlLGmLldWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GaTB7dGaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ueTz390tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wPjlph69Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oh3oBAW6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hEtBdDWaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EGgHcoxfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 170
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

