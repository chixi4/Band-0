
undefined4 FUN_ram_420216ca(int param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = (code *)*param_2;
  *(undefined4 **)(param_1 + 0x24) = param_2;
  if (pcVar2 != (code *)0x0) {
    iVar1 = (*pcVar2)();
    uVar3 = 0x5008;
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    return uVar3;
  }
  return 0;
}

