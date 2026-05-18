
undefined4 FUN_ram_42037442(int param_1,undefined1 param_2,undefined1 param_3,ushort *param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *apuStack_24 [4];
  
  if (param_1 == 0) {
    FUN_ram_42033fd8(1,0x800,1,0x3c07d22c,0x3c072718,0xbf3);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar3 = FUN_ram_42032e82(apuStack_24,0x18,6,param_1);
  if (iVar3 == 0) {
    FUN_ram_42033fd8(1,0x400,2,0x3c07f970);
    uVar4 = 1;
  }
  else {
    if (*(char *)(param_1 + 0x2f9) != '\0') {
      **(uint **)(iVar3 + 0x24) = **(uint **)(iVar3 + 0x24) | 1;
    }
    *apuStack_24[0] = param_2;
    apuStack_24[0][1] = param_3;
    uVar1 = *param_4;
    uVar2 = param_4[1];
    apuStack_24[0][2] = (char)uVar2;
    apuStack_24[0][3] = (byte)(((uint)uVar1 << 0xc) >> 8) | (byte)(uVar2 >> 8);
    apuStack_24[0][4] = (char)param_4[2];
    apuStack_24[0][5] = (char)(param_4[2] >> 8);
    apuStack_24[0] = apuStack_24[0] + 6;
    *(undefined4 *)(iVar3 + 0x14) = 0x60018;
    uVar4 = FUN_ram_42037414(param_1);
  }
  return uVar4;
}

