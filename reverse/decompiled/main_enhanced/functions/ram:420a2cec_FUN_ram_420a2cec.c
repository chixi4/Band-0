
int FUN_ram_420a2cec(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_420a7138();
  if (iVar1 < 0) {
    if (iVar1 == -0x7880) {
      iVar1 = 0;
    }
    else if ((iVar1 != -0x6900) && (iVar1 != -0x6880)) {
      FUN_ram_420a2c28(*(undefined4 *)(param_1 + 0x790),2,-iVar1);
      FUN_ram_420a2c28(*(undefined4 *)(param_1 + 0x790),4,0x801d);
    }
  }
  return iVar1;
}

