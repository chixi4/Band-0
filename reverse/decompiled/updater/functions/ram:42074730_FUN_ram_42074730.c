
bool FUN_ram_42074730(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  FUN_ram_420742fc(param_2,(uint)DAT_ram_3fcb0b05 << 0x17 | param_4);
  uVar1 = 0;
  iVar4 = param_2;
  do {
    iVar2 = (*(code *)&SUB_ram_4001221c)(iVar4);
    iVar4 = iVar4 + 4;
    uVar1 = uVar1 + iVar2;
  } while (iVar4 != param_2 + 0x2e0);
  uVar1 = ~uVar1;
  uVar3 = (*(code *)&SUB_ram_4001221c)(iVar4);
  if (param_1 == 0) {
    *(char *)(param_2 + 0x2e0) = (char)uVar1;
    *(char *)(param_2 + 0x2e1) = (char)(uVar1 >> 8);
    *(char *)(param_2 + 0x2e2) = (char)(uVar1 >> 0x10);
    *(char *)(param_2 + 0x2e3) = (char)(uVar1 >> 0x18);
  }
  return param_1 != 0 && uVar1 != uVar3;
}

