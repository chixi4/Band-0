
undefined4
FUN_ram_42096b4a(int param_1,undefined4 param_2,uint param_3,int *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uStack_28;
  uint auStack_24 [4];
  
  if (param_1 == 1) {
    if ((param_3 < 4) && (1 < param_3 - 1)) {
      uStack_28 = 0;
      auStack_24[0] = 0;
      uVar1 = FUN_ram_42010128(0x3fcb6bf8);
      iVar2 = FUN_ram_420100ba(0x3fcb6bf8,&uStack_28,uVar1);
      if (iVar2 == 0) goto LAB_ram_42096b96;
      do {
        FUN_ram_4039bf1e();
LAB_ram_42096b96:
        if ((uStack_28 & 0x80) != 0) {
          uStack_28 = -(uStack_28 & 0x7f);
        }
        uVar1 = FUN_ram_42010128(0x3fcb6bf0);
        iVar2 = FUN_ram_420100ba(0x3fcb6bf0,auStack_24,uVar1);
      } while (iVar2 != 0);
      if ((auStack_24[0] & 0x20) != 0) {
        auStack_24[0] = -(auStack_24[0] & 0x1f);
      }
      uVar1 = 400;
      iVar2 = uStack_28 + 0x604;
      if (param_3 != 0) {
        iVar2 = (iVar2 - auStack_24[0]) + -0x7b;
        uVar1 = 0x55a;
      }
      *param_4 = iVar2;
      *param_5 = uVar1;
      uVar1 = 0;
    }
    else {
      uVar1 = 0x102;
    }
    return uVar1;
  }
  return 0x102;
}

