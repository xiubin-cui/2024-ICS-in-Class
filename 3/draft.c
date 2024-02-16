#include <stdint.h>
#include <stdio.h>
typedef uint8_t u8;

typedef union inst {
  struct {
    u8 rs : 2, rt : 2, op : 4;
  } rtype;
  struct {
    u8 addr : 4, op : 4;
  } mtype;
} inst_t;

int main() {
  u8 instruction = 0b11001010;         // 32位指令的二进制表示
  inst_t* cur = (inst_t*)instruction;  // 将指针cur指向instruction

  printf("rs: %d, rt: %d, op: %d\n", cur->rtype.rs, cur->rtype.rt,
         cur->rtype.op);
  printf("addr: %d, op: %d\n", cur->mtype.addr, cur->mtype.op);
  return 0;
}
