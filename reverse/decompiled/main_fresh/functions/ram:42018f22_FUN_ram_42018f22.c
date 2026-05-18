
void FUN_ram_42018f22(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar5 = 0;
  if (param_4 == 0) {
    do {
      iVar1 = 0x1e;
      iVar7 = param_2 + iVar5;
      do {
        iVar2 = FUN_ram_42018e12(iVar1,iVar7,0x1e,param_2,0x8c,0x24,6);
        if ((iVar2 != 0) &&
           (iVar2 = FUN_ram_42018e12(iVar1,iVar7,0x20,param_2 + 2,0x88,0x20,4), iVar2 == 0)) {
          FUN_ram_42018eec(param_1,iVar1,iVar7);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 0xaa);
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0x24);
    uVar3 = 3;
  }
  else {
    do {
      iVar1 = 0x1e;
      do {
        iVar7 = FUN_ram_42018e12(iVar1,iVar5 + param_2,0x1e,param_2,0x8c,0x24,6);
        if (iVar7 != 0) {
          FUN_ram_42018eec(param_1,iVar1,iVar5 + param_2);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 0xaa);
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0x24);
    iVar5 = param_2 + 4;
    do {
      uVar6 = 0x22;
      do {
        iVar1 = FUN_ram_42018e12(uVar6,iVar5,0x22,param_2 + 4,0x84,0x1c,2);
        if ((iVar1 != 0) &&
           (iVar1 = FUN_ram_42018e12(uVar6,iVar5,0x24,param_2 + 6,0x80,0x18,0), iVar1 == 0)) {
          pbVar4 = (byte *)(((int)uVar6 >> 3) + iVar5 * 0x19 + param_1);
          *pbVar4 = (byte)(1 << (~uVar6 & 7)) | *pbVar4;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0xa6);
      iVar5 = iVar5 + 1;
    } while (iVar5 != (-(uint)(param_2 != 0x3c) & 0x30) + 0x5c);
    uVar3 = 0;
  }
  FUN_ram_4201f3fe((param_2 + 8) * 0x10000 >> 0x10,param_3,uVar3);
  return;
}

