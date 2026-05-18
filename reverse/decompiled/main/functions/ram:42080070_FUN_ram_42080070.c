
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42080070(int param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  
  iVar2 = _DAT_ram_3fcc4018;
  iVar5 = _DAT_ram_3fcc4014;
  iVar4 = FUN_ram_42079402();
  uVar3 = (undefined1)param_2;
  if (param_1 == 0) {
    if (DAT_ram_3fcc425e == param_2) {
      DAT_ram_3fcc41d4 = 1;
      return 0;
    }
    if (iVar4 != param_3) {
      DAT_ram_3fcc41d4 = 1;
      DAT_ram_3fcc425e = uVar3;
      return 0;
    }
    DAT_ram_3fcc425e = uVar3;
    FUN_ram_42080164(iVar5,iVar4,DAT_ram_3fcc4264);
    DAT_ram_3fcc41d4 = 1;
    return 0;
  }
  if (param_1 != 1) {
    DAT_ram_3fcc41d4 = 1;
    return 0;
  }
  if (DAT_ram_3fcc425a == param_2) {
    DAT_ram_3fcc41d4 = 1;
    return 0;
  }
  if (iVar2 == 0) {
    DAT_ram_3fcc41d4 = 1;
    DAT_ram_3fcc425a = uVar3;
    return 0;
  }
  if (iVar4 != param_3) {
    DAT_ram_3fcc41d4 = 1;
    DAT_ram_3fcc425a = uVar3;
    return 0;
  }
  DAT_ram_3fcc425a = uVar3;
  if (param_2 != 2) {
    if (param_2 == 1) {
      *(undefined1 *)(iVar2 + 299) = 0;
    }
    goto LAB_ram_4208010e;
  }
  FUN_ram_42080164(iVar2,iVar4,DAT_ram_3fcc4262);
  if (iVar5 != 0) {
    cVar1 = *(char *)(iVar5 + 299);
    if (cVar1 == '\x01') {
      bVar6 = *(char *)(iVar5 + 0x12a) - 1;
    }
    else {
      if (cVar1 != '\x02') goto LAB_ram_42080150;
      bVar6 = *(char *)(iVar5 + 0x12a) - 5;
    }
    if (bVar6 < 9) {
      *(char *)(iVar2 + 299) = cVar1;
      goto LAB_ram_4208010e;
    }
  }
LAB_ram_42080150:
  FUN_ram_420793da(iVar2 + 0x12a);
LAB_ram_4208010e:
  cVar1 = DAT_ram_3fcc41d5;
  uVar3 = *(undefined1 *)(iVar2 + 299);
  *(undefined1 *)(*(int *)(gp + -0xb4) + 0x3fc) = uVar3;
  iVar5 = FUN_ram_4207e5e6(0x21,uVar3,cVar1 == '\0');
  if (iVar5 != 0) {
    return iVar5;
  }
  iVar5 = FUN_ram_4207e5ae();
  if (iVar5 == 0) {
    DAT_ram_3fcc41d4 = 1;
    return 0;
  }
  return iVar5;
}

