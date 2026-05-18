
undefined4 FUN_ram_42034672(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [88];
  
  iVar3 = 3;
  (*(code *)&SUB_ram_40010488)(auStack_88,0,0x58);
  if (param_1 == 3) {
    iVar3 = 6;
  }
  iVar2 = 1;
  do {
    FUN_ram_42034524(param_1,iVar2,auStack_98);
    iVar1 = FUN_ram_4203443c(param_1,auStack_98,auStack_88);
    if (iVar1 != 0x1102) {
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      iVar1 = *param_3;
      if (param_1 == 3) {
        if (iVar1 < 6) {
          FUN_ram_4039c11e(param_2,auStack_88,0x10);
          param_2 = param_2 + 0x10;
          goto LAB_ram_420346f2;
        }
      }
      else if (param_1 == 8) {
        if (iVar1 < 3) {
          FUN_ram_4039c11e(param_2,auStack_88,8);
          param_2 = param_2 + 8;
          goto LAB_ram_420346f2;
        }
      }
      else if (param_1 == 7) {
        if (iVar1 < 3) {
          FUN_ram_4039c11e(param_2,auStack_88,0x17);
          param_2 = param_2 + 0x17;
          goto LAB_ram_420346f2;
        }
      }
      else if (param_1 == 6) {
        if (iVar1 < 3) {
          FUN_ram_4039c11e(param_2,auStack_88,0xe);
          param_2 = param_2 + 0xe;
LAB_ram_420346f2:
          *param_3 = *param_3 + 1;
        }
      }
      else if (iVar1 < 3) {
        FUN_ram_4039c11e(param_2,auStack_88,0x58);
        param_2 = param_2 + 0x58;
        goto LAB_ram_420346f2;
      }
    }
    iVar2 = iVar2 + 1;
    if (iVar3 < iVar2) {
      return 0;
    }
  } while( true );
}

