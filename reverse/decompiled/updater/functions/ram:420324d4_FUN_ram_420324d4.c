
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420324d4(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int aiStack_28 [2];
  
  if ((param_1 == (int *)0x0) || (iVar9 = *param_1, iVar9 == 0)) {
    FUN_ram_42033fd8(1,0x800,1,0x3c07cf78,0x3c072634,0x5fb);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  (*(code *)&SUB_ram_40011fd0)(_DAT_ram_3fcb4f84 != iVar9,aiStack_28);
  iVar10 = *(int *)(*(int *)(param_2 + 4) + 4);
  piVar8 = param_1 + 1;
  if (*(int *)(iVar9 + 0x120) != 0) {
    piVar8 = aiStack_28;
  }
  (*(code *)&SUB_ram_40012098)(param_1,param_2,param_3,0x10,aiStack_28,param_1 + 1,piVar8);
  iVar11 = 0;
  if (*(int *)(iVar9 + 0x120) == 1) {
    iVar11 = FUN_ram_42022e9e(param_2);
  }
  puVar6 = *(uint **)(param_2 + 0x24);
  uVar7 = *puVar6;
  if ((uVar7 & 1) != 0) {
    bVar1 = *(byte *)(iVar10 + 1);
    *(byte *)(iVar10 + 1) = bVar1 | 0x40;
    if ((*param_1 == _DAT_ram_3fcb4f84) && (_DAT_ram_3fcb5134 != 0)) {
LAB_ram_42032598:
      FUN_ram_4203242a(param_1,param_2);
    }
    else if ((iVar9 == _DAT_ram_3fcb4f88) && (*(char *)((int)param_1 + 0x2f9) != '\0')) {
      if ((*(byte *)(iVar10 + 4) & 1) == 0) goto LAB_ram_42032598;
      *puVar6 = uVar7 & 0xfffffffe;
      *(byte *)(iVar10 + 1) = bVar1 & 0xbf;
      iVar5 = FUN_ram_42022e96(param_2);
      if (iVar5 != 0) {
        (*(code *)&SUB_ram_40011fa4)(param_2);
        return 0xffffffff;
      }
    }
  }
  puVar6 = *(uint **)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 0x14);
  uVar3 = *(ushort *)(param_2 + 0x16);
  *puVar6 = *puVar6 | 0x80000000;
  *puVar6 = *puVar6 | 0x40000000;
  *puVar6 = *puVar6 & 0xdfffffff;
  *puVar6 = ((uint)uVar3 + (uint)uVar2 & 0xfff) << 0xc | *puVar6 & 0xff000fff;
  if (*(int *)(iVar9 + 0x120) != 1) goto LAB_ram_420325f8;
  if ((param_3 - 0xa0U & 0xffffffdf) == 0) {
    if ((*(byte *)(iVar10 + 4) & 1) == 0) {
      if (param_1 == *(int **)(iVar9 + 0xec)) goto LAB_ram_420325f4;
      *(uint *)(*(int *)(param_2 + 0x24) + 0x14) = *(uint *)(*(int *)(param_2 + 0x24) + 0x14) | 4;
      iVar5 = _DAT_ram_3fcdfdd8;
      *(undefined1 *)((int)param_1 + 0x2fb) = 1;
      (**(code **)(iVar5 + 0xe4))();
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))
                (param_1 + 0x4f,
                 (uint)*(byte *)(*(int *)(gp + -0x2b8) + 0x50b) *
                 (uint)*(ushort *)(*(int *)(gp + -0x2b8) + 0x3f8) * 3,0);
      if ((*(byte *)(iVar10 + 4) & 1) != 0) goto LAB_ram_4203266c;
    }
    else {
LAB_ram_4203266c:
      if (*(int **)(iVar9 + 0xec) == param_1) {
        *(uint *)(*(int *)(param_2 + 0x24) + 0x14) = *(uint *)(*(int *)(param_2 + 0x24) + 0x14) | 4;
      }
    }
    if (*(int *)(iVar9 + 0x120) != 1) goto LAB_ram_420325f8;
  }
LAB_ram_420325f4:
  if ((iVar11 != 0) && ((param_1[3] & 0x10U) != 0)) {
    uVar4 = FUN_ram_42022e9a(param_1,param_2);
    return uVar4;
  }
LAB_ram_420325f8:
  iVar9 = (*(code *)&SUB_ram_40011f94)();
  if (iVar9 == 0) {
    *(undefined4 *)(param_2 + 0x20) = 0;
    uVar4 = 0;
    *_DAT_ram_3fcb50dc = param_2;
    _DAT_ram_3fcb50dc = (int *)(param_2 + 0x20);
  }
  else {
    uVar4 = (*(code *)&SUB_ram_40011ed8)(param_2);
  }
  return uVar4;
}

