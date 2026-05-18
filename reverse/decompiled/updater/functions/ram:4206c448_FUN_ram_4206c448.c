
undefined4 FUN_ram_4206c448(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  *(int *)(param_1 + 0x5c4) = param_1 + 0x42c;
  FUN_ram_42071c64();
  iVar1 = FUN_ram_4207258c(*(undefined4 *)(param_1 + 0x5c4),param_2,param_3);
  if (iVar1 < 0) {
    FUN_ram_4206c2a6(*(undefined4 *)(param_1 + 0x790),2,-iVar1);
    uVar2 = 0x8015;
  }
  else {
    FUN_ram_4206ee72(param_1 + 0x3bc,2);
    FUN_ram_4206ee94(param_1 + 0x3bc,*(undefined4 *)(param_1 + 0x5c4),0);
    uVar2 = 0;
  }
  return uVar2;
}

