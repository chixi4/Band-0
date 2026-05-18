
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42029c9a(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined2 uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined1 auStack_41 [13];
  
  iVar6 = FUN_ram_42029616(param_3,4,auStack_41);
  if (iVar6 == 0) {
    puVar5 = (undefined4 *)*param_3;
    uVar4 = *(ushort *)*puVar5;
    uVar3 = ((ushort *)*puVar5)[1];
    if ((uVar3 < uVar4) || (uVar4 == 0)) {
      auStack_41[0] = 1;
      puVar5 = (undefined4 *)0x0;
      iVar6 = 10;
    }
    else {
      uVar2 = *(undefined2 *)(puVar5 + 4);
      *param_3 = 0;
      (*(code *)&SUB_ram_400119dc)(puVar5,uVar2);
      pcVar7 = (char *)FUN_ram_4202d5d8(5,1,puVar5);
      if (pcVar7 != (char *)0x0) {
        iVar11 = 0;
        iVar8 = FUN_ram_4202c6a0(param_1,param_2);
        iVar9 = _DAT_ram_3fcb6b84;
        *pcVar7 = '\0';
        piVar10 = *(int **)(iVar9 + 0x40);
        do {
          if ((piVar10 == (int *)0x0) || (uVar3 < *(ushort *)((int)piVar10 + 10)))
          goto LAB_ram_42029d86;
          if (uVar4 <= *(ushort *)((int)piVar10 + 10)) {
            cVar1 = *pcVar7;
            if (*(char *)piVar10[1] == '\x10') {
              if (cVar1 == '\0') {
                *pcVar7 = '\x01';
              }
              else if (cVar1 != '\x01') goto LAB_ram_42029d86;
              iVar9 = 4;
            }
            else {
              if (cVar1 == '\0') {
                *pcVar7 = '\x02';
              }
              else if (cVar1 != '\x02') goto LAB_ram_42029d86;
              iVar9 = 0x12;
            }
            if (iVar8 < (int)((uint)*(ushort *)(puVar5 + 4) + iVar9)) goto LAB_ram_42029d86;
            iVar9 = (*(code *)&SUB_ram_40011a00)(puVar5);
            if (iVar9 == 0) goto LAB_ram_42029dc2;
            iVar11 = iVar11 + 1;
            (*(code *)&SUB_ram_40011aac)(iVar9,*(undefined2 *)((int)piVar10 + 10));
            FUN_ram_4203012a(piVar10[1],iVar9 + 2);
          }
          piVar10 = (int *)*piVar10;
        } while( true );
      }
      auStack_41[0] = 0x11;
      iVar6 = 6;
    }
    goto LAB_ram_42029cfe;
  }
  puVar5 = (undefined4 *)0x0;
  goto LAB_ram_42029d8a;
LAB_ram_42029d86:
  if (iVar11 == 0) {
LAB_ram_42029dc2:
    auStack_41[0] = 10;
    iVar6 = 5;
    goto LAB_ram_42029cfe;
  }
LAB_ram_42029d8a:
  uVar4 = 0;
LAB_ram_42029cfe:
  FUN_ram_42029b02(param_1,param_2,iVar6,puVar5,4,auStack_41[0],uVar4);
  return;
}

