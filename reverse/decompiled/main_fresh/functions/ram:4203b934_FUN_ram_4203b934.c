
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203b934(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  code *pcVar11;
  
  (**(code **)(_DAT_ram_3fcdfecc + 0x608))();
  puVar3 = _DAT_ram_3fcdfea8;
  *(byte *)(param_1 + 0x108) = *(byte *)(param_1 + 0x108) | 2;
  if ((puVar3 != (undefined4 *)0x0) && (pcVar11 = (code *)*puVar3, pcVar11 != (code *)0x0)) {
    (*pcVar11)(*(undefined1 *)(param_1 + 1),4,1);
  }
  FUN_ram_4039c11e(param_1 + 0x10a,*(undefined4 *)(_DAT_ram_3fcdff64 + 8),5);
  iVar2 = _DAT_ram_3fcdfecc;
  uVar1 = *(undefined1 *)(*(int *)(_DAT_ram_3fcdff64 + 8) + 5);
  *(undefined2 *)(param_1 + 0x100) = 0;
  *(undefined1 *)(param_1 + 0x109) = uVar1;
  uVar5 = (**(code **)(iVar2 + 0x7dc))();
  iVar2 = _DAT_ram_3fcdfecc;
  *(undefined2 *)(param_1 + 0x106) = uVar5;
  uVar6 = (**(code **)(iVar2 + 0x4cc))();
  pcVar11 = *(code **)(_DAT_ram_3fcdfecc + 0x7dc);
  *(ushort *)(param_1 + 0xfe) = (ushort)((uint)uVar6 >> 0x10) ^ (ushort)uVar6;
  *(undefined4 *)(param_1 + 0xf4) = uVar6;
  uVar7 = (*pcVar11)();
  iVar4 = (uint)*(ushort *)(param_1 + 0xfa) * 0x4e2;
  pcVar11 = *(code **)(_DAT_ram_3fcdfed0 + 0x584);
  *(uint *)(param_1 + 0xf0) = uVar7 & 0xffffff;
  iVar8 = (*pcVar11)(iVar4);
  iVar9 = (**(code **)(_DAT_ram_3fcdfed0 + 0x580))();
  iVar2 = _DAT_ram_3fcdff6c;
  uVar7 = iVar4 - iVar9;
  *(char *)(param_1 + 0x11c) = (char)uVar7;
  if ((uint)*(ushort *)(iVar2 + 0x24) == (uVar7 & 0xff)) {
    *(undefined1 *)(param_1 + 0x11c) = 0;
    iVar8 = iVar8 + 1;
  }
  uVar7 = *(int *)(param_1 + 0x14) + 5000;
  *(int *)(param_1 + 0x118) = iVar8;
  *(undefined1 *)(param_1 + 0x11d) = 0;
  if (0x2557c4 < uVar7) {
    uVar7 = 0x2557c4;
  }
  uVar10 = (**(code **)(_DAT_ram_3fcdfecc + 0x7dc))();
  iVar8 = *(int *)(param_1 + 0x1c);
  iVar4 = (**(code **)(_DAT_ram_3fcdfed0 + 0x584))(uVar10 % 10000 + uVar7);
  iVar2 = _DAT_ram_3fcdfe70;
  *(int *)(param_1 + 0x120) = iVar4 + iVar8;
  if ((iVar2 != 0) && (*(int *)(iVar2 + 8) != 0)) {
    (**(code **)(_DAT_ram_3fcdfed0 + 0xcc))(param_1,0);
  }
  (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x8000,*(undefined1 *)(param_1 + 1));
  (**(code **)(_DAT_ram_3fcdfed0 + 0x4c))(param_1,1);
  return 0;
}

