
undefined4 FUN_ram_42081ea4(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    uVar2 = 0x102;
    if (param_2 != 0) {
      (*(code *)&SUB_ram_40010488)(param_1,0,0x5c);
      FUN_ram_4039c11e(param_1 + 6,param_2 + 10,*(undefined1 *)(param_2 + 0x2a));
      FUN_ram_4039c11e(param_1,param_2 + 4,6);
      *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(param_2 + 0x2b);
      bVar1 = *(byte *)(param_2 + 0x2c);
      *(uint *)(param_1 + 0x28) = (uint)bVar1;
      *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_2 + 0x2d);
      *(uint *)(param_1 + 0x30) = (uint)*(byte *)(param_2 + 0x2e);
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x38);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x3c);
      uVar2 = FUN_ram_42081e90(*(undefined1 *)(param_2 + 0x54));
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
      *(uint *)(param_1 + 0x54) = (bVar1 != 0) + 1;
      *(ushort *)(param_1 + 0x40) =
           ((ushort)*(undefined4 *)(param_2 + 0x44) & 7 | (*(byte *)(param_2 + 0x34) & 1) << 3 |
            (ushort)*(byte *)(param_2 + 0x40) << 7 | (ushort)*(byte *)(param_2 + 0x55) << 8) & 399 |
           *(ushort *)(param_1 + 0x40) & 0xfe70;
      FUN_ram_4039c11e(param_1 + 0x44,param_2 + 0x48,0xc);
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0x102;
}

