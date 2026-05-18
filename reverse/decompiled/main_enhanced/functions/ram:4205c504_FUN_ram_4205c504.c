
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4205c504(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                     undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint auStack_14 [2];
  
  if (((param_3 == 0x1a) &&
      ((((param_2 - 3U & 0xff) < 3 || (param_2 == 1)) && (auStack_14[0] = 0, param_4 == 2)))) &&
     (iVar1 = FUN_ram_42053f22(param_5,auStack_14,2,param_6), iVar1 == 2)) {
    uVar2 = FUN_ram_420523aa(auStack_14[0] & 0xffff);
    for (piVar3 = (int *)_DAT_ram_3fcc52d8; piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
      if (param_1 == piVar3[8]) {
        if (*(ushort *)(piVar3 + 0xc) <= uVar2) {
          return;
        }
        *(short *)(piVar3 + 0xc) = (short)uVar2;
        return;
      }
    }
  }
  return;
}

