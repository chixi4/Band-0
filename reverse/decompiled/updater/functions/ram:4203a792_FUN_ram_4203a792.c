
int FUN_ram_4203a792(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  byte abStack_21 [9];
  
  bVar1 = *(byte *)(param_1 + 8);
  if (4 < bVar1) {
    return 0x102;
  }
  bVar2 = **(byte **)(gp + -0x2b8);
  abStack_21[0] = bVar1;
  if (bVar1 == bVar2) {
    iVar3 = FUN_ram_420386f6(0,abStack_21);
    if (iVar3 == 0) goto LAB_ram_4203a874;
    **(byte **)(gp + -0x2b8) = abStack_21[0];
  }
  else {
    if (1 < DAT_ram_3fcb5119) {
      if (DAT_ram_3fcb5119 == 2) {
        FUN_ram_42039a74(bVar2,bVar1);
      }
      iVar3 = FUN_ram_42043c8c(bVar1);
      if (iVar3 != 0) {
        FUN_ram_42043c8c(bVar2);
        FUN_ram_42039ace(bVar2);
        uVar4 = 0x3c07d5c0;
LAB_ram_4203a804:
        FUN_ram_42033fd8(1,3,1,uVar4,iVar3,bVar2);
        return iVar3;
      }
      FUN_ram_4203a6ea(bVar2,bVar1);
      if (((((bVar1 & 0xfd) == 1) && ((bVar2 & 0xfd) != 1)) &&
          (iVar3 = FUN_ram_42039ace(1), iVar3 != 0)) ||
         ((((byte)(bVar1 - 2) < 2 && (1 < (byte)(bVar2 - 2))) &&
          (iVar3 = FUN_ram_42039ace(2), iVar3 != 0)))) {
        FUN_ram_42039a74(bVar1,bVar2);
        FUN_ram_42043c8c(bVar2);
        FUN_ram_4203a6ea(bVar1,bVar2);
        FUN_ram_42039ace(bVar2);
        uVar4 = 0x3c07d648;
        goto LAB_ram_4203a804;
      }
    }
    **(byte **)(gp + -0x2b8) = abStack_21[0];
  }
  iVar3 = FUN_ram_42038516(0,abStack_21[0],DAT_ram_3fcb5145 == '\0');
  if (iVar3 != 0) {
    return iVar3;
  }
LAB_ram_4203a874:
  iVar3 = FUN_ram_420384de();
  return iVar3;
}

