
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_403a3150(int *param_1,int param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  ushort *puVar7;
  int *piVar8;
  
  if (param_1 == (int *)0x0) {
    return (bool)2;
  }
  puVar7 = (ushort *)param_1[2];
  piVar6 = param_1;
  do {
    piVar8 = piVar6;
    piVar6 = (int *)piVar8[3];
  } while ((int *)piVar8[3] != (int *)0x0);
  uVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0xa84))(piVar8);
  uVar3 = param_3;
  if (uVar4 != 0) {
    uVar2 = param_3;
    if ((int)uVar4 < (int)param_3) {
      uVar2 = uVar4;
    }
    FUN_ram_4039c11e(*piVar8 + (uint)*(ushort *)((int)piVar8 + 6),param_2,uVar2);
    param_2 = param_2 + uVar2;
    uVar3 = param_3 - uVar2;
    *(short *)((int)piVar8 + 6) = (short)uVar2 + *(short *)((int)piVar8 + 6);
  }
  do {
    if ((int)uVar3 < 1) {
      if (7 < *(byte *)((int)param_1 + 5)) {
        *(short *)(param_1 + 4) = ((short)param_3 + (short)param_1[4]) - (short)uVar3;
      }
LAB_ram_403a3242:
      return uVar3 != 0;
    }
    iVar5 = (**(code **)(_DAT_ram_3fcdfecc + 0xb58))(puVar7);
    if (((iVar5 != 0) &&
        (puVar7 = (ushort *)(**(code **)(_DAT_ram_3fcdfecc + 0x944))(uVar3 & 0xffff),
        puVar7 == (ushort *)0x0)) ||
       (piVar6 = (int *)(**(code **)(_DAT_ram_3fcdfecc + 0x908))(puVar7,0), piVar6 == (int *)0x0)) {
      if (*(byte *)((int)param_1 + 5) < 8) {
        return true;
      }
      *(short *)(param_1 + 4) = ((short)param_3 + (short)param_1[4]) - (short)uVar3;
      goto LAB_ram_403a3242;
    }
    uVar4 = (uint)*puVar7;
    if ((int)uVar3 < (int)(uint)*puVar7) {
      uVar4 = uVar3;
    }
    *(short *)((int)piVar6 + 6) = (short)uVar4;
    FUN_ram_4039c11e(*piVar6,param_2);
    uVar1 = *(ushort *)((int)piVar6 + 6);
    piVar8[3] = (int)piVar6;
    uVar3 = uVar3 - uVar1;
    param_2 = param_2 + (uint)uVar1;
    piVar8 = piVar6;
  } while( true );
}

