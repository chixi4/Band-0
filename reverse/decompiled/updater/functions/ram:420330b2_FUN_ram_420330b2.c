
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_420330b2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,int param_6,uint param_7,uint param_8)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ushort uVar13;
  uint *puVar14;
  int iVar15;
  undefined1 *apuStack_44 [4];
  
  iVar15 = _DAT_ram_3fcb4f84;
  FUN_ram_42040c66();
  puVar2 = (undefined1 *)FUN_ram_42033916();
  iVar1 = 0;
  iVar3 = FUN_ram_42033ada(*puVar2);
  if ((iVar3 != 0) && ((*(uint *)(iVar3 + 8) & 0x80) != 0)) {
    iVar1 = 3;
  }
  iVar4 = FUN_ram_420323d4(1);
  iVar5 = FUN_ram_42031b5e(1);
  uVar9 = (uint)*(byte *)(iVar15 + 0x13d);
  uVar7 = 10;
  if (uVar9 < 8) {
    uVar7 = uVar9 + 2 & 0xff;
  }
  iVar8 = 0;
  if (8 < uVar9) {
    iVar8 = uVar9 - 6;
  }
  uVar9 = 0;
  if (_DAT_ram_3fcb4fd4 != (ushort *)0x0) {
    uVar9 = (uint)*_DAT_ram_3fcb4fd4;
  }
  uVar10 = 0;
  if (_DAT_ram_3fcb4fb0 != (ushort *)0x0) {
    uVar10 = (uint)*_DAT_ram_3fcb4fb0;
  }
  uVar11 = 0;
  if (_DAT_ram_3fcb4f9c != (ushort *)0x0) {
    uVar11 = (uint)*_DAT_ram_3fcb4f9c;
  }
  iVar12 = 0;
  if ((_DAT_ram_3fcb4ffc != 0) && (*(int *)(_DAT_ram_3fcb4ffc + 4) != 0)) {
    iVar12 = *(byte *)(_DAT_ram_3fcb4ffc + 8) + 10;
  }
  iVar1 = FUN_ram_42033f1c(apuStack_44,0x18,
                           iVar4 + iVar5 + iVar1 + 0x22 + uVar7 + iVar8 + uVar9 + uVar10 + uVar11 +
                           iVar12);
  if (iVar1 == 0) {
    uVar13 = 0;
    if (_DAT_ram_3fcb4fd4 != (ushort *)0x0) {
      uVar13 = *_DAT_ram_3fcb4fd4;
    }
    FUN_ram_42033fd8(1,0x40,2,0x3c07f5d4,uVar13);
    uVar6 = 1;
  }
  else {
    *(undefined2 *)(iVar1 + 0x14) = 0x18;
    iVar15 = iVar15 + 0x13d;
    *apuStack_44[0] = 0;
    apuStack_44[0][1] = (char)param_6;
    puVar2 = apuStack_44[0] + 2;
    if (param_6 != 0) {
      puVar2 = (undefined1 *)FUN_ram_40399daa(puVar2,param_5,param_6);
    }
    uVar6 = (*(code *)&SUB_ram_40012054)(puVar2 + param_6,iVar15);
    apuStack_44[0] = (undefined1 *)FUN_ram_420320ee(uVar6,iVar15);
    apuStack_44[0] = (undefined1 *)(*(code *)&SUB_ram_40012164)(apuStack_44[0],&DAT_ram_3fcb4f74);
    if (_DAT_ram_3fcb4fd4 != (ushort *)0x0) {
      apuStack_44[0] = (undefined1 *)FUN_ram_42031b34();
    }
    if (_DAT_ram_3fcb4fb0 != (ushort *)0x0) {
      apuStack_44[0] = (undefined1 *)FUN_ram_42031b34(apuStack_44[0]);
    }
    apuStack_44[0] = (undefined1 *)FUN_ram_420320cc(apuStack_44[0],iVar3);
    if ((_DAT_ram_3fcb4ffc != 0) && (*(int *)(_DAT_ram_3fcb4ffc + 4) != 0)) {
      apuStack_44[0] =
           (undefined1 *)
           FUN_ram_42035374(apuStack_44[0],_DAT_ram_3fcb4ffc + 1,*(int *)(_DAT_ram_3fcb4ffc + 4),
                            *(undefined1 *)(_DAT_ram_3fcb4ffc + 8));
    }
    apuStack_44[0] = (undefined1 *)(*(code *)&SUB_ram_400120bc)(apuStack_44[0],1);
    apuStack_44[0] = (undefined1 *)FUN_ram_42032352(apuStack_44[0],1);
    puVar14 = *(uint **)(iVar1 + 4);
    uVar13 = *(ushort *)(iVar1 + 0x14);
    uVar7 = (int)apuStack_44[0] - (puVar14[1] + (uint)uVar13);
    *(short *)(iVar1 + 0x16) = (short)(uVar7 * 0x10000 >> 0x10);
    *puVar14 = *puVar14 | 0x80000000;
    *puVar14 = *puVar14 | 0x40000000;
    *puVar14 = *puVar14 & 0xdfffffff;
    *puVar14 = ((uint)uVar13 + (uVar7 & 0xffff) & 0xfff) << 0xc | *puVar14 & 0xff000fff;
    (*(code *)&SUB_ram_40012098)(param_1,iVar1,0x40,0x10,param_2,param_3,param_4);
    (*(code *)&SUB_ram_40011fc8)(param_1,iVar1,7,0x30,param_8);
    (*(code *)&SUB_ram_40012000)(iVar1,5);
    iVar15 = *(int *)(iVar1 + 0x24);
    *(uint *)(iVar15 + 0x10) = *(uint *)(iVar15 + 0x10) & 0xfffdffff | (param_8 & 1) << 0x11;
    *(int *)(iVar15 + 0x14) = 1 << (param_7 & 0x1f);
    uVar6 = (*(code *)&SUB_ram_40011ed8)(iVar1);
  }
  return uVar6;
}

