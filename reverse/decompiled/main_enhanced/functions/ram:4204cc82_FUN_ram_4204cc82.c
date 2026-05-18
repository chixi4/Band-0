
int FUN_ram_4204cc82(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_50 [40];
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0x110b;
  }
  uVar4 = (uint)*(ushort *)(param_2 + 0x18);
  iVar1 = param_4;
  uVar3 = param_3;
  while( true ) {
    uVar3 = uVar3 + 1;
    if (*(byte *)(param_2 + 2) + param_3 <= uVar3) {
      iVar1 = FUN_ram_4204edd2(param_4,*(undefined2 *)(param_2 + 0x18),0);
      iVar2 = 0;
      if ((iVar1 != *(int *)(param_2 + 0x1c)) &&
         (iVar2 = FUN_ram_4204cb60(param_1,param_3), iVar2 == 0)) {
        iVar2 = 0x1102;
      }
      return iVar2;
    }
    iVar2 = FUN_ram_4204c52c(param_1,uVar3,auStack_50);
    if (iVar2 != 0) break;
    uVar5 = uVar4;
    if (0x20 < uVar4) {
      uVar5 = 0x20;
    }
    FUN_ram_4039c11e(iVar1,auStack_50,uVar5);
    uVar4 = uVar4 - uVar5;
    iVar1 = iVar1 + uVar5;
  }
  return iVar2;
}

