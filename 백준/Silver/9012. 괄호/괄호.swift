import Foundation

let loop_cnt = Int(readLine()!)!

for _ in 0..<loop_cnt {
    let in_Str = readLine()!
    var cnt = 0
    for char in in_Str {
        if char == "(" {
            cnt += 1
        }else {
            cnt -= 1
            if cnt < 0 {
                break
            }
        }
    }
    print(cnt == 0 ? "YES" : "NO")
}