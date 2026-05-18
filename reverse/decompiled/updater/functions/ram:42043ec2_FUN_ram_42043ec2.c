
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42043ec2(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
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
    uVar4 = 0x3c07dac4;
LAB_ram_42043f30:
    FUN_ram_42033fd8(1,0x20,1,uVar4);
    return -1;
  }
  iVar1 = FUN_ram_4203981c();
  iVar2 = FUN_ram_40399d6c(puVar6 + (uVar5 - 0xe),iVar1 + 2,6);
  if (iVar2 < 1) {
    uVar4 = 0x3c07dad4;
    goto LAB_ram_42043f30;
  }
  iVar2 = *(ushort *)(param_2 + 0x16) + 0x14;
  puVar3 = (undefined1 *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(iVar2);
  if (puVar3 == (undefined1 *)0x0) {
    return 0x101;
  }
  *puVar3 = *puVar7;
  puVar3[1] = puVar7[1] & 199;
  FUN_ram_40399daa(puVar3 + 2,puVar7 + 4,0x12);
  FUN_ram_40399daa(puVar3 + 0x14,puVar6,*(ushort *)(param_2 + 0x16) - 8);
  iVar2 = (*_DAT_ram_3fcb51f8)(iVar1 + 8,puVar3,iVar2,auStack_40);
  if (iVar2 == 0) {
    iVar2 = FUN_ram_40399d6c(auStack_40,puVar6 + (uVar5 - 8),8);
    if (iVar2 == 0) {
      FUN_ram_40399daa(iVar1 + 2,puVar6 + (uVar5 - 0xe),6);
      goto LAB_ram_4204400c;
    }
    uVar4 = 0x3c07db10;
  }
  else {
    uVar4 = 0x3c07dae8;
  }
  FUN_ram_42033fd8(1,0x20,1,uVar4,iVar2);
LAB_ram_4204400c:
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(puVar3);
  return iVar2;
}

