
int FUN_ram_4202ef08(int param_1,undefined1 param_2)

{
  int iVar1;
  undefined2 uStack_14;
  undefined1 uStack_12;
  
  if ((*(byte *)(param_1 + 0x34) & 2) == 0) {
    uStack_14 = *(undefined2 *)(param_1 + 6);
    uStack_12 = param_2;
    iVar1 = FUN_ram_420332b4(0x406,&uStack_14,3,0,0);
    if (iVar1 == 0) {
      *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | 2;
    }
    return iVar1;
  }
  return 2;
}

