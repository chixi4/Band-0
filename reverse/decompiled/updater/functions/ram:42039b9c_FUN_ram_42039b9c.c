
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42039b9c(int param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  
  iVar2 = _DAT_ram_3fcb4f88;
  iVar5 = _DAT_ram_3fcb4f84;
  iVar4 = FUN_ram_420339f4();
  uVar3 = (undefined1)param_2;
  if (param_1 == 0) {
    if (DAT_ram_3fcb51ce == param_2) {
      DAT_ram_3fcb5144 = 1;
      return 0;
    }
    if (iVar4 != param_3) {
      DAT_ram_3fcb5144 = 1;
      DAT_ram_3fcb51ce = uVar3;
      return 0;
    }
    DAT_ram_3fcb51ce = uVar3;
    FUN_ram_42039c90(iVar5,iVar4,DAT_ram_3fcb51d4);
    DAT_ram_3fcb5144 = 1;
    return 0;
  }
  if (param_1 != 1) {
    DAT_ram_3fcb5144 = 1;
    return 0;
  }
  if (DAT_ram_3fcb51ca == param_2) {
    DAT_ram_3fcb5144 = 1;
    return 0;
  }
  if (iVar2 == 0) {
    DAT_ram_3fcb5144 = 1;
    DAT_ram_3fcb51ca = uVar3;
    return 0;
  }
  if (iVar4 != param_3) {
    DAT_ram_3fcb5144 = 1;
    DAT_ram_3fcb51ca = uVar3;
    return 0;
  }
  DAT_ram_3fcb51ca = uVar3;
  if (param_2 != 2) {
    if (param_2 == 1) {
      *(undefined1 *)(iVar2 + 299) = 0;
    }
    goto LAB_ram_42039c3a;
  }
  FUN_ram_42039c90(iVar2,iVar4,DAT_ram_3fcb51d2);
  if (iVar5 != 0) {
    cVar1 = *(char *)(iVar5 + 299);
    if (cVar1 == '\x01') {
      bVar6 = *(char *)(iVar5 + 0x12a) - 1;
    }
    else {
      if (cVar1 != '\x02') goto LAB_ram_42039c7c;
      bVar6 = *(char *)(iVar5 + 0x12a) - 5;
    }
    if (bVar6 < 9) {
      *(char *)(iVar2 + 299) = cVar1;
      goto LAB_ram_42039c3a;
    }
  }
LAB_ram_42039c7c:
  FUN_ram_420339cc(iVar2 + 0x12a);
LAB_ram_42039c3a:
  cVar1 = DAT_ram_3fcb5145;
  uVar3 = *(undefined1 *)(iVar2 + 299);
  *(undefined1 *)(*(int *)(gp + -0x2b8) + 0x3fc) = uVar3;
  iVar5 = FUN_ram_42038516(0x21,uVar3,cVar1 == '\0');
  if (iVar5 != 0) {
    return iVar5;
  }
  iVar5 = FUN_ram_420384de();
  if (iVar5 == 0) {
    DAT_ram_3fcb5144 = 1;
    return 0;
  }
  return iVar5;
}

