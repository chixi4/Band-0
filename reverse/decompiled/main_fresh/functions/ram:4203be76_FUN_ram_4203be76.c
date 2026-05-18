
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203be76(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  (**(code **)(_DAT_ram_3fcdfed0 + 0x84))(param_1,*(undefined4 *)(_DAT_ram_3fcdff68 + 0x10));
  (*(code *)&SUB_ram_40010488)(param_1,0,0x19c);
  (**(code **)(_DAT_ram_3fcdfed0 + 0x88))(param_1,*(undefined4 *)(_DAT_ram_3fcdff68 + 0x10));
  iVar1 = _DAT_ram_3fcdfed0;
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) & 0xfe;
  uVar2 = *(undefined4 *)(iVar1 + 0x10);
  *(undefined1 *)(param_1 + 0x84) = 1;
  *(undefined1 *)(param_1 + 0xac) = 1;
  *(byte *)(param_1 + 0x108) = *(byte *)(param_1 + 0x108) & 0xfb;
  uVar3 = *(undefined4 *)(iVar1 + 0x3c);
  *(undefined1 *)(param_1 + 0x124) = 6;
  *(undefined1 *)(param_1 + 0x14c) = 6;
  *(int *)(param_1 + 0x90) = param_1;
  *(undefined4 *)(param_1 + 0x94) = uVar2;
  *(int *)(param_1 + 0xb8) = param_1;
  *(undefined4 *)(param_1 + 0xbc) = uVar2;
  *(int *)(param_1 + 0x130) = param_1;
  *(undefined4 *)(param_1 + 0x134) = uVar3;
  *(int *)(param_1 + 0x158) = param_1;
  *(undefined4 *)(param_1 + 0x15c) = uVar3;
  return;
}

