
char * FUN_ram_4205bffe(undefined4 *param_1,char *param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  char local_8 [4];
  undefined4 local_4;
  
  local_4 = *param_1;
  iVar4 = 0;
  pbVar6 = (byte *)&local_4;
  pcVar3 = param_2;
  while( true ) {
    uVar2 = 0;
    uVar9 = (uint)*pbVar6;
    do {
      uVar8 = uVar2;
      local_8[uVar8] = (char)(uVar9 % 10) + '0';
      bVar1 = 9 < uVar9;
      uVar2 = uVar8 + 1 & 0xff;
      uVar9 = uVar9 / 10;
    } while (bVar1);
    *pbVar6 = 0;
    iVar5 = iVar4;
    pcVar7 = pcVar3;
    while (iVar4 = iVar5 + 1, uVar8 != 0xff) {
      if (param_3 <= iVar5) {
        return (char *)0x0;
      }
      *pcVar7 = local_8[uVar8];
      iVar5 = iVar4;
      pcVar7 = pcVar7 + 1;
      uVar8 = uVar8 - 1 & 0xff;
    }
    if (param_3 <= iVar5) break;
    *pcVar7 = '.';
    pbVar6 = pbVar6 + 1;
    pcVar3 = pcVar7 + 1;
    if (pbVar6 == &stack0x00000000) {
      *pcVar7 = '\0';
      return param_2;
    }
  }
  return (char *)0x0;
}

