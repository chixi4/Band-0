
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039e168(int param_1)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  
  if ((*(code **)(_DAT_ram_3fcb84cc + 0x10) == (code *)0x0) ||
     (iVar3 = (**(code **)(_DAT_ram_3fcb84cc + 0x10))(), iVar3 == 0)) {
    iVar3 = (uint)*(byte *)(param_1 + 0x182) * 0x20 * (int)*(short *)(param_1 + 0x184);
  }
  else {
    iVar3 = 0;
  }
  iVar4 = *(int *)(param_1 + 0x2c);
  lVar9 = (*(code *)&SUB_ram_40011f18)(0);
  lVar2 = lVar9 + (ulonglong)*(uint *)(param_1 + 0x2c);
  uVar7 = (uint)lVar2;
  uVar6 = *(uint *)(param_1 + 0x34);
  iVar5 = (int)((ulonglong)lVar2 >> 0x20);
  if ((int)*(short *)(param_1 + 0x184) == *(short *)(param_1 + 0x186) + -1) {
    uVar10 = (*(code *)&SUB_ram_40010a00)(uVar7,iVar5,uVar6,0);
    _DAT_ram_3fcc43f0 = uVar7 - (int)uVar10;
    _DAT_ram_3fcc43f4 =
         (iVar5 - (int)((ulonglong)uVar10 >> 0x20)) - (uint)(uVar7 < _DAT_ram_3fcc43f0);
  }
  else if (*(short *)(param_1 + 0x184) < 1) {
    uVar8 = _DAT_ram_3fcc45cc + uVar7;
    bVar1 = uVar8 < _DAT_ram_3fcc45cc;
    uVar10 = (*(code *)&SUB_ram_40010a00)(uVar7,iVar5,uVar6,0);
    _DAT_ram_3fcc43f0 = uVar8 - (int)uVar10;
    _DAT_ram_3fcc43f4 =
         (((uint)bVar1 + iVar5) - (int)((ulonglong)uVar10 >> 0x20)) -
         (uint)(uVar8 < _DAT_ram_3fcc43f0);
  }
  else {
    _DAT_ram_3fcc43f0 = _DAT_ram_3fcc43f0 + uVar6;
    _DAT_ram_3fcc43f4 = (uint)(_DAT_ram_3fcc43f0 < uVar6) + _DAT_ram_3fcc43f4;
  }
                    /* WARNING: Could not recover jumptable at 0x4039e22e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xf0))
            (*(undefined4 *)(param_1 + 0x188),
             ((uVar6 + _DAT_ram_3fcc43f0) - (iVar3 + iVar4)) - (int)lVar9,0);
  return;
}

