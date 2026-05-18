
void FUN_ram_42027f74(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4202d598(param_2,0x10);
  *param_3 = iVar1;
  if (iVar1 != 0) {
    *(undefined1 *)(param_3 + 1) = 8;
    *(byte *)(param_3 + 5) = *(byte *)(param_3 + 5) | 2;
    return;
  }
  uVar2 = *(undefined4 *)*param_2;
  thunk_FUN_ram_4202b7dc();
  iVar1 = FUN_ram_420279b4(param_1,7,0xffffffff,0);
  if (iVar1 == 0) {
    *param_3 = 5;
    *(undefined1 *)(param_3 + 1) = 8;
    *(byte *)(param_3 + 5) = *(byte *)(param_3 + 5) | 0x10;
  }
  else {
    *(byte *)(iVar1 + 0xe) = *(byte *)(iVar1 + 0xe) & 0xef;
    FUN_ram_4039c11e(iVar1 + 0xfa,uVar2,0x10);
    *(undefined4 *)(iVar1 + 0xc4) = 0;
    *(byte *)(iVar1 + 0xc0) = *(byte *)(iVar1 + 0xc0) | 8;
    FUN_ram_420276c2(iVar1,param_3);
  }
  thunk_FUN_ram_4202b7f6();
  return;
}

