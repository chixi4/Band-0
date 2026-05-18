
undefined4 FUN_ram_420a2dd2(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  *(int *)(param_1 + 0x5c4) = param_1 + 0x42c;
  FUN_ram_420aa2aa();
  iVar1 = FUN_ram_420aabda(*(undefined4 *)(param_1 + 0x5c4),param_2,param_3);
  if (iVar1 < 0) {
    FUN_ram_420a2c28(*(undefined4 *)(param_1 + 0x790),2,-iVar1);
    uVar2 = 0x8015;
  }
  else {
    FUN_ram_420a565a(param_1 + 0x3bc,2);
    FUN_ram_420a567c(param_1 + 0x3bc,*(undefined4 *)(param_1 + 0x5c4),0);
    uVar2 = 0;
  }
  return uVar2;
}

