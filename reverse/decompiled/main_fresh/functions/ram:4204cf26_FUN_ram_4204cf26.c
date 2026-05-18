
int FUN_ram_4204cf26(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                    undefined4 param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_40 [24];
  ushort auStack_28 [8];
  
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = 0x110b;
  }
  else {
    iVar1 = FUN_ram_4204cd30();
    if (iVar1 == 0) {
      iVar2 = FUN_ram_4204c426(param_3);
      if (iVar2 == 0) {
        if ((param_3 & 0xf) == param_6) {
          FUN_ram_4039c11e(param_5,auStack_28);
        }
        else {
          iVar1 = 0x1103;
        }
      }
      else {
        iVar1 = 0x110c;
        if (auStack_28[0] <= param_6) {
          iVar1 = FUN_ram_4204cc82(param_1,auStack_40,0,param_5);
        }
      }
    }
  }
  return iVar1;
}

