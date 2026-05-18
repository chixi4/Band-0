
undefined1 FUN_ram_4201756c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 uVar7;
  
  uVar7 = 0;
  if ((param_3 - 0x20U & 0xff) < 0x5f) {
    uVar7 = *(undefined1 *)(param_3 + 0x3c07557c);
    pbVar3 = (byte *)((param_3 - 0x20U) * 0x20 + 0x3c0749bc);
    iVar6 = 0;
    do {
      bVar1 = *pbVar3;
      bVar2 = pbVar3[1];
      iVar4 = 0;
      do {
        if (iVar4 < 8) {
          uVar5 = (int)(uint)bVar1 >> (7U - iVar4 & 0x1f);
        }
        else {
          uVar5 = (int)(uint)bVar2 >> (0xfU - iVar4 & 0x1f);
        }
        if ((uVar5 & 1) != 0) {
          FUN_ram_42017436(param_1 + iVar4,param_2 + iVar6,param_4);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0x10);
      iVar6 = iVar6 + 1;
      pbVar3 = pbVar3 + 2;
    } while (iVar6 != 0x10);
  }
  return uVar7;
}

