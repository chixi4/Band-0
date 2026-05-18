
undefined4 FUN_ram_42035bb0(uint *param_1,byte *param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  undefined1 auStack_3c [48];
  
  iVar1 = FUN_ram_4039c11e(auStack_3c,&DAT_ram_3c0f56ec,0x2c);
  if (param_1 == (uint *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (param_2 != (byte *)0x0) {
      pbVar3 = param_2;
      puVar6 = param_1;
      do {
        pbVar4 = pbVar3 + 4;
        *puVar6 = (uint)*pbVar3 << 0x18 | (uint)pbVar3[1] << 0x10 | (uint)pbVar3[3] |
                  (uint)pbVar3[2] << 8;
        puVar6 = puVar6 + 1;
        pbVar3 = pbVar4;
      } while (param_2 + 0x10 != pbVar4);
      uVar5 = 4;
      do {
        uVar7 = param_1[3];
        if ((uVar5 & 3) == 0) {
          uVar7 = *(uint *)((uVar5 & 0xfffffffc) + iVar1) ^
                  ((uint)(byte)(&DAT_ram_3c0f55ec)[(uVar7 & 0xffffff) >> 0x10] << 0x18 |
                   (uint)(byte)(&DAT_ram_3c0f55ec)[uVar7 >> 0x18] |
                   (uint)(byte)(&DAT_ram_3c0f55ec)[(uVar7 & 0xffffff) >> 8 & 0xff] << 0x10 |
                  (uint)(byte)(&DAT_ram_3c0f55ec)[uVar7 & 0xff] << 8);
        }
        uVar5 = uVar5 + 1;
        param_1[4] = uVar7 ^ *param_1;
        param_1 = param_1 + 1;
      } while (uVar5 != 0x2c);
      uVar2 = 1;
    }
  }
  return uVar2;
}

