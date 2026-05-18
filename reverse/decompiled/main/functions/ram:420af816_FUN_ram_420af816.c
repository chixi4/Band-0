
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420af816(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int aiStack_34 [4];
  
  uVar2 = FUN_ram_4039902c();
  iVar3 = (*(code *)&SUB_ram_40010514)(param_1,0x3d);
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
    *puVar4 = 0x16;
    return 0xffffffff;
  }
  FUN_ram_420b110a(uVar2);
  uVar5 = (*(code *)&SUB_ram_400104a8)(param_2);
  pcVar6 = (char *)FUN_ram_420b112a(uVar2,param_1,aiStack_34);
  pcVar9 = param_1;
  if (pcVar6 == (char *)0x0) {
    for (iVar3 = 0; iVar8 = iVar3 * 4, *(int *)(*(int *)(gp + -0x720) + iVar8) != 0;
        iVar3 = iVar3 + 1) {
    }
    if (_DAT_ram_3fcc5404 == 0) {
      _DAT_ram_3fcc5404 = 1;
      iVar10 = FUN_ram_4039c0d0(uVar2,iVar8 + 8);
      if (iVar10 == 0) goto LAB_ram_420af908;
      FUN_ram_4039c11e(iVar10,*(undefined4 *)(gp + -0x720),iVar8);
      *(int *)(gp + -0x720) = iVar10;
    }
    else {
      iVar10 = FUN_ram_4039c0c8(uVar2);
      *(int *)(gp + -0x720) = iVar10;
      if (iVar10 == 0) goto LAB_ram_420af908;
    }
    *(undefined4 *)(iVar10 + iVar8 + 4) = 0;
    aiStack_34[0] = iVar3;
  }
  else {
    if (param_3 == 0) goto LAB_ram_420af89c;
    uVar7 = (*(code *)&SUB_ram_400104a8)();
    if (uVar5 <= uVar7) {
      do {
        cVar1 = *param_2;
        param_2 = param_2 + 1;
        *pcVar6 = cVar1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      goto LAB_ram_420af89c;
    }
  }
  for (; (*pcVar9 != '\0' && (*pcVar9 != '=')); pcVar9 = pcVar9 + 1) {
  }
  iVar3 = *(int *)(gp + -0x720);
  iVar10 = aiStack_34[0] * 4;
  iVar8 = FUN_ram_4039c0d0(uVar2,pcVar9 + (uVar5 - (int)param_1) + 2);
  *(int *)(iVar3 + iVar10) = iVar8;
  if (iVar8 == 0) {
LAB_ram_420af908:
    FUN_ram_420b111a(uVar2);
    return 0xffffffff;
  }
  pcVar6 = *(char **)(*(int *)(gp + -0x720) + aiStack_34[0] * 4);
  do {
    pcVar9 = pcVar6;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    pcVar6 = pcVar9 + 1;
  } while (cVar1 != '=');
  *pcVar9 = '=';
  pcVar6 = pcVar9 + 1;
  do {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *pcVar6 = cVar1;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
LAB_ram_420af89c:
  FUN_ram_420b111a(uVar2);
  return 0;
}

