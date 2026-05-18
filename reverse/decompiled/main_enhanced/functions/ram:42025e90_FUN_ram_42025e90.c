
undefined4 FUN_ram_42025e90(undefined4 param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_3 == '\0') {
    iVar1 = FUN_ram_403a3150(*(undefined4 *)(param_3 + 4),0x3fcb6b5d,1);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = 0x11;
    }
    return uVar2;
  }
  return 3;
}

