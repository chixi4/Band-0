
void FUN_ram_420283dc(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_4202d598(param_2,0x10);
  *param_3 = iVar1;
  if (iVar1 != 0) {
    *(undefined1 *)(param_3 + 1) = 8;
    *(byte *)(param_3 + 5) = *(byte *)(param_3 + 5) | 2;
    return;
  }
  uVar3 = *(undefined4 *)*param_2;
  thunk_FUN_ram_4202b7dc();
  iVar1 = FUN_ram_420279b4(param_1,2,0xffffffff,0);
  if (iVar1 == 0) {
    *param_3 = 5;
    *(byte *)(param_3 + 5) = *(byte *)(param_3 + 5) | 0x10;
  }
  else {
    uVar2 = FUN_ram_420283c8();
    FUN_ram_4039c11e(uVar2,uVar3,0x10);
    if ((*(byte *)(iVar1 + 8) & 0x10) == 0) {
      FUN_ram_4202d2ce(iVar1,param_3);
    }
    else {
      FUN_ram_42030de0();
    }
  }
  thunk_FUN_ram_4202b7f6();
  return;
}

