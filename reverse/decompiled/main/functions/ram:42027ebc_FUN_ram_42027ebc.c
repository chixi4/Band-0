
void FUN_ram_42027ebc(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = FUN_ram_4202d598(param_2,7);
  *param_3 = iVar1;
  if (iVar1 != 0) {
    *(undefined1 *)(param_3 + 1) = 8;
    *(byte *)(param_3 + 5) = *(byte *)(param_3 + 5) | 2;
    return;
  }
  puVar2 = *(undefined1 **)*param_2;
  thunk_FUN_ram_4202b7dc();
  iVar1 = FUN_ram_420279b4(param_1,7,0xffffffff,0);
  if (iVar1 == 0) {
    *param_3 = 5;
    *(undefined1 *)(param_3 + 1) = 8;
    *(byte *)(param_3 + 5) = *(byte *)(param_3 + 5) | 0x10;
  }
  else {
    *(byte *)(iVar1 + 0xe) = *(byte *)(iVar1 + 0xe) & 0xf7;
    *(byte *)(iVar1 + 0xc0) = *(byte *)(iVar1 + 0xc0) | 0x10;
    *(undefined1 *)(iVar1 + 0xd8) = *puVar2;
    FUN_ram_4039c11e(iVar1 + 0x10a,puVar2 + 1,6);
    FUN_ram_420276c2(iVar1,param_3);
  }
  thunk_FUN_ram_4202b7f6();
  return;
}

