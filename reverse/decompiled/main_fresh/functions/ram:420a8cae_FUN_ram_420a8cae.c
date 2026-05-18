
undefined4 FUN_ram_420a8cae(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 auStack_14 [3];
  
  if (*param_1 == 6) {
    iVar1 = FUN_ram_4207371c(param_1,auStack_14);
    uVar2 = 0xffffc600;
    if (iVar1 == 0) {
      uVar2 = FUN_ram_420a886e(param_2,auStack_14[0]);
    }
    return uVar2;
  }
  return 0xffffb180;
}

