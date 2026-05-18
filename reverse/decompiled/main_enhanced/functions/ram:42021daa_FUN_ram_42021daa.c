
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42021daa(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 uStack_fd;
  uint auStack_fc [3];
  undefined1 auStack_f0 [16];
  uint auStack_e0 [6];
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [65];
  char cStack_67;
  undefined4 uStack_64;
  char cStack_5f;
  undefined2 uStack_5e;
  undefined4 uStack_58;
  
  if ((DAT_ram_3fcc516c == '\0') || (param_1 == (undefined4 *)0x0)) {
    return 0x102;
  }
  (*(code *)&SUB_ram_40010488)(auStack_c8,0,0xb8);
  cStack_67 = *(char *)(param_1 + 3);
  if (cStack_67 == '\0') {
    cStack_67 = '\x06';
  }
  cStack_5f = *(char *)((int)param_1 + 0xd);
  if (cStack_5f == '\0') {
    cStack_5f = '\x04';
  }
  pcVar4 = (char *)*param_1;
  uStack_5e = 100;
  uStack_58 = 4;
  if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
    pcVar4 = (char *)param_1[1];
    if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
      pcVar4 = &DAT_ram_3c0c1910;
    }
    FUN_ram_42021b24(auStack_c8,0x20,pcVar4);
  }
  else {
    FUN_ram_4039c61e(auStack_c8,pcVar4,0x1f);
  }
  pcVar4 = (char *)param_1[2];
  if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
    uStack_64 = 0;
  }
  else {
    uStack_64 = 3;
    FUN_ram_4039c61e(auStack_a8,pcVar4,0x3f);
  }
  iVar2 = FUN_ram_42084528(3);
  if (((iVar2 == 0) && (iVar2 = FUN_ram_42084b46(1,auStack_c8), iVar2 == 0)) &&
     (iVar2 = FUN_ram_42084578(), iVar2 == 0)) {
    if (('\0' < *(char *)((int)param_1 + 0xf)) && (iVar2 = FUN_ram_42084e90(), iVar2 == 0)) {
      auStack_e0[0] = auStack_e0[0] & 0xffffff00;
      FUN_ram_42084f10(auStack_e0);
    }
    iVar2 = FUN_ram_4205f8ee(_DAT_ram_3fcc5160,auStack_fc);
    if (iVar2 == 0) {
      cVar1 = *(char *)((int)param_1 + 0xe);
      FUN_ram_4205f75e(_DAT_ram_3fcc5160);
      if (cVar1 != '\0') {
        uStack_fd = 2;
        FUN_ram_4205fbc0(_DAT_ram_3fcc5160,1,6,&uStack_fd);
        auStack_e0[0] = auStack_fc[0];
        auStack_e0[1] = 0;
        auStack_e0[2] = 0;
        auStack_e0[3] = 0;
        auStack_e0[4] = 0;
        auStack_e0[5] = 0;
        FUN_ram_4205fb6a(_DAT_ram_3fcc5160,0,auStack_e0);
        FUN_ram_4205bffe(auStack_fc,auStack_f0);
        (*(code *)&SUB_ram_400106ac)(0x3fcc18a0,0x28,&DAT_ram_3c0c1918,auStack_f0);
        uVar3 = (*(code *)&SUB_ram_400104a8)(0x3fcc18a0);
        FUN_ram_4205fbc0(_DAT_ram_3fcc5160,1,0x72,0x3fcc18a0,uVar3);
      }
      FUN_ram_4205f74e(_DAT_ram_3fcc5160);
      FUN_ram_42021346(2);
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e();
}

