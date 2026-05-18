
undefined4 FUN_ram_42018924(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined1 auStack_118 [276];
  
  local_120 = *(undefined4 *)(param_1 + 0xc);
  uStack_11c = *(undefined4 *)(param_1 + 0x10);
  iVar1 = FUN_ram_42019f5e(param_2,&local_120,auStack_118);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 0x1503;
  }
  return uVar2;
}

