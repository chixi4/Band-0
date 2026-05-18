
int FUN_ram_4201fab2(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iStack_44;
  undefined1 auStack_40 [2];
  byte bStack_3e;
  
  if (*(int *)(param_1 + 0x3c) == -1) {
    return 0x1102;
  }
  if ((*(int *)(param_2 + 0xc) != -1) || (iVar2 = FUN_ram_4201f78c(param_2), iVar2 == 0)) {
    uVar3 = *(uint *)(param_1 + 0x3c);
    while (uVar1 = uVar3, uVar1 < 0x7e) {
      iVar2 = FUN_ram_4201f92e(param_1 + 0x18,uVar1,&iStack_44);
      if (iVar2 != 0) {
        return -1;
      }
      if (iStack_44 == 2) {
        iVar2 = FUN_ram_4201f830(param_1,uVar1,auStack_40);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_ram_4201f550(param_2 + 0x44,auStack_40,*(undefined4 *)(param_2 + 0x38));
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_ram_4201fa4a(param_2,auStack_40);
        if (iVar2 != 0) {
          return iVar2;
        }
        uVar3 = bStack_3e + uVar1;
        if (0x7e < uVar3) {
          return -1;
        }
        while (uVar1 = uVar1 + 1, uVar1 < uVar3) {
          iVar2 = FUN_ram_4201f830(param_1,uVar1,auStack_40);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = FUN_ram_4201fa4a(param_2,auStack_40);
          if (iVar2 != 0) {
            return iVar2;
          }
        }
      }
      else {
        if (*(uint *)(param_1 + 0x3c) == uVar1) {
          return -1;
        }
        uVar3 = uVar1 + 1;
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}

