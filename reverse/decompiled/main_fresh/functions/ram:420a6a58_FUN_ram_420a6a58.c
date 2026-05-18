
undefined4 FUN_ram_420a6a58(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [28];
  
  iVar2 = *(int *)(param_1 + 0x94);
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    if (*(int *)(iVar2 + -8) == 0) {
      return 0;
    }
    FUN_ram_4039c11e(auStack_38,iVar2,0x18);
    FUN_ram_420a6940(iVar2);
    FUN_ram_420a68b0(param_1,0);
    bVar1 = true;
  }
  iVar2 = 0x93d;
  if (param_2 != 0) {
    iVar2 = param_2 + 0x13d;
  }
  puVar3 = (undefined4 *)FUN_ram_4206d7ce(1,iVar2 + 8);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = iVar2;
    FUN_ram_420a68b0(param_1,puVar3 + 2);
    if (bVar1) {
      FUN_ram_4039c11e(*(undefined4 *)(param_1 + 0x98),auStack_38);
      FUN_ram_4039c11e(*(undefined4 *)(param_1 + 0xa4),auStack_30);
    }
    return 0;
  }
  return 0xffff8100;
}

