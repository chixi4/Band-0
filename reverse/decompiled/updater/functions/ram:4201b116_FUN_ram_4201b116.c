
void FUN_ram_4201b116(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = 9;
  uVar2 = *(uint *)(*param_1 + 0x78) >> 0x14 & 3;
  if ((uVar2 != 2) && (uVar1 = 0xb, uVar2 != 3)) {
    uVar1 = 5;
  }
  *param_2 = uVar1;
  return;
}

