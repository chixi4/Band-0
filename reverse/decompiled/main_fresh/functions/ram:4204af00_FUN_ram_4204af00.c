
void FUN_ram_4204af00(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 auStack_24 [4];
  
  iVar1 = 0x6003e140;
  if (param_1 != 1) {
    iVar1 = 0x6003e100;
    if (param_1 != 2) {
      iVar1 = 0x6003e120;
    }
  }
  for (iVar2 = 0; iVar2 < param_3; iVar2 = iVar2 + 4) {
    FUN_ram_4039c11e(auStack_24,param_2 + iVar2,4);
    *(undefined4 *)(iVar1 + iVar2) = auStack_24[0];
  }
  return;
}

