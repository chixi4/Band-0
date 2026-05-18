
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4208ca58(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_4c [6];
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 auStack_40 [16];
  
  uVar1 = (uint)*(ushort *)(param_2 + 0x16);
  if (uVar1 < 0x1c) {
    return 0x104;
  }
  puVar7 = *(undefined1 **)(*(int *)(param_2 + 4) + 4);
  puVar8 = puVar7 + 0x18;
  if (((puVar8[uVar1 - 0x1a] != 'L') || (puVar8[uVar1 - 0x19] != '\x18')) ||
     (1 < (ushort)(*(short *)(puVar8 + (uVar1 - 0x18)) - 4U))) {
    puVar6 = &DAT_ram_3c0ff324;
LAB_ram_4208cac6:
    FUN_ram_4207a038(1,0x20,1,puVar6);
    return -1;
  }
  iVar2 = FUN_ram_4207fc3c();
  iVar3 = FUN_ram_4039c0e0(puVar8 + (uVar1 - 0x16),iVar2 + 2,6);
  if (iVar3 < 1) {
    puVar6 = &DAT_ram_3c0ff20c;
    goto LAB_ram_4208cac6;
  }
  iVar3 = *(ushort *)(param_2 + 0x16) + 0x14;
  puVar4 = (undefined1 *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(iVar3);
  if (puVar4 == (undefined1 *)0x0) {
    return 0x101;
  }
  *puVar4 = *puVar7;
  puVar4[1] = puVar7[1] & 199;
  FUN_ram_4039c11e(puVar4 + 2,puVar7 + 4,0x12);
  FUN_ram_4039c11e(puVar4 + 0x14,puVar8,*(ushort *)(param_2 + 0x16) - 0x10);
  FUN_ram_4039c11e(auStack_4c,puVar7 + 10,6);
  uStack_46 = puVar8[uVar1 - 0x11];
  uVar5 = 0x20;
  uStack_45 = puVar8[uVar1 - 0x12];
  uStack_44 = puVar8[uVar1 - 0x13];
  uStack_43 = puVar8[uVar1 - 0x14];
  uStack_42 = puVar8[uVar1 - 0x15];
  uStack_41 = puVar8[uVar1 - 0x16];
  if (DAT_ram_3fcc41c6 != '\x0e') {
    uVar5 = 0x10;
  }
  iVar3 = (*_DAT_ram_3fcc4294)
                    (iVar2 + 8,uVar5,auStack_4c,0xc,puVar4,iVar3,auStack_40,_DAT_ram_3fcc4294);
  if (iVar3 == 0) {
    iVar3 = FUN_ram_4039c0e0(auStack_40,puVar8 + (uVar1 - 0x10),0x10);
    if (iVar3 == 0) {
      FUN_ram_4039c11e(iVar2 + 2,puVar8 + (uVar1 - 0x16),6);
      goto LAB_ram_4208cbfe;
    }
    puVar6 = &DAT_ram_3c0ff248;
  }
  else {
    puVar6 = &DAT_ram_3c0ff220;
  }
  FUN_ram_4207a038(1,0x20,1,puVar6,iVar3);
LAB_ram_4208cbfe:
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(puVar4);
  return iVar3;
}

