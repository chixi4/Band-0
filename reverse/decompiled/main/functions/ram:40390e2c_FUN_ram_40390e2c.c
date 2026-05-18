
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40390e2c(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 local_48 [6];
  undefined4 auStack_30 [3];
  
  if ((-1 < _DAT_ram_60008080 << 0x11) && (_DAT_ram_60008080 << 0x14 < 0)) {
    if ((undefined1 *)0x3ffff < &stack0xc035ffb4) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf9e(0,0,0,0);
    }
    puVar1 = (uint *)&DAT_ram_60009004;
    uVar2 = 0;
    do {
      uVar3 = (*(code *)&SUB_ram_40010974)(0x1fffc0,0,uVar2);
      if (((uVar3 & 1) != 0) && ((1 << (uVar2 & 0x1f) & _DAT_ram_600080c8) == 0)) {
        FUN_ram_4039c11e(local_48,&DAT_ram_3c0c5720,0x18);
        puVar4 = local_48;
        do {
          uVar3 = FUN_ram_4204a482(*puVar4);
          if (uVar3 == uVar2) goto LAB_ram_40390f2c;
          puVar4 = puVar4 + 1;
        } while (puVar4 != auStack_30);
        if (uVar2 != 0x13) {
          if (uVar2 == 0x14) {
            return;
          }
          *puVar1 = *puVar1 & 0xfffffdff;
          _DAT_ram_60004028 = _DAT_ram_60004028 & 0xfe000000 | 1 << (uVar2 & 0x1f) & 0x1ffffffU;
          *puVar1 = *puVar1 & 0xfffffeff;
          *puVar1 = *puVar1 & 0xffffff7f;
          *puVar1 = *puVar1 & 0xffff8fff | 0x1000;
        }
      }
LAB_ram_40390f2c:
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar2 != 0x15);
  }
  return;
}

