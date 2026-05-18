
undefined1 FUN_ram_4206593c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte abStack_110 [260];
  
  (*(code *)&SUB_ram_40010488)(abStack_110,0x80,0x100);
  for (iVar2 = 0; *(byte *)(iVar2 + 0x3c0733c4) != 0; iVar2 = iVar2 + 1) {
    abStack_110[*(byte *)(iVar2 + 0x3c0733c4)] = (byte)iVar2;
  }
  iVar2 = 1;
  uVar4 = 0;
  for (param_2 = param_1 + param_2; param_1 != param_2; param_2 = param_2 + -1) {
    uVar3 = (uint)abStack_110[*(byte *)(param_2 + -1)];
    iVar1 = iVar2;
    if (uVar3 != 0x80) {
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        uVar3 = (uint)*(byte *)(uVar3 + 0x3c0796d8);
      }
      uVar4 = (uint)*(byte *)(uVar4 * 0x20 + uVar3 + 0x3c0796f8);
      iVar2 = iVar2 + 1;
    }
  }
  if ((uVar4 - 1 & 0xff) < 0xf) {
    uVar4 = 0x10 - uVar4 & 0xff;
  }
  return *(undefined1 *)(uVar4 + 0x3c0733c4);
}

