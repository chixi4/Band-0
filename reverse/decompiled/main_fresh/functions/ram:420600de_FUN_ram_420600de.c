
void FUN_ram_420600de(byte *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                     undefined4 param_6)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  byte abStack_134 [20];
  byte abStack_120 [44];
  undefined4 uStack_f4;
  byte abStack_f0 [16];
  undefined1 uStack_e0;
  undefined1 auStack_df [39];
  undefined1 uStack_b8;
  undefined1 uStack_b7;
  ushort uStack_b6;
  byte abStack_b4 [64];
  undefined1 auStack_74 [20];
  undefined1 uStack_60;
  undefined1 auStack_5f [41];
  undefined2 uStack_36;
  uint auStack_34 [5];
  
  (*(code *)&SUB_ram_40010488)(abStack_134,0,0x114);
  (*(code *)&SUB_ram_40010488)(abStack_b4,0x5c,0x40);
  (*(code *)&SUB_ram_40010488)(abStack_134,0x36,0x40);
  pbVar5 = param_1 + param_2;
  pbVar3 = abStack_134;
  for (; param_1 != pbVar5; param_1 = param_1 + 1) {
    bVar1 = *param_1;
    pbVar3[0x80] = pbVar3[0x80] ^ bVar1;
    *pbVar3 = bVar1 ^ *pbVar3;
    pbVar3 = pbVar3 + 1;
  }
  FUN_ram_4039c11e(&uStack_f4,param_3,param_4);
  abStack_f0[param_4 + -4] = (byte)((uint)param_5 >> 0x18);
  abStack_f0[param_4 + -3] = (byte)((uint)param_5 >> 0x10);
  abStack_f0[param_4 + -2] = (byte)((uint)param_5 >> 8);
  abStack_f0[param_4 + -1] = (byte)param_5;
  uVar4 = param_4 + 0x44;
  abStack_f0[param_4] = 0x80;
  (*(code *)&SUB_ram_40010488)(abStack_134 + param_4 + 0x45,0,0x7f - uVar4);
  uStack_b8 = (undefined1)(uVar4 * 8 >> 0x18);
  uStack_b6 = (ushort)(((uVar4 & 0x1fff) << 3) >> 8) | (short)uVar4 * 0x800;
  uStack_b7 = (undefined1)(uVar4 * 8 >> 0x10);
  FUN_ram_4206d8ce();
  FUN_ram_420600a6(abStack_134,auStack_74);
  uStack_60 = 0x80;
  (*(code *)&SUB_ram_40010488)(auStack_5f,0,0x29);
  uStack_36 = 0xa002;
  FUN_ram_420600a6(abStack_b4,&uStack_f4);
  FUN_ram_4039c11e(auStack_34,&uStack_f4,0x14);
  uStack_e0 = 0x80;
  (*(code *)&SUB_ram_40010488)(auStack_df,0,0x29);
  uStack_b6 = 0xa002;
  iVar2 = 0xfff;
  do {
    FUN_ram_420600a6(abStack_134,auStack_74);
    FUN_ram_420600a6(abStack_b4,&uStack_f4);
    pbVar3 = abStack_134;
    do {
      pbVar5 = pbVar3 + 4;
      *(uint *)(pbVar3 + 0x100) = *(uint *)(pbVar3 + 0x100) ^ *(uint *)(pbVar3 + 0x40);
      pbVar3 = pbVar5;
    } while (abStack_120 != pbVar5);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_ram_4206d8e0();
  FUN_ram_4039c11e(param_6,auStack_34,0x14);
  return;
}

