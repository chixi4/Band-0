
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203cc94(int param_1)

{
  ushort uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  
  (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x7032,*(undefined4 *)(param_1 + 0x94));
  iVar7 = *(int *)(param_1 + 0x94);
  uVar1 = *(ushort *)(param_1 + 0x60);
  bVar9 = *(byte *)(param_1 + 0x99);
  FUN_ram_4203cba8(param_1);
  iVar8 = (uint)uVar1 - (uint)*(ushort *)(param_1 + 0x60);
  iVar3 = (uint)*(ushort *)(param_1 + 0x84) * iVar8;
  iVar4 = iVar3 * 0x4e2;
  iVar5 = (**(code **)(_DAT_ram_3fcdfed0 + 0x584))(iVar4);
  iVar6 = (**(code **)(_DAT_ram_3fcdfed0 + 0x580))();
  iVar2 = _DAT_ram_3fcdfecc;
  iVar7 = iVar7 - iVar5;
  if ((uint)bVar9 < (uint)(iVar4 - iVar6)) {
    iVar7 = iVar7 + -1;
    bVar9 = bVar9 + (char)*(undefined2 *)(_DAT_ram_3fcdff6c + 0x24);
  }
  *(byte *)(param_1 + 0x99) = (char)iVar6 + (char)iVar3 * '\x1e' + bVar9;
  UNRECOVERED_JUMPTABLE = *(code **)(iVar2 + 0xa04);
  *(int *)(param_1 + 0x94) = iVar7;
                    /* WARNING: Could not recover jumptable at 0x4203cd60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0x7031,iVar7,iVar7,iVar8);
  return;
}

