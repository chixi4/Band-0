
void FUN_ram_4206d568(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_3 + 0x18);
  FUN_ram_40399daa(param_1,param_3,8);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_3 + 8);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_3 + 9);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_3 + 10);
  *(char *)(param_1 + 0xb) = (char)((uint)uVar1 >> 8);
  *(char *)(param_1 + 0xc) = (char)uVar1;
  *param_2 = 0xd;
  return;
}

