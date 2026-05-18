
int FUN_ram_4203ad3e(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (1 < DAT_ram_3fcb5119) {
    return 0;
  }
  iVar2 = FUN_ram_4201bc46();
  if (iVar2 != 0) {
    return iVar2;
  }
  FUN_ram_42031c04();
  uVar3 = 3;
  cVar1 = **(char **)(gp + -0x2b8);
  if ((cVar1 != '\0') && (uVar3 = 0, cVar1 != '\x01')) {
    if (cVar1 != '\x02') {
      if (cVar1 != '\x03') goto LAB_ram_4203ad8c;
      FUN_ram_4203a3d0(0);
    }
    uVar3 = 1;
  }
  FUN_ram_4203a3d0(uVar3);
LAB_ram_4203ad8c:
  iVar2 = FUN_ram_42043c8c(cVar1);
  if ((iVar2 == 0) && (iVar2 = FUN_ram_42039ace(cVar1), iVar2 == 0)) {
    DAT_ram_3fcb5119 = 2;
    FUN_ram_4204321e();
  }
  return iVar2;
}

