
undefined4 FUN_ram_42025dd2(undefined4 param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_11 [9];
  
  if (*param_3 == '\0') {
    iVar1 = FUN_ram_420324c8(param_1,auStack_11,1);
    if ((iVar1 != 0) ||
       (iVar1 = FUN_ram_403a3150(*(undefined4 *)(param_3 + 4),auStack_11,1), iVar1 != 0)) {
      return 0xe;
    }
  }
  else if (*param_3 == '\x01') {
    uVar2 = FUN_ram_42032514(param_1,*(undefined4 *)(param_3 + 4));
    return uVar2;
  }
  return 0;
}

