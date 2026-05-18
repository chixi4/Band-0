
int FUN_ram_4202c474(int param_1)

{
  int iVar1;
  ushort uStack_14;
  short sStack_12;
  
  iVar1 = FUN_ram_42033890(param_1,&uStack_14);
  if (iVar1 == 0) {
    FUN_ram_4202d72e(param_1);
    if (sStack_12 == *(short *)(param_1 + 0x10)) {
      iVar1 = FUN_ram_420306a8(uStack_14 & 0xfff,(int)(uint)uStack_14 >> 0xc & 3,param_1);
    }
    else {
      (*(code *)&SUB_ram_40011a08)(param_1);
      iVar1 = 10;
    }
  }
  else {
    (*(code *)&SUB_ram_40011a08)(param_1);
  }
  return iVar1;
}

