
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4204b0bc(uint param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  (*(code *)&SUB_ram_40010488)(0x3fcdfbf4,0,0x90);
  (*(code *)&SUB_ram_40010488)(0x3fcdfb54,0,0xa0);
  sVar1 = FUN_ram_4204d446();
  if (sVar1 == 0) {
    sVar1 = 0x40;
  }
  *(short *)(gp + 0x56c) = sVar1;
  FUN_ram_42033fd8(6,1,3,0x3c07eddc);
  if (_DAT_ram_3fcb3fa4 == 0) {
    uVar3 = _DAT_ram_3fcb3fa8 & 0xffff;
    if (uVar3 == 0) {
      uVar3 = 10;
    }
    *(short *)(gp + 0x580) = (short)uVar3;
    iVar2 = FUN_ram_4204af8c(8,uVar3,500);
    if (iVar2 != 0) goto LAB_ram_4204b2b2;
    uVar3 = (uint)*(ushort *)(gp + 0x580);
    uVar4 = 0x3c07ece8;
  }
  else {
    uVar3 = _DAT_ram_3fcb3fa8 & 0xffff;
    if (uVar3 == 0) {
      uVar3 = 10;
    }
    *(short *)(gp + 0x580) = (short)uVar3;
    uVar4 = 0x3c07ed0c;
  }
  FUN_ram_42033fd8(6,1,3,uVar4,uVar3);
  sVar1 = FUN_ram_4204d48e();
  if (sVar1 == 0) {
    sVar1 = 0x20;
  }
  *(short *)(gp + 0x51c) = sVar1;
  FUN_ram_42033fd8(6,1,3,0x3c07ed30);
  iVar2 = FUN_ram_4204d452();
  if (iVar2 == 0) {
    sVar1 = FUN_ram_4204d46a();
    if (sVar1 == 0) {
      sVar1 = 0x20;
    }
    *(short *)(gp + 0x4f4) = sVar1;
    iVar2 = FUN_ram_4204af8c(1,param_1,0x640 - (uint)*(byte *)(gp + 0x4f0));
    if (iVar2 != 0) goto LAB_ram_4204b2b2;
    uVar4 = 0x3c07ed58;
  }
  else {
    param_1 = FUN_ram_4204d45e();
    param_1 = param_1 & 0xffff;
    if (param_1 == 0) {
      param_1 = 0x20;
    }
    *(short *)(gp + 0x4f4) = (short)param_1;
    uVar4 = 0x3c07ed78;
  }
  FUN_ram_42033fd8(6,1,3,uVar4,param_1);
  iVar2 = (*(code *)&SUB_ram_40011d24)();
  if (iVar2 != 0) {
    uVar4 = FUN_ram_4204d476();
    iVar2 = FUN_ram_4204af8c(9,uVar4,0x640 - (uint)*(byte *)(gp + 0x590));
    if (iVar2 != 0) goto LAB_ram_4204b2b2;
    uVar4 = FUN_ram_4204d476();
    FUN_ram_42033fd8(6,1,3,0x3c07ed98,uVar4);
  }
  *(undefined2 *)(gp + 0x5a8) = 2;
  iVar2 = FUN_ram_4204af8c(10,2,600);
  if (iVar2 == 0) {
    iVar2 = 0x3fcdfb54;
    iVar5 = 0x3fcdfbf4;
    FUN_ram_42033fd8(6,1,3,0x3c07edb8,2);
    do {
      *(int *)(iVar2 + 0x24) = iVar5;
      *(undefined1 *)(iVar2 + 0x1a) = 5;
      iVar5 = iVar5 + 0x24;
      FUN_ram_4039bab0(iVar2);
      iVar2 = iVar2 + 0x28;
    } while (iVar5 != 0x3fcdfc84);
    return 0;
  }
LAB_ram_4204b2b2:
  FUN_ram_4204b09a();
  return iVar2;
}

