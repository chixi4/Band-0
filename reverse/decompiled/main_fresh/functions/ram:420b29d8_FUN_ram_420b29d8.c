
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420b29d8(int *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  byte bStack_11;
  
  iVar3 = *param_1;
  bVar1 = *(byte *)(*(int *)(iVar3 + 0x24) + 0x20);
  bStack_11 = bVar1;
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x1a8))(1,&bStack_11);
  iVar3 = *(int *)(iVar3 + 0x24);
  uVar2 = *(undefined1 *)(iVar3 + 0x20);
  if (bStack_11 <= bVar1) {
    bVar1 = bStack_11;
  }
  FUN_ram_420b2940((char)param_1[1],bVar1,uVar2,uVar2,uVar2,uVar2,*(undefined2 *)(iVar3 + 0x22));
  return 0;
}

