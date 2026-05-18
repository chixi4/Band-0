
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4208c8d0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_40 [16];
  
  uVar5 = (uint)*(ushort *)(param_2 + 0x16);
  if (uVar5 < 0x14) {
    return 0x104;
  }
  puVar7 = *(undefined1 **)(*(int *)(param_2 + 4) + 4);
  puVar6 = puVar7 + 0x18;
  if (((puVar6[uVar5 - 0x12] != 'L') || (puVar6[uVar5 - 0x11] != '\x10')) ||
     (1 < (ushort)(*(short *)(puVar6 + (uVar5 - 0x10)) - 4U))) {
    puVar4 = &DAT_ram_3c0ff2a8;
LAB_ram_4208c93e:
    FUN_ram_4207a038(1,0x20,1,puVar4);
    return -1;
  }
  iVar1 = FUN_ram_4207fc3c();
  iVar2 = FUN_ram_4039c0e0(puVar6 + (uVar5 - 0xe),iVar1 + 2,6);
  if (iVar2 < 1) {
    puVar4 = &DAT_ram_3c0ff2b8;
    goto LAB_ram_4208c93e;
  }
  iVar2 = *(ushort *)(param_2 + 0x16) + 0x14;
  puVar3 = (undefined1 *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(iVar2);
  if (puVar3 == (undefined1 *)0x0) {
    return 0x101;
  }
  *puVar3 = *puVar7;
  puVar3[1] = puVar7[1] & 199;
  FUN_ram_4039c11e(puVar3 + 2,puVar7 + 4,0x12);
  FUN_ram_4039c11e(puVar3 + 0x14,puVar6,*(ushort *)(param_2 + 0x16) - 8);
  iVar2 = (*_DAT_ram_3fcc4288)(iVar1 + 8,puVar3,iVar2,auStack_40);
  if (iVar2 == 0) {
    iVar2 = FUN_ram_4039c0e0(auStack_40,puVar6 + (uVar5 - 8),8);
    if (iVar2 == 0) {
      FUN_ram_4039c11e(iVar1 + 2,puVar6 + (uVar5 - 0xe),6);
      goto LAB_ram_4208ca1a;
    }
    puVar4 = &DAT_ram_3c0ff2f4;
  }
  else {
    puVar4 = &DAT_ram_3c0ff2cc;
  }
  FUN_ram_4207a038(1,0x20,1,puVar4,iVar2);
LAB_ram_4208ca1a:
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(puVar3);
  return iVar2;
}

