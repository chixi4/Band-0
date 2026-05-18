
undefined4 FUN_ram_4201f69c(int *param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar2 = *param_1;
  do {
    if (iVar2 == 0) {
      return 0;
    }
    iVar3 = *(int *)(iVar2 + 8);
    bVar1 = false;
    bVar7 = false;
    for (iVar6 = 0; iVar3 != iVar6; iVar6 = iVar6 + 1) {
      iVar5 = iVar6 * 4 + iVar2;
      uVar4 = (uint)*(byte *)(iVar5 + 0xc);
      if (uVar4 == param_2) {
        *(undefined1 *)(iVar5 + 0xc) = 0xff;
        if (bVar7) {
          return 1;
        }
        bVar1 = true;
      }
      else if ((uVar4 != 0xff) || (bVar7)) {
        if (bVar1) {
          return 1;
        }
        bVar7 = true;
      }
    }
    iVar3 = *(int *)(iVar2 + 4);
    if (!bVar7) {
      FUN_ram_4201f646(param_1,iVar2);
      thunk_FUN_ram_40390608(iVar2);
    }
    iVar2 = iVar3;
  } while (!bVar1);
  return 1;
}

