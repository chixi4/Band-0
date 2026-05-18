
void FUN_ram_4201aa26(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined2 uStack_54;
  short sStack_52;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined1 uStack_42;
  
  iVar2 = FUN_ram_4201f71a(param_3);
  iVar2 = iVar2 * 3;
  if (iVar2 < 0xb0) {
    iVar2 = 0x58;
  }
  else {
    if (0x169 < iVar2) {
      iVar2 = 0xb4;
      uVar7 = 0x22;
      goto LAB_ram_4201aa68;
    }
    iVar2 = iVar2 >> 1;
  }
  uVar7 = 0x10;
LAB_ram_4201aa68:
  uVar6 = 200 - iVar2 >> 1;
  iVar1 = (param_2 - uVar7 / 2) + -0xc;
  uVar5 = uVar6;
  iVar8 = iVar1;
  do {
    iVar3 = FUN_ram_4201a754(uVar5,iVar8,uVar6,iVar1,iVar2);
    if (((iVar3 != 0) && ((int)uVar5 < 200)) && (iVar8 != -1)) {
      pbVar4 = (byte *)(iVar8 * 0x19 + ((int)uVar5 >> 3) + param_1);
      *pbVar4 = (byte)(1 << (~uVar5 & 7)) | *pbVar4;
    }
    uVar5 = uVar5 + 1;
  } while ((iVar2 + uVar6 != uVar5) ||
          (iVar8 = iVar8 + 1, uVar5 = uVar6, iVar8 != uVar7 + 0x18 + iVar1));
  uStack_54 = (undefined2)(200 - (iVar2 + -0x10) >> 1);
  uStack_4c = 0xff03;
  sStack_52 = (short)iVar1 + 0xc;
  uStack_50 = (undefined2)(iVar2 + -0x10);
  uStack_4e = (undefined2)uVar7;
  uStack_48 = 1;
  uStack_44 = 0x201;
  uStack_42 = 1;
  FUN_ram_4201f3b0(param_3,&uStack_54);
  return;
}

