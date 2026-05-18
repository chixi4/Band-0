
void FUN_ram_4204a3e6(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  
  bVar2 = *(byte *)(param_1 + 1) & 3;
  if (bVar2 == 2) {
    FUN_ram_40399daa(param_2,param_1 + 4,6);
    iVar3 = param_1 + 0x10;
  }
  else if (bVar2 == 3) {
    FUN_ram_40399daa(param_2,param_1 + 0x10,6);
    iVar3 = param_1 + 0x18;
  }
  else {
    iVar3 = param_1 + 10;
    iVar1 = param_1 + 4;
    if (bVar2 == 1) {
      iVar1 = param_1 + 0x10;
    }
    FUN_ram_40399daa(param_2,iVar1,6);
  }
  FUN_ram_40399daa(param_2 + 6,iVar3,6);
  iVar3 = FUN_ram_4204a3b8(param_1);
  if (iVar3 == 0x10) {
    iVar3 = 0;
  }
  *(char *)(param_2 + 0xc) = (char)iVar3;
  *(undefined1 *)(param_2 + 0xd) = 0;
  *(undefined1 *)(param_2 + 0xe) = 0;
  *(undefined1 *)(param_2 + 0xf) = 0;
  return;
}

