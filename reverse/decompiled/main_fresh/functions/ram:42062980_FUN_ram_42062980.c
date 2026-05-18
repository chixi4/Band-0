
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42062980(int *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0x102;
  if (((param_1 != (int *)0x0) && (iVar3 = 0x102, *param_1 == 0)) && (uVar2 = param_1[2], uVar2 < 4)
     ) {
    if ((char)param_1[5] == '\0') {
      iVar4 = param_1[3];
      iVar3 = 0x102;
      if ((((iVar4 != 0) && (iVar5 = param_1[1], iVar3 = 0x102, iVar5 - 1U < 0xe)) &&
          ((iVar3 = FUN_ram_42062312(), iVar3 != 0 || (iVar3 = 0x101, _DAT_ram_3fcc53a8 != 0)))) &&
         (iVar3 = FUN_ram_42062592(uVar2,param_1[4],iVar4,iVar5), iVar3 == 0)) {
        FUN_ram_42062914(0,uVar2);
        FUN_ram_420628a6(0,uVar2);
      }
    }
    else {
      if (_DAT_ram_3fcc53a8 != 0) {
        FUN_ram_40396966();
        iVar3 = uVar2 + _DAT_ram_3fcc53a8;
        if ((*(char *)(iVar3 + 0x10) != '\0') && (*(char *)(iVar3 + 0xc) != '\0')) {
          cVar1 = *(char *)(_DAT_ram_3fcc53a8 + 0x22);
          *(undefined1 *)(iVar3 + 0x10) = 0;
          if (cVar1 != '\0') {
            FUN_ram_420623b2(0);
          }
          FUN_ram_40396994();
          return 0;
        }
        FUN_ram_40396994();
      }
      iVar3 = 0x103;
    }
  }
  return iVar3;
}

