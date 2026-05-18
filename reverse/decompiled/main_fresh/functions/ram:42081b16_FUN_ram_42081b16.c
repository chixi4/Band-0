
int FUN_ram_42081b16(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (1 < DAT_ram_3fcc41a9) {
    return 0;
  }
  iVar2 = FUN_ram_420b3d04();
  if (iVar2 != 0) {
    return iVar2;
  }
  FUN_ram_42073aba();
  uVar3 = 3;
  cVar1 = **(char **)(gp + -0xb4);
  if ((cVar1 != '\0') && (uVar3 = 0, cVar1 != '\x01')) {
    if (cVar1 != '\x02') {
      if (cVar1 != '\x03') goto LAB_ram_42081b64;
      FUN_ram_420811a8(0);
    }
    uVar3 = 1;
  }
  FUN_ram_420811a8(uVar3);
LAB_ram_42081b64:
  iVar2 = FUN_ram_4208c43c(cVar1);
  if ((iVar2 == 0) && (iVar2 = FUN_ram_4207ffa2(cVar1), iVar2 == 0)) {
    DAT_ram_3fcc41a9 = 2;
    FUN_ram_4208b786();
  }
  return iVar2;
}

