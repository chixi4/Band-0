
undefined4 FUN_ram_4206c582(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = FUN_ram_4206f114();
  if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x774) = 4;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    if ((uVar1 & 0xffffff7f) != 0xffff9700) {
      FUN_ram_4206c2a6(*(undefined4 *)(param_1 + 0x790),2,-uVar1);
      FUN_ram_4206c2a6(*(undefined4 *)(param_1 + 0x790),4,0x801a);
      if ((((*(int *)(param_2 + 0x44) != 0) || (*(int *)(param_2 + 4) != 0)) ||
          (*(char *)(param_2 + 0x34) != '\0')) && (iVar3 = FUN_ram_4206f086(param_1), iVar3 != 0)) {
        FUN_ram_4206c55a(param_1);
      }
      *(undefined4 *)(param_1 + 0x774) = 3;
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

