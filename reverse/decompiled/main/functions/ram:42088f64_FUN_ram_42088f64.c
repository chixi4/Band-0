
undefined4 FUN_ram_42088f64(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  
  if (0x17 < *(byte *)(param_2 + 1)) {
    bVar1 = *(byte *)(param_2 + 8);
    bVar5 = bVar1 & 0xf;
    if ((*(char *)(param_1 + 0x25) == '\0') || (uVar3 = 0, *(byte *)(param_1 + 0x87) != bVar5)) {
      *(undefined1 *)(param_1 + 0x25) = 1;
      *(byte *)(param_1 + 0x87) = bVar5;
      *(byte *)(param_1 + 0x10) = bVar1 >> 7;
      uVar6 = 0;
      pbVar2 = (byte *)(param_2 + 10);
      do {
        iVar4 = FUN_ram_42088f20(uVar6 & 0xff);
        uVar6 = uVar6 + 1;
        iVar4 = iVar4 * 7 + param_1;
        *(byte *)(iVar4 + 0x89) = (byte)((int)(uint)*pbVar2 >> 4) & 1;
        *(byte *)(iVar4 + 0x8a) = *pbVar2 & 0xf;
        *(byte *)(iVar4 + 0x8b) = pbVar2[1] & 0xf;
        *(byte *)(iVar4 + 0x8c) = pbVar2[1] >> 4;
        *(byte *)(iVar4 + 0x8d) = pbVar2[2];
        pbVar2 = pbVar2 + 4;
      } while (uVar6 != 4);
      uVar3 = 1;
    }
    return uVar3;
  }
  return 0xffffffff;
}

