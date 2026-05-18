
undefined4 FUN_ram_4209f646(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = thunk_FUN_ram_403904a6(param_4 + 0xeU);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    FUN_ram_4039c11e(iVar1,param_2,6);
    FUN_ram_4039c11e(iVar1 + 6,param_1);
    *(undefined2 *)(iVar1 + 0xc) = 0x8e88;
    FUN_ram_4039c11e(iVar1 + 0xe,param_3,param_4);
    FUN_ram_420b18e8(1,iVar1,param_4 + 0xeU & 0xffff);
    thunk_FUN_ram_40390634(iVar1);
    uVar2 = 0;
  }
  return uVar2;
}

