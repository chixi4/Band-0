
void FUN_ram_4202e00a(int param_1,undefined4 *param_2)

{
  undefined1 auStack_2c [7];
  undefined1 auStack_25 [7];
  undefined1 auStack_1e [7];
  undefined1 auStack_17 [11];
  
  FUN_ram_42036658(param_1,auStack_2c);
  FUN_ram_4039c11e(param_2 + 1,auStack_2c,7);
  FUN_ram_4039c11e((int)param_2 + 0xb,auStack_25,7);
  FUN_ram_4039c11e((int)param_2 + 0x12,auStack_1e,7);
  FUN_ram_4039c11e((int)param_2 + 0x19,auStack_17,7);
  *(undefined2 *)(param_2 + 8) = *(undefined2 *)(param_1 + 6);
  *(undefined2 *)((int)param_2 + 0x22) = *(undefined2 *)(param_1 + 0x1e);
  *(undefined2 *)(param_2 + 9) = *(undefined2 *)(param_1 + 0x20);
  *(undefined2 *)((int)param_2 + 0x26) = *(undefined2 *)(param_1 + 0x22);
  *(undefined1 *)((int)param_2 + 0x29) = *(undefined1 *)(param_1 + 0x2e);
  *param_2 = *(undefined4 *)(param_1 + 0x68);
  *(byte *)(param_2 + 10) = ~*(byte *)(param_1 + 0x34) & 1;
  return;
}

