
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42019cf8(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  uint uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uStack_58 = 0xef;
  local_54 = 0;
  if (param_2 == (int *)0x0) {
    return 0x102;
  }
  if (param_1 == (int *)0x0) {
    return 0x102;
  }
  iVar3 = *param_1;
  bVar1 = _DAT_ram_3fcb66c0 == iVar3;
  if (0x1000000 < (uint)param_1[1]) {
    iVar4 = 0x102;
    goto LAB_ram_42019ed8;
  }
  piVar10 = (int *)0x0;
  if (iVar3 != 0 && !bVar1) {
    piVar10 = &local_54;
  }
  (*(code *)&SUB_ram_40010488)(param_2,0,0x108);
  piVar7 = param_2 + 1;
  *param_2 = iVar3;
  iVar4 = FUN_ram_4201999c(iVar3,piVar7,0x18,1);
  if (iVar4 != 0) goto LAB_ram_42019ed8;
  if ((*(char *)((int)param_2 + 0x1b) != '\0') && (piVar10 != (int *)0x0)) {
    iVar4 = FUN_ram_42019f66();
    *piVar10 = iVar4;
    if (iVar4 == 0) {
      iVar4 = 0x101;
      goto LAB_ram_42019ed8;
    }
    thunk_FUN_ram_4202ac0e(iVar4,piVar7,0x18);
  }
  if ((char)param_2[1] == -0x17) {
    iVar4 = FUN_ram_42019888(piVar7,*param_2 != 0 && _DAT_ram_3fcb66c0 != *param_2);
    iVar2 = local_54;
    if (iVar4 != 0) goto LAB_ram_42019ed8;
    if (*(byte *)((int)param_2 + 5) < 0x11) {
      param_2[0x37] = 0x18;
      iVar4 = FUN_ram_42019ada(param_2,local_54,&uStack_58);
      if (iVar4 != 0) goto LAB_ram_42019ed8;
      iVar5 = FUN_ram_4039d97a();
      uVar6 = uStack_58;
      iVar4 = param_2[0x37];
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      iVar8 = (iVar4 + 0x10U & 0xfffffff0) - iVar4;
      if ((iVar5 == 0) || (iVar2 != 0)) {
        iVar4 = FUN_ram_4201999c(*param_2 + iVar4,&uStack_50,iVar8,1);
        if (iVar4 != 0) goto LAB_ram_42019ed8;
        if ((iVar5 == 0) &&
           ((uint)*(byte *)((int)&local_54 + iVar8 + 3) !=
            ((uVar6 >> 0x18 ^ uVar6 >> 0x10 ^ uVar6 ^ uVar6 >> 8) & 0xff))) goto LAB_ram_42019f1c;
        if (iVar2 != 0) {
          thunk_FUN_ram_4202ac0e(iVar2,&uStack_50,iVar8);
        }
      }
      uVar6 = param_2[0x37] + iVar8;
      param_2[0x37] = uVar6;
      uVar9 = param_1[1];
      if (*(char *)((int)param_2 + 0x1b) != '\0') {
        iVar4 = FUN_ram_4201999c(*param_2 + uVar6,param_2 + 0x38,0x20,1);
        if (iVar4 != 0) goto LAB_ram_42019ed8;
        uVar6 = param_2[0x37] + 0x20;
        param_2[0x37] = uVar6;
      }
      if (uVar6 <= uVar9) {
        if (iVar3 == 0 || bVar1) {
          if (iVar2 == 0) {
            return 0;
          }
LAB_ram_42019f28:
          FUN_ram_42019f9c(iVar2,0);
          return 0;
        }
        if (iVar2 == 0) {
          return 0;
        }
        iVar3 = FUN_ram_4039d97a();
        if (iVar3 != 0) goto LAB_ram_42019f28;
        (*(code *)&SUB_ram_40010488)(&uStack_50,0,0x20);
        FUN_ram_42019f9c(iVar2,&uStack_50);
        FUN_ram_42019a06(&uStack_50,0x20,0x3c0712e4);
        iVar3 = FUN_ram_40399d6c(param_2 + 0x38,&uStack_50,0x20);
        if (iVar3 == 0) {
          return 0;
        }
        FUN_ram_42019a06(param_2 + 0x38,0x20,0x3c0712f4);
        local_54 = 0;
      }
    }
  }
LAB_ram_42019f1c:
  iVar4 = 0x2002;
LAB_ram_42019ed8:
  if (local_54 != 0) {
    FUN_ram_42019f9c(local_54,0);
  }
  (*(code *)&SUB_ram_40010488)(param_2,0,0x108);
  return iVar4;
}

