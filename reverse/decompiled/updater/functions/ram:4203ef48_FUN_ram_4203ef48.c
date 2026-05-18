
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4203ef48(undefined4 param_1,int param_2,undefined4 param_3)

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
  
  FUN_ram_42040f3a();
  iVar1 = 0x3fcb3ff0;
  uVar7 = _DAT_ram_6004d000 - _DAT_ram_3fcb4298;
  iVar9 = 0;
  iVar6 = 0x7fffffff;
  iVar2 = 0x3fcb3ff0;
  do {
    iVar3 = iVar1;
    if ((*(int *)(&DAT_ram_3fcb3ff4 + iVar9 * 0x3b8) == 0) &&
       (uVar8 = uVar7, (*(uint *)(&DAT_ram_3fcb3ff8 + iVar9 * 0x3b8) & 0xffff) == 0)) break;
    if (_DAT_ram_3fcb4ee8 != iVar1) {
      uVar8 = _DAT_ram_6004d000 - *(int *)(iVar1 + 0x2a8);
      if (29999999 < uVar8) break;
      if (*(char *)(*(int *)(gp + -0x2b8) + 0x35d) == '\0') {
        iVar3 = FUN_ram_4203d5a2(iVar1);
        if (iVar3 < iVar6) {
LAB_ram_4203effc:
          iVar2 = iVar1;
          iVar6 = iVar3;
          uVar7 = uVar8;
        }
      }
      else {
        iVar4 = FUN_ram_42045c28(*(undefined1 *)(iVar1 + 0x28b));
        iVar5 = FUN_ram_42045c28(*(undefined1 *)(iVar2 + 0x28b));
        iVar3 = iVar6;
        if (iVar4 < iVar5) goto LAB_ram_4203effc;
      }
    }
    iVar9 = iVar9 + 1;
    iVar1 = iVar1 + 0x3b8;
    iVar3 = iVar2;
    uVar8 = uVar7;
  } while (iVar9 != 4);
  if ((*(int *)(iVar3 + 4) != 0) || (*(short *)(iVar3 + 8) != 0)) {
    if ((uVar8 < 30000000) &&
       ((param_2 <= *(char *)(iVar3 + 0xa6) || (*(char *)(*(int *)(gp + -0x2b8) + 0x35d) != '\0'))))
    {
      iVar2 = FUN_ram_42045c28(param_3);
      iVar6 = FUN_ram_42045c28(*(undefined1 *)(iVar3 + 0x28b));
      if (((iVar2 <= iVar6) || (*(char *)(*(int *)(gp + -0x2b8) + 0x35d) == '\0')) &&
         ((*(char *)(*(int *)(gp + -0x2b8) + 0x92) == '\0' ||
          (iVar2 = FUN_ram_40399d6c(*(int *)(gp + -0x2b8) + 0x93,param_1,6), iVar2 != 0)))) {
        FUN_ram_42033fd8(1,4,4,0x3c07b958);
        return 0;
      }
    }
    FUN_ram_4203eaa0(iVar3);
  }
  return iVar3;
}

