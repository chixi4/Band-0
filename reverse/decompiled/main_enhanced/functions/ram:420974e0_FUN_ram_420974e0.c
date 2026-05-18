
void FUN_ram_420974e0(int param_1,undefined2 *param_2)

{
  undefined4 auStack_14 [3];
  
  auStack_14[0] = *(undefined4 *)(param_1 + 0x14);
  *param_2 = &sideleg;
  *(undefined1 *)(param_2 + 1) = 6;
  FUN_ram_4039c11e(param_2 + 8,auStack_14,4);
  FUN_ram_4039c11e(param_2 + 0x76,&DAT_ram_3c0face4,4);
  return;
}

