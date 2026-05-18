
undefined4 FUN_ram_42037528(int param_1,undefined1 param_2,int param_3,undefined2 *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *apuStack_24 [4];
  
  if (param_1 == 0) {
    FUN_ram_42033fd8(1,0x800,1,0x3c07d224,0x3c072718,0xbbe);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar2 = FUN_ram_42032e82(apuStack_24,0x18,9,param_1);
  if (iVar2 == 0) {
    if (param_3 == 1) {
      FUN_ram_42035c86(param_1,(int)(uint)(ushort)param_4[2] >> 2 & 0xf);
    }
    FUN_ram_42033fd8(1,0x400,2,0x3c07f964);
    uVar3 = 1;
  }
  else {
    if (*(char *)(param_1 + 0x2f9) != '\0') {
      **(uint **)(iVar2 + 0x24) = **(uint **)(iVar2 + 0x24) | 1;
    }
    *apuStack_24[0] = param_2;
    apuStack_24[0][1] = (char)param_3;
    apuStack_24[0][2] = (char)*param_4;
    puVar1 = apuStack_24[0] + 3;
    if (param_3 == 1) {
      apuStack_24[0][3] = (char)param_4[1];
      apuStack_24[0][4] = (char)((ushort)param_4[1] >> 8);
      puVar1 = apuStack_24[0] + 5;
    }
    apuStack_24[0] = puVar1;
    *apuStack_24[0] = (char)param_4[2];
    apuStack_24[0][1] = (char)((ushort)param_4[2] >> 8);
    apuStack_24[0][2] = (char)param_4[3];
    apuStack_24[0][3] = (char)((ushort)param_4[3] >> 8);
    puVar1 = apuStack_24[0] + 4;
    if (param_3 == 0) {
      apuStack_24[0][4] = (char)param_4[4];
      apuStack_24[0][5] = (char)((ushort)param_4[4] >> 8);
      puVar1 = apuStack_24[0] + 6;
    }
    apuStack_24[0] = puVar1;
    *(undefined4 *)(iVar2 + 0x14) = 0x90018;
    if (param_3 == 1) {
      iVar4 = *(int *)(((ushort)param_4[2] & 0x3c) + param_1 + 0x268);
      if (iVar4 != 0) {
        *(int *)(iVar4 + 0x1c) = iVar2;
      }
      *(uint *)(*(int *)(iVar2 + 0x24) + 0x14) = *(uint *)(*(int *)(iVar2 + 0x24) + 0x14) | 0x800;
    }
    uVar3 = FUN_ram_42037414(param_1);
  }
  return uVar3;
}

