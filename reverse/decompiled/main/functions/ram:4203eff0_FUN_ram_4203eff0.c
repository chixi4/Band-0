
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203eff0(uint *param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  uint *puVar10;
  uint uVar11;
  
  *(undefined1 *)(param_1 + 0x15) = 0x22;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)((int)param_1 + 0x5e) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0x51) = 0;
  *(undefined1 *)((int)param_1 + 0x52) = 0;
  (*(code *)&SUB_ram_40010488)((int)param_1 + 0x55,0,7);
  iVar5 = _DAT_ram_3fcdfecc;
  *(undefined1 *)((int)param_1 + 0xd) = 0x7f;
  *(undefined1 *)((int)param_1 + 0x53) = 0;
  *(undefined1 *)((int)param_1 + 0x4a) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  pcVar9 = *(code **)(iVar5 + 0x114);
  param_1[0x19] = 0;
  iVar4 = (*pcVar9)();
  iVar5 = _DAT_ram_3fcdff64;
  *(undefined1 *)((int)param_1 + 0xe) = *(undefined1 *)(iVar4 + 0x10);
  iVar4 = _DAT_ram_3fcdff6c;
  puVar10 = *(uint **)(iVar5 + 0xc);
  uVar7 = param_1[10];
  param_1[0x78] = *puVar10;
  *(undefined1 *)((int)param_1 + 0x1da) = *(undefined1 *)((int)puVar10 + 6);
  uVar8 = puVar10[1];
  iVar5 = *(int *)(iVar4 + 0x1c);
  param_1[10] = uVar7 & 0xff03ff00 | 0x55;
  *(short *)(param_1 + 0x77) = (short)uVar8;
  uVar11 = (*(byte *)(iVar5 + 0xc) & 7) << 0xc;
  param_1[10] = uVar7 & 0xff038f00 | 0x55 | uVar11;
  uVar8 = (*(byte *)(iVar5 + 0xd) & 7) << 0xf;
  param_1[10] = uVar7 & 0xff000f00 | 0x55 | uVar11 | uVar8;
  uVar1 = *_DAT_ram_3fcdfebc;
  *(undefined1 *)((int)param_1 + 0x2e) = 0;
  param_1[10] = uVar7 & 0xfc000f00 | 0x55 | uVar11 | uVar8 | (uVar1 & 3) << 0x18;
  iVar5 = _DAT_ram_3fcdfed0;
  *(undefined1 *)(param_1 + 0x14) = 0xff;
  pcVar9 = *(code **)(iVar5 + 0x1a8);
  *(undefined2 *)(param_1 + 0x17) = 0;
  *(undefined2 *)(param_1 + 0x5a) = 0;
  (*pcVar9)(param_1);
  iVar5 = _DAT_ram_3fcdff64;
  *(undefined2 *)(param_1 + 0x11) = 0x100;
  *(undefined2 *)((int)param_1 + 0x42) = 0;
  iVar4 = *(int *)(iVar5 + 8);
  param_1[0x39] = 0;
  param_1[0x3a] = (uint)(param_1 + 0x39);
  param_1[0x31] = 0;
  *(undefined2 *)((int)param_1 + 0x62) = 0;
  iVar5 = _DAT_ram_3fcdfecc;
  *(undefined1 *)((int)param_1 + 0xf) = *(undefined1 *)(iVar4 + 8);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(iVar4 + 7);
  uVar2 = *(undefined2 *)(iVar4 + 0xc);
  uVar3 = *(undefined2 *)(iVar4 + 0x14);
  *(undefined1 *)((int)param_1 + 0x11) = 0x1b;
  *(undefined2 *)((int)param_1 + 0x12) = 0x1b1b;
  *(undefined1 *)(param_1 + 5) = 0x1b;
  pcVar9 = *(code **)(iVar5 + 0x3ec);
  *(undefined2 *)((int)param_1 + 0x1a) = 0x148;
  param_1[7] = 0x1480148;
  *(undefined2 *)(param_1 + 8) = 0x148;
  *(undefined2 *)((int)param_1 + 0x16) = uVar2;
  *(undefined2 *)(param_1 + 6) = uVar3;
  *(undefined2 *)((int)param_1 + 0x26) = 0;
  (*pcVar9)(param_1,uVar2,uVar3,pcVar9);
  (*(code *)&SUB_ram_40010488)(param_1 + 0x46,0,0x50);
  iVar5 = _DAT_ram_3fcdfecc;
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar5 = (**(code **)(iVar5 + 0x114))();
  uVar2 = *(undefined2 *)(iVar5 + 0x24);
  *param_1 = *param_1 | 0x100000;
  iVar5 = *(int *)(_DAT_ram_3fcdff6c + 0x1c);
  uVar6 = *(undefined4 *)(_DAT_ram_3fcdfecc + 0x344);
  pcVar9 = *(code **)(_DAT_ram_3fcdfec4 + 0x60);
  *(undefined2 *)(param_1 + 0x1a) = uVar2;
  (*pcVar9)(param_1 + 0x45,iVar5 + 0x10,uVar6,param_1,uVar2,pcVar9);
  (**(code **)(_DAT_ram_3fcdfec4 + 0x60))
            (param_1 + 0x3c,*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x10,
             *(undefined4 *)(_DAT_ram_3fcdfecc + 0x448),param_1,_DAT_ram_3fcdfecc,
             *(code **)(_DAT_ram_3fcdfec4 + 0x60));
  (**(code **)(_DAT_ram_3fcdfec4 + 0x60))
            (param_1 + 0x3d,*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x10,
             *(undefined4 *)(_DAT_ram_3fcdfed0 + 0x224),param_1,_DAT_ram_3fcdfed0,
             *(code **)(_DAT_ram_3fcdfec4 + 0x60));
  (**(code **)(_DAT_ram_3fcdfecc + 0x354))(param_1);
  (**(code **)(_DAT_ram_3fcdfec4 + 0x60))
            (param_1 + 0x7f,*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x10,
             *(undefined4 *)(_DAT_ram_3fcdfecc + 0xa98),param_1,*(code **)(_DAT_ram_3fcdfec4 + 0x60)
            );
  iVar5 = _DAT_ram_3fcdff64;
  param_1[0x3b] = *(uint *)(_DAT_ram_3fcdff64 + 0x20);
  *(uint **)(iVar5 + 0x20) = param_1;
  return;
}

