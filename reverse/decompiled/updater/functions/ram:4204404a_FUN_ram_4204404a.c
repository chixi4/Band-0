
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4204404a(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
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
  puVar6 = *(undefined1 **)(*(int *)(param_2 + 4) + 4);
  puVar7 = puVar6 + 0x18;
  if (((puVar7[uVar1 - 0x1a] != 'L') || (puVar7[uVar1 - 0x19] != '\x18')) ||
     (1 < (ushort)(*(short *)(puVar7 + (uVar1 - 0x18)) - 4U))) {
    uVar5 = 0x3c07db40;
LAB_ram_420440b8:
    FUN_ram_42033fd8(1,0x20,1,uVar5);
    return -1;
  }
  iVar2 = FUN_ram_4203981c();
  iVar3 = FUN_ram_40399d6c(puVar7 + (uVar1 - 0x16),iVar2 + 2,6);
  if (iVar3 < 1) {
    uVar5 = 0x3c07da50;
    goto LAB_ram_420440b8;
  }
  iVar3 = *(ushort *)(param_2 + 0x16) + 0x14;
  puVar4 = (undefined1 *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(iVar3);
  if (puVar4 == (undefined1 *)0x0) {
    return 0x101;
  }
  *puVar4 = *puVar6;
  puVar4[1] = puVar6[1] & 199;
  FUN_ram_40399daa(puVar4 + 2,puVar6 + 4,0x12);
  FUN_ram_40399daa(puVar4 + 0x14,puVar7,*(ushort *)(param_2 + 0x16) - 0x10);
  FUN_ram_40399daa(auStack_4c,puVar6 + 10,6);
  uStack_46 = puVar7[uVar1 - 0x11];
  uVar5 = 0x20;
  uStack_45 = puVar7[uVar1 - 0x12];
  uStack_44 = puVar7[uVar1 - 0x13];
  uStack_43 = puVar7[uVar1 - 0x14];
  uStack_42 = puVar7[uVar1 - 0x15];
  uStack_41 = puVar7[uVar1 - 0x16];
  if (DAT_ram_3fcb5136 != '\x0e') {
    uVar5 = 0x10;
  }
  iVar3 = (*_DAT_ram_3fcb5204)
                    (iVar2 + 8,uVar5,auStack_4c,0xc,puVar4,iVar3,auStack_40,_DAT_ram_3fcb5204);
  if (iVar3 == 0) {
    iVar3 = FUN_ram_40399d6c(auStack_40,puVar7 + (uVar1 - 0x10),0x10);
    if (iVar3 == 0) {
      FUN_ram_40399daa(iVar2 + 2,puVar7 + (uVar1 - 0x16),6);
      goto LAB_ram_420441f0;
    }
    uVar5 = 0x3c07da8c;
  }
  else {
    uVar5 = 0x3c07da64;
  }
  FUN_ram_42033fd8(1,0x20,1,uVar5,iVar3);
LAB_ram_420441f0:
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(puVar4);
  return iVar3;
}

