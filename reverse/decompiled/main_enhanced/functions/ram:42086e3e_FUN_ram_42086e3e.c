
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42086e3e(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  FUN_ram_420894a2();
  iVar1 = 0x3fcc3080;
  uVar7 = _DAT_ram_6004d000 - _DAT_ram_3fcc3328;
  iVar9 = 0;
  iVar6 = 0x7fffffff;
  iVar2 = 0x3fcc3080;
  do {
    iVar3 = iVar1;
    if ((*(int *)(&DAT_ram_3fcc3084 + iVar9 * 0x3b8) == 0) &&
       (uVar8 = uVar7, (*(uint *)(&DAT_ram_3fcc3088 + iVar9 * 0x3b8) & 0xffff) == 0)) break;
    if (_DAT_ram_3fcc3f78 != iVar1) {
      uVar8 = _DAT_ram_6004d000 - *(int *)(iVar1 + 0x2a8);
      if (29999999 < uVar8) break;
      if (*(char *)(*(int *)(gp + -0xb4) + 0x35d) == '\0') {
        iVar3 = FUN_ram_420851a8(iVar1);
        if (iVar3 < iVar6) {
LAB_ram_42086ef2:
          iVar2 = iVar1;
          iVar6 = iVar3;
          uVar7 = uVar8;
        }
      }
      else {
        iVar4 = FUN_ram_4208e578(*(undefined1 *)(iVar1 + 0x28b));
        iVar5 = FUN_ram_4208e578(*(undefined1 *)(iVar2 + 0x28b));
        iVar3 = iVar6;
        if (iVar4 < iVar5) goto LAB_ram_42086ef2;
      }
    }
    iVar9 = iVar9 + 1;
    iVar1 = iVar1 + 0x3b8;
    iVar3 = iVar2;
    uVar8 = uVar7;
  } while (iVar9 != 4);
  if ((*(int *)(iVar3 + 4) != 0) || (*(short *)(iVar3 + 8) != 0)) {
    if ((uVar8 < 30000000) &&
       ((param_2 <= *(char *)(iVar3 + 0xa6) || (*(char *)(*(int *)(gp + -0xb4) + 0x35d) != '\0'))))
    {
      iVar2 = FUN_ram_4208e578(param_3);
      iVar6 = FUN_ram_4208e578(*(undefined1 *)(iVar3 + 0x28b));
      if (((iVar2 <= iVar6) || (*(char *)(*(int *)(gp + -0xb4) + 0x35d) == '\0')) &&
         ((*(char *)(*(int *)(gp + -0xb4) + 0x92) == '\0' ||
          (iVar2 = FUN_ram_4039c0e0(*(int *)(gp + -0xb4) + 0x93,param_1,6), iVar2 != 0)))) {
        FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fcdc8);
        return 0;
      }
    }
    FUN_ram_42086996(iVar3);
  }
  return iVar3;
}

