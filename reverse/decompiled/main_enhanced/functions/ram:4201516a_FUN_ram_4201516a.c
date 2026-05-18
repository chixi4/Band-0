
void FUN_ram_4201516a(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  if (DAT_ram_3fcc4f66 == '\0') {
    return;
  }
  uVar1 = *param_1;
  if (uVar1 == 0) {
    return;
  }
  uVar2 = (uint)param_1[4];
  if (uVar1 < 0x960) {
    if (uVar1 < 0x708) {
      if (0x577 < uVar1) {
        uVar2 = (uVar2 * 0x55) / 100;
      }
      goto LAB_ram_420151b8;
    }
    iVar5 = 0x46;
  }
  else {
    iVar5 = 0x37;
  }
  uVar2 = (uVar2 * iVar5) / 100;
LAB_ram_420151b8:
  FUN_ram_42062d1c(0,0,0);
  FUN_ram_42062aaa(0,0);
  (*(code *)&SUB_ram_40010044)(800);
  FUN_ram_42062d82(0,0,*param_1);
  iVar5 = FUN_ram_42014eea(param_1[1]);
  uVar1 = param_1[2];
  iVar4 = FUN_ram_42014eea(param_1[3]);
  iVar6 = 1;
  uVar3 = iVar5 * 1000 + 0x17;
  uVar7 = iVar4 * 1000 + 0x2f;
  do {
    if (DAT_ram_3fcc4f64 != '\0') break;
    FUN_ram_42062d1c(0,0,(iVar6 * iVar6 * uVar2) / 0x240);
    FUN_ram_42062aaa(0,0);
    if (uVar3 != 0x17) {
      (*(code *)&SUB_ram_40010044)(uVar3 / 0x18);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0x19);
  if (DAT_ram_3fcc4f64 == '\0') {
    FUN_ram_42062d1c(0,0,uVar2);
    FUN_ram_42062aaa(0,0);
    FUN_ram_42014eea(uVar1);
    FUN_ram_42014ef8();
  }
  iVar5 = 0x30;
  do {
    if (DAT_ram_3fcc4f64 != '\0') break;
    FUN_ram_42062d1c(0,0,(iVar5 * iVar5 * uVar2) / 0x900);
    FUN_ram_42062aaa(0,0);
    if (uVar7 != 0x2f) {
      (*(code *)&SUB_ram_40010044)(uVar7 / 0x30);
    }
    iVar5 = iVar5 + -1;
  } while (iVar5 != -1);
  FUN_ram_42014ff0();
  return;
}

