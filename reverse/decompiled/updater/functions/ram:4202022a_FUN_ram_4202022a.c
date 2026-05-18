
int FUN_ram_4202022a(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,
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
    iVar1 = FUN_ram_42020034();
    if (iVar1 == 0) {
      iVar2 = FUN_ram_4201f72a(param_3);
      if (iVar2 == 0) {
        if ((param_3 & 0xf) == param_6) {
          FUN_ram_40399daa(param_5,auStack_28);
        }
        else {
          iVar1 = 0x1103;
        }
      }
      else {
        iVar1 = 0x110c;
        if (auStack_28[0] <= param_6) {
          iVar1 = FUN_ram_4201ff86(param_1,auStack_40,0,param_5);
        }
      }
    }
  }
  return iVar1;
}

