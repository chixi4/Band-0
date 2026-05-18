
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4207c852(void)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  
  uVar1 = (uint)**(byte **)(gp + -0xb4);
  if ((((uVar1 & 0xfd) == 1) && (_DAT_ram_3fcc4014 != 0)) &&
     (iVar3 = *(int *)(_DAT_ram_3fcc4014 + 0xe4), iVar3 != 0)) {
    if (*(char *)(iVar3 + 0xac) == '\x01') {
      bVar2 = *(char *)(iVar3 + 0xab) - 1;
    }
    else {
      if (*(char *)(iVar3 + 0xac) != '\x02') goto LAB_ram_4207c890;
      bVar2 = *(char *)(iVar3 + 0xab) - 5;
    }
    if (bVar2 < 9) {
      return 1;
    }
  }
LAB_ram_4207c890:
  if ((1 < uVar1 - 2) || (_DAT_ram_3fcc4018 == 0)) {
    return 0;
  }
  uVar1 = 1;
  do {
    if ((*(byte **)(gp + -0xb4))[0x3f6] < uVar1) {
      return 0;
    }
    iVar3 = *(int *)((uVar1 + 0x38) * 4 + _DAT_ram_3fcc4018 + 0xc);
    if ((iVar3 != 0) && (*(short *)(iVar3 + 0x26) != 0)) {
      if (*(char *)(iVar3 + 0xac) == '\x01') {
        bVar2 = *(char *)(iVar3 + 0xab) - 1;
      }
      else {
        if (*(char *)(iVar3 + 0xac) != '\x02') goto LAB_ram_4207c8f0;
        bVar2 = *(char *)(iVar3 + 0xab) - 5;
      }
      if (bVar2 < 9) {
        return 1;
      }
    }
LAB_ram_4207c8f0:
    uVar1 = uVar1 + 1 & 0xff;
  } while( true );
}

