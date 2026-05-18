
void FUN_ram_42099e14(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_2 + 200) = 1;
  *(undefined4 *)(param_2 + 0x44) = 1;
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_2 + 0x18) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0xf8);
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0xf8) = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_2 + 0xf4) = uVar1;
  FUN_ram_42099a2a();
  if (*(int *)(param_2 + 0xc) != 0) {
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  FUN_ram_42099dda(param_1,0x4208ad52);
  return;
}

