
int FUN_ram_4203382e(uint param_1,short param_2,short param_3)

{
  int iVar1;
  ushort auStack_1c [2];
  undefined2 uStack_18;
  short sStack_16;
  short sStack_14;
  
  if ((ushort)(param_2 - 0x1bU) < 0xe1) {
    iVar1 = 3;
    if ((ushort)(param_3 - 0x148U) < 0x4149) {
      uStack_18 = (undefined2)param_1;
      sStack_16 = param_2;
      sStack_14 = param_3;
      iVar1 = FUN_ram_420332b4(0x2022,&uStack_18,6,auStack_1c,2);
      if ((iVar1 == 0) && (auStack_1c[0] != param_1)) {
        iVar1 = 0xc;
      }
    }
    return iVar1;
  }
  return 3;
}

