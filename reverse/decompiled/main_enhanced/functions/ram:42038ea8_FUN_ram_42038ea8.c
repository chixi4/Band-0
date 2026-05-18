
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42038ea8(char *param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  
  bVar1 = param_1[1];
  if ((param_2 == (uint)bVar1 * 4 + 2) &&
     (iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))(),
     (uint)bVar1 <= *(ushort *)(iVar3 + 0x42) + 1)) {
    uVar5 = (uint)(byte)param_1[1];
    if (uVar5 == 0) {
      if (*param_1 != '\0') goto LAB_ram_42038f5a;
      iVar3 = 0;
      (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
      do {
        iVar4 = *(int *)(*(int *)(_DAT_ram_3fcdff68 + 8) + iVar3 * 4);
        iVar3 = iVar3 + 1;
        if ((*(ushort *)(iVar4 + 10) & 0x80) != 0) {
          (**(code **)(_DAT_ram_3fcdfecc + 0x5b4))
                    (*(undefined1 *)(iVar4 + 1),0,0,0,_DAT_ram_3fcdfecc,
                     *(code **)(_DAT_ram_3fcdfecc + 0x5b4));
        }
        iVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
      } while (iVar3 <= (int)(uint)*(ushort *)(iVar4 + 0x42));
    }
    else {
      pcVar8 = param_1;
      uVar9 = 0;
      while ((int)uVar9 < (int)uVar5) {
        uVar10 = uVar9 + 1;
        if ((int)uVar10 < (int)uVar5) {
          cVar2 = pcVar8[6];
          uVar6 = uVar10;
          pcVar7 = pcVar8;
          while( true ) {
            if (cVar2 == pcVar8[2]) goto LAB_ram_42038f5a;
            uVar6 = uVar6 + 1;
            if (uVar5 == uVar6) break;
            cVar2 = pcVar7[10];
            pcVar7 = pcVar7 + 4;
          }
        }
        iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x5cc))();
        if (iVar3 == 0) {
          return 0x42;
        }
        if (((*param_1 != '\0') && ((*(ushort *)(iVar3 + 0xc) & 8) != 0)) &&
           (0x7f < (ushort)(*(short *)(param_1 + uVar9 * 4 + 3) - 1U))) goto LAB_ram_42038f5a;
        pcVar8 = pcVar8 + 4;
        uVar9 = uVar10;
        uVar5 = (uint)(byte)param_1[1];
      }
      if (uVar5 != 0) {
        pcVar8 = param_1 + 2;
        iVar3 = 0;
        do {
          pcVar7 = param_1 + iVar3 * 4;
          iVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x5b4))
                            (*pcVar8,*param_1,*(undefined2 *)(pcVar7 + 3),pcVar8[3],
                             (uint)(byte)pcVar7[4] << 8,pcVar7,*(code **)(_DAT_ram_3fcdfecc + 0x5b4)
                            );
          iVar3 = iVar3 + 1;
          if (iVar4 != 0) {
            return iVar4;
          }
          pcVar8 = pcVar8 + 4;
        } while (iVar3 < (int)(uint)(byte)param_1[1]);
        return 0;
      }
    }
    iVar3 = 0;
  }
  else {
LAB_ram_42038f5a:
    iVar3 = 0x12;
  }
  return iVar3;
}

