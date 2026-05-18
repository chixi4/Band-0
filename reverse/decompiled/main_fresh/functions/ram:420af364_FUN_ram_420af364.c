
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420af364(int param_1,char *param_2,char *param_3,int param_4)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  int iVar9;
  char *pcVar10;
  char acStack_41 [13];
  
  acStack_41[0] = '8' - DAT_ram_3fcb7f5e;
  if (param_1 == 0) {
    iVar7 = 0x14;
    iVar6 = 0x1e;
    iVar5 = 8;
    cVar2 = '(';
    uVar8 = 0x80;
  }
  else {
    iVar7 = 0x1e;
    iVar6 = 0x28;
    iVar5 = 0xc;
    cVar2 = '\x16';
    uVar8 = DAT_ram_3fcb7efd;
  }
  bVar4 = DAT_ram_3fcb7f0a & 1;
  if (param_1 != 0) {
    (**(code **)(_DAT_ram_3fcc4c78 + 0x5c))(&DAT_ram_3fcb7fe8,6);
  }
  iVar9 = 0;
  do {
    cVar1 = *(char *)(iVar9 + 0x3fcb8744);
    (*(code *)&SUB_ram_400124b0)((int)cVar1,DAT_ram_3fcb7f61,0);
    if (param_1 == 0) {
      (**(code **)(_DAT_ram_3fcc4c78 + 0x5c))(&DAT_ram_3fcb7fe8,cVar1);
    }
    pcVar10 = (char *)(param_4 + iVar9);
    FUN_ram_420af180(uVar8,acStack_41,1,cVar2,pcVar10,_DAT_ram_3fcb7f08,(int)DAT_ram_3fcb7f44,bVar4)
    ;
    pcVar3 = param_2 + iVar9;
    iVar9 = iVar9 + 1;
    cVar1 = *pcVar10;
    *pcVar3 = cVar1;
    DAT_ram_3fcb7f44 = cVar1 + cVar2;
  } while (iVar9 != 3);
  iVar9 = (int)*param_2;
  if ((iVar9 < iVar5) || (iVar6 < iVar9)) {
    cVar2 = (*(code *)&SUB_ram_40012218)((iVar9 - iVar7) * 0x1000000 >> 0x18,0x28,0xffffffd8);
    *param_3 = acStack_41[0] + cVar2;
    *param_2 = *param_2 - cVar2;
    param_2[1] = param_2[1] - cVar2;
    param_2[2] = param_2[2] - cVar2;
  }
  else {
    *param_3 = acStack_41[0];
  }
  return;
}

