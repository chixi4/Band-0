
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420419ca(undefined2 *param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ushort auStack_22 [3];
  
  if (param_2 != 6) {
    return 0x12;
  }
  uVar1 = *param_1;
  iVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x388))(uVar1);
  if (iVar4 == 0) {
    uVar6 = 2;
  }
  else {
    uVar3 = param_1[1];
    uVar2 = param_1[1];
    auStack_22[0] = param_1[2];
    iVar5 = (**(code **)(_DAT_ram_3fcdfecc + 0x78))(uVar2);
    if ((iVar5 == 0) || (iVar5 = (**(code **)(_DAT_ram_3fcdfecc + 0x7c))(auStack_22[0]), iVar5 == 0)
       ) {
      uVar6 = 0x12;
    }
    else {
      *(ushort *)(iVar4 + 0x26) = auStack_22[0];
      if ((*(byte *)(iVar4 + 0x55) & 8) == 0) {
        if (0x848 < auStack_22[0]) {
          auStack_22[0] = 0x848;
        }
      }
      else {
        (**(code **)(_DAT_ram_3fcdfecc + 0x890))(auStack_22,0);
      }
      iVar5 = _DAT_ram_3fcdfecc;
      if ((*(ushort *)(iVar4 + 0x1e) != auStack_22[0]) ||
         (uVar6 = 0, *(byte *)(iVar4 + 0x13) != uVar2)) {
        *(char *)(iVar4 + 0xf) = (char)uVar3;
        *(ushort *)(iVar4 + 0x16) = auStack_22[0];
        (**(code **)(iVar5 + 0x424))(iVar4);
        uVar6 = 0;
      }
    }
  }
  *param_3 = (char)uVar1;
  param_3[1] = (char)((ushort)uVar1 >> 8);
  *param_4 = 2;
  return uVar6;
}

