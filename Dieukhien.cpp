#include "DieuKhien.h"
#include <Arduino.h>
DieuKhien::DieuKhien(int chan) {
    pin = chan;
    pinMode(pin, OUTPUT);
}
void DieuKhien::write(int state) {
    digitalWrite(pin, state); // Ghi trạng thái được chuyền vào chân điều khiển
}
bool DieuKhien::doc() {
    pinMode(pin, INPUT_PULLUP); // Thiết lập chân là đầu vào với điện trở kéo lên
    return digitalRead(pin) == LOW; // Đọc trạng thái của nút nhấn, trạng thái LOW khi nút được nhấn
}
