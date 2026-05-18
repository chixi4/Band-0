
int FUN_ram_42017672(undefined4 param_1,byte *param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = 200;
  if (param_2 != (byte *)0x0) {
    iVar5 = 0;
    for (pbVar4 = param_2; (uVar6 = (uint)*pbVar4, uVar6 != 0 && (uVar6 != 10)); pbVar4 = pbVar4 + 1
        ) {
      if (uVar6 - 0x20 < 0x5f) {
        iVar5 = iVar5 + (uint)*(byte *)(uVar6 + 0x3c07557c);
      }
    }
    iVar5 = 200 - iVar5;
    iVar3 = 0;
    if (iVar5 < -1) goto LAB_ram_420176be;
  }
  iVar3 = iVar5 / 2;
LAB_ram_420176be:
  iVar5 = iVar3;
  if (param_2 != (byte *)0x0) {
    for (; (bVar1 = *param_2, bVar1 != 0 && (bVar1 != 10)); param_2 = param_2 + 1) {
      iVar2 = FUN_ram_4201756c(iVar5,param_1,bVar1,param_3);
      iVar5 = iVar5 + iVar2;
    }
  }
  return iVar5 - iVar3;
}

