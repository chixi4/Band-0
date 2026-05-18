
int FUN_ram_42096ab2(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uStack_18;
  int aiStack_14 [2];
  
  if ((param_1 == 1) && (param_3 < 4)) {
    if (param_3 - 1U < 2) {
      iVar2 = 0;
    }
    else {
      uStack_18 = 0;
      aiStack_14[0] = 0;
      uVar1 = FUN_ram_42010128(gp + -0x7e8);
      iVar2 = FUN_ram_420100ba(gp + -0x7e8,&uStack_18,uVar1);
      if (iVar2 == 0) goto LAB_ram_42096b02;
      do {
        FUN_ram_4039bf1e();
LAB_ram_42096b02:
        if ((uStack_18 & 0x80) != 0) {
          uStack_18 = -(uStack_18 & 0x7f);
        }
        uVar1 = FUN_ram_42010128(gp + -0x7f0);
        iVar2 = FUN_ram_420100ba(gp + -0x7f0,aiStack_14,uVar1);
      } while (iVar2 != 0);
      if (param_3 != 0) {
        uStack_18 = uStack_18 + aiStack_14[0];
      }
      iVar2 = uStack_18 + 0x870;
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

