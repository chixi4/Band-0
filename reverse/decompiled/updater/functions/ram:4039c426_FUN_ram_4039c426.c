
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039c426(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = (uint)DAT_ram_3fcb537f;
  DAT_ram_3fcb558d = 0;
  DAT_ram_3fcb5383 = 0;
  if (uVar1 != 0) {
    FUN_ram_40392eec(1,2);
    if (param_2 == 0) {
      uVar4 = 0;
      if (param_1 != 0) {
        uVar1 = 1;
        if ((_DAT_ram_3fcb538c & 0x3fff) != 0) {
          uVar3 = (_DAT_ram_3fcb538c & 0x3fff) >> 3;
          uVar2 = *(byte *)(param_1 + 4) & 0xfe;
          uVar1 = 0;
          if ((uVar2 <= uVar3) && (uVar3 <= ((*(byte *)(param_1 + 1) - 4) + uVar2 & 0xff))) {
            uVar1 = (int)(uint)*(byte *)(param_1 + (uVar3 - uVar2) + 5) >> (_DAT_ram_3fcb538c & 7) &
                    1;
          }
        }
        if (*(char *)(gp + 0xf4) == '\0') {
          uVar4 = *(byte *)(param_1 + 4) & 1;
        }
      }
    }
    else {
      FUN_ram_40399aee();
      uVar1 = 0;
      uVar4 = 0;
    }
    FUN_ram_4039c23e(uVar1,uVar4);
  }
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x19c))(0);
  FUN_ram_4039bbe8();
  return;
}

