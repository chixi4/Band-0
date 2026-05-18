
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420499c2(int *param_1,int *param_2)

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
  bVar1 = _DAT_ram_3fcc51e4 == iVar3;
  if (0x1000000 < (uint)param_1[1]) {
    iVar4 = 0x102;
    goto LAB_ram_42049ba2;
  }
  piVar10 = (int *)0x0;
  if (iVar3 != 0 && !bVar1) {
    piVar10 = &local_54;
  }
  (*(code *)&SUB_ram_40010488)(param_2,0,0x108);
  piVar7 = param_2 + 1;
  *param_2 = iVar3;
  iVar4 = FUN_ram_42049738(iVar3,piVar7,0x18,1);
  if (iVar4 != 0) goto LAB_ram_42049ba2;
  if ((*(char *)((int)param_2 + 0x1b) != '\0') && (piVar10 != (int *)0x0)) {
    iVar4 = FUN_ram_42049c3a();
    *piVar10 = iVar4;
    if (iVar4 == 0) {
      iVar4 = 0x101;
      goto LAB_ram_42049ba2;
    }
    FUN_ram_42049c6c(iVar4,piVar7,0x18);
  }
  if ((char)param_2[1] == -0x17) {
    iVar4 = FUN_ram_42049624(piVar7,*param_2 != 0 && _DAT_ram_3fcc51e4 != *param_2);
    iVar2 = local_54;
    if (iVar4 != 0) goto LAB_ram_42049ba2;
    if (*(byte *)((int)param_2 + 5) < 0x11) {
      param_2[0x37] = 0x18;
      iVar4 = FUN_ram_420497a4(param_2,local_54,&uStack_58);
      if (iVar4 != 0) goto LAB_ram_42049ba2;
      iVar5 = FUN_ram_4039fd80();
      uVar6 = uStack_58;
      iVar4 = param_2[0x37];
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      iVar8 = (iVar4 + 0x10U & 0xfffffff0) - iVar4;
      if ((iVar5 == 0) || (iVar2 != 0)) {
        iVar4 = FUN_ram_42049738(*param_2 + iVar4,&uStack_50,iVar8,1);
        if (iVar4 != 0) goto LAB_ram_42049ba2;
        if ((iVar5 == 0) &&
           ((uint)*(byte *)((int)&local_54 + iVar8 + 3) !=
            ((uVar6 >> 0x18 ^ uVar6 >> 0x10 ^ uVar6 ^ uVar6 >> 8) & 0xff))) goto LAB_ram_42049be6;
        if (iVar2 != 0) {
          FUN_ram_42049c6c(iVar2,&uStack_50,iVar8);
        }
      }
      uVar6 = param_2[0x37] + iVar8;
      param_2[0x37] = uVar6;
      uVar9 = param_1[1];
      if (*(char *)((int)param_2 + 0x1b) != '\0') {
        iVar4 = FUN_ram_42049738(*param_2 + uVar6,param_2 + 0x38,0x20,1);
        if (iVar4 != 0) goto LAB_ram_42049ba2;
        uVar6 = param_2[0x37] + 0x20;
        param_2[0x37] = uVar6;
      }
      if (uVar6 <= uVar9) {
        if (iVar3 == 0 || bVar1) {
          if (iVar2 == 0) {
            return 0;
          }
LAB_ram_42049bf2:
          FUN_ram_42049c90(iVar2,0);
          return 0;
        }
        if (iVar2 == 0) {
          return 0;
        }
        iVar3 = FUN_ram_4039fd80();
        if (iVar3 != 0) goto LAB_ram_42049bf2;
        (*(code *)&SUB_ram_40010488)(&uStack_50,0,0x20);
        FUN_ram_42049c90(iVar2,&uStack_50);
        FUN_ram_420497a2(&uStack_50,0x20,&DAT_ram_3c0c2a40);
        iVar3 = FUN_ram_4039c0e0(param_2 + 0x38,&uStack_50,0x20);
        if (iVar3 == 0) {
          return 0;
        }
        FUN_ram_420497a2(param_2 + 0x38,0x20,&DAT_ram_3c0c2a50);
        local_54 = 0;
      }
    }
  }
LAB_ram_42049be6:
  iVar4 = 0x2002;
LAB_ram_42049ba2:
  if (local_54 != 0) {
    FUN_ram_42049c90(local_54,0);
  }
  (*(code *)&SUB_ram_40010488)(param_2,0,0x108);
  return iVar4;
}

