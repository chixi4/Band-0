
int FUN_ram_420179b4(uint *param_1,undefined4 *param_2,undefined1 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  byte bStack_29;
  undefined4 uStack_28;
  int aiStack_24 [3];
  
  iVar1 = 0x102;
  if (param_1 != (uint *)0x0) {
    *param_1 = 0;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0;
    }
    if ((param_3 != (undefined1 *)0x0) && (param_4 != 0)) {
      *param_3 = 0;
    }
    iVar1 = FUN_ram_4204beee(0x3c0a8afc,0,&uStack_28);
    if ((iVar1 != 0x1102) && (iVar1 == 0)) {
      bStack_29 = 0;
      iVar1 = FUN_ram_4204c1dc(uStack_28,0x3c0a8b10,&bStack_29);
      if (iVar1 == 0) {
        *param_1 = (uint)bStack_29;
      }
      if (param_2 != (undefined4 *)0x0) {
        FUN_ram_4204c270(uStack_28,0x3c0a8b24,param_2);
      }
      if ((param_3 != (undefined1 *)0x0) && (param_4 != 0)) {
        aiStack_24[0] = param_4;
        iVar2 = FUN_ram_4204c2ba(uStack_28,0x3c0a8b18,param_3,aiStack_24);
        if (iVar2 != 0) {
          *param_3 = 0;
        }
      }
      FUN_ram_4204c3d0(uStack_28);
    }
  }
  return iVar1;
}

