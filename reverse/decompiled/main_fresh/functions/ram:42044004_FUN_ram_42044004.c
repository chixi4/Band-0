
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42044004(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  ushort uVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  byte bVar8;
  char cStack_3d;
  undefined1 uStack_3c;
  byte bStack_3b;
  short sStack_3a;
  undefined4 uStack_38;
  int aiStack_34 [4];
  
  pbVar2 = *(byte **)(param_2 + 0x18);
  cStack_3d = '\x7f';
  uStack_38 = 0;
  aiStack_34[0] = 0;
  bStack_3b = 0;
  sStack_3a = 0;
  if (pbVar2 == (byte *)0x0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x110))
              (0x30c,&DAT_ram_3c0f6fa8,0,0,param_5,*(code **)(_DAT_ram_3fcdfecc + 0x110));
  }
  iVar3 = _DAT_ram_3fcdfecc;
  if (*pbVar2 == 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x5018,0);
    (**(code **)(_DAT_ram_3fcdfed0 + 0x544))();
    return;
  }
  uVar1 = *(ushort *)(param_2 + 6);
  if ((uVar1 & 0x20) == 0) {
    *pbVar2 = *pbVar2 & 0xdf;
    uVar6 = *(undefined4 *)(param_2 + 0x1c);
    uVar5 = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(pbVar2 + 0x44) = uVar6;
    pbVar2[0x48] = (byte)uVar5;
    *(undefined4 *)(pbVar2 + 0x40) = uVar6;
  }
  if ((uVar1 & 0x80) == 0) {
    (**(code **)(iVar3 + 0x9fc))(0x5017);
    bVar7 = *pbVar2;
    goto LAB_ram_42044160;
  }
  *(undefined2 *)(pbVar2 + 0x7a) = *(undefined2 *)(pbVar2 + 0x38);
  if ((*pbVar2 & 0x20) != 0) {
    (**(code **)(iVar3 + 0x9fc))(0x5015);
    if (*(int *)(pbVar2 + 0x6c) == 0) {
      bVar7 = *pbVar2;
    }
    else {
      (**(code **)(_DAT_ram_3fcdfecc + 0x110))(0x334,&DAT_ram_3c0f6fa8,0,0);
      bVar7 = *pbVar2;
    }
    goto LAB_ram_42044160;
  }
  iVar3 = (**(code **)(iVar3 + 0x698))
                    (param_1,&uStack_38,&cStack_3d,aiStack_34,&uStack_3c,&bStack_3b,&sStack_3a,
                     *(code **)(iVar3 + 0x698));
  if (iVar3 < 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x5014,iVar3);
    bVar7 = *pbVar2;
    goto LAB_ram_42044160;
  }
  bVar7 = 0;
  iVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x770))(0xf);
  if (iVar4 != 0) {
    bVar7 = (*pbVar2 >> 3 ^ 1) & 1;
  }
  uVar1 = *(ushort *)(param_2 + 6);
  if ((aiStack_34[0] != 0) &&
     (iVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x638))(pbVar2,aiStack_34[0],uStack_3c), iVar4 == 0))
  {
    (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x5016,uStack_3c);
    bVar7 = *pbVar2;
    goto LAB_ram_42044160;
  }
  bVar8 = *pbVar2 & 2;
  if ((*pbVar2 & 2) != 0) {
    bVar8 = 1;
    (**(code **)(_DAT_ram_3fcdfecc + 0x64c))(pbVar2);
  }
  if (bVar7 != 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x62c))(param_1);
    if ((char)bStack_3b < '\0') {
      bStack_3b = bStack_3b & 0xf;
      bVar7 = *pbVar2;
      if (pbVar2[4] != bStack_3b) goto LAB_ram_42044160;
      if (*(short *)(pbVar2 + 2) == sStack_3a) {
        if (((char)bVar7 < '\0') && (bVar8 == 0)) goto LAB_ram_42044134;
      }
      else {
        *(short *)(pbVar2 + 2) = sStack_3a;
      }
    }
    (**(code **)(_DAT_ram_3fcdfecc + 0x6bc))
              (pbVar2,param_1,(int)*(char *)(param_2 + 2),(int)cStack_3d,iVar3,uStack_38,
               (uVar1 & 0x10) != 0,*(code **)(_DAT_ram_3fcdfecc + 0x6bc));
  }
LAB_ram_42044134:
  if ((uVar1 & 0x10) != 0) {
    (**(code **)(_DAT_ram_3fcdfed0 + 0x544))();
    return;
  }
  bVar7 = *pbVar2;
LAB_ram_42044160:
  iVar3 = _DAT_ram_3fcdfed0;
  if ((bVar7 & 0x20) == 0) {
    *pbVar2 = bVar7 | 0x20;
  }
  (**(code **)(iVar3 + 0x290))(pbVar2);
  return;
}

