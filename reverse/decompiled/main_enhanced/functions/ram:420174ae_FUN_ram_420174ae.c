
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_ram_420174ae(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int local_50;
  int iStack_4c;
  uint uStack_48;
  int iStack_44;
  
  cVar1 = DAT_ram_3fcc4fc2;
  if (DAT_ram_3fcc4fc2 != '\0') {
    if (DAT_ram_3fcc4fc1 != '\0') {
      return DAT_ram_3fcc4fc0;
    }
    if ((((_DAT_ram_3fcc4fc4 != 0) &&
         (iVar3 = FUN_ram_420493dc(_DAT_ram_3fcc4fc4,0,&local_50,0x20), iVar3 == 0)) &&
        (local_50 == 0x31425057)) &&
       (((iStack_4c == 1 && (uStack_48 - 1 < 0x3800)) &&
        ((_DAT_ram_3fcc4fc4 != 0 && (uStack_48 + 0x20 <= *(uint *)(_DAT_ram_3fcc4fc4 + 0x10))))))) {
      iVar3 = 0;
      iVar6 = 0x20;
      uVar2 = uStack_48;
      do {
        uVar5 = uVar2;
        if (0x100 < uVar2) {
          uVar5 = 0x100;
        }
        iVar4 = FUN_ram_420493dc(_DAT_ram_3fcc4fc4,iVar6,0x3fcb96b0,uVar5);
        if (iVar4 != 0) goto LAB_ram_42017506;
        iVar3 = (*(code *)&SUB_ram_400107fc)(iVar3,0x3fcb96b0,uVar5);
        uVar2 = uVar2 - uVar5;
        iVar6 = iVar6 + uVar5;
      } while (uVar2 != 0);
      if (iVar3 == iStack_44) {
        _DAT_ram_3fcc4fbc = uStack_48;
        DAT_ram_3fcc4fc0 = 1;
        DAT_ram_3fcc4fc1 = 1;
        return cVar1;
      }
    }
LAB_ram_42017506:
    DAT_ram_3fcc4fc1 = '\x01';
    DAT_ram_3fcc4fc0 = '\0';
  }
  return '\0';
}

