
uint FUN_ram_4204efce(int *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = FUN_ram_4204ed9a(param_3);
  iVar5 = *param_1;
  do {
    if (iVar5 == 0) {
      return 0xffffffff;
    }
    for (iVar4 = 0; *(int *)(iVar5 + 8) != iVar4; iVar4 = iVar4 + 1) {
      iVar3 = iVar4 * 4 + iVar5;
      uVar2 = (uint)*(byte *)(iVar3 + 0xc);
      if (((param_2 <= uVar2) && (*(uint *)(iVar3 + 0xc) >> 8 == (uVar1 & 0xffffff))) &&
         (uVar2 != 0xff)) {
        return uVar2;
      }
    }
    iVar5 = *(int *)(iVar5 + 4);
  } while( true );
}

